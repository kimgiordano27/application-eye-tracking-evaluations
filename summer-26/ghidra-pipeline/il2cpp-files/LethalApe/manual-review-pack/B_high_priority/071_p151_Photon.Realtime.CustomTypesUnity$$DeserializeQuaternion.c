/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeQuaternion
ENTRY_POINT: 016f373c
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


void Photon_Realtime_CustomTypesUnity__DeserializeQuaternion
               (ulong param_1,long *param_2,int param_3,uint param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long unaff_x23;
  long *plVar12;
  
                    /* catch() { ... } // from try @ 016f33b8 with catch @ 016f373c */
                    /* catch() { ... } // from try @ 016f337c with catch @ 016f3740 */
                    /* catch() { ... } // from try @ 016f3370 with catch @ 016f3744 */
                    /* catch() { ... } // from try @ 016f3450 with catch @ 016f3748 */
                    /* catch() { ... } // from try @ 016f3334 with catch @ 016f374c */
  if ((param_1 & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02bd1578);
                    /* try { // try from 016f3764 to 017f377b has its CatchHandler @ 016f37d8 */
    thunk_FUN_009efa0c(PTR_DAT_02bcb4e8);
    thunk_FUN_009efa0c(PTR_DAT_02c04c28);
    *(undefined1 *)(unaff_x23 + 0xf97) = 1;
  }
                    /* try { // try from 016f377c to 017f37c7 has its CatchHandler @ 016f2da0 */
  if (((int)param_4 < 0) || (param_3 < 0)) {
    puVar1 = PTR_DAT_02c04040;
    if (-1 < param_3) {
      puVar1 = PTR_DAT_02bbd8a8;
    }
    uVar11 = thunk_FUN_009efa0c(puVar1);
    thunk_FUN_009efa0c(PTR_DAT_02c0c2e8);
    uVar5 = thunk_FUN_00a05c70();
    FUN_008117e8();
    uVar4 = thunk_FUN_009efa0c(PTR_DAT_02bf8bc8);
    FUN_01685c00(uVar5,uVar11,uVar4,0);
    uVar11 = thunk_FUN_009efa0c(PTR_DAT_02bfb478);
                    /* WARNING: Subroutine does not return */
    FUN_00a190b8(uVar5,uVar11);
  }
  plVar12 = (long *)param_2[5];
  if (plVar12 != (long *)0x0) {
    lVar6 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_02bd1578) {
                    /* catch() { ... } // from try @ 016f3764 with catch @ 016f37d8
                       catch() { ... } // from try @ 016f37c8 with catch @ 016f37d8 */
                    /* try { // try from 016f37dc to 017f37df has its CatchHandler @ 016f37e8 */
                    /* try { // try from 016f37e0 to 017f37eb has its CatchHandler @ 016f2da0 */
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_016f37e4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 016f37c8 to 017f37d7 has its CatchHandler @ 016f37d8 */
    puVar3 = (undefined8 *)FUN_0099eb60(plVar12,*(long *)PTR_DAT_02bd1578,1);
LAB_016f37e4:
                    /* catch() { ... } // from try @ 016f37dc with catch @ 016f37e8 */
    iVar2 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    if (iVar2 - param_3 < (int)param_4) {
      thunk_FUN_009efa0c(PTR_DAT_02bfe018);
      uVar11 = thunk_FUN_00a05c70();
      FUN_008117e8();
      uVar5 = thunk_FUN_009efa0c(PTR_DAT_02bca180);
      FUN_01689038(uVar11,uVar5,0);
      uVar5 = thunk_FUN_009efa0c(PTR_DAT_02bfb478);
                    /* WARNING: Subroutine does not return */
      FUN_00a190b8(uVar11,uVar5);
    }
    lVar6 = FUN_00a19040(*(undefined8 *)PTR_DAT_02c04c28,param_4);
    (**(code **)(*param_2 + 0x378))
              (param_2,param_3,lVar6,0,param_4,*(undefined8 *)(*param_2 + 0x380));
    FUN_0174243c(lVar6,0,param_4,param_5,0);
    puVar1 = PTR_DAT_02bcb4e8;
    if (0 < (int)param_4) {
      if (lVar6 == 0) goto LAB_016f3920;
      uVar8 = 0;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00a190f8();
        }
        plVar12 = (long *)param_2[5];
        if (plVar12 == (long *)0x0) goto LAB_016f3920;
        lVar7 = *plVar12;
        uVar11 = *(undefined8 *)(lVar6 + uVar8 * 8 + 0x20);
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_016f38dc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_0099eb60(plVar12,*(long *)puVar1,1);
LAB_016f38dc:
        (*(code *)*puVar3)(plVar12,(int)uVar8 + param_3,uVar11,puVar3[1]);
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_4);
    }
    *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
    return;
  }
LAB_016f3920:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


