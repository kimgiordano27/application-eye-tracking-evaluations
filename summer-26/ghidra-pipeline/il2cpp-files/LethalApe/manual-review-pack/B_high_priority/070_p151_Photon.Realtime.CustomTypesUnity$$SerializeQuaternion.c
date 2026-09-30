/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeQuaternion
ENTRY_POINT: 016f3510
PROGRAM: LethalApe-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__SerializeQuaternion(long param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x22;
  long *plVar11;
  
  if ((*(byte *)(unaff_x22 + 0xf96) & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02bd1578);
                    /* try { // try from 016f3538 to 017f367f has its CatchHandler @ 016f2da0 */
    thunk_FUN_009efa0c(PTR_DAT_02bcb4e8);
    *(undefined1 *)(unaff_x22 + 0xf96) = 1;
  }
  if ((param_3 < 0) || (param_2 < 0)) {
    puVar2 = PTR_DAT_02c04040;
    if (-1 < param_2) {
      puVar2 = PTR_DAT_02bbd8a8;
    }
    uVar6 = thunk_FUN_009efa0c(puVar2);
                    /* try { // try from 016f3680 to 017f3683 has its CatchHandler @ 016f3704 */
                    /* try { // try from 016f3684 to 017f3687 has its CatchHandler @ 016f3700 */
                    /* try { // try from 016f3688 to 017f368b has its CatchHandler @ 016f36fc */
                    /* try { // try from 016f368c to 017f368f has its CatchHandler @ 016f36f0 */
    thunk_FUN_009efa0c(PTR_DAT_02c0c2e8);
                    /* try { // try from 016f3690 to 017f3697 has its CatchHandler @ 016f36f8 */
    uVar7 = thunk_FUN_00a05c70();
                    /* try { // try from 016f3698 to 017f36a3 has its CatchHandler @ 016f3708 */
    FUN_008117e8();
                    /* try { // try from 016f36a4 to 017f36a7 has its CatchHandler @ 016f36ec */
    uVar5 = thunk_FUN_009efa0c(PTR_DAT_02bf8bc8);
                    /* try { // try from 016f36a8 to 017f36af has its CatchHandler @ 016f36f4 */
                    /* try { // try from 016f36b0 to 017f36bb has its CatchHandler @ 016f3708 */
    FUN_01685c00(uVar7,uVar6,uVar5,0);
                    /* try { // try from 016f36bc to 017f36c7 has its CatchHandler @ 016f36f4 */
    uVar6 = thunk_FUN_009efa0c(PTR_DAT_02bc5ba8);
                    /* try { // try from 016f36c8 to 017f36cf has its CatchHandler @ 016f2da0 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 016f36d0 to 017f36d3 has its CatchHandler @ 016f36e8 */
    FUN_00a190b8(uVar7,uVar6);
  }
  plVar11 = *(long **)(param_1 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_02bd1578) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_016f35ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0099eb60(plVar11,*(long *)PTR_DAT_02bd1578,1);
LAB_016f35ac:
    iVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    puVar2 = PTR_DAT_02bcb4e8;
    if (iVar3 - param_2 < param_3) {
                    /* try { // try from 016f36d4 to 017f36d7 has its CatchHandler @ 016f36e4 */
                    /* try { // try from 016f36d8 to 017f36db has its CatchHandler @ 016f3714 */
                    /* try { // try from 016f36dc to 017f36df has its CatchHandler @ 016f3710 */
      thunk_FUN_009efa0c(PTR_DAT_02bfe018);
                    /* try { // try from 016f36e0 to 017f36e3 has its CatchHandler @ 016f3724 */
      uVar6 = thunk_FUN_00a05c70();
                    /* catch() { ... } // from try @ 016f36d4 with catch @ 016f36e4
                       try { // try from 016f36e4 to 017f3763 has its CatchHandler @ 016f2da0 */
                    /* catch() { ... } // from try @ 016f36d0 with catch @ 016f36e8 */
      FUN_008117e8();
                    /* catch() { ... } // from try @ 016f36a4 with catch @ 016f36ec */
                    /* catch() { ... } // from try @ 016f368c with catch @ 016f36f0 */
                    /* catch() { ... } // from try @ 016f36a8 with catch @ 016f36f4
                       catch() { ... } // from try @ 016f36bc with catch @ 016f36f4 */
      uVar7 = thunk_FUN_009efa0c(PTR_DAT_02bca180);
                    /* catch() { ... } // from try @ 016f3690 with catch @ 016f36f8 */
                    /* catch() { ... } // from try @ 016f3688 with catch @ 016f36fc */
                    /* catch() { ... } // from try @ 016f3684 with catch @ 016f3700 */
                    /* catch() { ... } // from try @ 016f3680 with catch @ 016f3704 */
      FUN_01689038(uVar6,uVar7,0);
                    /* catch() { ... } // from try @ 016f3698 with catch @ 016f3708
                       catch() { ... } // from try @ 016f36b0 with catch @ 016f3708 */
                    /* catch() { ... } // from try @ 016f34f4 with catch @ 016f370c */
                    /* catch() { ... } // from try @ 016f34e8 with catch @ 016f3710
                       catch() { ... } // from try @ 016f36dc with catch @ 016f3710 */
      uVar7 = thunk_FUN_009efa0c(PTR_DAT_02bc5ba8);
                    /* catch() { ... } // from try @ 016f34dc with catch @ 016f3714
                       catch() { ... } // from try @ 016f36d8 with catch @ 016f3714 */
                    /* catch() { ... } // from try @ 016f3300 with catch @ 016f3718 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 016f32e0 with catch @ 016f371c */
      FUN_00a190b8(uVar6,uVar7);
    }
    if (0 < param_3) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      do {
        plVar11 = *(long **)(param_1 + 0x28);
        if (plVar11 == (long *)0x0) goto LAB_016f3660;
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 10) * 0x10 + 0x138);
              goto LAB_016f3638;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0099eb60(plVar11,*(long *)puVar2,10);
LAB_016f3638:
        (*(code *)*puVar4)(plVar11,param_2,puVar4[1]);
        iVar3 = param_3 + -1;
        bVar1 = 0 < param_3;
        param_3 = iVar3;
      } while (iVar3 != 0 && bVar1);
    }
    return;
  }
LAB_016f3660:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


