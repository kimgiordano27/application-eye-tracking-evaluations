/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 0694d790
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__BeginInvoke
               (undefined4 param_1,undefined4 param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  int unaff_w19;
  long unaff_x20;
  int unaff_w22;
  int iVar6;
  int unaff_w23;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  while( true ) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar1 == 0) break;
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)uVar3 * (long)unaff_w23;
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar1 + 0x20) = param_1;
      *(undefined4 *)(lVar1 + 0x24) = param_2;
      *(float *)(lVar1 + 0x28) = param_3;
    }
    else {
      FUN_0463ecc8();
    }
    uVar9 = DAT_01650f90;
    if (unaff_w19 == unaff_w22) {
      if (unaff_w19 < 1) goto LAB_0694d920;
      iVar6 = 0;
      goto LAB_0694d804;
    }
    fVar10 = unaff_s9 * (float)unaff_w22 * unaff_s10;
    uVar9 = unaff_s8;
    FUN_071af124(0,0);
    uVar7 = FUN_071af638(0);
    lVar1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar1 == 0) break;
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)uVar3 * (long)unaff_w23;
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar1 + 0x20) = uVar7;
      *(undefined4 *)(lVar1 + 0x24) = uVar9;
      *(float *)(lVar1 + 0x28) = fVar10;
    }
    else {
      FUN_0463ecc8();
    }
    unaff_w22 = unaff_w22 + 1;
    param_3 = unaff_s9 * (float)unaff_w22 * unaff_s10;
    param_2 = unaff_s8;
    FUN_071af124(0,0);
    param_1 = FUN_071af638(0);
  }
  goto LAB_0694d988;
  while( true ) {
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)uVar3 * 0xc;
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar1 + 0x20) = uVar8;
      *(undefined4 *)(lVar1 + 0x24) = uVar7;
      *(float *)(lVar1 + 0x28) = fVar10;
    }
    else {
      FUN_0463ecc8();
    }
    iVar6 = iVar6 + 1;
    fVar10 = unaff_s9 * (float)iVar6 * unaff_s10;
    uVar7 = uVar9;
    FUN_071af124(0,0);
    uVar8 = FUN_071af638(0);
    lVar1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar1 == 0) goto LAB_0694d988;
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)uVar3 * 0xc;
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar1 + 0x20) = uVar8;
      *(undefined4 *)(lVar1 + 0x24) = uVar7;
      *(float *)(lVar1 + 0x28) = fVar10;
    }
    else {
      FUN_0463ecc8();
    }
    if (unaff_w19 == iVar6) break;
LAB_0694d804:
    fVar10 = unaff_s9 * (float)iVar6 * unaff_s10;
    uVar7 = uVar9;
    FUN_071af124(0,0);
    uVar8 = FUN_071af638(0);
    lVar1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar1 == 0) goto LAB_0694d988;
  }
LAB_0694d920:
  lVar1 = FUN_0464088c();
  if (lVar1 != 0) {
    uVar3 = (uint)*(ulong *)(lVar1 + 0x18);
    if (0 < (int)uVar3) {
      uVar2 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
      uVar4 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      pfVar5 = (float *)(lVar1 + 0x24);
      do {
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        uVar2 = uVar2 - 1;
        uVar4 = uVar4 - 1;
        fVar10 = *pfVar5;
        if (*pfVar5 <= 0.0) {
          fVar10 = 0.0;
        }
        *pfVar5 = fVar10;
        pfVar5 = pfVar5 + 3;
      } while (uVar2 != 0);
    }
    return;
  }
LAB_0694d988:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


