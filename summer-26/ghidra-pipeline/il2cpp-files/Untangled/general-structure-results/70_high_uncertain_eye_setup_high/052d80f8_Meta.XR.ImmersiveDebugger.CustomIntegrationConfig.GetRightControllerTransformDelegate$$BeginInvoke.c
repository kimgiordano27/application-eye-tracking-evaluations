/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetRightControllerTransformDelegate$$BeginInvoke
ENTRY_POINT: 052d80f8
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate__BeginInvoke
               (undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x24;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float unaff_s8;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float unaff_s10;
  float unaff_s11;
  float fVar20;
  float unaff_s15;
  float in_s19;
  float in_s21;
  undefined8 in_stack_00000010;
  ulong uVar15;
  
  fVar9 = unaff_s8 * in_s19 + unaff_s11 * in_s21 + unaff_s10 * unaff_s15;
  uVar4 = (ulong)(uint)fVar9;
  fVar12 = unaff_s9 * in_s21 + unaff_s11 * in_stack_00000010._4_4_ + unaff_s8 * unaff_s15;
  uVar15 = (ulong)(uint)fVar12;
  fVar20 = (unaff_s10 * in_stack_00000010._4_4_ + unaff_s11 * in_s19 + unaff_s9 * unaff_s15) -
           unaff_s8 * in_s21;
  fVar9 = fVar9 - unaff_s9 * in_stack_00000010._4_4_;
  fVar12 = fVar12 - unaff_s10 * in_s19;
  fVar18 = ((unaff_s11 * unaff_s15 - unaff_s9 * in_s19) - unaff_s10 * in_s21) -
           unaff_s8 * in_stack_00000010._4_4_;
  if ((unaff_x22 & 1) == 0) {
    uVar8 = FUN_066d4d38(param_1,0);
    uVar8 = FUN_066bde7c(fVar20,fVar9,fVar12,fVar18,uVar8,uVar4,uVar15,0);
    fVar18 = (float)FUN_052d021c();
  }
  else {
    uVar8 = FUN_066d4cbc();
    fVar18 = (float)FUN_066bde7c(fVar20,fVar9,fVar12,fVar18,uVar8,uVar4,uVar15,0);
    uVar8 = FUN_052d021c();
  }
  fVar20 = (float)FUN_066bdc90(uVar8,0);
  if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d8354;
  fVar16 = fVar18;
  fVar13 = fVar12;
  fVar10 = fVar9;
  fVar7 = (float)FUN_066d4b64(*(long *)(unaff_x19 + 0x180),0);
  fVar14 = fVar12 * fVar13;
  fVar17 = fVar20 * fVar10 + fVar18 * fVar13 + fVar12 * fVar16;
  fVar11 = (fVar18 * fVar16 - fVar20 * fVar7) - fVar9 * fVar10;
  fVar19 = (fVar9 * fVar13 + fVar18 * fVar7 + fVar20 * fVar16) - fVar12 * fVar10;
  fVar12 = (fVar12 * fVar7 + fVar18 * fVar10 + fVar9 * fVar16) - fVar20 * fVar13;
  fVar9 = fVar17 - fVar9 * fVar7;
  fVar18 = fVar11 - fVar14;
  if (unaff_x21 == 0) goto LAB_052d8354;
  FUN_066d320c();
  fVar20 = (float)FUN_066bd6e0(0);
  *(float *)(unaff_x19 + 0x298) =
       (fVar9 * fVar11 + fVar19 * fVar17 + fVar18 * fVar20) - fVar12 * fVar14;
  *(float *)(unaff_x19 + 0x29c) =
       (fVar19 * fVar14 + fVar12 * fVar17 + fVar18 * fVar11) - fVar9 * fVar20;
  *(float *)(unaff_x19 + 0x2a0) =
       (fVar12 * fVar20 + fVar9 * fVar17 + fVar18 * fVar14) - fVar19 * fVar11;
  *(float *)(unaff_x19 + 0x2a4) =
       ((fVar18 * fVar17 - fVar19 * fVar20) - fVar12 * fVar11) - fVar9 * fVar14;
  if (*(char *)(unaff_x20 + 0x48) == '\0') {
    uVar4 = FUN_0528e008();
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar4 = FUN_066cd30c(uVar8,0);
      if ((uVar4 & 1) == 0) goto LAB_052d7e80;
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_052d8354;
      uVar1 = FUN_067418c4(*(long *)(unaff_x20 + 0xa8),0);
      uVar1 = uVar1 & 1;
    }
  }
  else {
LAB_052d7e80:
    uVar1 = 1;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0xe0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(uVar8,0);
  if ((uVar4 & 1) == 0) {
LAB_052d7f18:
    uVar2 = FUN_052914a4();
    uVar2 = uVar2 & 1;
  }
  else {
    if (*(long *)(unaff_x20 + 0xe0) == 0) goto LAB_052d8354;
    uVar4 = FUN_0528dee4(*(long *)(unaff_x20 + 0xe0),0);
    if ((uVar4 & 1) == 0) goto LAB_052d7f18;
    uVar2 = 1;
  }
  if (*(char *)(unaff_x19 + 0x348) == '\0') {
    if (*(int *)(unaff_x20 + 0x20) == 1) goto LAB_052d7f30;
    if (((*(int *)(unaff_x20 + 0x20) == 2) || (*(char *)(unaff_x19 + 0xca) != '\0')) ||
       (iVar3 = FUN_0528dcb0(), 1 < iVar3)) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = *(char *)(unaff_x20 + 600);
    }
    if ((uVar2 == 0 && uVar1 == 0) && cVar5 == '\0') goto LAB_052d7f30;
    FUN_052d5ec4();
    FUN_066cad54();
  }
  else {
LAB_052d7f30:
    FUN_052d96d0();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x280);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(uVar8,0);
  if ((uVar4 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_066cd30c(uVar8,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0x280);
      if ((lVar6 == 0) || (*(long *)(unaff_x19 + 0x140) == 0)) {
LAB_052d8354:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_052ef850(*(undefined4 *)(lVar6 + 0x48),*(undefined4 *)(lVar6 + 0x4c),
                   *(undefined4 *)(lVar6 + 0x50),*(undefined4 *)(lVar6 + 0x3c),
                   *(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x44),
                   *(long *)(unaff_x19 + 0x140),0);
    }
  }
  return;
}


