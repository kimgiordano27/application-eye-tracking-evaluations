/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilSupported
ENTRY_POINT: 076e3774
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilSupported(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float unaff_s8;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float unaff_s10;
  float fVar15;
  float unaff_s11;
  float fVar16;
  float unaff_s12;
  float unaff_s13;
  ulong in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000058;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fae310);
  *(undefined1 *)(unaff_x21 + 0x2b3) = 1;
  in_stack_00000058 = 0;
  in_stack_00000028 = 0;
  _uStack0000000000000030 = 0;
  in_stack_00000040 = 0;
  _uStack0000000000000038 = 0;
  _uStack0000000000000050 = (ulong)(uint)unaff_s10;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
                    /* try { // try from 076e37c8 to 077e393b has its CatchHandler @ 076e37c8
                       catch() { ... } // from try @ 076e37c8 with catch @ 076e37c8
                       catch() { ... } // from try @ 076e3a64 with catch @ 076e37c8
                       catch() { ... } // from try @ 076e3b54 with catch @ 076e37c8
                       catch() { ... } // from try @ 076e3bdc with catch @ 076e37c8
                       catch() { ... } // from try @ 076e3df4 with catch @ 076e37c8
                       catch() { ... } // from try @ 076e3e08 with catch @ 076e37c8 */
  puVar1 = PTR_DAT_08f65580;
  fVar16 = unaff_s11 - unaff_s13;
  fVar14 = unaff_s9 - unaff_s12;
  fVar15 = unaff_s8 - unaff_s10;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar13 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14);
  if (fVar13 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar16 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar15 = pfVar4[2];
  }
  else {
    fVar16 = fVar16 / fVar13;
    fVar14 = fVar14 / fVar13;
    fVar15 = fVar15 / fVar13;
  }
  plVar8 = *(long **)(unaff_x20 + 200);
  _uStack0000000000000050 = CONCAT44(fVar16,uStack0000000000000050);
  in_stack_00000058 = CONCAT44(fVar15,fVar14);
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fac6a8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_076e38f4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fac6a8,1);
LAB_076e38f4:
  uVar2 = (*(code *)*puVar3)(fVar13,plVar8,&stack0x00000048,&stack0x00000028,puVar3[1]);
  puVar1 = PTR_DAT_08fae310;
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)PTR_DAT_08fae310;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar5 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar12 = puVar3[1];
    uVar11 = *puVar3;
    uVar10 = puVar3[3];
    uVar9 = puVar3[2];
    unaff_x19[4] = puVar3[4];
    unaff_x19[1] = uVar12;
    *unaff_x19 = uVar11;
    unaff_x19[3] = uVar10;
    unaff_x19[2] = uVar9;
  }
  else {
    FUN_085849e0();
    FUN_076e2ff4(in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c,
                 *(undefined4 *)(unaff_x20 + 0xb4));
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
  }
  return uVar2 & 1;
}


