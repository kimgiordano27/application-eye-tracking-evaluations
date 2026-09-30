/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$FlattenEntries
ENTRY_POINT: 06d84138
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__FlattenEntries(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  if (param_1 == 0) goto LAB_06d841e0;
  if (*(char *)(param_1 + 0x98) != '\0') {
    FUN_06d845f4();
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_06d841e0;
    FUN_085db068(*(long *)(unaff_x19 + 0x28),1,0);
    if (*(char *)(unaff_x19 + 0x40) != '\0') {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_06d841e0;
      FUN_08587bfc(*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_06d841e0;
      FUN_08587bb0(0,*(long *)(unaff_x19 + 0x28),0);
    }
    uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_085e285c(uVar2,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0) {
LAB_06d841e0:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085db068(*(long *)(unaff_x19 + 0x30),1,0);
    }
    *(undefined1 *)(unaff_x19 + 0x51) = 1;
  }
  return;
}


