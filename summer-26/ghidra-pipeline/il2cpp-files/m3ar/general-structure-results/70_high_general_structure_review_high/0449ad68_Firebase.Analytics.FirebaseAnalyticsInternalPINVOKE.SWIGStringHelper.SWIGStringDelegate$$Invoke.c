/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE.SWIGStringHelper.SWIGStringDelegate$$Invoke
ENTRY_POINT: 0449ad68
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate__Invoke
               (void)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = unaff_x20;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar1 = *unaff_x19;
  lVar4 = *(long *)PTR_DAT_08f7b800;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *(long *)(lVar4 + 0x20)) {
        lVar1 = lVar1 + (long)(int)(*piVar3 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 + 0x138;
        goto Firebase_AppOptions__get_DatabaseUrl;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  lVar1 = FUN_0406ae20();
Firebase_AppOptions__get_DatabaseUrl:
  lVar1 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar1 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x0449aef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


