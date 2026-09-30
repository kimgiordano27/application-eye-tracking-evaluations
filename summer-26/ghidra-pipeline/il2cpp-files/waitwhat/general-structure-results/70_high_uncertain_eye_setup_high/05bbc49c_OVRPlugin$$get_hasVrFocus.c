/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 05bbc49c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_hasVrFocus
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  long *unaff_x21;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  
  iVar5 = (*(code *)*param_4)();
  if (DAT_075457aa == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457aa = '\x01';
  }
  puVar1 = PTR_DAT_070c1a80;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar7 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar15 = *(float *)(lVar7 + 0x18);
    fVar20 = *(float *)(lVar7 + 0x1c);
    fVar21 = *(float *)(lVar7 + 0x20);
    fVar16 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x30),0);
    if (DAT_07546bbf == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_07546bbf = '\x01';
    }
    puVar2 = PTR_DAT_070c22f8;
    fStack0000000000000030 = fStack0000000000000030 - fVar16;
    fStack0000000000000034 = fStack0000000000000034 - param_2;
    fStack0000000000000038 = fStack0000000000000038 - param_3;
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar16 = DAT_012e3cb4;
    fVar17 = SQRT(fStack0000000000000038 * fStack0000000000000038 +
                  fStack0000000000000030 * fStack0000000000000030 +
                  fStack0000000000000034 * fStack0000000000000034);
    if (fVar17 <= DAT_012e3cb4) {
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
      fStack0000000000000030 = *pfVar9;
      fStack0000000000000034 = pfVar9[1];
      fStack0000000000000038 = pfVar9[2];
    }
    else {
      fStack0000000000000030 = fStack0000000000000030 / fVar17;
      fStack0000000000000034 = fStack0000000000000034 / fVar17;
      fStack0000000000000038 = fStack0000000000000038 / fVar17;
    }
    if (DAT_07546bbf == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_07546bbf = '\x01';
    }
    fVar17 = fVar20 * fStack0000000000000038 - fVar21 * fStack0000000000000034;
    fVar21 = fVar21 * fStack0000000000000030 - fVar15 * fStack0000000000000038;
    fVar15 = fVar15 * fStack0000000000000034 - fVar20 * fStack0000000000000030;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar20 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar21 * fVar21);
    if (fVar20 <= fVar16) {
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar17 = *pfVar9;
      fVar21 = pfVar9[1];
      fVar15 = pfVar9[2];
    }
    else {
      fVar17 = fVar17 / fVar20;
      fVar21 = fVar21 / fVar20;
      fVar15 = fVar15 / fVar20;
    }
    puVar3 = PTR_DAT_07112190;
    bVar4 = iVar5 != 1;
    if (bVar4) {
      fVar17 = -fVar17;
      fVar15 = -fVar15;
    }
    lVar7 = *(long *)PTR_DAT_07112190;
    if (bVar4) {
      fVar21 = -fVar21;
    }
    if (bVar4) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar3;
      }
      lVar7 = *(long *)(lVar7 + 0xb8);
      puVar8 = (undefined4 *)(lVar7 + 0x6c);
      puVar10 = (undefined4 *)(lVar7 + 0x70);
      puVar12 = (undefined4 *)(lVar7 + 0x74);
    }
    else {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar3;
      }
      lVar7 = *(long *)(lVar7 + 0xb8);
      puVar8 = (undefined4 *)(lVar7 + 0x24);
      puVar10 = (undefined4 *)(lVar7 + 0x28);
      puVar12 = (undefined4 *)(lVar7 + 0x2c);
    }
    fVar20 = (float)FUN_069c57a8(uStack000000000000003c,fStack0000000000000040,
                                 fStack0000000000000044,in_stack_00000048,*puVar8,*puVar10,*puVar12,
                                 0);
    if (DAT_0754d684 == '\0') {
      FUN_03188a78(PTR_DAT_070cf060);
      DAT_0754d684 = '\x01';
    }
    fVar18 = fStack0000000000000038 * fStack0000000000000038 +
             fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034;
    if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar18) {
      fVar19 = fStack0000000000000038 * fStack0000000000000044 +
               fStack0000000000000030 * fVar20 + fStack0000000000000034 * fStack0000000000000040;
      fVar20 = fVar20 - (fStack0000000000000030 * fVar19) / fVar18;
      fStack0000000000000040 = fStack0000000000000040 - (fStack0000000000000034 * fVar19) / fVar18;
      fStack0000000000000044 = fStack0000000000000044 - (fStack0000000000000038 * fVar19) / fVar18;
    }
    if (DAT_07546bbf == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_07546bbf = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar18 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                  fVar20 * fVar20 + fStack0000000000000040 * fStack0000000000000040);
    if (fVar18 <= fVar16) {
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar20 = *pfVar9;
      fStack0000000000000040 = pfVar9[1];
      fStack0000000000000044 = pfVar9[2];
    }
    else {
      fVar20 = fVar20 / fVar18;
      fStack0000000000000040 = fStack0000000000000040 / fVar18;
      fStack0000000000000044 = fStack0000000000000044 / fVar18;
    }
    fVar15 = (float)FUN_05a73c9c(fVar20,fStack0000000000000040,fStack0000000000000044,fVar17,fVar21,
                                 fVar15,0);
    plVar14 = *(long **)(unaff_x19 + 0x28);
    if (plVar14 != (long *)0x0) {
      lVar7 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05bbc8c0;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar14,*unaff_x21,0);
LAB_05bbc8c0:
      iVar5 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      fVar16 = -fVar15;
      if (iVar5 != 1) {
        fVar16 = fVar15;
      }
      if (fVar16 < -70.0) {
        fVar16 = fVar16 + 360.0;
      }
      return fVar16;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


