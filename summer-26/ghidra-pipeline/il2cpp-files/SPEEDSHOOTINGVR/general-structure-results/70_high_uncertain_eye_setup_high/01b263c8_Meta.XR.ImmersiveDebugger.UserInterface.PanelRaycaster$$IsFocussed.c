/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$IsFocussed
ENTRY_POINT: 01b263c8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__IsFocussed(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_010303a8();
  uVar1 = FUN_01c42574();
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar2 = thunk_FUN_010400dc();
  uVar3 = thunk_FUN_010303a8(PTR_DAT_0234d120);
  FUN_01c5e198(uVar2,uVar1,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar2);
}


