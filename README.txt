1. VS Code에서 input 관련 가이드:
F1->Open Settings(JSON)에 들어가 다음 코드를 붙여넣은 뒤 자신이 원하는 옵션으로 주석 수정
(_input.txt를 통한 입력 또는 터미널에 직접 입력 중 선택)
code:
    "code-runner.executorMap": { 
        //"c": "cd $dirWithoutTrailingSlash && gcc $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe < _input.txt", 
        //"cpp": "cd $dirWithoutTrailingSlash && g++ $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe < _input.txt", 
        // input.txt로 입력. 
        
        "c": "cd $dirWithoutTrailingSlash && gcc $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe", 
        "cpp": "cd $dirWithoutTrailingSlash && g++ $fileName -g -o $fileNameWithoutExt && ./$fileNameWithoutExt.exe", 
        // 직접 실행후 입력할때.
    }, 
    "code-runner.runInTerminal": true,  