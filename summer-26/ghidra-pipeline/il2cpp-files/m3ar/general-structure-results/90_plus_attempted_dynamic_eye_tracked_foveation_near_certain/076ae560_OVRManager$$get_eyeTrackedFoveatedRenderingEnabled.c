/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 076ae560
PROGRAM: m3ar-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 *unaff_x19;
  undefined4 uVar2;
  
  *unaff_x19 = param_1;
  unaff_x19[1] = param_2;
  unaff_x19[2] = param_3;
  lVar1 = FUN_085849e0();
  if (lVar1 != 0) {
    uVar2 = FUN_08596a20(lVar1,0);
    unaff_x19[3] = uVar2;
    unaff_x19[4] = param_2;
    unaff_x19[5] = param_3;
    unaff_x19[6] = param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


