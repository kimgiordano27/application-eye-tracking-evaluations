/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 090834fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s14;
  float unaff_s15;
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
  
  if (DAT_0b31f3e7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e7 = '\x01';
  }
  puVar2 = *(undefined4 **)(*unaff_x23 + 0xb8);
  uVar10 = *puVar2;
  fVar12 = (float)puVar2[1];
  fVar14 = (float)puVar2[2];
  uStack0000000000000014 = *(undefined8 *)((long)unaff_x21 + 0x14);
  uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x21 + 0xc);
  uVar8 = uStack000000000000000c;
  if (*(int *)(*(long *)PTR_DAT_0ac401c0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar5 = FUN_0a188618();
  FUN_0a16ab34(uVar10,fVar12,fVar14,uVar5,uVar8,param_3,0);
  FUN_090837c8();
  fVar6 = (float)FUN_0a16adac(0);
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e4 = '\x01';
  }
  lVar3 = *(long *)(*unaff_x23 + 0xb8);
  fVar15 = *(float *)(lVar3 + 0x18);
  fVar13 = *(float *)(lVar3 + 0x1c);
  fVar11 = *(float *)(lVar3 + 0x20);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar7 = fVar11 * fVar11 + fVar15 * fVar15 + fVar13 * fVar13;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar7) {
    fVar9 = fVar14 * fVar11 + fVar6 * fVar15 + fVar12 * fVar13;
    fVar6 = fVar6 - (fVar15 * fVar9) / fVar7;
    fVar12 = fVar12 - (fVar13 * fVar9) / fVar7;
    fVar14 = fVar14 - (fVar11 * fVar9) / fVar7;
  }
  if (*(char *)(unaff_x24 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x24 + 0x3e6) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar11 = SQRT(fVar14 * fVar14 + fVar6 * fVar6 + fVar12 * fVar12);
  if (fVar11 <= unaff_s15) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar4 = *(float **)(*unaff_x23 + 0xb8);
    fVar6 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar14 = pfVar4[2];
  }
  else {
    fVar6 = fVar6 / fVar11;
    fVar12 = fVar12 / fVar11;
    fVar14 = fVar14 / fVar11;
  }
  if (DAT_0b32d33b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32d33b = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_09083afc(unaff_s14 * fVar6,unaff_s14 * fVar12,unaff_s14 * fVar14);
  FUN_09083b64();
  uVar1 = FUN_09083c34();
  if ((uVar1 & 1) != 0) {
    FUN_090831bc();
  }
  lVar3 = *(long *)(unaff_x20 + 0x90);
  if (lVar3 != 0) {
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
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),&stack0x00000040,&stack0x00000020,
               *(undefined8 *)(lVar3 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


