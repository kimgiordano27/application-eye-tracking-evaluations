/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$GetAnalyticsInstanceId
ENTRY_POINT: 044996d8
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__GetAnalyticsInstanceId
               (long *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  while( true ) {
    FUN_04485570(param_1,param_2,0);
    param_2 = unaff_x22;
    do {
      do {
        lVar6 = *(long *)(unaff_x19 + 0x80);
        if (lVar6 == 0) goto LAB_044997a8;
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(param_2 + 0x30),1,
                   *(undefined8 *)(lVar6 + 0x28));
        (**(code **)(*unaff_x20 + 0x218))();
        FUN_0446a96c(param_2);
        lVar6 = unaff_x20[8];
        if (lVar6 == 0) goto LAB_044997a8;
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *unaff_x25;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_044997a8;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = param_2;
        }
        else {
          FUN_057d53ac(lVar6,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        do {
          unaff_x23 = unaff_x23 + 1;
          if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
            return;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          if (unaff_x19 == 0) goto LAB_044997a8;
          param_2 = FUN_04460c80();
          uVar4 = FUN_0442a284(param_2,0);
        } while ((uVar4 & 1) != 0);
        if (param_2 == 0) goto LAB_044997a8;
        uVar4 = FUN_0446a368(param_2,0);
      } while ((uVar4 & 1) == 0);
      plVar5 = *(long **)(param_2 + 0x30);
      if (plVar5 == (long *)0x0) goto LAB_044997a8;
      iVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
    } while (iVar3 != 0x1c);
    param_1 = *(long **)(param_2 + 0x30);
    if (param_1 == (long *)0x0) break;
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (unaff_x22 = param_2,
       *(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_04031c0c();
    }
  }
LAB_044997a8:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


