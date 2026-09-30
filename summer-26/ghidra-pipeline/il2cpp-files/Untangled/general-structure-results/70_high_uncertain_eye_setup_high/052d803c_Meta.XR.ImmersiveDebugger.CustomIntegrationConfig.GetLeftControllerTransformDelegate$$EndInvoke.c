/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetLeftControllerTransformDelegate$$EndInvoke
ENTRY_POINT: 052d803c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate__EndInvoke
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float unaff_s8;
  float fVar20;
  float unaff_s9;
  float fVar21;
  float unaff_s10;
  float unaff_s11;
  float fVar22;
  float fStack0000000000000024;
  undefined4 uStack000000000000002c;
  ulong uVar14;
  ulong uVar18;
  
  fVar7 = (float)FUN_066bd6e0(0);
  fVar15 = param_2;
  fVar20 = param_3;
  uStack000000000000002c = FUN_052d0164();
  fVar11 = fVar15;
  fStack0000000000000024 = fVar20;
  lVar4 = FUN_066c67b0();
  if (lVar4 == 0) goto LAB_052d8354;
  uVar8 = FUN_066d4d38(lVar4,0);
  lVar4 = FUN_066c67b0();
  if (lVar4 == 0) goto LAB_052d8354;
  FUN_066d4cbc(lVar4,0);
  if (*(int *)(*(long *)PTR_DAT_06d08948 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_052d9474(uStack000000000000002c,fVar15,fStack0000000000000024,uVar8,fVar11,fVar20);
  lVar4 = FUN_066c67b0();
  if (lVar4 == 0) goto LAB_052d8354;
  fVar11 = unaff_s8 * fVar7 + unaff_s11 * param_2 + unaff_s10 * param_4;
  uVar14 = (ulong)(uint)fVar11;
  fVar15 = unaff_s9 * param_2 + unaff_s11 * param_3 + unaff_s8 * param_4;
  uVar18 = (ulong)(uint)fVar15;
  fVar22 = (unaff_s10 * param_3 + unaff_s11 * fVar7 + unaff_s9 * param_4) - unaff_s8 * param_2;
  fVar11 = fVar11 - unaff_s9 * param_3;
  fVar15 = fVar15 - unaff_s10 * fVar7;
  fVar20 = ((unaff_s11 * param_4 - unaff_s9 * fVar7) - unaff_s10 * param_2) - unaff_s8 * param_3;
  if ((uVar5 & 1) == 0) {
    uVar10 = FUN_066d4d38(lVar4,0);
    uVar10 = FUN_066bde7c(fVar22,fVar11,fVar15,fVar20,uVar10,uVar14,uVar18,0);
    fVar20 = (float)FUN_052d021c();
  }
  else {
    uVar10 = FUN_066d4cbc();
    fVar20 = (float)FUN_066bde7c(fVar22,fVar11,fVar15,fVar20,uVar10,uVar14,uVar18,0);
    uVar10 = FUN_052d021c();
  }
  fVar7 = (float)FUN_066bdc90(uVar10,0);
  if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d8354;
  fVar22 = fVar20;
  fVar16 = fVar15;
  fVar12 = fVar11;
  fVar9 = (float)FUN_066d4b64(*(long *)(unaff_x19 + 0x180),0);
  fVar17 = fVar15 * fVar16;
  fVar19 = fVar7 * fVar12 + fVar20 * fVar16 + fVar15 * fVar22;
  fVar13 = (fVar20 * fVar22 - fVar7 * fVar9) - fVar11 * fVar12;
  fVar21 = (fVar11 * fVar16 + fVar20 * fVar9 + fVar7 * fVar22) - fVar15 * fVar12;
  fVar15 = (fVar15 * fVar9 + fVar20 * fVar12 + fVar11 * fVar22) - fVar7 * fVar16;
  fVar11 = fVar19 - fVar11 * fVar9;
  fVar20 = fVar13 - fVar17;
  if (unaff_x21 == 0) goto LAB_052d8354;
  FUN_066d320c();
  fVar7 = (float)FUN_066bd6e0(0);
  *(float *)(unaff_x19 + 0x298) =
       (fVar11 * fVar13 + fVar21 * fVar19 + fVar20 * fVar7) - fVar15 * fVar17;
  *(float *)(unaff_x19 + 0x29c) =
       (fVar21 * fVar17 + fVar15 * fVar19 + fVar20 * fVar13) - fVar11 * fVar7;
  *(float *)(unaff_x19 + 0x2a0) =
       (fVar15 * fVar7 + fVar11 * fVar19 + fVar20 * fVar17) - fVar21 * fVar13;
  *(float *)(unaff_x19 + 0x2a4) =
       ((fVar20 * fVar19 - fVar21 * fVar7) - fVar15 * fVar13) - fVar11 * fVar17;
  if (*(char *)(unaff_x20 + 0x48) == '\0') {
    uVar5 = FUN_0528e008();
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x20 + 0xa8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_066cd30c(uVar10,0);
      if ((uVar5 & 1) == 0) goto LAB_052d7e80;
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_052d8354;
      uVar1 = FUN_067418c4(*(long *)(unaff_x20 + 0xa8),0);
      uVar1 = uVar1 & 1;
    }
  }
  else {
LAB_052d7e80:
    uVar1 = 1;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0xe0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(uVar10,0);
  if ((uVar5 & 1) == 0) {
LAB_052d7f18:
    uVar2 = FUN_052914a4();
    uVar2 = uVar2 & 1;
  }
  else {
    if (*(long *)(unaff_x20 + 0xe0) == 0) goto LAB_052d8354;
    uVar5 = FUN_0528dee4(*(long *)(unaff_x20 + 0xe0),0);
    if ((uVar5 & 1) == 0) goto LAB_052d7f18;
    uVar2 = 1;
  }
  if (*(char *)(unaff_x19 + 0x348) == '\0') {
    if (*(int *)(unaff_x20 + 0x20) == 1) goto LAB_052d7f30;
    if (((*(int *)(unaff_x20 + 0x20) == 2) || (*(char *)(unaff_x19 + 0xca) != '\0')) ||
       (iVar3 = FUN_0528dcb0(), 1 < iVar3)) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = *(char *)(unaff_x20 + 600);
    }
    if ((uVar2 == 0 && uVar1 == 0) && cVar6 == '\0') goto LAB_052d7f30;
    FUN_052d5ec4();
    FUN_066cad54();
  }
  else {
LAB_052d7f30:
    FUN_052d96d0();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0x280);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(uVar10,0);
  if ((uVar5 & 1) != 0) {
    uVar10 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar10,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x280);
      if ((lVar4 == 0) || (*(long *)(unaff_x19 + 0x140) == 0)) {
LAB_052d8354:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_052ef850(*(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                   *(undefined4 *)(lVar4 + 0x50),*(undefined4 *)(lVar4 + 0x3c),
                   *(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x44),
                   *(long *)(unaff_x19 + 0x140),0);
    }
  }
  return;
}


