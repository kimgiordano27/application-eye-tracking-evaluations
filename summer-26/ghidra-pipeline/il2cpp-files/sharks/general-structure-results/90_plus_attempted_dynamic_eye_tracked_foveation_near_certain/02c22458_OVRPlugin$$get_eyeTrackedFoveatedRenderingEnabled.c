/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02c22458
PROGRAM: sharks-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(long param_1,long param_2)

{
  bool in_ZR;
  bool in_CY;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_CY && !in_ZR) {
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x18) == 0) goto LAB_02c224a4;
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x22);
      if (unaff_x21 != 0) {
        FUN_02c24ccc();
        if (*unaff_x20 != 0) {
          *(undefined1 *)(unaff_x19 + 0xb0) = 1;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
LAB_02c224a4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


