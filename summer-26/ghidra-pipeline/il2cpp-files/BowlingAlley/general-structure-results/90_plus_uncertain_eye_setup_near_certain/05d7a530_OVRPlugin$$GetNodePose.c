/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 05d7a530
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetNodePose(void)

{
  long lVar1;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x7da) = 1;
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar1 = *unaff_x20;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar1 != 0) {
                    /* try { // try from 05d7a558 to 05e7a583 has its CatchHandler @ 05d7a830 */
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined4 *)(lVar1 + (long)(int)unaff_w19 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


