/*
FUNCTION_NAME: OVRPlugin$$StartKeyboardTracking
ENTRY_POINT: 0368b4d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0368b524) */

undefined4 OVRPlugin__StartKeyboardTracking(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 unaff_w20;
  undefined8 *unaff_x22;
  
  if (param_2 != 1) {
    FUN_02ce09d8(&stack0x00000018,*unaff_x22);
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_02ce09d8(&stack0x00000018,*unaff_x22);
  if (lVar2 == 0) {
    return unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar2);
}


