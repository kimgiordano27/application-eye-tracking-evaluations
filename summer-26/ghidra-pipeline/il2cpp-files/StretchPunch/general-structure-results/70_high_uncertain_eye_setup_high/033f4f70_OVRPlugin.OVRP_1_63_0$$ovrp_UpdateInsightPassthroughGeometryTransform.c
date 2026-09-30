/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 033f4f70
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f500c) */
/* WARNING: Removing unreachable block (ram,0x033f4fe0) */

undefined8 OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform(void)

{
  bool in_ZR;
  long *plVar1;
  long lVar2;
  int unaff_w25;
  undefined8 in_stack_00000010;
  
  if (in_ZR) {
    plVar1 = (long *)__cxa_begin_catch();
    lVar2 = *plVar1;
    __cxa_end_catch();
    if (in_stack_00000010._4_1_ != '\0') {
      FUN_01dccd6c();
    }
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db68(lVar2);
    }
    FUN_033f597c(&stack0x00000018);
  }
  else {
    if (in_stack_00000010._4_1_ != '\0') {
      FUN_01dccd6c();
    }
    if (unaff_w25 != 1) {
      FUN_033f597c(&stack0x00000018);
                    /* WARNING: Subroutine does not return */
      FUN_01e7f0d0();
    }
    plVar1 = (long *)__cxa_begin_catch();
    lVar2 = *plVar1;
    __cxa_end_catch();
    FUN_033f597c(&stack0x00000018);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db68(lVar2);
    }
  }
  return 1;
}


