/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05ea47e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1)

{
  ushort uVar1;
  void *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x24;
  long lVar2;
  long lVar3;
  long unaff_x25;
  long unaff_x29;
  
                    /* try { // try from 05ea47f8 to 05fa480f has its CatchHandler @ 05ea48a8 */
  memset(unaff_x19,0,unaff_x24);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
                    /* try { // try from 05ea4810 to 05fa4823 has its CatchHandler @ 05ea4714 */
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
                    /* try { // try from 05ea4824 to 05fa483b has its CatchHandler @ 05ea48a8 */
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x20 + 0x20);
  }
                    /* try { // try from 05ea483c to 05fa4897 has its CatchHandler @ 05ea4714 */
  if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x10);
  }
  memcpy((void *)(param_1 - (unaff_x22 + 0xf & 0x1fffffff0)),unaff_x21,unaff_x22);
  if ((uVar1 & 1) == 0) {
    FUN_040b1acc(lVar3);
  }
  FUN_040775b0();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b300b8();
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


