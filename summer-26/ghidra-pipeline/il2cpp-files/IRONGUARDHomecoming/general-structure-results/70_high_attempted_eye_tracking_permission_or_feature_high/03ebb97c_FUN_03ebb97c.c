/*
FUNCTION_NAME: FUN_03ebb97c
ENTRY_POINT: 03ebb97c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_03ebb97c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = Method_UnityEngine_InputSystem_InputManager_ShouldRunUpdate__;
  if ((DAT_0483ac28 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_ShouldRunUpdate__);
    thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
    DAT_0483ac28 = 1;
  }
  uVar2 = FUN_03ebbb2c(param_1);
  plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_034d50a0(plVar3,uVar2,0);
  if ((plVar3 != (long *)0x0) && (lVar4 = FUN_034d5518(plVar3,0), lVar4 != 0)) {
    FUN_034d3444(lVar4,0);
    uVar2 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
    FUN_034cd3c8(plVar3,uVar2,1,0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x248))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x250));
      (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


