/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 074779d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long unaff_x19;
  undefined4 uVar1;
  
  if (param_4 != 0) {
    uVar1 = FUN_08a5de1c(param_4,0);
    *(undefined4 *)(unaff_x19 + 100) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x68) = param_2;
    *(undefined4 *)(unaff_x19 + 0x6c) = param_3;
    FUN_073a32e4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


