/*
FUNCTION_NAME: OVRGLTFAccessor$$ReadAsInt
ENTRY_POINT: 027c4d3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027c4ea8) */

void OVRGLTFAccessor__ReadAsInt(undefined8 param_1,int param_2)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
    *(undefined1 *)(unaff_x20 + 0xa0) = 1;
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar2);
    }
    lVar2 = 0;
  }
  else {
    *(undefined1 *)(unaff_x20 + 0xa0) = 1;
    if (param_2 != 1) {
      if (in_stack_00000008._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  return;
}


