/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$Awake
ENTRY_POINT: 06e291e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__Awake(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *in_stack_00000008;
  
  FUN_03c8f898(PTR_DAT_08e938e0);
  *(undefined1 *)(unaff_x21 + 0x9c) = 1;
  in_stack_00000008 = (long *)0x0;
  if ((unaff_x19 != 0) && (*(long *)(unaff_x20 + 0x88) != 0)) {
    uVar1 = FUN_0675b410(*(long *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x19 + 0x18),
                         &stack0x00000008,*(undefined8 *)PTR_DAT_08e938d8);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_06e29284;
      uVar1 = FUN_0675b410(*(long *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x19 + 0x18));
      if ((uVar1 & 1) == 0) {
        return 0;
      }
    }
    else if (in_stack_00000008 != (long *)0x0) {
      (**(code **)(*in_stack_00000008 + 0x2f8))
                (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x300));
    }
    return 1;
  }
LAB_06e29284:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


