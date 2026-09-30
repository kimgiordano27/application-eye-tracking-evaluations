/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 0567297c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 113
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
OVRPlugin__set_useDynamicFoveatedRendering
          (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  uint uVar1;
  int in_w11;
  long unaff_x20;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined4 in_stack_00000050;
  
  uStack0000000000000040 = param_3._0_8_;
  uStack0000000000000030 = param_2._0_8_;
  *(int *)(unaff_x20 + 0x1c) = in_w11 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar1 * 0x24;
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(param_1 + 0x28) = param_2._8_8_;
      *(undefined8 *)(param_1 + 0x20) = uStack0000000000000030;
      *(long *)(param_1 + 0x38) = param_3._8_8_;
      *(undefined8 *)(param_1 + 0x30) = uStack0000000000000040;
      *(undefined4 *)(param_1 + 0x40) = in_stack_00000050;
    }
    else {
      FUN_04018ed8();
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


