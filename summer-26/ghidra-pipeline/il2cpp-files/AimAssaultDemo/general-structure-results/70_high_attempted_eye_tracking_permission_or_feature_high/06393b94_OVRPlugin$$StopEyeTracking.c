/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 06393b94
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_031ae340(param_1);
  uVar1 = FUN_0619e108(&stack0x0000000c,0);
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6620);
  uVar1 = System_Convert__ToInt32(uVar2,uVar1,0);
  thunk_FUN_037a15ac(PTR_DAT_07d967c8);
  uVar2 = thunk_FUN_037788cc();
  FUN_062d6d20(uVar2,uVar1,0);
  uVar1 = thunk_FUN_037a15ac(PTR_DAT_07db6638);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,uVar1);
}


