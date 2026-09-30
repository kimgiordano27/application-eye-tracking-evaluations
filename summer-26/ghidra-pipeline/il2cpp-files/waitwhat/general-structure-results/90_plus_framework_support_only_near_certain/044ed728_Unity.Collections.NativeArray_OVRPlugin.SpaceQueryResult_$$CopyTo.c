/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 044ed728
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  param_1 = param_1 - (int)unaff_w19;
  while (lVar2 = *(long *)(unaff_x21 + 0x10), lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x20 == 0) break;
                    /* try { // try from 044ed744 to 045ed753 has its CatchHandler @ 044ed838 */
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + unaff_x22 + 0x20),
                       *(undefined8 *)(lVar2 + unaff_x22 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
                    /* try { // try from 044ed760 to 045ed763 has its CatchHandler @ 044ed83c */
    param_1 = param_1 + -1;
                    /* try { // try from 044ed764 to 045ed823 has its CatchHandler @ 044ed354 */
    unaff_x22 = unaff_x22 + 0x10;
    unaff_w19 = unaff_w19 + 1;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


