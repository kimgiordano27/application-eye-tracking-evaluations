/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03156064
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  
  uVar1 = thunk_FUN_01afa70c();
  FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80408,uVar1);
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x558))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


