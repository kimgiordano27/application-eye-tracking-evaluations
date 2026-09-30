/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 01db15d4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db16f8) */

void OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(undefined8 param_1,int param_2)

{
  long *plVar1;
  long unaff_x19;
  long lVar2;
  long *unaff_x25;
  char in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008 != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dad12c(unaff_x19 + 0x24,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_010dc9f4(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008 != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dad12c(unaff_x19 + 0x24,0);
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c(lVar2);
  }
  return;
}


