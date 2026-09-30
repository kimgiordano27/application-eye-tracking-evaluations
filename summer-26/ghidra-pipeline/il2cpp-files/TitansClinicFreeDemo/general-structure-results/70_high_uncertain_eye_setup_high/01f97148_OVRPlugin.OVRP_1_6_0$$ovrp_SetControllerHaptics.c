/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetControllerHaptics
ENTRY_POINT: 01f97148
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_6_0__ovrp_SetControllerHaptics(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar14;
  int iVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  undefined *puVar13;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xbd8));
  thunk_FUN_01279b34(PTR_DAT_027bacc8);
  thunk_FUN_01279b34(PTR_DAT_027b5b48);
  thunk_FUN_01279b34(PTR_DAT_027bcd98);
  thunk_FUN_01279b34(PTR_DAT_027b46c8);
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  *(undefined1 *)(unaff_x19 + 0xf0d) = 1;
  if (unaff_x21 != 0) {
    plVar4 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8,*(undefined4 *)(unaff_x21 + 0x18))
    ;
    uVar17 = *(uint *)(unaff_x21 + 0x18);
    if (0 < (int)uVar17) {
      lVar21 = 0;
      plVar9 = plVar4 + 4;
      do {
        uVar20 = (uint)lVar21;
        if (uVar17 <= uVar20) goto LAB_01f9778c;
        plVar5 = *(long **)(unaff_x21 + 0x20 + lVar21 * 8);
        if ((plVar5 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310)),
           plVar4 == (long *)0x0)) goto LAB_01f97790;
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
        goto LAB_01f977f0;
        if (*(uint *)(plVar4 + 3) <= uVar20) goto LAB_01f9778c;
        *plVar9 = lVar6;
        thunk_FUN_01286abc(plVar9,lVar6);
        if (*(uint *)(plVar4 + 3) <= uVar20) goto LAB_01f9778c;
        if (*plVar9 == 0) goto LAB_01f97790;
        uVar8 = FUN_01f80150(*plVar9,0);
        if ((uVar8 & 1) == 0) {
          if (*(uint *)(plVar4 + 3) <= uVar20) goto LAB_01f9778c;
          if ((long *)*plVar9 != (long *)0x0) {
            lVar6 = *(long *)*plVar9;
            bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
            if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
               (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_027bcd98)) goto LAB_01f9728c;
          }
          thunk_FUN_01279b34(PTR_DAT_027b3eb0);
          uVar16 = thunk_FUN_0124bba8();
          uVar11 = thunk_FUN_01279b34(PTR_DAT_027bcb60);
          puVar13 = PTR_DAT_027c12e8;
          goto LAB_01f977c0;
        }
LAB_01f9728c:
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        lVar21 = lVar21 + 1;
        plVar9 = plVar9 + 1;
      } while ((int)lVar21 < (int)uVar17);
    }
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar16 = thunk_FUN_0124bba8();
      uVar11 = thunk_FUN_01279b34(PTR_DAT_027c1be8);
      puVar13 = PTR_DAT_027b3fe8;
LAB_01f977c0:
      uVar12 = thunk_FUN_01279b34(puVar13);
      FUN_01e7598c(uVar16,uVar11,uVar12,0);
LAB_01f977d8:
      uVar11 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar16,uVar11);
    }
    lVar21 = FUN_01f8a1a8();
    if (lVar21 != 0) {
      uVar16 = *(undefined8 *)PTR_DAT_027c1bd8;
      plVar9 = (long *)thunk_FUN_0124baac(lVar21,uVar16);
      puVar13 = PTR_DAT_027b32e0;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar21,uVar16);
      }
      lVar21 = plVar9[3];
      if (0 < (int)lVar21) {
        uVar17 = 0;
        uVar20 = 0;
        do {
          if ((uint)lVar21 <= uVar20) goto LAB_01f9778c;
          plVar22 = plVar9 + (long)(int)uVar20 + 4;
          plVar5 = (long *)*plVar22;
          if (((plVar5 == (long *)0x0) ||
              (lVar21 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380)),
              lVar21 == 0)) || (plVar4 == (long *)0x0)) goto LAB_01f97790;
          iVar3 = (int)plVar4[3];
          iVar15 = (int)*(undefined8 *)(lVar21 + 0x18);
          if (iVar15 == iVar3) {
            if (iVar15 < 1) {
              iVar15 = 0;
            }
            else {
              if (iVar15 == 0) goto LAB_01f9778c;
              uVar8 = 0;
              while( true ) {
                plVar5 = *(long **)(lVar21 + 0x20 + uVar8 * 8);
                if (plVar5 == (long *)0x0) goto LAB_01f97790;
                plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))
                                           (plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                uVar23 = (uint)uVar8;
                if ((*(uint *)(plVar4 + 3) <= uVar23) || (*(uint *)(lVar21 + 0x18) <= uVar23))
                goto LAB_01f9778c;
                uVar10 = FUN_01ee8e78(plVar4[uVar8 + 4],*(undefined8 *)(lVar21 + 0x20 + uVar8 * 8),0
                                     );
                if ((uVar10 & 1) == 0) {
                  uVar16 = *(undefined8 *)PTR_DAT_027b5b48;
                  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                    thunk_FUN_01220628();
                  }
                  uVar16 = FUN_01f7d8a0(uVar16,0);
                  uVar10 = FUN_01f7f404(plVar5,uVar16,0);
                  if ((uVar10 & 1) == 0) {
                    if (*(uint *)(plVar4 + 3) <= uVar23) goto LAB_01f9778c;
                    plVar18 = (long *)plVar4[uVar8 + 4];
                    if (plVar18 != (long *)0x0) {
                      bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
                      if ((bVar1 <= *(byte *)(*plVar18 + 0x130)) &&
                         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) ==
                          *(long *)PTR_DAT_027bcd98)) {
                        if (*(uint *)(plVar9 + 3) <= uVar20) goto LAB_01f9778c;
                        plVar14 = (long *)*plVar22;
                        if (plVar14 == (long *)0x0) goto LAB_01f9757c;
                        bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
                        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)PTR_DAT_027bacc8)) goto LAB_01f9757c;
                        plVar18 = (long *)FUN_01ee92d4(plVar18,plVar14,0);
                        lVar6 = *(long *)puVar13;
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_01220628(lVar6);
                        }
                        uVar10 = FUN_01f7f404(plVar18,0,0);
                        if ((uVar10 & 1) != 0) goto LAB_01f9757c;
                      }
                    }
                    if (plVar5 == (long *)0x0) goto LAB_01f97790;
                    uVar10 = FUN_01f81644(plVar5,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = (**(code **)(*plVar5 + 0x288))
                                         (plVar5,plVar18,*(undefined8 *)(*plVar5 + 0x290));
                    }
                    else {
                      if ((plVar18 == (long *)0x0) ||
                         (lVar6 = (**(code **)(*plVar18 + 0x308))
                                            (plVar18,*(undefined8 *)(*plVar18 + 0x310)), lVar6 == 0)
                         ) goto LAB_01f97790;
                      uVar10 = FUN_01f80150(lVar6,0);
                      if ((uVar10 & 1) == 0) goto LAB_01f9757c;
                      uVar16 = (**(code **)(*plVar18 + 0x308))
                                         (plVar18,*(undefined8 *)(*plVar18 + 0x310));
                      uVar11 = (**(code **)(*plVar5 + 0x308))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x310));
                      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                      }
                      uVar10 = FUN_01f97838(uVar16,uVar11);
                    }
                    if ((uVar10 & 1) == 0) goto LAB_01f9757c;
                  }
                }
                uVar8 = uVar8 + 1;
                if ((int)plVar4[3] <= (int)(uint)uVar8) break;
                if (*(uint *)(lVar21 + 0x18) <= (uint)uVar8) goto LAB_01f9778c;
              }
              uVar8 = (ulong)(uVar23 + 1);
LAB_01f9757c:
              iVar15 = (int)uVar8;
              iVar3 = (int)plVar4[3];
            }
            if (iVar15 == iVar3) {
              uVar23 = *(uint *)(plVar9 + 3);
              if (uVar23 <= uVar20) goto LAB_01f9778c;
              lVar21 = *plVar22;
              if (lVar21 != 0) {
                lVar6 = thunk_FUN_0124baac(lVar21,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar6 == 0) {
LAB_01f977f0:
                  uVar16 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
                  FUN_01230b78(uVar16,0);
                }
                uVar23 = *(uint *)(plVar9 + 3);
              }
              if (uVar23 <= uVar17) goto LAB_01f9778c;
              lVar6 = (long)(int)uVar17;
              plVar9[lVar6 + 4] = lVar21;
              uVar17 = uVar17 + 1;
              thunk_FUN_01286abc(plVar9 + lVar6 + 4,lVar21);
            }
          }
          lVar21 = plVar9[3];
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)lVar21);
        if (uVar17 != 0) {
          if (uVar17 == 1) {
            if ((int)lVar21 == 0) {
LAB_01f9778c:
                    /* WARNING: Subroutine does not return */
              FUN_01230ca8();
            }
          }
          else {
            if (plVar4 == (long *)0x0) goto LAB_01f97790;
            lVar21 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,(int)plVar4[3]);
            lVar6 = plVar4[3];
            if (0 < (int)lVar6) {
              if (lVar21 == 0) goto LAB_01f97790;
              uVar20 = *(uint *)(lVar21 + 0x18);
              uVar8 = 0;
              do {
                if (uVar20 <= uVar8) goto LAB_01f9778c;
                *(int *)(lVar21 + 0x20 + uVar8 * 4) = (int)uVar8;
                uVar8 = uVar8 + 1;
              } while ((long)uVar8 < (long)(int)lVar6);
            }
            if ((int)uVar17 < 2) {
              uVar20 = 0;
            }
            else {
              lVar6 = 0;
              uVar20 = 0;
              bVar2 = false;
              do {
                if (((uint)plVar9[3] <= uVar20) || ((plVar9[3] & 0xffffffffU) <= lVar6 + 1U))
                goto LAB_01f9778c;
                lVar7 = plVar9[lVar6 + 5];
                lVar19 = plVar9[(long)(int)uVar20 + 4];
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                iVar3 = FUN_01f947fc(lVar19,lVar21,0,lVar7,lVar21,0,plVar4,0);
                if (iVar3 == 0) {
                  bVar2 = true;
                }
                else if (iVar3 == 2) {
                  bVar2 = false;
                  uVar20 = (int)lVar6 + 1;
                }
                lVar6 = lVar6 + 1;
              } while ((ulong)uVar17 - 1 != lVar6);
              if (bVar2) {
                thunk_FUN_01279b34(PTR_DAT_027bc458);
                uVar16 = thunk_FUN_0124bba8();
                uVar11 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
                FUN_01ee31d4(uVar16,uVar11,0);
                goto LAB_01f977d8;
              }
            }
            if (*(uint *)(plVar9 + 3) <= uVar20) goto LAB_01f9778c;
            plVar9 = plVar9 + (int)uVar20;
          }
          return plVar9[4];
        }
      }
      return 0;
    }
  }
LAB_01f97790:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


