/*
FUNCTION_NAME: OVRPlugin.OVRP_1_32_0$$ovrp_AddCustomMetadata
ENTRY_POINT: 05bf05e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_32_0__ovrp_AddCustomMetadata(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_07116d28);
  *(undefined1 *)(unaff_x20 + 0xdb0) = 1;
  puVar2 = PTR_DAT_07116d18;
  puVar1 = PTR_DAT_07116d10;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_042e54fc(&stack0x00000018,*(long *)(unaff_x19 + 0x68),*(undefined8 *)PTR_DAT_07116d28);
  while( true ) {
    uVar3 = FUN_054518b4(&stack0x00000018,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_054518b0(&stack0x00000018,*(undefined8 *)puVar1);
      return;
    }
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar4 = *(long *)(in_stack_00000028 + 0x20);
    FUN_05beff08(*(long *)(unaff_x19 + 0x40),*(undefined4 *)(in_stack_00000028 + 0x10));
    if (lVar4 == 0) break;
    FUN_06a576ec(lVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


