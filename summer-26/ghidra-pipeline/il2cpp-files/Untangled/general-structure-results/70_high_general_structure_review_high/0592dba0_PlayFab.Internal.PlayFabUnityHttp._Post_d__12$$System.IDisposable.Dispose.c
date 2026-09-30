/*
FUNCTION_NAME: PlayFab.Internal.PlayFabUnityHttp.<Post>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 0592dba0
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void PlayFab_Internal_PlayFabUnityHttp_<Post>d__12__System_IDisposable_Dispose
               (ulong param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long in_x9;
  uint uVar7;
  uint uVar8;
  int *in_x10;
  int in_w11;
  uint uVar9;
  ulong in_x12;
  long lVar10;
  uint in_w13;
  ulong uVar11;
  uint in_w14;
  ulong uVar12;
  int in_w15;
  long unaff_x19;
  long unaff_x20;
  
  if (in_w15 == 0) {
LAB_0592dd74:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  uVar7 = 0;
  uVar9 = (uint)in_x12;
  if (uVar9 != 0) {
    uVar7 = in_w14 / uVar9;
  }
  *(uint *)(param_2 + 0x20) = uVar7;
  *in_x10 = in_w14 - uVar7 * uVar9;
  uVar7 = 1;
  uVar8 = uVar7;
  if (-1 < (int)(in_w13 - 2)) {
    uVar12 = (ulong)(in_w13 - 2);
    lVar10 = (uVar12 << 0x20) + 0x100000000;
    do {
      if (param_1 <= uVar12 + 1) goto LAB_0592dd74;
      puVar6 = (undefined4 *)(in_x9 + (lVar10 >> 0x1e) + 0x20);
      if (param_2 == 0) goto LAB_0592dd78;
      if (*(uint *)(param_2 + 0x18) <= uVar7) goto LAB_0592dd74;
      iVar4 = *(int *)(in_x9 + 0x20 + uVar12 * 4);
      lVar2 = (long)(int)uVar7;
      uVar7 = uVar7 + 1;
      in_w11 = in_w11 + -1;
      iVar5 = 0;
      if (in_x12 != 0) {
        iVar5 = (int)(CONCAT44(*puVar6,iVar4) / in_x12);
      }
      *(int *)(param_2 + lVar2 * 4 + 0x20) = iVar5;
      *puVar6 = 0;
      *(uint *)(in_x9 + 0x20 + uVar12 * 4) = iVar4 - iVar5 * uVar9;
      uVar12 = uVar12 - 1;
      lVar10 = lVar10 + -0x100000000;
      uVar8 = in_w13;
    } while (in_w11 != 0);
  }
  if (unaff_x20 == 0) goto LAB_0592dd78;
  uVar7 = uVar8 - 1;
  *(uint *)(unaff_x20 + 0x18) = uVar8;
  if ((int)uVar7 < 0) {
    uVar8 = 0;
LAB_0592dca0:
    lVar10 = *(long *)(unaff_x20 + 0x10);
    if (lVar10 == 0) goto LAB_0592dd78;
    uVar7 = *(uint *)(lVar10 + 0x18);
    puVar6 = (undefined4 *)(lVar10 + (long)(int)uVar8 * 4 + 0x20);
    do {
      if (uVar7 <= uVar8) goto LAB_0592dd74;
      uVar8 = uVar8 + 1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    } while (uVar8 != 0x46);
  }
  else {
    if (param_2 == 0) goto LAB_0592dd78;
    lVar10 = *(long *)(unaff_x20 + 0x10);
    uVar3 = *(uint *)(param_2 + 0x18);
    uVar9 = 0;
    do {
      if (uVar3 <= uVar7) goto LAB_0592dd74;
      if (lVar10 == 0) goto LAB_0592dd78;
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0592dd74;
      uVar12 = (ulong)uVar7;
      uVar7 = uVar7 - 1;
      lVar2 = (long)(int)uVar9;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(lVar10 + lVar2 * 4 + 0x20) = *(undefined4 *)(param_2 + uVar12 * 4 + 0x20);
    } while (uVar7 != 0xffffffff);
    if ((int)uVar8 < 0x46) goto LAB_0592dca0;
  }
  uVar7 = *(uint *)(unaff_x20 + 0x18);
  if (1 < (int)uVar7) {
    lVar10 = *(long *)(unaff_x20 + 0x10);
    if (lVar10 == 0) {
LAB_0592dd78:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar9 = *(uint *)(lVar10 + 0x18);
    uVar12 = (ulong)uVar7;
    do {
      uVar11 = uVar12 - 1;
      if (uVar9 <= uVar11) goto LAB_0592dd74;
      if (*(int *)(lVar10 + 0x1c + uVar12 * 4) != 0) goto LAB_0592dd24;
      *(int *)(unaff_x20 + 0x18) = (int)uVar12 + -1;
      bVar1 = 2 < (long)uVar12;
      uVar12 = uVar11;
    } while (bVar1);
    uVar7 = (uint)uVar11;
  }
  if (uVar7 == 0) {
    *(undefined4 *)(unaff_x20 + 0x18) = 1;
  }
LAB_0592dd24:
  if (1 < (int)*(uint *)(unaff_x19 + 0x18)) {
    uVar12 = (ulong)*(uint *)(unaff_x19 + 0x18);
    do {
      if (param_1 <= uVar12 - 1) goto LAB_0592dd74;
    } while ((*(int *)(in_x9 + 0x1c + uVar12 * 4) == 0) &&
            (*(int *)(unaff_x19 + 0x18) = (int)uVar12 + -1, bVar1 = 2 < (long)uVar12,
            uVar12 = uVar12 - 1, bVar1));
  }
  return;
}


