/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$InitiateOnDeviceConversionMeasurementWithHashedEmailAddress
ENTRY_POINT: 044993c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__InitiateOnDeviceConversionMeasurementWithHashedEmailAddress
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  *(undefined1 *)(unaff_x20 + 0xc44) = 1;
  if ((*(long *)(unaff_x19 + 0x48) != 0) && (*(long *)(unaff_x19 + 0x70) != 0)) {
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50);
    lVar2 = FUN_085849e0(*(long *)(unaff_x19 + 0x70),0);
    if (lVar2 != 0) {
      uVar8 = FUN_08598884(lVar2,0);
      if ((*(long *)(unaff_x19 + 0x70) != 0) &&
         (FUN_08528c1c(*(long *)(unaff_x19 + 0x70),0), lVar5 != 0)) {
        uVar3 = FUN_0445597c(uVar8,param_2,param_3,lVar5);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar2 != 0)) {
          uVar3 = FUN_04454e88(lVar2,0x21,1,0);
          puVar1 = PTR_DAT_08f7eca0;
          if ((uVar3 & 1) == 0) {
            return;
          }
          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x50), lVar2 != 0)) {
            lVar5 = *(long *)(lVar2 + 0x88);
            lVar2 = *(long *)PTR_DAT_08f7eca0;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_0408f364();
              lVar2 = *(long *)puVar1;
            }
            puVar4 = *(undefined8 **)(lVar2 + 0xb8);
            lVar6 = puVar4[3];
            if (lVar6 == 0) {
              if (*(int *)(lVar2 + 0xe4) == 0) {
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


