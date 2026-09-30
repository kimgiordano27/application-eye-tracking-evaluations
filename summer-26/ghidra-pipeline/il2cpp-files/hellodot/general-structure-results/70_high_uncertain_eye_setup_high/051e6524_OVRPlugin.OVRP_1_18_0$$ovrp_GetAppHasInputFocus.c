/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 051e6524
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8668);
  *(undefined1 *)(unaff_x22 + 0x635) = 1;
  FUN_04f7383c();
  uVar2 = FUN_02ce7ad4(*unaff_x21,12000);
  *(long *)(unaff_x19 + 0x10) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  puVar1 = PTR_DAT_065c8668;
  if (unaff_x20 != 0) {
    FUN_05ea6b58();
    FUN_05ea5fb8(*(undefined8 *)puVar1,12000,1,48000,0,0);
    FUN_05ea6910();
    FUN_051e65b8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


