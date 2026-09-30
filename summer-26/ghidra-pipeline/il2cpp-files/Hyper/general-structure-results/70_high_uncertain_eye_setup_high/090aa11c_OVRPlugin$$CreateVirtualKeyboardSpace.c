/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboardSpace
ENTRY_POINT: 090aa11c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateVirtualKeyboardSpace(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  undefined8 in_stack_000000c8;
  
  uStack00000000000000b0 = in_stack_000000c8;
  fVar5 = unaff_s14;
  fVar6 = unaff_s12;
  uStack00000000000000a0 = param_1;
  fVar3 = (float)FUN_090a96b4(unaff_s8,param_2,&stack0x000000a0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  fStack0000000000000064 = fVar5;
  uVar1 = FUN_07ad77dc(unaff_s9 + fStack0000000000000054,unaff_s13 + fStack0000000000000050,
                       unaff_s11 + in_stack_00000048._4_4_,
                       in_stack_00000008._4_4_ + in_stack_00000030,
                       unaff_s10 + fStack000000000000002c,unaff_s15 + fStack0000000000000028,
                       &stack0x00000088,*unaff_x23);
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  fVar5 = unaff_s14;
  fVar7 = unaff_s12;
  fVar4 = (float)FUN_090a96b4(unaff_s8,uVar1,&stack0x00000070);
  fVar10 = (fVar7 - unaff_s12) * (fVar7 - unaff_s12) +
           (fVar4 - unaff_s8) * (fVar4 - unaff_s8) + (fVar5 - unaff_s14) * (fVar5 - unaff_s14);
  fVar8 = (fVar6 - unaff_s12) * (fVar6 - unaff_s12) +
          (fVar3 - unaff_s8) * (fVar3 - unaff_s8) +
          (fStack0000000000000064 - unaff_s14) * (fStack0000000000000064 - unaff_s14);
  fVar11 = fVar8;
  if (fVar10 <= fVar8) {
    fVar11 = fVar10;
  }
  fVar9 = (in_stack_00000018._4_4_ - unaff_s12) * (in_stack_00000018._4_4_ - unaff_s12) +
          (fStack0000000000000024 - unaff_s8) * (fStack0000000000000024 - unaff_s8) +
          (fStack0000000000000020 - unaff_s14) * (fStack0000000000000020 - unaff_s14);
  fVar12 = (fStack0000000000000058 - unaff_s12) * (fStack0000000000000058 - unaff_s12) +
           (in_stack_00000060 - unaff_s8) * (in_stack_00000060 - unaff_s8) +
           (fStack000000000000005c - unaff_s14) * (fStack000000000000005c - unaff_s14);
  fVar10 = fVar9;
  if (fVar11 <= fVar9) {
    fVar10 = fVar11;
  }
  fVar11 = fVar12;
  if (fVar10 <= fVar12) {
    fVar11 = fVar10;
  }
  if (fVar12 == fVar11) {
    uVar2 = 0;
    *unaff_x20 = in_stack_00000060;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fStack0000000000000058;
  }
  else if (fVar9 == fVar11) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fStack0000000000000020;
    uVar2 = 0x43340000;
    unaff_x20[2] = in_stack_00000018._4_4_;
  }
  else if (fVar8 == fVar11) {
    *unaff_x20 = fVar3;
    unaff_x20[1] = fStack0000000000000064;
    uVar2 = 0x42b40000;
    unaff_x20[2] = fVar6;
  }
  else {
    *unaff_x20 = fVar4;
    unaff_x20[1] = fVar5;
    uVar2 = 0xc2b40000;
    unaff_x20[2] = fVar7;
  }
  *unaff_x19 = uVar2;
  return;
}


