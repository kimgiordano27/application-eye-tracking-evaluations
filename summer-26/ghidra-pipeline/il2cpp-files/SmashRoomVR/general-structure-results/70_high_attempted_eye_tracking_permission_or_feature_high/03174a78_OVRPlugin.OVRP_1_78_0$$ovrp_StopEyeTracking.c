/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 03174a78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  plVar1 = (long *)FUN_03084da8();
  if (plVar1 == (long *)0x0) {
    *unaff_x19 = 0;
  }
  else {
    lVar2 = *(long *)Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__;
    if ((*plVar1 != lVar2) || (*unaff_x19 = (long)plVar1, *plVar1 != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(plVar1);
    }
  }
  thunk_FUN_01b4f09c();
  return;
}


