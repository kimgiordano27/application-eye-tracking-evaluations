/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 05320514
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_fixedFoveatedRenderingLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  float *pfVar1;
  undefined8 *unaff_x19;
  long unaff_x22;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  plVar2 = *(long **)(unaff_x22 + 0xf78);
  fVar3 = (float)FUN_060dfb18(0);
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fVar4 = fStack000000000000005c * fStack000000000000005c +
          in_stack_00000050._4_4_ * in_stack_00000050._4_4_ +
          fStack0000000000000058 * fStack0000000000000058;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar4) {
    fVar7 = fStack000000000000005c * param_3 +
            in_stack_00000050._4_4_ * fVar3 + fStack0000000000000058 * param_2;
    fVar3 = fVar3 - (in_stack_00000050._4_4_ * fVar7) / fVar4;
    param_2 = param_2 - (fStack0000000000000058 * fVar7) / fVar4;
    param_3 = param_3 - (fStack000000000000005c * fVar7) / fVar4;
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar4 = SQRT(param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2);
  if (fVar4 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar1 = *(float **)(*plVar2 + 0xb8);
    fVar3 = *pfVar1;
    param_2 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar3 = fVar3 / fVar4;
    param_2 = param_2 / fVar4;
    param_3 = param_3 / fVar4;
  }
  fVar4 = (float)FUN_0531f5c0(uStack00000000000000cc,fStack00000000000000c8,in_stack_00000060);
  fVar3 = unaff_s12 * fVar3;
  fStack00000000000000c8 = unaff_s12 * param_2 + fStack00000000000000c8;
  in_stack_00000060 = unaff_s12 * param_3 + in_stack_00000060;
  uVar5 = FUN_0531f9e8(fVar3 + fVar4,fStack00000000000000c8,in_stack_00000060);
  fVar4 = fStack00000000000000c8;
  fVar7 = in_stack_00000060;
  fVar6 = (float)FUN_05320778();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_060fda18(uVar5,fStack00000000000000c8,in_stack_00000060,
               (unaff_s8 * fVar4 + unaff_s9 * fVar3 + unaff_s11 * fVar6) - unaff_s10 * fVar7,
               (unaff_s9 * fVar7 + unaff_s10 * fVar3 + unaff_s11 * fVar4) - unaff_s8 * fVar6,
               (unaff_s10 * fVar6 + unaff_s8 * fVar3 + unaff_s11 * fVar7) - unaff_s9 * fVar4,
               ((unaff_s11 * fVar3 - unaff_s9 * fVar6) - unaff_s10 * fVar4) - unaff_s8 * fVar7);
  return;
}


