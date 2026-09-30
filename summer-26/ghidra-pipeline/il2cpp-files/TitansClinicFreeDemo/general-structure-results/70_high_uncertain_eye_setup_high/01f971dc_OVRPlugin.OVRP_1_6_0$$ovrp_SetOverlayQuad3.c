/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetOverlayQuad3
ENTRY_POINT: 01f971dc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_6_0__ovrp_SetOverlayQuad3(long param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar13;
  int iVar14;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long unaff_x24;
  long *plVar20;
  long unaff_x25;
  uint uVar21;
  uint uVar22;
  undefined *puVar12;
  
  while (lVar4 = (**(code **)(param_1 + 0x308))(param_2,*(undefined8 *)(param_1 + 0x310)),
        unaff_x19 != (long *)0x0) {
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0124baac(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
    goto LAB_01f977f0;
    uVar19 = (uint)unaff_x24;
    if (*(uint *)(unaff_x19 + 3) <= uVar19) goto LAB_01f9778c;
    *unaff_x22 = lVar4;
    thunk_FUN_01286abc(unaff_x22,lVar4);
    if (*(uint *)(unaff_x19 + 3) <= uVar19) goto LAB_01f9778c;
    if (*unaff_x22 == 0) break;
    uVar6 = FUN_01f80150(*unaff_x22,0);
    if ((uVar6 & 1) == 0) {
      if (*(uint *)(unaff_x19 + 3) <= uVar19) goto LAB_01f9778c;
      if ((long *)*unaff_x22 != (long *)0x0) {
        lVar4 = *(long *)*unaff_x22;
        bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
        if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027bcd98))
        goto LAB_01f9728c;
      }
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar15 = thunk_FUN_0124bba8();
      uVar10 = thunk_FUN_01279b34(PTR_DAT_027bcb60);
      puVar12 = PTR_DAT_027c12e8;
LAB_01f977c0:
      uVar11 = thunk_FUN_01279b34(puVar12);
      FUN_01e7598c(uVar15,uVar10,uVar11,0);
      goto LAB_01f977d8;
    }
LAB_01f9728c:
    unaff_x24 = unaff_x24 + 1;
    unaff_x22 = unaff_x22 + 1;
    if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)(uint)unaff_x24) {
      if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
        thunk_FUN_01279b34(PTR_DAT_027b3eb0);
        uVar15 = thunk_FUN_0124bba8();
        uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1be8);
        puVar12 = PTR_DAT_027b3fe8;
        goto LAB_01f977c0;
      }
      lVar4 = FUN_01f8a1a8();
      if (lVar4 != 0) {
        uVar15 = *(undefined8 *)PTR_DAT_027c1bd8;
        plVar7 = (long *)thunk_FUN_0124baac(lVar4,uVar15);
        puVar12 = PTR_DAT_027b32e0;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(lVar4,uVar15);
        }
        lVar4 = plVar7[3];
        if ((int)lVar4 < 1) goto LAB_01f97610;
        uVar19 = 0;
        uVar22 = 0;
        goto LAB_01f972fc;
      }
      break;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x24) goto LAB_01f9778c;
    param_2 = *(long **)(unaff_x25 + unaff_x24 * 8);
    if (param_2 == (long *)0x0) break;
    param_1 = *param_2;
  }
  goto LAB_01f97790;
LAB_01f972fc:
  do {
    if ((uint)lVar4 <= uVar22) goto LAB_01f9778c;
    plVar20 = plVar7 + (long)(int)uVar22 + 4;
    plVar8 = (long *)*plVar20;
    if (((plVar8 == (long *)0x0) ||
        (lVar4 = (**(code **)(*plVar8 + 0x378))(plVar8,*(undefined8 *)(*plVar8 + 0x380)), lVar4 == 0
        )) || (unaff_x19 == (long *)0x0)) goto LAB_01f97790;
    iVar3 = (int)unaff_x19[3];
    iVar14 = (int)*(undefined8 *)(lVar4 + 0x18);
    if (iVar14 == iVar3) {
      if (iVar14 < 1) {
        iVar14 = 0;
      }
      else {
        if (iVar14 == 0) goto LAB_01f9778c;
        uVar6 = 0;
        while( true ) {
          plVar8 = *(long **)(lVar4 + 0x20 + uVar6 * 8);
          if (plVar8 == (long *)0x0) goto LAB_01f97790;
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
          uVar21 = (uint)uVar6;
          if ((*(uint *)(unaff_x19 + 3) <= uVar21) || (*(uint *)(lVar4 + 0x18) <= uVar21))
          goto LAB_01f9778c;
          uVar9 = FUN_01ee8e78(unaff_x19[uVar6 + 4],*(undefined8 *)(lVar4 + 0x20 + uVar6 * 8),0);
          if ((uVar9 & 1) == 0) {
            uVar15 = *(undefined8 *)PTR_DAT_027b5b48;
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar15 = FUN_01f7d8a0(uVar15,0);
            uVar9 = FUN_01f7f404(plVar8,uVar15,0);
            if ((uVar9 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 3) <= uVar21) goto LAB_01f9778c;
              plVar17 = (long *)unaff_x19[uVar6 + 4];
              if (plVar17 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar17 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_027bcd98)) {
                  if (*(uint *)(plVar7 + 3) <= uVar22) goto LAB_01f9778c;
                  plVar13 = (long *)*plVar20;
                  if (plVar13 == (long *)0x0) goto LAB_01f9757c;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
                  if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_027bacc8)) goto LAB_01f9757c;
                  plVar17 = (long *)FUN_01ee92d4(plVar17,plVar13,0);
                  lVar5 = *(long *)puVar12;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_01220628(lVar5);
                  }
                  uVar9 = FUN_01f7f404(plVar17,0,0);
                  if ((uVar9 & 1) != 0) goto LAB_01f9757c;
                }
              }
              if (plVar8 == (long *)0x0) goto LAB_01f97790;
              uVar9 = FUN_01f81644(plVar8,0);
              if ((uVar9 & 1) == 0) {
                uVar9 = (**(code **)(*plVar8 + 0x288))
                                  (plVar8,plVar17,*(undefined8 *)(*plVar8 + 0x290));
              }
              else {
                if ((plVar17 == (long *)0x0) ||
                   (lVar5 = (**(code **)(*plVar17 + 0x308))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x310)), lVar5 == 0))
                goto LAB_01f97790;
                uVar9 = FUN_01f80150(lVar5,0);
                if ((uVar9 & 1) == 0) goto LAB_01f9757c;
                uVar15 = (**(code **)(*plVar17 + 0x308))(plVar17,*(undefined8 *)(*plVar17 + 0x310));
                uVar10 = (**(code **)(*plVar8 + 0x308))(plVar8,*(undefined8 *)(*plVar8 + 0x310));
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                }
                uVar9 = FUN_01f97838(uVar15,uVar10);
              }
              if ((uVar9 & 1) == 0) goto LAB_01f9757c;
            }
          }
          uVar6 = uVar6 + 1;
          if ((int)unaff_x19[3] <= (int)(uint)uVar6) break;
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) goto LAB_01f9778c;
        }
        uVar6 = (ulong)(uVar21 + 1);
LAB_01f9757c:
        iVar14 = (int)uVar6;
        iVar3 = (int)unaff_x19[3];
      }
      if (iVar14 == iVar3) {
        uVar21 = *(uint *)(plVar7 + 3);
        if (uVar21 <= uVar22) goto LAB_01f9778c;
        lVar4 = *plVar20;
        if (lVar4 != 0) {
          lVar5 = thunk_FUN_0124baac(lVar4,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar5 == 0) {
LAB_01f977f0:
            uVar15 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar15,0);
          }
          uVar21 = *(uint *)(plVar7 + 3);
        }
        if (uVar21 <= uVar19) goto LAB_01f9778c;
        lVar5 = (long)(int)uVar19;
        plVar7[lVar5 + 4] = lVar4;
        uVar19 = uVar19 + 1;
        thunk_FUN_01286abc(plVar7 + lVar5 + 4,lVar4);
      }
    }
    lVar4 = plVar7[3];
    uVar22 = uVar22 + 1;
  } while ((int)uVar22 < (int)lVar4);
  if (uVar19 == 0) {
LAB_01f97610:
    lVar4 = 0;
  }
  else {
    if (uVar19 == 1) {
      if ((int)lVar4 == 0) {
LAB_01f9778c:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
    }
    else {
      if (unaff_x19 == (long *)0x0) {
LAB_01f97790:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar4 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,(int)unaff_x19[3]);
      lVar5 = unaff_x19[3];
      if (0 < (int)lVar5) {
        if (lVar4 == 0) goto LAB_01f97790;
        uVar22 = *(uint *)(lVar4 + 0x18);
        uVar6 = 0;
        do {
          if (uVar22 <= uVar6) goto LAB_01f9778c;
          *(int *)(lVar4 + 0x20 + uVar6 * 4) = (int)uVar6;
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)lVar5);
      }
      if ((int)uVar19 < 2) {
        uVar22 = 0;
      }
      else {
        lVar5 = 0;
        uVar22 = 0;
        bVar2 = false;
        do {
          if (((uint)plVar7[3] <= uVar22) || ((plVar7[3] & 0xffffffffU) <= lVar5 + 1U))
          goto LAB_01f9778c;
          lVar16 = plVar7[lVar5 + 5];
          lVar18 = plVar7[(long)(int)uVar22 + 4];
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          iVar3 = FUN_01f947fc(lVar18,lVar4,0,lVar16,lVar4,0);
          if (iVar3 == 0) {
            bVar2 = true;
          }
          else if (iVar3 == 2) {
            bVar2 = false;
            uVar22 = (int)lVar5 + 1;
          }
          lVar5 = lVar5 + 1;
        } while ((ulong)uVar19 - 1 != lVar5);
        if (bVar2) {
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar15 = thunk_FUN_0124bba8();
          uVar10 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          FUN_01ee31d4(uVar15,uVar10,0);
LAB_01f977d8:
          uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar15,uVar10);
        }
      }
      if (*(uint *)(plVar7 + 3) <= uVar22) goto LAB_01f9778c;
      plVar7 = plVar7 + (int)uVar22;
    }
    lVar4 = plVar7[4];
  }
  return lVar4;
}


