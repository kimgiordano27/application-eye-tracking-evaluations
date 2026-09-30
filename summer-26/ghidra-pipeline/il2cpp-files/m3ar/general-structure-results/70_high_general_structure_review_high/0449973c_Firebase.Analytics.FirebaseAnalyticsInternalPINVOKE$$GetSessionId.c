/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$GetSessionId
ENTRY_POINT: 0449973c
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


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__GetSessionId(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  while (*(int *)(param_2 + 0x1c) = in_w10 + 1, param_1 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      *(long *)(param_1 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
    }
    else {
      FUN_057d53ac(param_2,unaff_x22,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
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
      unaff_x22 = FUN_04460c80();
      uVar4 = FUN_0442a284(unaff_x22,0);
    } while ((uVar4 & 1) != 0);
    if (unaff_x22 == 0) break;
    uVar4 = FUN_0446a368(unaff_x22,0);
    if ((uVar4 & 1) != 0) {
      plVar5 = *(long **)(unaff_x22 + 0x30);
      if (plVar5 == (long *)0x0) break;
      iVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
      if (iVar3 == 0x1c) {
        plVar5 = *(long **)(unaff_x22 + 0x30);
        if (plVar5 == (long *)0x0) break;
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_04031c0c();
        }
        FUN_04485570(plVar5,unaff_x22,0);
      }
    }
    lVar6 = *(long *)(unaff_x19 + 0x80);
    if (lVar6 == 0) break;
    (**(code **)(lVar6 + 0x18))
              (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(unaff_x22 + 0x30),1,
               *(undefined8 *)(lVar6 + 0x28));
    (**(code **)(*unaff_x20 + 0x218))();
    FUN_0446a96c(unaff_x22);
    param_2 = unaff_x20[8];
    if (param_2 == 0) break;
    in_w10 = *(int *)(param_2 + 0x1c);
    in_x9 = *unaff_x25;
    param_1 = *(long *)(param_2 + 0x10);
  }
LAB_044997a8:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


