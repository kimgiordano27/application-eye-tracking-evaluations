/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 09083464
PROGRAM: Hyper-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__SetEyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x24;
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
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
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
  
  FUN_04947ee4(*(undefined8 *)(param_4 + 0x830));
  *(undefined1 *)(unaff_x24 + 0x3e6) = 1;
  puVar2 = PTR_DAT_0ac0a830;
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  puVar3 = PTR_DAT_0ac0def8;
  fVar1 = DAT_01df50c4;
  fVar17 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar17 <= DAT_01df50c4) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar11 = *pfVar6;
    fVar13 = pfVar6[1];
    fVar15 = pfVar6[2];
  }
  else {
    fVar11 = unaff_s8 / fVar17;
    fVar13 = unaff_s9 / fVar17;
    fVar15 = unaff_s10 / fVar17;
  }
  uStack0000000000000014 = *(undefined8 *)((long)unaff_x21 + 0x14);
  uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x21 + 0xc);
  uVar9 = uStack000000000000000c;
  if (*(int *)(*(long *)PTR_DAT_0ac401c0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar7 = FUN_0a188618();
  FUN_0a16ab34(fVar11,fVar13,fVar15,uVar7,uVar9,param_3,0);
  FUN_090837c8();
  fVar11 = (float)FUN_0a16adac(0);
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
  fVar16 = *(float *)(lVar5 + 0x18);
  fVar14 = *(float *)(lVar5 + 0x1c);
  fVar12 = *(float *)(lVar5 + 0x20);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar8 = fVar12 * fVar12 + fVar16 * fVar16 + fVar14 * fVar14;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar8) {
    fVar10 = fVar15 * fVar12 + fVar11 * fVar16 + fVar13 * fVar14;
    fVar11 = fVar11 - (fVar16 * fVar10) / fVar8;
    fVar13 = fVar13 - (fVar14 * fVar10) / fVar8;
    fVar15 = fVar15 - (fVar12 * fVar10) / fVar8;
  }
  if (*(char *)(unaff_x24 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x24 + 0x3e6) = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar12 = SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13);
  if (fVar12 <= fVar1) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar11 = *pfVar6;
    fVar13 = pfVar6[1];
    fVar15 = pfVar6[2];
  }
  else {
    fVar11 = fVar11 / fVar12;
    fVar13 = fVar13 / fVar12;
    fVar15 = fVar15 / fVar12;
  }
  if (DAT_0b32d33b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32d33b = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_09083afc(fVar17 * fVar11,fVar17 * fVar13,fVar17 * fVar15);
  FUN_09083b64();
  uVar4 = FUN_09083c34();
  if ((uVar4 & 1) != 0) {
    FUN_090831bc();
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
  FUN_0494818c();
}


