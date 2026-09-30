/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 07a37244
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState6(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  float *unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 uStack0000000000000098;
  
  uStack0000000000000098 = 0;
  uVar1 = FUN_068cd8bc();
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = uStack0000000000000098;
  fVar4 = unaff_s14;
  fVar5 = unaff_s12;
  fVar3 = (float)FUN_07a36784(unaff_s8,uVar1,&stack0x00000070);
  fVar8 = (fVar5 - unaff_s12) * (fVar5 - unaff_s12) +
          (fVar3 - unaff_s8) * (fVar3 - unaff_s8) + (fVar4 - unaff_s14) * (fVar4 - unaff_s14);
  fVar6 = (in_stack_00000048 - unaff_s12) * (in_stack_00000048 - unaff_s12) +
          (in_stack_00000068 - unaff_s8) * (in_stack_00000068 - unaff_s8) +
          (fStack0000000000000064 - unaff_s14) * (fStack0000000000000064 - unaff_s14);
  fVar9 = fVar6;
  if (fVar8 <= fVar6) {
    fVar9 = fVar8;
  }
  fVar7 = (in_stack_00000018._4_4_ - unaff_s12) * (in_stack_00000018._4_4_ - unaff_s12) +
          (fStack0000000000000024 - unaff_s8) * (fStack0000000000000024 - unaff_s8) +
          (fStack0000000000000020 - unaff_s14) * (fStack0000000000000020 - unaff_s14);
  fVar10 = (fStack0000000000000058 - unaff_s12) * (fStack0000000000000058 - unaff_s12) +
           (fStack0000000000000060 - unaff_s8) * (fStack0000000000000060 - unaff_s8) +
           (fStack000000000000005c - unaff_s14) * (fStack000000000000005c - unaff_s14);
  fVar8 = fVar7;
  if (fVar9 <= fVar7) {
    fVar8 = fVar9;
  }
  fVar9 = fVar10;
  if (fVar8 <= fVar10) {
    fVar9 = fVar8;
  }
  if (fVar10 == fVar9) {
    uVar2 = 0;
    *unaff_x20 = fStack0000000000000060;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fStack0000000000000058;
  }
  else if (fVar7 == fVar9) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fStack0000000000000020;
    uVar2 = 0x43340000;
    unaff_x20[2] = in_stack_00000018._4_4_;
  }
  else if (fVar6 == fVar9) {
    *unaff_x20 = in_stack_00000068;
    unaff_x20[1] = fStack0000000000000064;
    uVar2 = 0x42b40000;
    unaff_x20[2] = in_stack_00000048;
  }
  else {
    *unaff_x20 = fVar3;
    unaff_x20[1] = fVar4;
    uVar2 = 0xc2b40000;
    unaff_x20[2] = fVar5;
  }
  *unaff_x19 = uVar2;
  return;
}


