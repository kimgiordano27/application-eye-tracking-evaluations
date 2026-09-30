/*
FUNCTION_NAME: Fusion.NetworkLinkedList<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02139180
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x021391dc) */

undefined8
Fusion_NetworkLinkedList<__Il2CppFullySharedGenericType>__System_Collections_IEnumerable_GetEnumerator
          (undefined8 param_1,int param_2)

{
  void *__s;
  size_t __n;
  long *plVar1;
  long lVar2;
  long unaff_x29;
  
  if (param_2 != 1) {
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  __s = *(void **)(unaff_x29 + -0x20);
  __n = *(size_t *)(unaff_x29 + -0x18);
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  memset(__s,0,__n);
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


