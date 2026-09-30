/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 01f88200
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_0124bba8();
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027b5030);
  FUN_01f68e18(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c16a0);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar1,uVar2);
}


