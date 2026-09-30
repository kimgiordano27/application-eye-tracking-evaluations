/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_DestroyVirtualKeyboard
ENTRY_POINT: 07cad7d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_DestroyVirtualKeyboard(void)

{
  int in_w8;
  undefined8 *puVar1;
  undefined1 in_w9;
  long unaff_x19;
  int unaff_w20;
  
  *(undefined1 *)(unaff_x19 + 0x60) = in_w9;
  if (in_w8 == 0) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    puVar1 = (undefined8 *)PTR_DAT_09f51200;
    if (unaff_w20 == 0) {
      FUN_094c33b0(*(undefined8 *)PTR_DAT_09f51208,0);
      *(undefined1 *)(unaff_x19 + 0x60) = 0;
      return;
    }
  }
  else {
    if (unaff_w20 != 0) {
      FUN_07cab054();
    }
    puVar1 = (undefined8 *)PTR_DAT_09f51210;
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      puVar1 = (undefined8 *)PTR_DAT_09f51210;
    }
  }
  FUN_094c652c(*puVar1,0);
  return;
}


