/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 051182c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0511836c) */

undefined8 OVRManager__remove_VrFocusLost(void)

{
  long *plVar1;
  int unaff_w20;
  long lVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000048;
  
  if (unaff_w20 != 1) {
    if (in_stack_00000048._4_1_ != '\0') {
      thunk_FUN_02d6ec70();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02e42304(in_stack_00000000);
  }
  plVar1 = (long *)__cxa_begin_catch(in_stack_00000000);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000048._4_1_ != '\0') {
    thunk_FUN_02d6ec70();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0(lVar2);
  }
  return 0;
}


