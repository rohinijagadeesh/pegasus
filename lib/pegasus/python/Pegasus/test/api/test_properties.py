import os
import pytest

from tempfile import TemporaryFile

from Pegasus.api.properties import Properties

@pytest.fixture(scope="function")
def props():
    return Properties()

class TestProperties:
    def test_ls(self, capsys, props):
        try:
            Properties.ls("pegasus.pmc")
            captured = capsys.readouterr().out
            assert captured == "pegasus.pmc_priority\npegasus.pmc_request_cpus\npegasus.pmc_request_memory\npegasus.pmc_task_arguments\n"

            Properties.ls()
            Properties.ls("nothing")
            props.ls()
        except:
            pytest.raises("should not have failed")

    def test_write_str_filename(self, props):
        filename = "props"
        props["a"] = "b"
        props["c"] = "d"
        props.write(filename)

        with open(filename, "r") as f:
            assert f.read() == "a = b\nc = d\n"
        
        os.remove(filename)

    def test_write_file(self, props):
        with TemporaryFile(mode="w+") as f:
            props["a"] = "b"
            props.write(f)
            f.seek(0)
            assert f.read() == "a = b\n"

    def test_write_invalid_file(self, props):
        with pytest.raises(TypeError) as e:
            props.write(123)
        
        assert "invalid file: 123" in str(e)