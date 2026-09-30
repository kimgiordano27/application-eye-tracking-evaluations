/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilSupported
ENTRY_POINT: 060104a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_gpuUtilSupported(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_07a469a1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f7388);
    DAT_07a469a1 = 1;
  }
  if (param_2 != 0) {
    lVar1 = FUN_03e0d654(param_2,*(undefined8 *)PTR_DAT_075f7388);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar2 = FUN_0600f744(*(long *)(param_1 + 0x20)), lVar1 != 0)) {
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      thunk_FUN_0329bf60();
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


