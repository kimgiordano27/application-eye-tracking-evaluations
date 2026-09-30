/*
FUNCTION_NAME: OVRPlugin$$GetDesiredEyeTextureFormat
ENTRY_POINT: 0531d640
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDesiredEyeTextureFormat
               (undefined8 param_1,float param_2,float param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s12;
  float unaff_s14;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000048;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  undefined8 in_stack_00000098;
  
  uStack0000000000000080 = in_stack_00000098;
  uStack0000000000000070 = param_1;
  fVar2 = (float)FUN_0531cb64(unaff_s8,param_4,&stack0x00000070);
  fVar5 = (param_3 - unaff_s12) * (param_3 - unaff_s12) +
          (fVar2 - unaff_s8) * (fVar2 - unaff_s8) + (param_2 - unaff_s14) * (param_2 - unaff_s14);
  fVar3 = (in_stack_00000048 - unaff_s12) * (in_stack_00000048 - unaff_s12) +
          (in_stack_00000068 - unaff_s8) * (in_stack_00000068 - unaff_s8) +
          (fStack0000000000000064 - unaff_s14) * (fStack0000000000000064 - unaff_s14);
  fVar6 = fVar3;
  if (fVar5 <= fVar3) {
    fVar6 = fVar5;
  }
  fVar4 = (in_stack_00000018._4_4_ - unaff_s12) * (in_stack_00000018._4_4_ - unaff_s12) +
          (fStack0000000000000024 - unaff_s8) * (fStack0000000000000024 - unaff_s8) +
          (fStack0000000000000020 - unaff_s14) * (fStack0000000000000020 - unaff_s14);
  fVar7 = (fStack0000000000000058 - unaff_s12) * (fStack0000000000000058 - unaff_s12) +
          (fStack0000000000000060 - unaff_s8) * (fStack0000000000000060 - unaff_s8) +
          (fStack000000000000005c - unaff_s14) * (fStack000000000000005c - unaff_s14);
  fVar5 = fVar4;
  if (fVar6 <= fVar4) {
    fVar5 = fVar6;
  }
  fVar6 = fVar7;
  if (fVar5 <= fVar7) {
    fVar6 = fVar5;
  }
  if (fVar7 == fVar6) {
    uVar1 = 0;
    *unaff_x20 = fStack0000000000000060;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fStack0000000000000058;
  }
  else if (fVar4 == fVar6) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fStack0000000000000020;
    uVar1 = 0x43340000;
    unaff_x20[2] = in_stack_00000018._4_4_;
  }
  else if (fVar3 == fVar6) {
    *unaff_x20 = in_stack_00000068;
    unaff_x20[1] = fStack0000000000000064;
    uVar1 = 0x42b40000;
    unaff_x20[2] = in_stack_00000048;
  }
  else {
    *unaff_x20 = fVar2;
    unaff_x20[1] = param_2;
    uVar1 = 0xc2b40000;
    unaff_x20[2] = param_3;
  }
  *unaff_x19 = uVar1;
  return;
}


