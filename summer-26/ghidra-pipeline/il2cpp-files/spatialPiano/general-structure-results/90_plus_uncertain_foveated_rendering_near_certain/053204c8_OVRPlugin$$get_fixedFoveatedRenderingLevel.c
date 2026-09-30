/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 053204c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel
               (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
               float param_5,undefined1 param_6 [16],float param_7,undefined1 param_8 [16])

{
  undefined *puVar1;
  int in_w8;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar10;
  float in_s16;
  float in_s18;
  float in_s19;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  float fVar9;
  
  fVar9 = (param_6._4_4_ + param_4._4_4_) - param_3._4_4_ * param_8._4_4_;
  uVar8 = CONCAT44(fVar9,(param_6._0_4_ + param_4._0_4_) - param_3._0_4_ * param_8._0_4_);
  if (in_w8 == 0) {
    FUN_02f08768(PTR_DAT_067c8f78);
    *(undefined1 *)(unaff_x22 + 0x2c5) = 1;
  }
  puVar1 = PTR_DAT_067c8f78;
  lVar2 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  fVar4 = (float)FUN_060dfb18((in_s18 + param_7) - in_s16,uVar8,fVar9,
                              (param_5 - param_2) - in_s19 * param_1,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  fVar10 = (float)uVar8;
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fVar5 = fStack000000000000005c * fStack000000000000005c +
          in_stack_00000050._4_4_ * in_stack_00000050._4_4_ +
          fStack0000000000000058 * fStack0000000000000058;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar5) {
    fVar7 = fStack000000000000005c * fVar9 +
            in_stack_00000050._4_4_ * fVar4 + fStack0000000000000058 * fVar10;
    fVar4 = fVar4 - (in_stack_00000050._4_4_ * fVar7) / fVar5;
    fVar10 = fVar10 - (fStack0000000000000058 * fVar7) / fVar5;
    fVar9 = fVar9 - (fStack000000000000005c * fVar7) / fVar5;
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar5 = SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar10 * fVar10);
  if (fVar5 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar4 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    fVar10 = fVar10 / fVar5;
    fVar9 = fVar9 / fVar5;
  }
  fVar5 = (float)FUN_0531f5c0(uStack00000000000000cc,fStack00000000000000c8,in_stack_00000060);
  fVar4 = unaff_s12 * fVar4;
  fStack00000000000000c8 = unaff_s12 * fVar10 + fStack00000000000000c8;
  in_stack_00000060 = unaff_s12 * fVar9 + in_stack_00000060;
  uVar6 = FUN_0531f9e8(fVar4 + fVar5,fStack00000000000000c8,in_stack_00000060);
  fVar9 = in_stack_00000060;
  fVar10 = fStack00000000000000c8;
  fVar5 = (float)FUN_05320778();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_060fda18(uVar6,fStack00000000000000c8,in_stack_00000060,
               (unaff_s8 * fVar10 + unaff_s9 * fVar4 + unaff_s11 * fVar5) - unaff_s10 * fVar9,
               (unaff_s9 * fVar9 + unaff_s10 * fVar4 + unaff_s11 * fVar10) - unaff_s8 * fVar5,
               (unaff_s10 * fVar5 + unaff_s8 * fVar4 + unaff_s11 * fVar9) - unaff_s9 * fVar10,
               ((unaff_s11 * fVar4 - unaff_s9 * fVar5) - unaff_s10 * fVar10) - unaff_s8 * fVar9);
  return;
}


