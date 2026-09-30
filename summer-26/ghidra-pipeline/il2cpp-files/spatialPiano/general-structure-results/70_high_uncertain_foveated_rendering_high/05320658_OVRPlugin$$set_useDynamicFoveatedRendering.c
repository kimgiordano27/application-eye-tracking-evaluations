/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05320658
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(void)

{
  float *pfVar1;
  undefined8 *unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  undefined4 uVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_stack_00000060;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  *(undefined1 *)(unaff_x23 + 0x2c1) = 1;
  pfVar1 = *(float **)(*unaff_x22 + 0xb8);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar2 = (float)FUN_0531f5c0(uStack00000000000000cc,fStack00000000000000c8,in_stack_00000060);
  fVar4 = unaff_s12 * fVar4;
  fStack00000000000000c8 = unaff_s12 * fVar5 + fStack00000000000000c8;
  in_stack_00000060 = unaff_s12 * fVar6 + in_stack_00000060;
  uVar3 = FUN_0531f9e8(fVar4 + fVar2,fStack00000000000000c8,in_stack_00000060);
  fVar2 = fStack00000000000000c8;
  fVar5 = in_stack_00000060;
  fVar6 = (float)FUN_05320778();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_060fda18(uVar3,fStack00000000000000c8,in_stack_00000060,
               (unaff_s8 * fVar2 + unaff_s9 * fVar4 + unaff_s11 * fVar6) - unaff_s10 * fVar5,
               (unaff_s9 * fVar5 + unaff_s10 * fVar4 + unaff_s11 * fVar2) - unaff_s8 * fVar6,
               (unaff_s10 * fVar6 + unaff_s8 * fVar4 + unaff_s11 * fVar5) - unaff_s9 * fVar2,
               ((unaff_s11 * fVar4 - unaff_s9 * fVar6) - unaff_s10 * fVar2) - unaff_s8 * fVar5);
  return;
}


