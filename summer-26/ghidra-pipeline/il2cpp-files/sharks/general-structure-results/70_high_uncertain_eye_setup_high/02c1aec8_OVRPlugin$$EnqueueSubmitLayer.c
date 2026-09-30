/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 02c1aec8
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__EnqueueSubmitLayer(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_CY;
  undefined8 uVar1;
  undefined8 uVar2;
  long in_x9;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if (*(long *)(in_x9 + param_1 * 8) == 0) break;
    param_1 = param_1 + 1;
    if ((int)param_3 <= (int)(uint)param_1) {
      uVar1 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380ab10);
      FUN_02bf1554();
      return uVar1;
    }
    in_CY = param_3 <= (uint)param_1;
  }
  thunk_FUN_01851c08(PTR_DAT_0380b860);
  uVar1 = thunk_FUN_01861bbc();
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380b868);
  FUN_02b0d540(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380b870);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar1,uVar2);
}


