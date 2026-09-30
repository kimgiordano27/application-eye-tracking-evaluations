/*
FUNCTION_NAME: OVRPlugin$$SendUnifiedEvent
ENTRY_POINT: 090a3870
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SendUnifiedEvent(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  
  if ((*(char *)(param_1 + 0x38) == '\0') || (lVar1 = *(long *)(param_1 + 0x48), lVar1 == 0)) {
    if (in_stack_00000020 == 0) goto LAB_090a3910;
    if ((*(char *)(in_stack_00000020 + 0x38) == '\0') ||
       (lVar1 = *(long *)(in_stack_00000020 + 0x48), lVar1 == 0)) {
      return 0;
    }
  }
  else {
    if (in_stack_00000020 == 0) goto LAB_090a3910;
    if ((*(char *)(in_stack_00000020 + 0x38) != '\0') && (*(long *)(in_stack_00000020 + 0x48) != 0))
    {
      in_stack_00000008 = *(long *)(in_stack_00000020 + 0x48);
      in_stack_00000010 = lVar1;
      FUN_0909b57c(in_stack_00000018._4_4_,&stack0x00000010,&stack0x00000008);
      return 1;
    }
  }
  if (*unaff_x19 != 0) {
    FUN_0909b49c(*unaff_x19,lVar1,0);
                    /* try { // try from 090a3904 to 091a399f has its CatchHandler @ 090a3904
                       catch() { ... } // from try @ 090a3904 with catch @ 090a3904
                       catch() { ... } // from try @ 090a3b68 with catch @ 090a3904
                       catch() { ... } // from try @ 090a3bb0 with catch @ 090a3904
                       catch() { ... } // from try @ 090a3bd4 with catch @ 090a3904 */
    return 1;
  }
LAB_090a3910:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


