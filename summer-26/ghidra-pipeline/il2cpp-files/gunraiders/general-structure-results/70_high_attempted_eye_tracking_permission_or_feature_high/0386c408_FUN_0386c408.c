/*
FUNCTION_NAME: FUN_0386c408
ENTRY_POINT: 0386c408
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_0386c408(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((DAT_045393a6 & 1) == 0) {
    FUN_01c5d288(Method_OVREyeGaze_OnPermissionGranted__);
    DAT_045393a6 = 1;
  }
  FUN_03313b6c(param_1,0);
  *(long *)(param_1 + 0x20) = param_2;
  puVar1 = Method_OVREyeGaze_OnPermissionGranted__;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
    uVar2 = FUN_01c5d2fc(*(undefined8 *)puVar1,0x40);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


