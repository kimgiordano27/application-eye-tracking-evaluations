/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetLeftControllerTransformDelegate$$BeginInvoke
ENTRY_POINT: 052d801c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate__BeginInvoke
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
  int unaff_w22;
  long *unaff_x24;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  ulong uVar17;
  ulong uVar21;
  
  fVar7 = (float)FUN_052c3304();
  fVar22 = param_4;
  fVar23 = param_2;
  fVar20 = param_3;
  if (unaff_w22 != 0) {
    fVar11 = param_2;
    fVar12 = param_3;
    FUN_052cc80c();
    fVar8 = (float)FUN_066bd6e0(0);
    fVar15 = fVar11;
    fVar18 = fVar12;
    uVar9 = FUN_052d0164();
    fVar23 = fVar15;
    fVar20 = fVar18;
    lVar4 = FUN_066c67b0();
    if (lVar4 == 0) goto LAB_052d8354;
    uVar10 = FUN_066d4d38(lVar4,0);
    lVar4 = FUN_066c67b0();
    if (lVar4 == 0) goto LAB_052d8354;
    FUN_066d4cbc(lVar4,0);
    if (*(int *)(*(long *)PTR_DAT_06d08948 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_052d9474(uVar9,fVar15,fVar18,uVar10,fVar23,fVar20);
    lVar4 = FUN_066c67b0();
    if (lVar4 == 0) goto LAB_052d8354;
    fVar15 = param_3 * fVar8 + param_4 * fVar11 + param_2 * fVar22;
    uVar17 = (ulong)(uint)fVar15;
    fVar18 = fVar7 * fVar11 + param_4 * fVar12 + param_3 * fVar22;
    uVar21 = (ulong)(uint)fVar18;
    fVar23 = (param_2 * fVar12 + param_4 * fVar8 + fVar7 * fVar22) - param_3 * fVar11;
    fVar15 = fVar15 - fVar7 * fVar12;
    fVar18 = fVar18 - param_2 * fVar8;
    fVar22 = ((param_4 * fVar22 - fVar7 * fVar8) - param_2 * fVar11) - param_3 * fVar12;
    if ((uVar5 & 1) == 0) {
      uVar14 = FUN_066d4d38(lVar4,0);
      uVar14 = FUN_066bde7c(fVar23,fVar15,fVar18,fVar22,uVar14,uVar17,uVar21,0);
      fVar11 = (float)FUN_052d021c();
    }
    else {
      uVar14 = FUN_066d4cbc();
      fVar11 = (float)FUN_066bde7c(fVar23,fVar15,fVar18,fVar22,uVar14,uVar17,uVar21,0);
      uVar14 = FUN_052d021c();
    }
    fVar12 = (float)FUN_066bdc90(uVar14,0);
    if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d8354;
    fVar8 = fVar11;
    fVar19 = fVar18;
    fVar16 = fVar15;
    fVar13 = (float)FUN_066d4b64(*(long *)(unaff_x19 + 0x180),0);
    fVar20 = fVar18 * fVar19;
    fVar22 = fVar12 * fVar16 + fVar11 * fVar19 + fVar18 * fVar8;
    fVar23 = (fVar11 * fVar8 - fVar12 * fVar13) - fVar15 * fVar16;
    fVar7 = (fVar15 * fVar19 + fVar11 * fVar13 + fVar12 * fVar8) - fVar18 * fVar16;
    param_2 = (fVar18 * fVar13 + fVar11 * fVar16 + fVar15 * fVar8) - fVar12 * fVar19;
    param_3 = fVar22 - fVar15 * fVar13;
    param_4 = fVar23 - fVar20;
  }
  if (unaff_x21 == 0) goto LAB_052d8354;
  FUN_066d320c();
  fVar15 = (float)FUN_066bd6e0(0);
  *(float *)(unaff_x19 + 0x298) =
       (param_3 * fVar23 + fVar7 * fVar22 + param_4 * fVar15) - param_2 * fVar20;
  *(float *)(unaff_x19 + 0x29c) =
       (fVar7 * fVar20 + param_2 * fVar22 + param_4 * fVar23) - param_3 * fVar15;
  *(float *)(unaff_x19 + 0x2a0) =
       (param_2 * fVar15 + param_3 * fVar22 + param_4 * fVar20) - fVar7 * fVar23;
  *(float *)(unaff_x19 + 0x2a4) =
       ((param_4 * fVar22 - fVar7 * fVar15) - param_2 * fVar23) - param_3 * fVar20;
  if (*(char *)(unaff_x20 + 0x48) == '\0') {
    uVar5 = FUN_0528e008();
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(unaff_x20 + 0xa8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_066cd30c(uVar14,0);
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
  uVar14 = *(undefined8 *)(unaff_x20 + 0xe0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(uVar14,0);
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
  uVar14 = *(undefined8 *)(unaff_x19 + 0x280);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(uVar14,0);
  if ((uVar5 & 1) != 0) {
    uVar14 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar14,0);
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


