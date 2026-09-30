/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05ea477c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (void *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  void *unaff_x21;
  ulong __n;
  long unaff_x25;
  long unaff_x29;
  
                    /* try { // try from 05ea477c to 05fa478b has its CatchHandler @ 05ea47dc */
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x25 + 0x28);
  lVar4 = *(long *)(param_3 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  uVar2 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
                    /* try { // try from 05ea47a8 to 05fa47bf has its CatchHandler @ 05ea47e0 */
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x20 + 0x20);
  }
                    /* try { // try from 05ea47c0 to 05fa47f7 has its CatchHandler @ 05ea4714 */
  uVar1 = *(uint *)(**(long **)(lVar4 + 0xc0) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ea4750 with catch @ 05ea47d8
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ea477c with catch @ 05ea47dc
                        */
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0xfc);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ea47a8 with catch @ 05ea47e0
                        */
  memset(param_1,0,(ulong)uVar1);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x20 + 0x20);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),unaff_x21,__n);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  FUN_040775b0(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x20,
               &stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__n);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  FUN_03b300b8(param_1,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80),1);
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


