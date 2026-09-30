/*
FUNCTION_NAME: OVRPlugin$$get_shouldQuit
ENTRY_POINT: 05bbc5d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_shouldQuit(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s12;
  float fVar18;
  float unaff_s13;
  float fVar19;
  float fStack0000000000000004;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  
  fStack0000000000000028 = param_3;
  fStack000000000000002c = param_1;
  if (*(char *)(unaff_x23 + 0xbbf) == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x23 + 0xbbf) = 1;
  }
  fVar17 = unaff_s12 * param_1 - unaff_s13 * param_3;
  fVar18 = unaff_s13 * param_2 - fStack0000000000000020 * param_1;
  fVar19 = fStack0000000000000020 * param_3 - unaff_s12 * param_2;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar16 = fStack000000000000002c;
  fVar2 = fStack0000000000000028;
  fVar15 = SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar18 * fVar18);
  if (fVar15 <= fStack0000000000000024) {
    if (*(char *)(unaff_x24 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x24 + 0x7d6) = 1;
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar8;
    fStack000000000000001c = pfVar8[1];
    fVar19 = pfVar8[2];
  }
  else {
    fVar17 = fVar17 / fVar15;
    fStack000000000000001c = fVar18 / fVar15;
    fVar19 = fVar19 / fVar15;
  }
  puVar1 = PTR_DAT_07112190;
  bVar3 = unaff_w20 != 1;
  if (bVar3) {
    fVar17 = -fVar17;
    fVar19 = -fVar19;
  }
  lVar5 = *(long *)PTR_DAT_07112190;
  if (bVar3) {
    fStack000000000000001c = -fStack000000000000001c;
  }
  if (bVar3) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(lVar5 + 0xb8);
    puVar7 = (undefined4 *)(lVar5 + 0x6c);
    puVar9 = (undefined4 *)(lVar5 + 0x70);
    puVar11 = (undefined4 *)(lVar5 + 0x74);
  }
  else {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(lVar5 + 0xb8);
    puVar7 = (undefined4 *)(lVar5 + 0x24);
    puVar9 = (undefined4 *)(lVar5 + 0x28);
    puVar11 = (undefined4 *)(lVar5 + 0x2c);
  }
  fVar18 = (float)FUN_069c57a8(in_stack_00000038._4_4_,fStack0000000000000040,fStack0000000000000044
                               ,in_stack_00000048,*puVar7,*puVar9,*puVar11,0);
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  fVar15 = fVar16 * fVar16 + param_2 * param_2 + fVar2 * fVar2;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar15) {
    fVar14 = fVar16 * fStack0000000000000044 + param_2 * fVar18 + fVar2 * fStack0000000000000040;
    fVar18 = fVar18 - (param_2 * fVar14) / fVar15;
    fStack0000000000000040 = fStack0000000000000040 - (fVar2 * fVar14) / fVar15;
    fStack0000000000000044 = fStack0000000000000044 - (fVar16 * fVar14) / fVar15;
  }
  if (*(char *)(unaff_x23 + 0xbbf) == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x23 + 0xbbf) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar16 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                fVar18 * fVar18 + fStack0000000000000040 * fStack0000000000000040);
  if (fVar16 <= fStack0000000000000024) {
    if (*(char *)(unaff_x24 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x24 + 0x7d6) = 1;
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fVar18 = *pfVar8;
    fStack0000000000000040 = pfVar8[1];
    fStack0000000000000044 = pfVar8[2];
  }
  else {
    fVar18 = fVar18 / fVar16;
    fStack0000000000000040 = fStack0000000000000040 / fVar16;
    fStack0000000000000044 = fStack0000000000000044 / fVar16;
  }
  fStack0000000000000004 = fVar2;
  fVar19 = (float)FUN_05a73c9c(fVar18,fStack0000000000000040,fStack0000000000000044,fVar17,
                               fStack000000000000001c,fVar19,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar5 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x21) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05bbc8c0;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08(plVar13,*unaff_x21,0);
LAB_05bbc8c0:
  iVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
  fVar17 = -fVar19;
  if (iVar4 != 1) {
    fVar17 = fVar19;
  }
  if (fVar17 < -70.0) {
    fVar17 = fVar17 + 360.0;
  }
  return fVar17;
}


