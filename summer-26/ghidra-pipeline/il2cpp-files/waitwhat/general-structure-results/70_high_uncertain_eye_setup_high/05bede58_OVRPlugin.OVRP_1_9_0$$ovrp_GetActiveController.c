/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetActiveController
ENTRY_POINT: 05bede58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_9_0__ovrp_GetActiveController(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xd8d) = 1;
  uVar2 = FUN_05bed8d8();
  puVar1 = PTR_DAT_07115490;
  if (((uVar2 & 1) != 0) && (*(long *)(unaff_x20 + 0x70) != 0)) {
    FUN_05bed3ec();
    if (*(long *)(unaff_x20 + 0x70) != 0) {
      uVar3 = FUN_05bedf00();
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(int *)(*(long *)PTR_DAT_07115490 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_0754e90e == '\0') {
    FUN_03188a78(PTR_DAT_07115490);
    DAT_0754e90e = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *(long *)puVar1;
  }
  *unaff_x19 = **(undefined8 **)(lVar4 + 0xb8);
  return 0;
}


