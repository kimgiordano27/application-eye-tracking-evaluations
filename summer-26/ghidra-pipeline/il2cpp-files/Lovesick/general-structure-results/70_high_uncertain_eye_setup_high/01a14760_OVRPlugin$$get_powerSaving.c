/*
FUNCTION_NAME: OVRPlugin$$get_powerSaving
ENTRY_POINT: 01a14760
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


void OVRPlugin__get_powerSaving(void)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 in_s3;
  float fVar7;
  float fVar8;
  undefined4 in_s4;
  float fVar9;
  undefined4 in_s5;
  float fVar10;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
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
  float in_stack_000001a0;
  float fStack00000000000001a4;
  float in_stack_000001a8;
  float fStack00000000000001b0;
  float fStack00000000000001b4;
  float fStack00000000000001b8;
  float in_stack_00000208;
  float in_stack_0000020c;
  
  fStack00000000000001b0 = (float)in_s3;
  fStack00000000000001b4 = (float)in_s4;
  fStack00000000000001b8 = (float)in_s5;
  uVar1 = FUN_011e70d8();
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar5 = in_stack_00000080;
  fVar6 = in_stack_00000090;
  fVar2 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000d0);
  fStack00000000000001b0 = unaff_s14 + fStack0000000000000040;
  fStack00000000000001b4 = unaff_s15 + fStack0000000000000044;
  fStack00000000000001b8 = unaff_s12 + fStack0000000000000048;
  in_stack_000001a0 = unaff_s9 + in_stack_00000000._4_4_;
  fStack00000000000001a4 = unaff_s10 + fStack0000000000000008;
  in_stack_000001a8 = unaff_s11 + fStack000000000000000c;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000b8 = 0;
  uVar1 = FUN_011e70d8(&stack0x000000b8,&stack0x000001b0,&stack0x000001a0,*unaff_x23);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar12 = in_stack_00000080;
  fVar13 = in_stack_00000090;
  fVar3 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar10 = (float)in_stack_00000070;
  fVar11 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (in_stack_0000020c - fVar10) * (in_stack_0000020c - fVar10) +
           (in_stack_00000208 - in_stack_00000080) * (in_stack_00000208 - in_stack_00000080);
  fVar9 = (fStack0000000000000010 - in_stack_00000090) *
          (fStack0000000000000010 - in_stack_00000090) +
          (in_stack_00000018 - fVar10) * (in_stack_00000018 - fVar10) +
          (fStack0000000000000014 - in_stack_00000080) *
          (fStack0000000000000014 - in_stack_00000080);
  fVar7 = (fVar6 - in_stack_00000090) * (fVar6 - in_stack_00000090) +
          (fVar2 - fVar10) * (fVar2 - fVar10) +
          (fVar5 - in_stack_00000080) * (fVar5 - in_stack_00000080);
  fVar8 = (fVar13 - in_stack_00000090) * (fVar13 - in_stack_00000090) +
          (fVar3 - fVar10) * (fVar3 - fVar10) +
          (fVar12 - in_stack_00000080) * (fVar12 - in_stack_00000080);
  fVar10 = fVar7;
  if (fVar8 <= fVar7) {
    fVar10 = fVar8;
  }
  fVar8 = fVar9;
  if (fVar10 <= fVar9) {
    fVar8 = fVar10;
  }
  fVar10 = fVar11;
  if (fVar8 <= fVar11) {
    fVar10 = fVar8;
  }
  if (fVar11 == fVar10) {
    *unaff_x20 = in_stack_0000020c;
    uVar4 = 0;
    fVar12 = in_stack_00000208;
    fVar13 = fStack000000000000004c;
  }
  else if (fVar9 == fVar10) {
    *unaff_x20 = in_stack_00000018;
    uVar4 = 0x43340000;
    fVar12 = fStack0000000000000014;
    fVar13 = fStack0000000000000010;
  }
  else if (fVar7 == fVar10) {
    *unaff_x20 = fVar2;
    uVar4 = 0x42b40000;
    fVar12 = fVar5;
    fVar13 = fVar6;
  }
  else {
    *unaff_x20 = fVar3;
    uVar4 = 0xc2b40000;
  }
  unaff_x20[1] = fVar12;
  unaff_x20[2] = fVar13;
  *unaff_x19 = uVar4;
  return;
}


