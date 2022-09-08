import ensurepip

tmp = ensurepip._run_pip


def _run_pip(args, additional_paths=None):
    tmp(args + ["--no-binary"], additional_paths)


ensurepip._run_pip = _run_pip

ensurepip.bootstrap(root="/dummy", altinstall=True)
