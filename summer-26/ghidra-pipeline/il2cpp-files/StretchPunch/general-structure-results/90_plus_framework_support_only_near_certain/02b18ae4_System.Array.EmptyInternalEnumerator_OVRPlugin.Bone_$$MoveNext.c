/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$MoveNext
ENTRY_POINT: 02b18ae4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02b18bac) */
/* WARNING: Removing unreachable block (ram,0x02b18be0) */
/* WARNING: Removing unreachable block (ram,0x02b18bec) */
/* WARNING: Removing unreachable block (ram,0x02b18c0c) */
/* WARNING: Removing unreachable block (ram,0x02b18bf0) */
/* WARNING: Removing unreachable block (ram,0x02b18c00) */
/* WARNING: Removing unreachable block (ram,0x02b18c10) */
/* WARNING: Removing unreachable block (ram,0x02b18c2c) */
/* WARNING: Removing unreachable block (ram,0x02b18c38) */
/* WARNING: Removing unreachable block (ram,0x02b18c5c) */
/* WARNING: Removing unreachable block (ram,0x02b18c3c) */
/* WARNING: Removing unreachable block (ram,0x02b18c50) */
/* WARNING: Removing unreachable block (ram,0x02b18c60) */
/* WARNING: Removing unreachable block (ram,0x02b18d90) */
/* WARNING: Removing unreachable block (ram,0x02b18c6c) */
/* WARNING: Removing unreachable block (ram,0x02b18ca0) */
/* WARNING: Removing unreachable block (ram,0x02b18ca4) */
/* WARNING: Removing unreachable block (ram,0x02b18b34) */
/* WARNING: Removing unreachable block (ram,0x02b18b50) */
/* WARNING: Removing unreachable block (ram,0x02b18b94) */
/* WARNING: Removing unreachable block (ram,0x02b18b9c) */
/* WARNING: Removing unreachable block (ram,0x02b18cb4) */
/* WARNING: Removing unreachable block (ram,0x02b18ce8) */
/* WARNING: Removing unreachable block (ram,0x02b18cf4) */
/* WARNING: Removing unreachable block (ram,0x02b18df8) */
/* WARNING: Removing unreachable block (ram,0x02b18cf8) */
/* WARNING: Removing unreachable block (ram,0x02b18e08) */
/* WARNING: Removing unreachable block (ram,0x02b18d08) */
/* WARNING: Removing unreachable block (ram,0x02b18d18) */
/* WARNING: Removing unreachable block (ram,0x02b18d20) */
/* WARNING: Removing unreachable block (ram,0x02b18d2c) */
/* WARNING: Removing unreachable block (ram,0x02b18d34) */
/* WARNING: Removing unreachable block (ram,0x02b18d44) */
/* WARNING: Removing unreachable block (ram,0x02b18df0) */
/* WARNING: Removing unreachable block (ram,0x02b18d4c) */
/* WARNING: Removing unreachable block (ram,0x02b18d8c) */
/* WARNING: Removing unreachable block (ram,0x02b18da0) */
/* WARNING: Removing unreachable block (ram,0x02b18db0) */
/* WARNING: Removing unreachable block (ram,0x02b18db4) */
/* WARNING: Removing unreachable block (ram,0x02b18dc0) */

void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__MoveNext(long param_1)

{
  long lVar1;
  long unaff_x21;
  long *unaff_x26;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x850));
  *(undefined1 *)(unaff_x21 + 0xdb5) = 1;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar1 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  FUN_029bfb9c();
  return;
}


