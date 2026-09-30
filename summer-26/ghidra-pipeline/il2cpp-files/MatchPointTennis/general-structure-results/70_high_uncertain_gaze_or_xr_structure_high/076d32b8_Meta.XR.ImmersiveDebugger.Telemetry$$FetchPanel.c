/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 076d32b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  FUN_04447ba8(PTR_DAT_09f2e640);
  FUN_04447ba8(PTR_DAT_09f2e648);
  *(undefined1 *)(unaff_x20 + 0xe06) = 1;
  puVar2 = PTR_DAT_09f2e638;
  puVar1 = PTR_DAT_09f2e630;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_05bae95c(&stack0x00000008,*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_09f2e648);
    while (uVar3 = FUN_0768d020(&stack0x00000008,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076d33c8();
    }
    FUN_0768d01c(&stack0x00000008,*(undefined8 *)puVar1);
  }
  return;
}


