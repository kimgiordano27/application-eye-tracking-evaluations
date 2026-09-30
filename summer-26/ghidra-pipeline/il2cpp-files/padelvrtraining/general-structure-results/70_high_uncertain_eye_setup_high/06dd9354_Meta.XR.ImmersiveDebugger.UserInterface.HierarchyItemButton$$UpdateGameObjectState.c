/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$UpdateGameObjectState
ENTRY_POINT: 06dd9354
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dd93b8) */

void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__UpdateGameObjectState(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x21;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000078;
  
  FUN_0528a32c();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540();
  }
  if (in_stack_00000008 != 1) {
    if (in_stack_00000078._4_1_ != '\0') {
      thunk_FUN_03d180a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0(in_stack_00000010);
  }
  plVar1 = (long *)__cxa_begin_catch(in_stack_00000010);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000078._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540(lVar2);
  }
  return;
}


