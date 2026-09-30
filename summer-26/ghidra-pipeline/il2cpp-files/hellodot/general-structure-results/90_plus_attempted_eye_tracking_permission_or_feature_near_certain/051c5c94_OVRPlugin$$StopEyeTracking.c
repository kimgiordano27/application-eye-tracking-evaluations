/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 051c5c94
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(void)

{
  long *plVar1;
  long lVar2;
  undefined8 *unaff_x21;
  
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_04812264(&stack0x00000020,*unaff_x21);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(lVar2);
  }
  return;
}


