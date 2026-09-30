/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetAppCpuStartToGpuEndTime
ENTRY_POINT: 01f9732c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_6_0__ovrp_GetAppCpuStartToGpuEndTime(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined8 in_x9;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  uint unaff_w23;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *unaff_x24;
  long unaff_x25;
  ulong uVar16;
  uint unaff_w27;
  long *unaff_x29;
  
  do {
    iVar3 = *(int *)(unaff_x19 + 0x18);
    iVar11 = (int)in_x9;
    if (iVar11 == iVar3) {
      if (iVar11 < 1) {
        iVar11 = 0;
      }
      else {
        if (iVar11 == 0) goto LAB_01f9778c;
        uVar16 = 0;
        while( true ) {
          plVar4 = *(long **)(param_1 + 0x20 + uVar16 * 8);
          if (plVar4 == (long *)0x0) goto LAB_01f97790;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          uVar10 = (uint)uVar16;
          if ((*(uint *)(unaff_x19 + 0x18) <= uVar10) || (*(uint *)(param_1 + 0x18) <= uVar10))
          goto LAB_01f9778c;
          uVar5 = FUN_01ee8e78(*(undefined8 *)(unaff_x25 + uVar16 * 8),
                               *(undefined8 *)(param_1 + 0x20 + uVar16 * 8),0);
          if ((uVar5 & 1) == 0) {
            uVar13 = *(undefined8 *)PTR_DAT_027b5b48;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar13 = FUN_01f7d8a0(uVar13,0);
            uVar5 = FUN_01f7f404(plVar4,uVar13,0);
            if ((uVar5 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto LAB_01f9778c;
              plVar14 = *(long **)(unaff_x25 + uVar16 * 8);
              if (plVar14 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_027bcd98)) {
                  if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto LAB_01f9778c;
                  plVar9 = (long *)*unaff_x24;
                  if (plVar9 == (long *)0x0) goto LAB_01f9757c;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_027bacc8)) goto LAB_01f9757c;
                  plVar14 = (long *)FUN_01ee92d4(plVar14,plVar9,0);
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_01220628(*unaff_x29);
                  }
                  uVar5 = FUN_01f7f404(plVar14,0,0);
                  if ((uVar5 & 1) != 0) goto LAB_01f9757c;
                }
              }
              if (plVar4 == (long *)0x0) goto LAB_01f97790;
              uVar5 = FUN_01f81644(plVar4,0);
              if ((uVar5 & 1) == 0) {
                uVar5 = (**(code **)(*plVar4 + 0x288))
                                  (plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x290));
              }
              else {
                if ((plVar14 == (long *)0x0) ||
                   (lVar6 = (**(code **)(*plVar14 + 0x308))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x310)), lVar6 == 0))
                goto LAB_01f97790;
                uVar5 = FUN_01f80150(lVar6,0);
                if ((uVar5 & 1) == 0) goto LAB_01f9757c;
                uVar13 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
                uVar7 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                }
                uVar5 = FUN_01f97838(uVar13,uVar7);
              }
              if ((uVar5 & 1) == 0) goto LAB_01f9757c;
            }
          }
          uVar16 = uVar16 + 1;
          if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)uVar16) break;
          if (*(uint *)(param_1 + 0x18) <= (uint)uVar16) goto LAB_01f9778c;
        }
        uVar16 = (ulong)(uVar10 + 1);
LAB_01f9757c:
        iVar11 = (int)uVar16;
        iVar3 = *(int *)(unaff_x19 + 0x18);
      }
      if (iVar11 == iVar3) {
        uVar10 = *(uint *)(unaff_x20 + 3);
        if (uVar10 <= unaff_w27) goto LAB_01f9778c;
        lVar6 = *unaff_x24;
        if (lVar6 != 0) {
          lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar8 == 0) {
            uVar13 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar13,0);
          }
          uVar10 = *(uint *)(unaff_x20 + 3);
        }
        if (uVar10 <= unaff_w23) goto LAB_01f9778c;
        lVar8 = (long)(int)unaff_w23;
        unaff_x20[lVar8 + 4] = lVar6;
        unaff_w23 = unaff_w23 + 1;
        thunk_FUN_01286abc(unaff_x20 + lVar8 + 4,lVar6);
      }
    }
    unaff_w27 = unaff_w27 + 1;
    uVar10 = (uint)unaff_x20[3];
    if ((int)uVar10 <= (int)unaff_w27) {
      if (unaff_w23 == 0) {
        return 0;
      }
      if (unaff_w23 == 1) {
        if (uVar10 != 0) goto LAB_01f97768;
        goto LAB_01f9778c;
      }
      if (unaff_x19 != 0) {
        lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,*(undefined4 *)(unaff_x19 + 0x18));
        iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (iVar3 < 1) goto LAB_01f9766c;
        if (lVar6 != 0) {
          uVar10 = *(uint *)(lVar6 + 0x18);
          uVar16 = 0;
          break;
        }
      }
LAB_01f97790:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (uVar10 <= unaff_w27) goto LAB_01f9778c;
    unaff_x24 = unaff_x20 + (long)(int)unaff_w27 + 4;
    plVar4 = (long *)*unaff_x24;
    if (((plVar4 == (long *)0x0) ||
        (param_1 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380)),
        param_1 == 0)) || (unaff_x19 == 0)) goto LAB_01f97790;
    in_x9 = *(undefined8 *)(param_1 + 0x18);
  } while( true );
  while( true ) {
    *(int *)(lVar6 + 0x20 + uVar16 * 4) = (int)uVar16;
    uVar16 = uVar16 + 1;
    if ((long)iVar3 <= (long)uVar16) break;
    if (uVar10 <= uVar16) goto LAB_01f9778c;
  }
LAB_01f9766c:
  if ((int)unaff_w23 < 2) {
    uVar10 = 0;
  }
  else {
    lVar8 = 0;
    uVar10 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar10) || ((unaff_x20[3] & 0xffffffffU) <= lVar8 + 1U))
      goto LAB_01f9778c;
      lVar12 = unaff_x20[lVar8 + 5];
      lVar15 = unaff_x20[(long)(int)uVar10 + 4];
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar3 = FUN_01f947fc(lVar15,lVar6,0,lVar12,lVar6,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar10 = (int)lVar8 + 1;
      }
      lVar8 = lVar8 + 1;
    } while ((ulong)unaff_w23 - 1 != lVar8);
    if (bVar2) {
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar13 = thunk_FUN_0124bba8();
      uVar7 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      FUN_01ee31d4(uVar13,uVar7,0);
      uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar13,uVar7);
    }
  }
  if (uVar10 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar10;
LAB_01f97768:
    return unaff_x20[4];
  }
LAB_01f9778c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


