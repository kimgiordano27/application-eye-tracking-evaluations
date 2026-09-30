/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 03cb5420
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit(undefined8 param_1)

{
  long lVar1;
  undefined8 in_x4;
  long unaff_x19;
  void *unaff_x20;
  uint unaff_w21;
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb53bc with catch @ 03cb5420
                       try { // try from 03cb5420 to 03db5437 has its CatchHandler @ 03cb5370 */
  FUN_050f7d68(param_1,unaff_w21,param_1,unaff_w21 + 1,in_x4,0);
  lVar1 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 03cb5438 to 03db544f has its CatchHandler @ 03cb54c4 */
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (unaff_w21 < *(uint *)(lVar1 + 0x18)) {
                    /* try { // try from 03cb5450 to 03db54b3 has its CatchHandler @ 03cb5370 */
    memmove((void *)(lVar1 + (long)(int)unaff_w21 * 0x48 + 0x20),unaff_x20,0x48);
    *(ulong *)(unaff_x19 + 0x18) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


