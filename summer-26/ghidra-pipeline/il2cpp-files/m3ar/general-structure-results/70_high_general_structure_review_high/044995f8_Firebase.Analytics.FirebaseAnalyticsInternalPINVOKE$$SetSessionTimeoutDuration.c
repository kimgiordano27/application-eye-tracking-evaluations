/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$SetSessionTimeoutDuration
ENTRY_POINT: 044995f8
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__SetSessionTimeoutDuration(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint in_w8;
  long lVar9;
  long lVar10;
  ulong in_x9;
  long lVar11;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong uVar12;
  
  *(ulong *)(unaff_x21 + 0x28) = in_x10 + in_x11 | unaff_x22 & 0xffffffff;
  if (2 < in_w8) {
    *(ulong *)(unaff_x21 + 0x30) = in_x10 + in_x11 | in_x9;
    puVar4 = PTR_DAT_08f7be88;
    puVar3 = PTR_DAT_08f7b958;
    if (0 < (int)in_w8) {
      uVar12 = 0;
      do {
        if (in_w8 <= uVar12) goto LAB_044997ac;
        if (unaff_x19 == 0) goto LAB_044997a8;
        lVar6 = FUN_04460c80();
        uVar7 = FUN_0442a284(lVar6,0);
        if ((uVar7 & 1) == 0) {
          if (lVar6 == 0) {
LAB_044997a8:
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          uVar7 = FUN_0446a368(lVar6,0);
          if ((uVar7 & 1) != 0) {
            plVar8 = *(long **)(lVar6 + 0x30);
            if (plVar8 == (long *)0x0) goto LAB_044997a8;
            iVar5 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
            if (iVar5 == 0x1c) {
              plVar8 = *(long **)(lVar6 + 0x30);
              if (plVar8 == (long *)0x0) goto LAB_044997a8;
              bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_04031c0c();
              }
              FUN_04485570(plVar8,lVar6,0);
            }
          }
          lVar9 = *(long *)(unaff_x19 + 0x80);
          if (lVar9 == 0) goto LAB_044997a8;
          (**(code **)(lVar9 + 0x18))
                    (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar6 + 0x30),1,
                     *(undefined8 *)(lVar9 + 0x28));
          (**(code **)(*unaff_x20 + 0x218))();
          FUN_0446a96c(lVar6);
          lVar9 = unaff_x20[8];
          if (lVar9 == 0) goto LAB_044997a8;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar11 = *(long *)puVar4;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_044997a8;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
          }
          else {
            FUN_057d53ac(lVar9,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        in_w8 = *(uint *)(unaff_x21 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)in_w8);
    }
    return;
  }
LAB_044997ac:
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


