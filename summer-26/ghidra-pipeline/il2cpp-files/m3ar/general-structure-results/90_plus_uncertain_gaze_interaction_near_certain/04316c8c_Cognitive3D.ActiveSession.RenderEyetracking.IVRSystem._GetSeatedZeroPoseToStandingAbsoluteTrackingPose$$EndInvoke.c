/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 04316c8c
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__EndInvoke
               (long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0xe00) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f658d0);
    *(undefined1 *)(unaff_x20 + 0xe00) = 1;
  }
  puVar1 = PTR_DAT_08f658d0;
                    /* try { // try from 04316cb0 to 04416cb3 has its CatchHandler @ 04316fb4 */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 04316cb8 to 04416cc3 has its CatchHandler @ 04316f74 */
    FUN_04340df4(*(long *)(param_1 + 0x20),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_0852c6c4(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


