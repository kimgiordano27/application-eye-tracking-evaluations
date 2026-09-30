/*
FUNCTION_NAME: FUN_05c20aec
ENTRY_POINT: 05c20aec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1
*/


void FUN_05c20aec(long param_1)

{
  long lVar1;
  
  if ((DAT_066d5f88 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPermissionsRequester_IsPermissionSupportedByPlatform__);
    DAT_066d5f88 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05ca2828(param_1,0);
    }
    if (DAT_066d5fc0 == (code *)0x0) {
      DAT_066d5fc0 = (code *)FUN_02b3c7e0(
                                         "UnityEngine.Animation::get_animatePhysics_Injected(System.IntPtr)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x05c20b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_066d5fc0)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


