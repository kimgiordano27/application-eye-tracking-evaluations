/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance
ENTRY_POINT: 05cfb820
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
               undefined1 param_5 [16])

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  uStack0000000000000000 = param_4._0_8_;
  uStack000000000000000c = param_5._0_4_;
  uStack0000000000000010 = param_5._4_4_;
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_3;
  if (param_1 != 0) {
    in_stack_000000b8 = CONCAT44(uStack000000000000000c,param_4._8_4_);
    pcVar2 = *(code **)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(unaff_x21 + 0x34) = param_5._8_8_;
    *(long *)(unaff_x21 + 0x2c) = param_5._0_8_;
    in_stack_000000b0 = uStack0000000000000000;
    in_stack_000000d0 = param_2;
    in_stack_000000e0 = param_3;
    (*pcVar2)(uVar1,&stack0x000000d0,&stack0x000000b0,*(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


