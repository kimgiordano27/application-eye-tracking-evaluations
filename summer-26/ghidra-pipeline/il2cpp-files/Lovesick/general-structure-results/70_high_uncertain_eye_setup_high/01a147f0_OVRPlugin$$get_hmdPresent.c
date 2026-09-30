/*
FUNCTION_NAME: OVRPlugin$$get_hmdPresent
ENTRY_POINT: 01a147f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hmdPresent(void)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 in_s4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float in_stack_00000030;
  undefined8 in_stack_00000048;
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
  undefined4 uStack00000000000001a4;
  float in_stack_00000208;
  float in_stack_0000020c;
  
  uStack00000000000001a4 = in_s4;
  uVar1 = FUN_011e70d8();
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar9 = in_stack_00000080;
  fVar10 = in_stack_00000090;
  fVar2 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar7 = (float)in_stack_00000070;
  fVar8 = (in_stack_00000048._4_4_ - in_stack_00000090) *
          (in_stack_00000048._4_4_ - in_stack_00000090) +
          (in_stack_0000020c - fVar7) * (in_stack_0000020c - fVar7) +
          (in_stack_00000208 - in_stack_00000080) * (in_stack_00000208 - in_stack_00000080);
  fVar6 = (fStack0000000000000010 - in_stack_00000090) *
          (fStack0000000000000010 - in_stack_00000090) +
          (in_stack_00000018 - fVar7) * (in_stack_00000018 - fVar7) +
          (fStack0000000000000014 - in_stack_00000080) *
          (fStack0000000000000014 - in_stack_00000080);
  fVar4 = (in_stack_00000030 - in_stack_00000090) * (in_stack_00000030 - in_stack_00000090) +
          (in_stack_00000060 - fVar7) * (in_stack_00000060 - fVar7) +
          (in_stack_00000050 - in_stack_00000080) * (in_stack_00000050 - in_stack_00000080);
  fVar5 = (fVar10 - in_stack_00000090) * (fVar10 - in_stack_00000090) +
          (fVar2 - fVar7) * (fVar2 - fVar7) +
          (fVar9 - in_stack_00000080) * (fVar9 - in_stack_00000080);
  fVar7 = fVar4;
  if (fVar5 <= fVar4) {
    fVar7 = fVar5;
  }
  fVar5 = fVar6;
  if (fVar7 <= fVar6) {
    fVar5 = fVar7;
  }
  fVar7 = fVar8;
  if (fVar5 <= fVar8) {
    fVar7 = fVar5;
  }
  if (fVar8 == fVar7) {
    *unaff_x20 = in_stack_0000020c;
    uVar3 = 0;
    fVar9 = in_stack_00000208;
    fVar10 = in_stack_00000048._4_4_;
  }
  else if (fVar6 == fVar7) {
    *unaff_x20 = in_stack_00000018;
    uVar3 = 0x43340000;
    fVar9 = fStack0000000000000014;
    fVar10 = fStack0000000000000010;
  }
  else if (fVar4 == fVar7) {
    *unaff_x20 = in_stack_00000060;
    uVar3 = 0x42b40000;
    fVar9 = in_stack_00000050;
    fVar10 = in_stack_00000030;
  }
  else {
    *unaff_x20 = fVar2;
    uVar3 = 0xc2b40000;
  }
  unaff_x20[1] = fVar9;
  unaff_x20[2] = fVar10;
  *unaff_x19 = uVar3;
  return;
}


