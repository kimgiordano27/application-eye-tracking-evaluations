/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 051ba1d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined1 param_7 [16],float param_8)

{
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_s17;
  float fVar6;
  float in_s19;
  float in_s21;
  float in_s22;
  float in_s24;
  float in_s25;
  float in_s26;
  float in_s27;
  float in_stack_00000010;
  undefined8 in_stack_00000048;
  float in_stack_00000090;
  
  fVar6 = (in_stack_00000048._4_4_ - in_stack_00000090) *
          (in_stack_00000048._4_4_ - in_stack_00000090) + param_4 * param_4 + param_5 * param_5;
  fVar4 = (in_stack_00000010 - in_stack_00000090) * (in_stack_00000010 - in_stack_00000090) +
          param_6 * param_6 + (in_s22 - param_8) * (in_s22 - param_8);
  fVar2 = (in_s26 - in_stack_00000090) * (in_s26 - in_stack_00000090) +
          (in_s27 - in_s17) * (in_s27 - in_s17) + (in_s25 - param_8) * (in_s25 - param_8);
  fVar3 = (param_3 - in_stack_00000090) * (param_3 - in_stack_00000090) +
          (param_1 - in_s17) * (param_1 - in_s17) + (param_2 - param_8) * (param_2 - param_8);
  fVar5 = fVar2;
  if (fVar3 <= fVar2) {
    fVar5 = fVar3;
  }
  fVar3 = fVar4;
  if (fVar5 <= fVar4) {
    fVar3 = fVar5;
  }
  fVar5 = fVar6;
  if (fVar3 <= fVar6) {
    fVar5 = fVar3;
  }
  if (fVar6 == fVar5) {
    *unaff_x20 = in_s21;
    uVar1 = 0;
    param_2 = in_s19;
  }
  else if (fVar4 == fVar5) {
    *unaff_x20 = in_s24;
    uVar1 = 0x43340000;
    in_stack_00000048._4_4_ = in_stack_00000010;
    param_2 = in_s22;
  }
  else if (fVar2 == fVar5) {
    *unaff_x20 = in_s27;
    uVar1 = 0x42b40000;
    in_stack_00000048._4_4_ = in_s26;
    param_2 = in_s25;
  }
  else {
    *unaff_x20 = param_1;
    uVar1 = 0xc2b40000;
    in_stack_00000048._4_4_ = param_3;
  }
  unaff_x20[1] = param_2;
  unaff_x20[2] = in_stack_00000048._4_4_;
  *unaff_x19 = uVar1;
  return;
}


