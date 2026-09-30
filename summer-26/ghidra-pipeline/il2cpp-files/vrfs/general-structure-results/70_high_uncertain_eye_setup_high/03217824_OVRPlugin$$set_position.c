/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 03217824
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long unaff_x20;
  long unaff_x21;
  short unaff_w22;
  long *unaff_x23;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0xf08));
                    /* try { // try from 03217830 to 033178a7 has its CatchHandler @ 032178a8 */
  *(undefined1 *)(unaff_x21 + 0x536) = 1;
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_02524ea0();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_032172bc((int)unaff_w22,uVar1,uVar2);
  return;
}


