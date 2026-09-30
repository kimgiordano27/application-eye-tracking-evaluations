/*
FUNCTION_NAME: FUN_0321a400
ENTRY_POINT: 0321a400
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_6
*/


void FUN_0321a400(long param_1,long *param_2,long *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 extraout_s0;
  float fVar13;
  float extraout_s0_00;
  float fVar14;
  uint local_64;
  
                    /* try { // try from 0321a408 to 0331a40f has its CatchHandler @ 0321a494 */
  if ((DAT_03ff4633 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d837f8);
                    /* try { // try from 0321a45c to 0331a463 has its CatchHandler @ 0321a54c */
    thunk_FUN_01ad9084(PTR_DAT_03d837c0);
                    /* try { // try from 0321a46c to 0331a46f has its CatchHandler @ 0321a490 */
    DAT_03ff4633 = 1;
  }
  puVar2 = PTR_DAT_03d837f8;
                    /* try { // try from 0321a474 to 0331a477 has its CatchHandler @ 0321a48c */
                    /* try { // try from 0321a47c to 0331a47f has its CatchHandler @ 0321a488 */
                    /* try { // try from 0321a480 to 0331a4b7 has its CatchHandler @ 0321a1a4 */
                    /* catch() { ... } // from try @ 0321a3dc with catch @ 0321a484 */
  if (1 < *(int *)(param_1 + 0x28) - 3U) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = *(undefined8 *)puVar2;
LAB_0321a588:
    FUN_038f2e04(uVar3,0);
    return;
  }
                    /* catch() { ... } // from try @ 0321a47c with catch @ 0321a488 */
                    /* catch() { ... } // from try @ 0321a474 with catch @ 0321a48c */
                    /* catch() { ... } // from try @ 0321a46c with catch @ 0321a490 */
                    /* catch() { ... } // from try @ 0321a408 with catch @ 0321a494 */
  if ((ulong)*(uint *)(param_2 + 1) != (long)*(int *)(param_1 + 0x20)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = *(undefined8 *)PTR_DAT_03d837c0;
    goto LAB_0321a588;
  }
                    /* catch() { ... } // from try @ 0321a3e8 with catch @ 0321a498 */
  uVar3 = FUN_01b47fd0(*(undefined8 *)
                        Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                       ,*(undefined4 *)(param_1 + 0x14));
  plVar5 = (long *)*param_2;
  if (plVar5 == (long *)0x0) goto LAB_0321a864;
  (**(code **)(*plVar5 + 0x308))
            (plVar5,(long)*(int *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x24) + param_2[2],0,
             *(undefined8 *)(*plVar5 + 0x310));
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) goto LAB_0321a864;
  uVar4 = (**(code **)(*param_2 + 0x318))
                    (param_2,uVar3,0,*(undefined4 *)(param_1 + 0x14),*(undefined8 *)(*param_2 + 800)
                    );
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar6 = 3;
  if (*(int *)(param_1 + 0x28) != 3) {
    iVar6 = 4;
  }
  iVar7 = 2;
  switch(iVar1) {
  case 0x1400:
  case 0x1401:
    iVar7 = 1;
    break;
  case 0x1402:
  case 0x1403:
    break;
  case 0x1404:
    iVar7 = 0;
    local_64 = *(uint *)(param_1 + 0x18) & ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU);
    goto switchD_0321a5f0_default;
  case 0x1405:
    local_64 = *(uint *)(param_1 + 0x18);
    fVar14 = 4.2949673e+09;
    goto LAB_0321a634;
  case 0x1406:
    local_64 = *(uint *)(param_1 + 0x18);
    fVar14 = 3.4028235e+38;
LAB_0321a634:
    if ((int)local_64 < 1) {
      local_64 = iVar6 << 2;
    }
    iVar7 = 4;
    goto switchD_0321a5f0_caseD_1401;
  default:
    iVar7 = 0;
  }
  local_64 = *(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    local_64 = iVar7 * iVar6;
  }
  fVar14 = 255.0;
  switch(iVar1) {
  case 0x1400:
    fVar14 = 127.0;
    break;
  case 0x1401:
    break;
  case 0x1402:
    fVar14 = DAT_00b555ec;
    break;
  case 0x1403:
    fVar14 = DAT_00b5545c;
    break;
  default:
switchD_0321a5f0_default:
    fVar14 = 0.0;
  }
switchD_0321a5f0_caseD_1401:
  if (*(int *)(param_1 + 0x30) < 1) {
    return;
  }
  lVar9 = *param_3;
  if (lVar9 != 0) {
    iVar6 = 0;
    lVar10 = 1;
    do {
      if (iVar1 == 0x1406) {
        uVar12 = FUN_02fda1d4(uVar3,iVar6,0);
        uVar8 = (param_4 + (int)lVar10) - 1;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) {
LAB_0321a888:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar11 = (long)(int)uVar8;
        *(undefined4 *)(lVar9 + lVar11 * 0x10 + 0x20) = uVar12;
        lVar9 = *param_3;
        if (lVar9 == 0) break;
        uVar12 = FUN_02fda1d4(uVar3,iVar7 + iVar6,0);
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0321a888;
        *(undefined4 *)(lVar9 + lVar11 * 0x10 + 0x24) = uVar12;
        lVar9 = *param_3;
        if (lVar9 == 0) break;
        uVar4 = FUN_02fda1d4(uVar3,iVar7 * 2 + iVar6,0);
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0321a888;
        *(undefined4 *)(lVar9 + lVar11 * 0x10 + 0x28) = extraout_s0;
        lVar9 = *param_3;
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0321a888;
        fVar13 = 1.0;
        if (*(int *)(param_1 + 0x28) != 3) {
          uVar4 = FUN_02fda1d4(uVar3,iVar7 * 3 + iVar6,0);
          fVar13 = extraout_s0_00;
        }
      }
      else {
        uVar4 = FUN_032195f4(uVar4,uVar3,iVar6);
        uVar8 = (param_4 + (int)lVar10) - 1;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0321a888;
        lVar11 = (long)(int)uVar8;
        *(float *)(lVar9 + lVar11 * 0x10 + 0x20) = (float)(uVar4 & 0xffffffff) / fVar14;
        lVar9 = *param_3;
        if (lVar9 == 0) break;
        uVar4 = FUN_032195f4(uVar4,uVar3,iVar7 + iVar6,*(undefined4 *)(param_1 + 0x2c));
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0321a888;
        *(float *)(lVar9 + lVar11 * 0x10 + 0x24) = (float)(uVar4 & 0xffffffff) / fVar14;
        lVar9 = *param_3;
        if (lVar9 == 0) break;
        uVar4 = FUN_032195f4(uVar4,uVar3,iVar7 * 2 + iVar6,*(undefined4 *)(param_1 + 0x2c));
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0321a888;
        *(float *)(lVar9 + lVar11 * 0x10 + 0x28) = (float)(uVar4 & 0xffffffff) / fVar14;
        lVar9 = *param_3;
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0321a888;
        fVar13 = 1.0;
        if (*(int *)(param_1 + 0x28) != 3) {
          uVar4 = FUN_032195f4(uVar4,uVar3,iVar7 * 3 + iVar6,*(undefined4 *)(param_1 + 0x2c));
          fVar13 = (float)(uVar4 & 0xffffffff) / fVar14;
        }
      }
      *(float *)(lVar9 + lVar11 * 0x10 + 0x2c) = fVar13;
      if (*(int *)(param_1 + 0x30) <= lVar10) {
        return;
      }
      lVar9 = *param_3;
      iVar1 = *(int *)(param_1 + 0x2c);
      lVar10 = lVar10 + 1;
      iVar6 = iVar6 + local_64;
    } while (lVar9 != 0);
  }
LAB_0321a864:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


