/*
FUNCTION_NAME: FUN_06d6ae8c
ENTRY_POINT: 06d6ae8c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;attempted_use
EVIDENCE: strong_eye_source_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_06d6ae8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_AddDevice<TouchscreenGestureInputController>__
  ;
  if ((DAT_076e9c79 & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__);
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__);
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRHMD>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_InputSystem_AddDevice<TouchscreenGestureInputController>__
                      );
    DAT_076e9c79 = 1;
  }
  puVar4 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__;
  puVar3 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRHMD>__;
  puVar2 = Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *(long *)puVar1;
  }
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__;
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_055c629c(uVar6,uVar7,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_05544a78(uVar6,*(undefined8 *)puVar1);
  return;
}


