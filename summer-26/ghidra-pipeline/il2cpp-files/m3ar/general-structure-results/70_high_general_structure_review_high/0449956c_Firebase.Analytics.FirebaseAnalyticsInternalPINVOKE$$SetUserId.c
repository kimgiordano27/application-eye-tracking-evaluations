/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$SetUserId
ENTRY_POINT: 0449956c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__SetUserId(ulong param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f7b958);
    FUN_0403162c(PTR_DAT_08f7be88);
    FUN_0403162c(PTR_DAT_08f7e540);
    *(undefined1 *)(unaff_x22 + 0xc42) = 1;
  }
  puVar3 = PTR_DAT_08f7e540;
  if (unaff_x21 != 0) {
    uVar7 = FUN_04469054();
    lVar8 = FUN_040316d0(*(undefined8 *)puVar3,3);
    if (lVar8 != 0) {
      uVar11 = (uint)*(ulong *)(lVar8 + 0x18);
      if (uVar11 != 0) {
        uVar14 = (ulong)((int)uVar7 + 1);
        *(ulong *)(lVar8 + 0x20) = uVar14 | uVar7 & 0xffffffff00000000;
        if (uVar11 != 1) {
          uVar1 = (uVar7 & 0xffffffff00000000) - 0x100000000;
          *(ulong *)(lVar8 + 0x28) = uVar1 | uVar7 & 0xffffffff;
          if (2 < uVar11) {
            *(ulong *)(lVar8 + 0x30) = uVar1 | uVar14;
            puVar4 = PTR_DAT_08f7be88;
            puVar3 = PTR_DAT_08f7b958;
            if (0 < (int)uVar11) {
              uVar7 = 0;
              uVar14 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
              do {
                if (uVar14 <= uVar7) goto LAB_044997ac;
                if (unaff_x19 == 0) goto LAB_044997a8;
                lVar9 = FUN_04460c80();
                uVar14 = FUN_0442a284(lVar9,0);
                if ((uVar14 & 1) == 0) {
                  if (lVar9 == 0) goto LAB_044997a8;
                  uVar14 = FUN_0446a368(lVar9,0);
                  if ((uVar14 & 1) != 0) {
                    plVar10 = *(long **)(lVar9 + 0x30);
                    if (plVar10 == (long *)0x0) goto LAB_044997a8;
                    iVar5 = (**(code **)(*plVar10 + 0x2a8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
                    if (iVar5 == 0x1c) {
                      plVar10 = *(long **)(lVar9 + 0x30);
                      if (plVar10 == (long *)0x0) goto LAB_044997a8;
                      bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
                      if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                        FUN_04031c0c();
                      }
                      FUN_04485570(plVar10,lVar9,0);
                    }
                  }
                  lVar12 = *(long *)(unaff_x19 + 0x80);
                  if (lVar12 == 0) goto LAB_044997a8;
                  (**(code **)(lVar12 + 0x18))
                            (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar9 + 0x30),1,
                             *(undefined8 *)(lVar12 + 0x28));
                  uVar6 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220))
                  ;
                  FUN_0446a96c(lVar9,param_2,uVar6,0);
                  lVar12 = param_2[8];
                  if (lVar12 == 0) goto LAB_044997a8;
                  lVar13 = *(long *)(lVar12 + 0x10);
                  lVar15 = *(long *)puVar4;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_044997a8;
                  uVar11 = *(uint *)(lVar12 + 0x18);
                  if (uVar11 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar11 + 1;
                    *(long *)(lVar13 + (long)(int)uVar11 * 8 + 0x20) = lVar9;
                  }
                  else {
                    FUN_057d53ac(lVar12,lVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                uVar14 = (ulong)*(uint *)(lVar8 + 0x18);
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
            }
            return;
          }
        }
      }
LAB_044997ac:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
  }
LAB_044997a8:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


