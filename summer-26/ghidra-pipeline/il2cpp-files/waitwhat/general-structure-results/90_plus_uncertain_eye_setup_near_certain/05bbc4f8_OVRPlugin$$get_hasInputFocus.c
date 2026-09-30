/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 05bbc4f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_hasInputFocus(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000004;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  
  lVar6 = *(long *)(*unaff_x22 + 0xb8);
  fStack0000000000000020 = *(float *)(lVar6 + 0x18);
  fVar17 = *(float *)(lVar6 + 0x1c);
  fVar18 = *(float *)(lVar6 + 0x20);
  fVar14 = (float)FUN_069e6fbc();
  if (DAT_07546bbf == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbf = '\x01';
  }
  puVar1 = PTR_DAT_070c22f8;
  fStack0000000000000030 = fStack0000000000000030 - fVar14;
  fStack0000000000000034 = fStack0000000000000034 - param_2;
  fStack0000000000000038 = fStack0000000000000038 - param_3;
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fStack0000000000000024 = DAT_012e3cb4;
  fStack000000000000002c =
       SQRT(fStack0000000000000038 * fStack0000000000000038 +
            fStack0000000000000030 * fStack0000000000000030 +
            fStack0000000000000034 * fStack0000000000000034);
  if (fStack000000000000002c <= DAT_012e3cb4) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000030 = *pfVar8;
    fStack0000000000000034 = pfVar8[1];
    fStack000000000000002c = pfVar8[2];
  }
  else {
    fStack0000000000000030 = fStack0000000000000030 / fStack000000000000002c;
    fStack0000000000000034 = fStack0000000000000034 / fStack000000000000002c;
    fStack000000000000002c = fStack0000000000000038 / fStack000000000000002c;
  }
  fVar14 = fVar17 * fStack000000000000002c;
  fVar16 = fStack0000000000000020 * fStack000000000000002c;
  fVar19 = fStack0000000000000020 * fStack0000000000000034;
  if (DAT_07546bbf == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbf = '\x01';
  }
  fVar14 = fVar14 - fVar18 * fStack0000000000000034;
  fVar16 = fVar18 * fStack0000000000000030 - fVar16;
  fVar19 = fVar19 - fVar17 * fStack0000000000000030;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar18 = fStack000000000000002c;
  fVar17 = fStack0000000000000024;
  fVar15 = SQRT(fVar19 * fVar19 + fVar14 * fVar14 + fVar16 * fVar16);
  if (fVar15 <= fStack0000000000000024) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fVar14 = *pfVar8;
    fStack000000000000001c = pfVar8[1];
    fStack0000000000000020 = pfVar8[2];
  }
  else {
    fVar14 = fVar14 / fVar15;
    fStack000000000000001c = fVar16 / fVar15;
    fStack0000000000000020 = fVar19 / fVar15;
  }
  puVar2 = PTR_DAT_07112190;
  bVar3 = unaff_w20 != 1;
  if (bVar3) {
    fVar14 = -fVar14;
    fStack0000000000000020 = -fStack0000000000000020;
  }
  lVar6 = *(long *)PTR_DAT_07112190;
  if (bVar3) {
    fStack000000000000001c = -fStack000000000000001c;
  }
  if (bVar3) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar7 = (undefined4 *)(lVar6 + 0x6c);
    puVar9 = (undefined4 *)(lVar6 + 0x70);
    puVar11 = (undefined4 *)(lVar6 + 0x74);
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar7 = (undefined4 *)(lVar6 + 0x24);
    puVar9 = (undefined4 *)(lVar6 + 0x28);
    puVar11 = (undefined4 *)(lVar6 + 0x2c);
  }
  fVar16 = (float)FUN_069c57a8(uStack000000000000003c,fStack0000000000000040,fStack0000000000000044,
                               in_stack_00000048,*puVar7,*puVar9,*puVar11,0);
  if (DAT_0754d684 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_0754d684 = '\x01';
  }
  fVar19 = fVar18 * fVar18 +
           fStack0000000000000030 * fStack0000000000000030 +
           fStack0000000000000034 * fStack0000000000000034;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar19) {
    fVar15 = fVar18 * fStack0000000000000044 +
             fStack0000000000000030 * fVar16 + fStack0000000000000034 * fStack0000000000000040;
    fVar16 = fVar16 - (fStack0000000000000030 * fVar15) / fVar19;
    fStack0000000000000040 = fStack0000000000000040 - (fStack0000000000000034 * fVar15) / fVar19;
    fStack0000000000000044 = fStack0000000000000044 - (fVar18 * fVar15) / fVar19;
  }
  if (DAT_07546bbf == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbf = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar18 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                fVar16 * fVar16 + fStack0000000000000040 * fStack0000000000000040);
  if (fVar18 <= fVar17) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fVar16 = *pfVar8;
    fStack0000000000000040 = pfVar8[1];
    fStack0000000000000044 = pfVar8[2];
  }
  else {
    fVar16 = fVar16 / fVar18;
    fStack0000000000000040 = fStack0000000000000040 / fVar18;
    fStack0000000000000044 = fStack0000000000000044 / fVar18;
  }
  fStack0000000000000004 = fStack0000000000000034;
  fVar14 = (float)FUN_05a73c9c(fVar16,fStack0000000000000040,fStack0000000000000044,fVar14,
                               fStack000000000000001c,fStack0000000000000020,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar6 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x21) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05bbc8c0;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08(plVar13,*unaff_x21,0);
LAB_05bbc8c0:
  iVar4 = (*(code *)*puVar5)(plVar13,puVar5[1]);
  fVar17 = -fVar14;
  if (iVar4 != 1) {
    fVar17 = fVar14;
  }
  if (fVar17 < -70.0) {
    fVar17 = fVar17 + 360.0;
  }
  return fVar17;
}


