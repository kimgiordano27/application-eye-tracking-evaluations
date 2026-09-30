/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 04f431e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedCpuPerfLevel
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int in_w8;
  long lVar5;
  float *pfVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if (in_w8 != 0) {
    if (DAT_066c1d9d == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066c1d9d = '\x01';
    }
    puVar3 = PTR_DAT_06312c90;
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar2 = PTR_DAT_06312438;
    fVar1 = DAT_01032864;
    fVar17 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
    if (fVar17 <= DAT_01032864) {
      if (DAT_066c1d97 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1d97 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar11 = *pfVar6;
      fVar13 = pfVar6[1];
      fVar15 = pfVar6[2];
    }
    else {
      fVar11 = unaff_s8 / fVar17;
      fVar13 = unaff_s9 / fVar17;
      fVar15 = unaff_s10 / fVar17;
    }
    uVar9 = (undefined4)*(undefined8 *)((long)unaff_x21 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_063185a8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c9a280();
    FUN_05c7bac0(fVar11,fVar13,fVar15,uVar7,uVar9,param_3,0);
    FUN_04f4355c();
    fVar11 = (float)FUN_05c7bd38(0);
    if (DAT_066c1caa == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1caa = '\x01';
    }
    lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
    fVar16 = *(float *)(lVar5 + 0x18);
    fVar14 = *(float *)(lVar5 + 0x1c);
    fVar12 = *(float *)(lVar5 + 0x20);
    if (DAT_066c298e == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      DAT_066c298e = '\x01';
    }
    fVar8 = fVar12 * fVar12 + fVar16 * fVar16 + fVar14 * fVar14;
    if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar8) {
      fVar10 = fVar15 * fVar12 + fVar11 * fVar16 + fVar13 * fVar14;
      fVar11 = fVar11 - (fVar16 * fVar10) / fVar8;
      fVar13 = fVar13 - (fVar14 * fVar10) / fVar8;
      fVar15 = fVar15 - (fVar12 * fVar10) / fVar8;
    }
    if (DAT_066c1d9d == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066c1d9d = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    fVar12 = SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13);
    if (fVar12 <= fVar1) {
      if (DAT_066c1d97 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1d97 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar11 = *pfVar6;
      fVar13 = pfVar6[1];
      fVar15 = pfVar6[2];
    }
    else {
      fVar11 = fVar11 / fVar12;
      fVar13 = fVar13 / fVar12;
      fVar15 = fVar15 / fVar12;
    }
    if (DAT_066c1d9c == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066c1d9c = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    unaff_s8 = fVar17 * fVar11;
    unaff_s9 = fVar17 * fVar13;
    unaff_s10 = fVar17 * fVar15;
  }
  FUN_04f43890(unaff_s8,unaff_s9,unaff_s10);
  FUN_04f438f8();
  uVar4 = FUN_04f439c8();
  if ((uVar4 & 1) != 0) {
    FUN_04f42f50();
  }
  lVar5 = *(long *)(unaff_x20 + 0x90);
  if (lVar5 != 0) {
    in_stack_00000048 = unaff_x19[1];
    in_stack_00000040 = *unaff_x19;
    in_stack_00000058 = unaff_x19[3];
    in_stack_00000050 = unaff_x19[2];
    in_stack_00000060 = unaff_x19[4];
    uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
    in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
    in_stack_00000020 = *unaff_x21;
    in_stack_00000028 = (undefined4)unaff_x21[1];
    uStack000000000000002c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
    (**(code **)(lVar5 + 0x18))
              (*(undefined8 *)(lVar5 + 0x40),&stack0x00000040,&stack0x00000020,
               *(undefined8 *)(lVar5 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


