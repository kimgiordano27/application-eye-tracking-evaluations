/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetEyeRecommendedResolutionScale
ENTRY_POINT: 01f972c8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_6_0__ovrp_GetEyeRecommendedResolutionScale
               (undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long unaff_x19;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  
  plVar5 = (long *)thunk_FUN_0124baac(param_2,*param_1);
  puVar3 = PTR_DAT_027b32e0;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230f60();
  }
  lVar10 = plVar5[3];
  if (0 < (int)lVar10) {
    uVar14 = 0;
    uVar21 = 0;
    do {
      if ((uint)lVar10 <= uVar21) goto LAB_01f9778c;
      plVar18 = plVar5 + (long)(int)uVar21 + 4;
      plVar6 = (long *)*plVar18;
      if (((plVar6 == (long *)0x0) ||
          (lVar10 = (**(code **)(*plVar6 + 0x378))(plVar6,*(undefined8 *)(*plVar6 + 0x380)),
          lVar10 == 0)) || (unaff_x19 == 0)) goto LAB_01f97790;
      iVar4 = *(int *)(unaff_x19 + 0x18);
      iVar12 = (int)*(undefined8 *)(lVar10 + 0x18);
      if (iVar12 == iVar4) {
        if (iVar12 < 1) {
          iVar12 = 0;
        }
        else {
          if (iVar12 == 0) goto LAB_01f9778c;
          uVar20 = 0;
          while( true ) {
            plVar6 = *(long **)(lVar10 + 0x20 + uVar20 * 8);
            if (plVar6 == (long *)0x0) goto LAB_01f97790;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0))
            ;
            uVar19 = (uint)uVar20;
            if ((*(uint *)(unaff_x19 + 0x18) <= uVar19) || (*(uint *)(lVar10 + 0x18) <= uVar19))
            goto LAB_01f9778c;
            uVar7 = FUN_01ee8e78(*(undefined8 *)(unaff_x19 + 0x20 + uVar20 * 8),
                                 *(undefined8 *)(lVar10 + 0x20 + uVar20 * 8),0);
            if ((uVar7 & 1) == 0) {
              uVar15 = *(undefined8 *)PTR_DAT_027b5b48;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar15 = FUN_01f7d8a0(uVar15,0);
              uVar7 = FUN_01f7f404(plVar6,uVar15,0);
              if ((uVar7 & 1) == 0) {
                if (*(uint *)(unaff_x19 + 0x18) <= uVar19) goto LAB_01f9778c;
                plVar16 = *(long **)(unaff_x19 + 0x20 + uVar20 * 8);
                if (plVar16 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
                  if ((bVar1 <= *(byte *)(*plVar16 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)PTR_DAT_027bcd98)) {
                    if (*(uint *)(plVar5 + 3) <= uVar21) goto LAB_01f9778c;
                    plVar9 = (long *)*plVar18;
                    if (plVar9 == (long *)0x0) goto LAB_01f9757c;
                    bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
                    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_027bacc8)) goto LAB_01f9757c;
                    plVar16 = (long *)FUN_01ee92d4(plVar16,plVar9,0);
                    lVar11 = *(long *)puVar3;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01220628(lVar11);
                    }
                    uVar7 = FUN_01f7f404(plVar16,0,0);
                    if ((uVar7 & 1) != 0) goto LAB_01f9757c;
                  }
                }
                if (plVar6 == (long *)0x0) goto LAB_01f97790;
                uVar7 = FUN_01f81644(plVar6,0);
                if ((uVar7 & 1) == 0) {
                  uVar7 = (**(code **)(*plVar6 + 0x288))
                                    (plVar6,plVar16,*(undefined8 *)(*plVar6 + 0x290));
                }
                else {
                  if ((plVar16 == (long *)0x0) ||
                     (lVar11 = (**(code **)(*plVar16 + 0x308))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x310)), lVar11 == 0))
                  goto LAB_01f97790;
                  uVar7 = FUN_01f80150(lVar11,0);
                  if ((uVar7 & 1) == 0) goto LAB_01f9757c;
                  uVar15 = (**(code **)(*plVar16 + 0x308))
                                     (plVar16,*(undefined8 *)(*plVar16 + 0x310));
                  uVar8 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
                  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                    thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                  }
                  uVar7 = FUN_01f97838(uVar15,uVar8);
                }
                if ((uVar7 & 1) == 0) goto LAB_01f9757c;
              }
            }
            uVar20 = uVar20 + 1;
            if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)uVar20) break;
            if (*(uint *)(lVar10 + 0x18) <= (uint)uVar20) goto LAB_01f9778c;
          }
          uVar20 = (ulong)(uVar19 + 1);
LAB_01f9757c:
          iVar12 = (int)uVar20;
          iVar4 = *(int *)(unaff_x19 + 0x18);
        }
        if (iVar12 == iVar4) {
          uVar19 = *(uint *)(plVar5 + 3);
          if (uVar19 <= uVar21) goto LAB_01f9778c;
          lVar10 = *plVar18;
          if (lVar10 != 0) {
            lVar11 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar11 == 0) {
              uVar15 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
              FUN_01230b78(uVar15,0);
            }
            uVar19 = *(uint *)(plVar5 + 3);
          }
          if (uVar19 <= uVar14) goto LAB_01f9778c;
          lVar11 = (long)(int)uVar14;
          plVar5[lVar11 + 4] = lVar10;
          uVar14 = uVar14 + 1;
          thunk_FUN_01286abc(plVar5 + lVar11 + 4,lVar10);
        }
      }
      lVar10 = plVar5[3];
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (int)lVar10);
    if (uVar14 != 0) {
      if (uVar14 == 1) {
        if ((int)lVar10 == 0) {
LAB_01f9778c:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
      }
      else {
        if (unaff_x19 == 0) {
LAB_01f97790:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        lVar10 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,*(undefined4 *)(unaff_x19 + 0x18));
        iVar4 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (0 < iVar4) {
          if (lVar10 == 0) goto LAB_01f97790;
          uVar21 = *(uint *)(lVar10 + 0x18);
          uVar20 = 0;
          do {
            if (uVar21 <= uVar20) goto LAB_01f9778c;
            *(int *)(lVar10 + 0x20 + uVar20 * 4) = (int)uVar20;
            uVar20 = uVar20 + 1;
          } while ((long)uVar20 < (long)iVar4);
        }
        if ((int)uVar14 < 2) {
          uVar21 = 0;
        }
        else {
          lVar11 = 0;
          uVar21 = 0;
          bVar2 = false;
          do {
            if (((uint)plVar5[3] <= uVar21) || ((plVar5[3] & 0xffffffffU) <= lVar11 + 1U))
            goto LAB_01f9778c;
            lVar13 = plVar5[lVar11 + 5];
            lVar17 = plVar5[(long)(int)uVar21 + 4];
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            iVar4 = FUN_01f947fc(lVar17,lVar10,0,lVar13,lVar10,0);
            if (iVar4 == 0) {
              bVar2 = true;
            }
            else if (iVar4 == 2) {
              bVar2 = false;
              uVar21 = (int)lVar11 + 1;
            }
            lVar11 = lVar11 + 1;
          } while ((ulong)uVar14 - 1 != lVar11);
          if (bVar2) {
            thunk_FUN_01279b34(PTR_DAT_027bc458);
            uVar15 = thunk_FUN_0124bba8();
            uVar8 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
            FUN_01ee31d4(uVar15,uVar8,0);
            uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar15,uVar8);
          }
        }
        if (*(uint *)(plVar5 + 3) <= uVar21) goto LAB_01f9778c;
        plVar5 = plVar5 + (int)uVar21;
      }
      return plVar5[4];
    }
  }
  return 0;
}


