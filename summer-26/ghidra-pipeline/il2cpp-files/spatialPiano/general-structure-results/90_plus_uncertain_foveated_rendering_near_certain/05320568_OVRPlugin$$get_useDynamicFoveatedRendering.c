/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05320568
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


void OVRPlugin__get_useDynamicFoveatedRendering(long param_1)

{
  float *pfVar1;
  undefined8 *unaff_x19;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float in_s5;
  float in_s6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar6;
  float unaff_s15;
  undefined8 in_stack_00000058;
  float in_stack_00000060;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  fVar2 = in_stack_00000058._4_4_ * in_stack_00000058._4_4_ + in_s6 * in_s6 + in_s5 * in_s5;
  if (**(float **)(**(long **)(param_1 + 0xfa8) + 0xb8) <= fVar2) {
    fVar5 = in_stack_00000058._4_4_ * unaff_s15 + in_s6 * unaff_s13 + in_s5 * unaff_s14;
    unaff_s13 = unaff_s13 - (in_s6 * fVar5) / fVar2;
    unaff_s14 = unaff_s14 - (in_s5 * fVar5) / fVar2;
    unaff_s15 = unaff_s15 - (in_stack_00000058._4_4_ * fVar5) / fVar2;
  }
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar2 = SQRT(unaff_s15 * unaff_s15 + unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14);
  if (fVar2 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  else {
    fVar5 = unaff_s13 / fVar2;
    fVar6 = unaff_s14 / fVar2;
    fVar2 = unaff_s15 / fVar2;
  }
  fVar3 = (float)FUN_0531f5c0(uStack00000000000000cc,fStack00000000000000c8,in_stack_00000060);
  fVar5 = unaff_s12 * fVar5;
  fStack00000000000000c8 = unaff_s12 * fVar6 + fStack00000000000000c8;
  in_stack_00000060 = unaff_s12 * fVar2 + in_stack_00000060;
  uVar4 = FUN_0531f9e8(fVar5 + fVar3,fStack00000000000000c8,in_stack_00000060);
  fVar2 = fStack00000000000000c8;
  fVar6 = in_stack_00000060;
  fVar3 = (float)FUN_05320778();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_060fda18(uVar4,fStack00000000000000c8,in_stack_00000060,
               (unaff_s8 * fVar2 + unaff_s9 * fVar5 + unaff_s11 * fVar3) - unaff_s10 * fVar6,
               (unaff_s9 * fVar6 + unaff_s10 * fVar5 + unaff_s11 * fVar2) - unaff_s8 * fVar3,
               (unaff_s10 * fVar3 + unaff_s8 * fVar5 + unaff_s11 * fVar6) - unaff_s9 * fVar2,
               ((unaff_s11 * fVar5 - unaff_s9 * fVar3) - unaff_s10 * fVar2) - unaff_s8 * fVar6);
  return;
}


