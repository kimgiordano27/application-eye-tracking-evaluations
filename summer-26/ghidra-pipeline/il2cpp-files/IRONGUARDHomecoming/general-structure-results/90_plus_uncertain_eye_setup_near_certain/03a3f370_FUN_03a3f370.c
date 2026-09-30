/*
FUNCTION_NAME: FUN_03a3f370
ENTRY_POINT: 03a3f370
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03a3f4e0) */
/* WARNING: Removing unreachable block (ram,0x03a3f508) */

long FUN_03a3f370(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  
                    /* try { // try from 03a3f380 to 03b3f387 has its CatchHandler @ 03a3f620 */
                    /* try { // try from 03a3f38c to 03b3f393 has its CatchHandler @ 03a3f61c */
  if ((DAT_04838c41 & 1) == 0) {
                    /* try { // try from 03a3f398 to 03b3f3a3 has its CatchHandler @ 03a3f618 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 03a3f3a4 to 03b3f3cf has its CatchHandler @ 03a3e9c4 */
    thunk_FUN_01efb3a4(StringLiteral_7169);
                    /* catch() { ... } // from try @ 03a3ef3c with catch @ 03a3f3a8 */
                    /* catch() { ... } // from try @ 03a3f2b0 with catch @ 03a3f3ac */
                    /* catch() { ... } // from try @ 03a3ef00 with catch @ 03a3f3b0 */
    thunk_FUN_01efb3a4(StringLiteral_5859);
    DAT_04838c41 = 1;
  }
  plVar10 = (long *)(param_1 + 0x28);
  lVar8 = *plVar10;
  if (lVar8 == 0) {
                    /* try { // try from 03a3f3d0 to 03b3f3d3 has its CatchHandler @ 03a3f658 */
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_7169);
    FUN_0353e50c(uVar3,0);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    thunk_FUN_01f51358(plVar10,uVar3);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar8 = FUN_03a3c038();
      puVar2 = StringLiteral_5859;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 03a3f418 to 03b3f443 has its CatchHandler @ 03a3f680 */
      while (uVar4 = FUN_03a3c444(lVar8),
            puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
            (uVar4 & 1) != 0) {
        uVar3 = FUN_03a3c16c(lVar8);
        lVar11 = *plVar10;
        uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_03450bd0(uVar5,uVar3,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03a3f500 to 03b3f503 has its CatchHandler @ 03a3f6e4 */
          FUN_01f08a3c();
        }
                    /* try { // try from 03a3f448 to 03b3f44f has its CatchHandler @ 03a3f67c */
        FUN_03a38568(lVar11,uVar5);
                    /* try { // try from 03a3f454 to 03b3f473 has its CatchHandler @ 03a3f684 */
      }
      plVar6 = (long *)thunk_FUN_01f116d0(lVar8,*(undefined8 *)
                                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
                    /* try { // try from 03a3f498 to 03b3f49b has its CatchHandler @ 03a3f744 */
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03a3f4c8;
            }
                    /* try { // try from 03a3f4a0 to 03b3f4a3 has its CatchHandler @ 03a3f73c */
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
                    /* try { // try from 03a3f4a8 to 03b3f4ab has its CatchHandler @ 03a3f720 */
          } while (uVar4 != 0);
        }
                    /* try { // try from 03a3f4b0 to 03b3f4b3 has its CatchHandler @ 03a3f71c */
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
                    /* try { // try from 03a3f4b8 to 03b3f4c3 has its CatchHandler @ 03a3f72c */
LAB_03a3f4c8:
                    /* try { // try from 03a3f4c8 to 03b3f4cb has its CatchHandler @ 03a3f718 */
                    /* try { // try from 03a3f4d0 to 03b3f4d3 has its CatchHandler @ 03a3f714 */
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
    }
    lVar8 = *plVar10;
  }
                    /* try { // try from 03a3f4e8 to 03b3f4eb has its CatchHandler @ 03a3f6f4 */
                    /* try { // try from 03a3f4f0 to 03b3f4f3 has its CatchHandler @ 03a3f6f0 */
  return lVar8;
}


