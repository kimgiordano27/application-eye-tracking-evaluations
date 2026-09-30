/*
FUNCTION_NAME: OVRManager$$get_systemHeadsetTheme
ENTRY_POINT: 0745d688
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__get_systemHeadsetTheme
                (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  int *in_x10;
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
  
  iVar7 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_09836325 = '\x01';
  }
  puVar3 = PTR_DAT_091a0f88;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar9 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar15 = *(float *)(lVar9 + 0x18);
    fVar20 = *(float *)(lVar9 + 0x1c);
    fVar21 = *(float *)(lVar9 + 0x20);
    fVar16 = (float)FUN_08a5d3f4(*(long *)(unaff_x19 + 0x30),0);
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    puVar4 = PTR_DAT_091a1008;
    fStack0000000000000030 = fStack0000000000000030 - fVar16;
    fStack0000000000000034 = fStack0000000000000034 - param_3;
    fStack0000000000000038 = fStack0000000000000038 - param_4;
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar16 = DAT_0191476c;
    fVar17 = SQRT(fStack0000000000000038 * fStack0000000000000038 +
                  fStack0000000000000030 * fStack0000000000000030 +
                  fStack0000000000000034 * fStack0000000000000034);
    if (fVar17 <= DAT_0191476c) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar11 = *(float **)(*(long *)puVar3 + 0xb8);
      fStack0000000000000030 = *pfVar11;
      fStack0000000000000034 = pfVar11[1];
      fStack0000000000000038 = pfVar11[2];
    }
    else {
      fStack0000000000000030 = fStack0000000000000030 / fVar17;
      fStack0000000000000034 = fStack0000000000000034 / fVar17;
      fStack0000000000000038 = fStack0000000000000038 / fVar17;
    }
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    fVar17 = fVar20 * fStack0000000000000038 - fVar21 * fStack0000000000000034;
    fVar21 = fVar21 * fStack0000000000000030 - fVar15 * fStack0000000000000038;
    fVar15 = fVar15 * fStack0000000000000034 - fVar20 * fStack0000000000000030;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar20 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar21 * fVar21);
    if (fVar20 <= fVar16) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar11 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar17 = *pfVar11;
      fVar21 = pfVar11[1];
      fVar15 = pfVar11[2];
    }
    else {
      fVar17 = fVar17 / fVar20;
      fVar21 = fVar21 / fVar20;
      fVar15 = fVar15 / fVar20;
    }
    puVar5 = PTR_DAT_0921fb08;
    lVar9 = *(long *)PTR_DAT_0921fb08;
    if (iVar7 != 1) {
      fVar17 = -fVar17;
      fVar21 = -fVar21;
      fVar15 = -fVar15;
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar9 = *(long *)puVar5;
    }
    lVar10 = *(long *)(lVar9 + 0xb8);
    bVar6 = iVar7 != 1;
    lVar9 = 0x2c;
    if (bVar6) {
      lVar9 = 0x74;
    }
    lVar1 = 0x28;
    if (bVar6) {
      lVar1 = 0x70;
    }
    lVar2 = 0x24;
    if (bVar6) {
      lVar2 = 0x6c;
    }
    fVar20 = (float)FUN_08a44d84(uStack000000000000003c,fStack0000000000000040,
                                 fStack0000000000000044,in_stack_00000048,
                                 *(undefined4 *)(lVar10 + lVar2),*(undefined4 *)(lVar10 + lVar1),
                                 *(undefined4 *)(lVar10 + lVar9),0);
    if (DAT_09837382 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a2ee8);
      DAT_09837382 = '\x01';
    }
    fVar18 = fStack0000000000000038 * fStack0000000000000038 +
             fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034;
    if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar18) {
      fVar19 = fStack0000000000000038 * fStack0000000000000044 +
               fStack0000000000000030 * fVar20 + fStack0000000000000034 * fStack0000000000000040;
      fVar20 = fVar20 - (fStack0000000000000030 * fVar19) / fVar18;
      fStack0000000000000040 = fStack0000000000000040 - (fStack0000000000000034 * fVar19) / fVar18;
      fStack0000000000000044 = fStack0000000000000044 - (fStack0000000000000038 * fVar19) / fVar18;
    }
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar18 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                  fVar20 * fVar20 + fStack0000000000000040 * fStack0000000000000040);
    if (fVar18 <= fVar16) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar11 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar20 = *pfVar11;
      fStack0000000000000040 = pfVar11[1];
      fStack0000000000000044 = pfVar11[2];
    }
    else {
      fVar20 = fVar20 / fVar18;
      fStack0000000000000040 = fStack0000000000000040 / fVar18;
      fStack0000000000000044 = fStack0000000000000044 / fVar18;
    }
    fVar15 = (float)FUN_03e64c4c(fVar20,fStack0000000000000040,fStack0000000000000044,fVar17,fVar21,
                                 fVar15,0);
    plVar14 = *(long **)(unaff_x19 + 0x28);
    if (plVar14 != (long *)0x0) {
      lVar9 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x21) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0745daa4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03d8f370(plVar14,*unaff_x21,0);
LAB_0745daa4:
      iVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
      fVar16 = -fVar15;
      if (iVar7 != 1) {
        fVar16 = fVar15;
      }
      if (fVar16 < -70.0) {
        fVar16 = fVar16 + 360.0;
      }
      return fVar16;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


