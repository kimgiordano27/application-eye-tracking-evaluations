/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 0908cc34
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__PlatformUIConfirmQuit(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int in_w8;
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
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  _uStack0000000000000038 = 0;
  if (in_w8 == 0) {
                    /* try { // try from 0908cc4c to 0918cc4f has its CatchHandler @ 0908d56c */
    FUN_04947ee4(PTR_DAT_0ac0a830);
                    /* try { // try from 0908cc50 to 0918cc6f has its CatchHandler @ 0908d688 */
    *(undefined1 *)(unaff_x21 + 0x3e6) = 1;
  }
  puVar1 = PTR_DAT_0ac0a830;
  fVar16 = unaff_s11 - unaff_s13;
  fVar14 = unaff_s9 - unaff_s12;
  fVar15 = unaff_s8 - unaff_s10;
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar13 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14);
  if (fVar13 <= DAT_01df50c4) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    fStack0000000000000054 = *pfVar4;
    in_stack_00000058 = pfVar4[1];
    fStack000000000000005c = pfVar4[2];
  }
  else {
    fStack0000000000000054 = fVar16 / fVar13;
    in_stack_00000058 = fVar14 / fVar13;
    fStack000000000000005c = fVar15 / fVar13;
                    /* try { // try from 0908ccb0 to 0918ccbb has its CatchHandler @ 0908d684 */
  }
  plVar8 = *(long **)(unaff_x20 + 200);
  if (DAT_0b32d33b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32d33b = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac76958) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0908cd84;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac76958,1);
LAB_0908cd84:
  uVar2 = (*(code *)*puVar3)(fVar13,plVar8,&stack0x00000048,&stack0x00000028,puVar3[1]);
  puVar1 = PTR_DAT_0ac788c0;
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)PTR_DAT_0ac788c0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
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
    FUN_0a17834c();
    FUN_0908c58c(uStack0000000000000028,uStack000000000000002c,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c);
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
  }
  thunk_FUN_049ee3d8();
  return uVar2 & 1;
}


