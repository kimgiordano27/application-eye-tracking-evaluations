/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$Future_LongLong_SWIG_OnCompletion
ENTRY_POINT: 044964e8
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


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__Future_LongLong_SWIG_OnCompletion(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint in_w8;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    if ((long)(int)in_w8 <= (long)unaff_x23) {
      return;
    }
    if (in_w8 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if (unaff_x19 == 0) goto LAB_04496508;
    lVar4 = FUN_04460c80();
    uVar5 = FUN_0442a284(lVar4,0);
    if ((uVar5 & 1) == 0) {
      if (lVar4 == 0) {
LAB_04496508:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar5 = FUN_0446a368(lVar4,0);
      if ((uVar5 & 1) != 0) {
        plVar6 = *(long **)(lVar4 + 0x30);
        if (plVar6 == (long *)0x0) goto LAB_04496508;
        iVar3 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
        if (iVar3 == 0x1c) {
          plVar6 = *(long **)(lVar4 + 0x30);
          if (plVar6 == (long *)0x0) goto LAB_04496508;
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_04031c0c();
          }
          FUN_04485570(plVar6,lVar4,0);
        }
      }
      lVar7 = *(long *)(unaff_x19 + 0x80);
      if (lVar7 == 0) goto LAB_04496508;
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar4 + 0x30),1,
                 *(undefined8 *)(lVar7 + 0x28));
      (**(code **)(*unaff_x20 + 0x218))();
      FUN_0446a96c(lVar4);
      lVar7 = unaff_x20[8];
      if (lVar7 == 0) goto LAB_04496508;
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar9 = *unaff_x25;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_04496508;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_057d53ac(lVar7,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    unaff_x23 = unaff_x23 + 1;
  } while( true );
}


