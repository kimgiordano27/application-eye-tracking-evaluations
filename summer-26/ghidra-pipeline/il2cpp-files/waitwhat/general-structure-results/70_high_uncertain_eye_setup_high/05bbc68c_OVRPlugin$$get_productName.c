/*
FUNCTION_NAME: OVRPlugin$$get_productName
ENTRY_POINT: 05bbc68c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_productName(float *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s15;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  
  puVar1 = PTR_DAT_07112190;
  bVar2 = unaff_w20 != 1;
  fStack0000000000000018 = *param_1;
  fStack0000000000000020 = param_1[2];
  if (bVar2) {
    fStack0000000000000018 = -*param_1;
    fStack0000000000000020 = -param_1[2];
  }
  lVar4 = *(long *)PTR_DAT_07112190;
  fStack000000000000001c = param_1[1];
  if (bVar2) {
    fStack000000000000001c = -param_1[1];
  }
  if (bVar2) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    puVar6 = (undefined4 *)(lVar4 + 0x6c);
    puVar8 = (undefined4 *)(lVar4 + 0x70);
    puVar10 = (undefined4 *)(lVar4 + 0x74);
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    puVar6 = (undefined4 *)(lVar4 + 0x24);
    puVar8 = (undefined4 *)(lVar4 + 0x28);
    puVar10 = (undefined4 *)(lVar4 + 0x2c);
  }
  fVar13 = (float)FUN_069c57a8(in_stack_00000038._4_4_,fStack0000000000000040,fStack0000000000000044
                               ,in_stack_00000048,*puVar6,*puVar8,*puVar10,0);
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  fVar14 = unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar14) {
    fVar15 = unaff_s8 * fStack0000000000000044 +
             unaff_s9 * fVar13 + unaff_s10 * fStack0000000000000040;
    fVar13 = fVar13 - (unaff_s9 * fVar15) / fVar14;
    fStack0000000000000040 = fStack0000000000000040 - (unaff_s10 * fVar15) / fVar14;
    fStack0000000000000044 = fStack0000000000000044 - (unaff_s8 * fVar15) / fVar14;
  }
  if (*(char *)(unaff_x23 + 0xbbf) == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x23 + 0xbbf) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar14 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                fVar13 * fVar13 + fStack0000000000000040 * fStack0000000000000040);
  if (fVar14 <= unaff_s15) {
    if (*(char *)(unaff_x24 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x24 + 0x7d6) = 1;
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fVar13 = *pfVar7;
    fStack0000000000000040 = pfVar7[1];
    fStack0000000000000044 = pfVar7[2];
  }
  else {
    fVar13 = fVar13 / fVar14;
    fStack0000000000000040 = fStack0000000000000040 / fVar14;
    fStack0000000000000044 = fStack0000000000000044 / fVar14;
  }
  fVar13 = (float)FUN_05a73c9c(fVar13,fStack0000000000000040,fStack0000000000000044,
                               fStack0000000000000018,fStack000000000000001c,fStack0000000000000020,
                               0);
  plVar12 = *(long **)(unaff_x19 + 0x28);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar4 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x21) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05bbc8c0;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08(plVar12,*unaff_x21,0);
LAB_05bbc8c0:
  iVar3 = (*(code *)*puVar5)(plVar12,puVar5[1]);
  fVar14 = -fVar13;
  if (iVar3 != 1) {
    fVar14 = fVar13;
  }
  if (fVar14 < -70.0) {
    fVar14 = fVar14 + 360.0;
  }
  return fVar14;
}


