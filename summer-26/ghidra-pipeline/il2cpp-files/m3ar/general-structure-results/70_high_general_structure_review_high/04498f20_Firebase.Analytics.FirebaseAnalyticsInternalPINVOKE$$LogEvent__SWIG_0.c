/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$LogEvent__SWIG_0
ENTRY_POINT: 04498f20
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__LogEvent__SWIG_0
               (long param_1,long param_2)

{
  long lVar1;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x50), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    FUN_044396a0(lVar1,*(undefined4 *)(param_1 + 0xb0),0);
    if (((*(long *)(param_2 + 0x10) != 0) &&
        (lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x48), lVar1 != 0)) &&
       (lVar1 = *(long *)(lVar1 + 0x50), lVar1 != 0)) {
      FUN_04452d24(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


