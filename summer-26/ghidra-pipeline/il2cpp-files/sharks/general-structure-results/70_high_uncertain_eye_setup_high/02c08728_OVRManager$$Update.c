/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 02c08728
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c087ac) */
/* WARNING: Removing unreachable block (ram,0x02c0877c) */

undefined8 OVRManager__Update(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_02a30410();
  if (param_2 != 1) {
    FUN_02a304b4(&stack0x00000008,0);
                    /* WARNING: Subroutine does not return */
    FUN_018fe5f4();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_02a304b4(&stack0x00000008,0);
  if (lVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a0(lVar2);
}


