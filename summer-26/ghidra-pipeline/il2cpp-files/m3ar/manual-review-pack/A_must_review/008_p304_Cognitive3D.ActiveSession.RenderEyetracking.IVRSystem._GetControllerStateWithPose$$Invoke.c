/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerStateWithPose$$Invoke
ENTRY_POINT: 04318aa0
PROGRAM: m3ar-libil2cpp.so
SCORE: 173
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerStateWithPose__Invoke
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  do {
    lVar1 = FUN_08584ab0(param_1,0);
    if (lVar1 == 0) break;
    FUN_08588638(lVar1,0,0);
    unaff_x21 = unaff_x21 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)(uint)unaff_x21) {
      FUN_0858a11c(*(undefined4 *)(unaff_x19 + 0x28));
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    param_1 = *(long *)(unaff_x22 + unaff_x21 * 8);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


