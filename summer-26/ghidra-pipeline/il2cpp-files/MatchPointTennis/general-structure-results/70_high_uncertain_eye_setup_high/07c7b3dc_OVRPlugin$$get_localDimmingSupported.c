/*
FUNCTION_NAME: OVRPlugin$$get_localDimmingSupported
ENTRY_POINT: 07c7b3dc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimmingSupported(void)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s12;
  float unaff_s13;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float in_stack_00000060;
  undefined8 in_stack_00000070;
  float in_stack_00000080;
  float in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 uStack0000000000000128;
  float fStack00000000000001e8;
  float fStack00000000000001ec;
  
  uStack0000000000000128 = 0;
  uVar1 = FUN_06c817f4();
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = uStack0000000000000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar7 = in_stack_00000090;
  fVar2 = (float)FUN_07c7aa14(in_stack_00000070,uVar1,&stack0x00000100);
                    /* try { // try from 07c7b42c to 07d7b433 has its CatchHandler @ 07c7bc8c */
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
                    /* try { // try from 07c7b438 to 07d7b443 has its CatchHandler @ 07c7bc88 */
  in_stack_000000f8 = 0;
                    /* try { // try from 07c7b444 to 07d7bca3 has its CatchHandler @ 07c7b1dc */
  uVar1 = FUN_06c817f4(fStack0000000000000024 - in_stack_00000050 * in_stack_00000030,
                       fStack0000000000000020 - in_stack_00000050 * fStack000000000000002c,
                       in_stack_00000018._4_4_ - in_stack_00000050 * fStack0000000000000028,
                       fStack0000000000000000 - in_stack_00000060 * in_stack_00000030,
                       unaff_s12 - in_stack_00000060 * fStack000000000000002c,
                       unaff_s13 - in_stack_00000060 * fStack0000000000000028,&stack0x000000e8,
                       *unaff_x23);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar6 = in_stack_00000080;
  fVar8 = in_stack_00000090;
  fVar3 = (float)FUN_07c7aa14(in_stack_00000070,uVar1,&stack0x000000d0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  uVar1 = FUN_06c817f4(in_stack_00000060 * in_stack_00000030 + fStack0000000000000040,
                       in_stack_00000060 * fStack000000000000002c + fStack0000000000000044,
                       in_stack_00000060 * fStack0000000000000028 + fStack0000000000000048,
                       in_stack_00000050 * in_stack_00000030 + fStack0000000000000004,
                       in_stack_00000050 * fStack000000000000002c + fStack0000000000000008,
                       in_stack_00000050 * fStack0000000000000028 + fStack000000000000000c,
                       &stack0x000000b8,*unaff_x23);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar14 = in_stack_00000080;
  fVar15 = in_stack_00000090;
  fVar4 = (float)FUN_07c7aa14(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar12 = (float)in_stack_00000070;
  fVar13 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (fStack00000000000001ec - fVar12) * (fStack00000000000001ec - fVar12) +
           (fStack00000000000001e8 - in_stack_00000080) *
           (fStack00000000000001e8 - in_stack_00000080);
  fVar11 = (fVar7 - in_stack_00000090) * (fVar7 - in_stack_00000090) +
           (fVar2 - fVar12) * (fVar2 - fVar12) +
           (fStack0000000000000014 - in_stack_00000080) *
           (fStack0000000000000014 - in_stack_00000080);
  fVar9 = (fVar8 - in_stack_00000090) * (fVar8 - in_stack_00000090) +
          (fVar3 - fVar12) * (fVar3 - fVar12) +
          (fVar6 - in_stack_00000080) * (fVar6 - in_stack_00000080);
  fVar10 = (fVar15 - in_stack_00000090) * (fVar15 - in_stack_00000090) +
           (fVar4 - fVar12) * (fVar4 - fVar12) +
           (fVar14 - in_stack_00000080) * (fVar14 - in_stack_00000080);
  fVar12 = fVar9;
  if (fVar10 <= fVar9) {
    fVar12 = fVar10;
  }
  fVar10 = fVar11;
  if (fVar12 <= fVar11) {
    fVar10 = fVar12;
  }
  fVar12 = fVar13;
  if (fVar10 <= fVar13) {
    fVar12 = fVar10;
  }
  if (fVar13 == fVar12) {
    *unaff_x20 = fStack00000000000001ec;
    uVar5 = 0;
    fVar14 = fStack00000000000001e8;
    fVar15 = fStack000000000000004c;
  }
  else if (fVar11 == fVar12) {
    *unaff_x20 = fVar2;
    uVar5 = 0x43340000;
    fVar14 = fStack0000000000000014;
    fVar15 = fVar7;
  }
  else if (fVar9 == fVar12) {
    *unaff_x20 = fVar3;
    uVar5 = 0x42b40000;
    fVar14 = fVar6;
    fVar15 = fVar8;
  }
  else {
    *unaff_x20 = fVar4;
    uVar5 = 0xc2b40000;
  }
  unaff_x20[1] = fVar14;
  unaff_x20[2] = fVar15;
  *unaff_x19 = uVar5;
  return;
}


