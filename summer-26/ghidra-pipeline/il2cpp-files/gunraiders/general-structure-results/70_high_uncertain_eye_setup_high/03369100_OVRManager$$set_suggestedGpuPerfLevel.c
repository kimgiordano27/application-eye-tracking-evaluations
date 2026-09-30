/*
FUNCTION_NAME: OVRManager$$set_suggestedGpuPerfLevel
ENTRY_POINT: 03369100
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedGpuPerfLevel(void)

{
  uint uVar1;
  long lVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (unaff_x20 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        lVar2 = lVar2 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000010;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000008;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000000;
      }
      else {
        in_stack_00000048 = in_stack_00000008;
        in_stack_00000040 = in_stack_00000000;
        in_stack_00000050 = in_stack_00000010;
        FUN_02d35e70();
      }
      in_stack_00000040 = 0;
      in_stack_00000048 = 0;
      in_stack_00000050 = 0;
      FUN_03358634(&stack0x00000040,unaff_w19);
      unaff_x22[2] = in_stack_00000050;
      unaff_x22[1] = in_stack_00000048;
      *unaff_x22 = in_stack_00000040;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


