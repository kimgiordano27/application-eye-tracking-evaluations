/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 056724f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  
  do {
    FUN_04df85f0();
    unaff_x24 = unaff_x24 + 1;
    if (unaff_x24 == 0x40) {
      return;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) {
LAB_0567252c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x22 == 0) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x24) goto LAB_0567252c;
    FUN_0566e684();
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


