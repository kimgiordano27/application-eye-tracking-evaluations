/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryConfigured
ENTRY_POINT: 01f975ec
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryConfigured(long param_1)

{
  byte bVar1;
  bool bVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  uint unaff_w23;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long unaff_x25;
  long lVar16;
  uint uVar17;
  uint unaff_w27;
  long *unaff_x29;
  
  while (in_NG != in_OV) {
    if ((uint)param_1 <= unaff_w27) goto LAB_01f9778c;
    plVar15 = unaff_x20 + (long)(int)unaff_w27 + 4;
    plVar4 = (long *)*plVar15;
    if (((plVar4 == (long *)0x0) ||
        (lVar8 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380)), lVar8 == 0
        )) || (unaff_x19 == 0)) goto LAB_01f97790;
    iVar3 = *(int *)(unaff_x19 + 0x18);
    iVar11 = (int)*(undefined8 *)(lVar8 + 0x18);
    if (iVar11 == iVar3) {
      if (iVar11 < 1) {
        iVar11 = 0;
      }
      else {
        if (iVar11 == 0) goto LAB_01f9778c;
        uVar10 = 0;
        while( true ) {
          plVar4 = *(long **)(lVar8 + 0x20 + uVar10 * 8);
          if (plVar4 == (long *)0x0) goto LAB_01f97790;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          uVar17 = (uint)uVar10;
          if ((*(uint *)(unaff_x19 + 0x18) <= uVar17) || (*(uint *)(lVar8 + 0x18) <= uVar17))
          goto LAB_01f9778c;
          uVar5 = FUN_01ee8e78(*(undefined8 *)(unaff_x25 + uVar10 * 8),
                               *(undefined8 *)(lVar8 + 0x20 + uVar10 * 8),0);
          if ((uVar5 & 1) == 0) {
            uVar6 = *(undefined8 *)PTR_DAT_027b5b48;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar6 = FUN_01f7d8a0(uVar6,0);
            uVar5 = FUN_01f7f404(plVar4,uVar6,0);
            if ((uVar5 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 0x18) <= uVar17) goto LAB_01f9778c;
              plVar13 = *(long **)(unaff_x25 + uVar10 * 8);
              if (plVar13 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_027bcd98)) {
                  if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto LAB_01f9778c;
                  plVar9 = (long *)*plVar15;
                  if (plVar9 == (long *)0x0) goto LAB_01f9757c;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_027bacc8)) goto LAB_01f9757c;
                  plVar13 = (long *)FUN_01ee92d4(plVar13,plVar9,0);
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_01220628(*unaff_x29);
                  }
                  uVar5 = FUN_01f7f404(plVar13,0,0);
                  if ((uVar5 & 1) != 0) goto LAB_01f9757c;
                }
              }
              if (plVar4 == (long *)0x0) goto LAB_01f97790;
              uVar5 = FUN_01f81644(plVar4,0);
              if ((uVar5 & 1) == 0) {
                uVar5 = (**(code **)(*plVar4 + 0x288))
                                  (plVar4,plVar13,*(undefined8 *)(*plVar4 + 0x290));
              }
              else {
                if ((plVar13 == (long *)0x0) ||
                   (lVar16 = (**(code **)(*plVar13 + 0x308))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x310)), lVar16 == 0))
                goto LAB_01f97790;
                uVar5 = FUN_01f80150(lVar16,0);
                if ((uVar5 & 1) == 0) goto LAB_01f9757c;
                uVar6 = (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
                uVar7 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                }
                uVar5 = FUN_01f97838(uVar6,uVar7);
              }
              if ((uVar5 & 1) == 0) goto LAB_01f9757c;
            }
          }
          uVar10 = uVar10 + 1;
          if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)uVar10) break;
          if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_01f9778c;
        }
        uVar10 = (ulong)(uVar17 + 1);
LAB_01f9757c:
        iVar11 = (int)uVar10;
        iVar3 = *(int *)(unaff_x19 + 0x18);
      }
      if (iVar11 == iVar3) {
        uVar17 = *(uint *)(unaff_x20 + 3);
        if (uVar17 <= unaff_w27) goto LAB_01f9778c;
        lVar8 = *plVar15;
        if (lVar8 != 0) {
          lVar16 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar16 == 0) {
            uVar6 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar6,0);
          }
          uVar17 = *(uint *)(unaff_x20 + 3);
        }
        if (uVar17 <= unaff_w23) goto LAB_01f9778c;
        lVar16 = (long)(int)unaff_w23;
        unaff_x20[lVar16 + 4] = lVar8;
        unaff_w23 = unaff_w23 + 1;
        thunk_FUN_01286abc(unaff_x20 + lVar16 + 4,lVar8);
      }
    }
    param_1 = unaff_x20[3];
    unaff_w27 = unaff_w27 + 1;
    in_OV = SBORROW4(unaff_w27,(int)param_1);
    in_NG = (int)(unaff_w27 - (int)param_1) < 0;
  }
  if (unaff_w23 == 0) {
    lVar8 = 0;
  }
  else {
    if (unaff_w23 == 1) {
      if ((uint)param_1 == 0) {
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
      lVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,*(undefined4 *)(unaff_x19 + 0x18));
      iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
      if (0 < iVar3) {
        if (lVar8 == 0) goto LAB_01f97790;
        uVar17 = *(uint *)(lVar8 + 0x18);
        uVar10 = 0;
        do {
          if (uVar17 <= uVar10) goto LAB_01f9778c;
          *(int *)(lVar8 + 0x20 + uVar10 * 4) = (int)uVar10;
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)iVar3);
      }
      if ((int)unaff_w23 < 2) {
        uVar17 = 0;
      }
      else {
        lVar16 = 0;
        uVar17 = 0;
        bVar2 = false;
        do {
          if (((uint)unaff_x20[3] <= uVar17) || ((unaff_x20[3] & 0xffffffffU) <= lVar16 + 1U))
          goto LAB_01f9778c;
          lVar12 = unaff_x20[lVar16 + 5];
          lVar14 = unaff_x20[(long)(int)uVar17 + 4];
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          iVar3 = FUN_01f947fc(lVar14,lVar8,0,lVar12,lVar8,0);
          if (iVar3 == 0) {
            bVar2 = true;
          }
          else if (iVar3 == 2) {
            bVar2 = false;
            uVar17 = (int)lVar16 + 1;
          }
          lVar16 = lVar16 + 1;
        } while ((ulong)unaff_w23 - 1 != lVar16);
        if (bVar2) {
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar6 = thunk_FUN_0124bba8();
          uVar7 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          FUN_01ee31d4(uVar6,uVar7,0);
          uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar6,uVar7);
        }
      }
      if (*(uint *)(unaff_x20 + 3) <= uVar17) goto LAB_01f9778c;
      unaff_x20 = unaff_x20 + (int)uVar17;
    }
    lVar8 = unaff_x20[4];
  }
  return lVar8;
}


