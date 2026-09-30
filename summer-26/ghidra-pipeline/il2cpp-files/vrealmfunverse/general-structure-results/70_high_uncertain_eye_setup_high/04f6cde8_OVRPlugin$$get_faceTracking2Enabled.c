/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 04f6cde8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTracking2Enabled
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,float param_4,
               float param_5,undefined8 param_6,float param_7)

{
  undefined *puVar1;
  int in_w8;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar12;
  float in_s16;
  undefined4 in_register_00005204;
  float in_s19;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  fVar4 = param_1._4_4_;
  fVar12 = param_1._0_4_;
                    /* try { // try from 04f6cdf4 to 0506ce07 has its CatchHandler @ 04f6cf10 */
  fVar6 = (float)param_6 - (float)param_3;
  fVar7 = (float)((ulong)param_6 >> 0x20) - (float)((ulong)param_3 >> 0x20);
                    /* try { // try from 04f6ce08 to 0506cec7 has its CatchHandler @ 04f6cb08 */
  uVar10 = NEON_ext(CONCAT44(fVar7,fVar6),param_1._0_8_,4,1);
  uVar9 = NEON_ext(CONCAT44(in_s19,param_5),CONCAT44(in_register_00005204,in_s16),4,1);
  uVar11 = NEON_ext(param_1._0_8_,CONCAT44(fVar7,fVar6),4,1);
  fVar8 = (param_7 * fVar4 + in_s19 * fVar7 + param_5 * (float)((ulong)uVar10 >> 0x20)) -
          (float)((ulong)uVar9 >> 0x20) * (float)((ulong)uVar11 >> 0x20);
  uVar9 = CONCAT44(fVar8,(in_s16 * fVar12 + param_5 * fVar6 + param_4 * (float)uVar10) -
                         (float)uVar9 * (float)uVar11);
  if (in_w8 == 0) {
    FUN_02b3c81c(PTR_DAT_06312438);
    *(undefined1 *)(unaff_x22 + 0xd9f) = 1;
  }
  puVar1 = PTR_DAT_06312438;
  lVar2 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
  fVar4 = (float)FUN_05c7bd38((in_s19 * fVar6 + in_s16 * fVar7 + param_5 * fVar4) - param_7 * fVar12
                              ,uVar9,fVar8,
                              ((param_5 * fVar7 - in_s16 * fVar4) - param_7 * fVar6) -
                              in_s19 * fVar12,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  fVar12 = (float)uVar9;
  if (DAT_066c298e == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c298e = '\x01';
  }
  fVar6 = fStack000000000000005c * fStack000000000000005c +
          in_stack_00000050._4_4_ * in_stack_00000050._4_4_ +
          fStack0000000000000058 * fStack0000000000000058;
  if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar6) {
    fVar7 = fStack000000000000005c * fVar8 +
            in_stack_00000050._4_4_ * fVar4 + fStack0000000000000058 * fVar12;
    fVar4 = fVar4 - (in_stack_00000050._4_4_ * fVar7) / fVar6;
    fVar12 = fVar12 - (fStack0000000000000058 * fVar7) / fVar6;
    fVar8 = fVar8 - (fStack000000000000005c * fVar7) / fVar6;
  }
  if (DAT_066c1d9d == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    DAT_066c1d9d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar6 = SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar12 * fVar12);
  if (fVar6 <= DAT_01032864) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar4 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar6;
    fVar12 = fVar12 / fVar6;
    fVar8 = fVar8 / fVar6;
  }
  fVar6 = (float)FUN_04f6bef4(uStack00000000000000cc,fStack00000000000000c8,in_stack_00000060);
  fVar4 = unaff_s12 * fVar4;
  fStack00000000000000c8 = unaff_s12 * fVar12 + fStack00000000000000c8;
  in_stack_00000060 = unaff_s12 * fVar8 + in_stack_00000060;
  uVar5 = FUN_04f6c36c(fVar4 + fVar6,fStack00000000000000c8,in_stack_00000060);
  fVar12 = fStack00000000000000c8;
  fVar6 = in_stack_00000060;
  fVar7 = (float)FUN_04f6d0fc();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_05c99d80(uVar5,fStack00000000000000c8,in_stack_00000060,
               (unaff_s8 * fVar12 + unaff_s9 * fVar4 + unaff_s11 * fVar7) - unaff_s10 * fVar6,
               (unaff_s9 * fVar6 + unaff_s10 * fVar4 + unaff_s11 * fVar12) - unaff_s8 * fVar7,
               (unaff_s10 * fVar7 + unaff_s8 * fVar4 + unaff_s11 * fVar6) - unaff_s9 * fVar12,
               ((unaff_s11 * fVar4 - unaff_s9 * fVar7) - unaff_s10 * fVar12) - unaff_s8 * fVar6);
  return;
}


