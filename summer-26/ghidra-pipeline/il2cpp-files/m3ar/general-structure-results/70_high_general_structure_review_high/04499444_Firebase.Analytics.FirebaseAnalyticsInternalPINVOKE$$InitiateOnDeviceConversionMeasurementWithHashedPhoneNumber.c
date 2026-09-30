/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$InitiateOnDeviceConversionMeasurementWithHashedPhoneNumber
ENTRY_POINT: 04499444
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


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__InitiateOnDeviceConversionMeasurementWithHashedPhoneNumber
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_0445597c();
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar3 != 0)) {
    uVar2 = FUN_04454e88(lVar3,0x21,1,0);
    puVar1 = PTR_DAT_08f7eca0;
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar3 != 0)) {
      lVar5 = *(long *)(lVar3 + 0x88);
      lVar3 = *(long *)PTR_DAT_08f7eca0;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar3 = *(long *)puVar1;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0xb8);
      lVar6 = puVar4[3];
      if (lVar6 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar7 = *puVar4;
        lVar6 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f72d58);
        FUN_0532c238(lVar6,uVar7,*(undefined8 *)PTR_DAT_08f7ec98,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar6;
      }
      if (lVar5 != 0) {
        FUN_057d5d8c(lVar5,lVar6,*(undefined8 *)PTR_DAT_08f72d68);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


