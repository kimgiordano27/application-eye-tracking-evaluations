/*
FUNCTION_NAME: Fusion.NetworkLinkedList<__Il2CppFullySharedGenericType>$$Clear
ENTRY_POINT: 021387f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02138880) */

void Fusion_NetworkLinkedList<__Il2CppFullySharedGenericType>__Clear(void)

{
  long *plVar1;
  long unaff_x19;
  long lVar2;
  int unaff_w26;
  long unaff_x27;
  long unaff_x29;
  
  OVRManager_<>c__<InitOVRManager>b__424_0();
  if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (unaff_w26 != 1) {
    thunk_FUN_01a4b338();
    *(undefined4 *)(unaff_x19 + 0x2c) = 0;
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  thunk_FUN_01a4b338();
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


