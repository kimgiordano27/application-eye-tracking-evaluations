/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02c035c8
PROGRAM: sharks-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__SetEyeTrackedFoveatedRenderingEnabled(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_02c108dc(param_1,0);
  thunk_FUN_01851c08(PTR_DAT_037feb28);
  uVar2 = thunk_FUN_01861bbc();
  FUN_02bb89a0(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01851c08(PTR_DAT_0380ad58);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar1);
}


