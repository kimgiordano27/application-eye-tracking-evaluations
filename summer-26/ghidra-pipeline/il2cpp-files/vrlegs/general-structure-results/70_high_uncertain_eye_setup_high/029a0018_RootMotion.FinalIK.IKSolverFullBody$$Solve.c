/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFullBody$$Solve
ENTRY_POINT: 029a0018
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x029a00c4) */
/* WARNING: Removing unreachable block (ram,0x029a008c) */

undefined8 RootMotion_FinalIK_IKSolverFullBody__Solve(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  char cStack0000000000000028;
  char cStack000000000000002c;
  
  if (param_2 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
    if (cStack0000000000000028 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar2);
    }
    lVar2 = 0;
  }
  else {
    if (cStack0000000000000028 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (param_2 != 1) {
      if (cStack000000000000002c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
  }
  if (cStack000000000000002c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  return 0;
}


