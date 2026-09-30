/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE.SWIGExceptionHelper$$SetPendingInvalidOperationException
ENTRY_POINT: 04499b98
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE_SWIGExceptionHelper__SetPendingInvalidOperationException
               (undefined8 *param_1,long param_2)

{
  undefined1 in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  *(undefined1 *)(unaff_x19 + 0xb0) = in_w10;
  uVar1 = *param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_074f3c94(uVar1,0);
  if (unaff_x20 != 0) {
    FUN_04431a04();
    if (*(long *)(unaff_x19 + 0x78) != 0) {
      *(undefined8 *)(*(long *)(unaff_x19 + 0x78) + 0x30) = *(undefined8 *)PTR_DAT_08f7c8f8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


