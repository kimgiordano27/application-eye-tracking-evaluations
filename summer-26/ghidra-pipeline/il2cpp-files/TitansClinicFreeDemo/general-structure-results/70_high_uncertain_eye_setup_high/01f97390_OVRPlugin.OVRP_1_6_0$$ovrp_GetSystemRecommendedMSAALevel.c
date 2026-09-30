/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetSystemRecommendedMSAALevel
ENTRY_POINT: 01f97390
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin_OVRP_1_6_0__ovrp_GetSystemRecommendedMSAALevel
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    uVar4 = FUN_01ee8e78(param_1,param_2,param_3);
    uVar9 = (uint)unaff_x26;
    if ((uVar4 & 1) == 0) {
      uVar12 = *(undefined8 *)PTR_DAT_027b5b48;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar12 = FUN_01f7d8a0(uVar12,0);
      uVar4 = FUN_01f7f404(unaff_x22,uVar12,0);
      if ((uVar4 & 1) != 0) goto LAB_01f97554;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar9) goto LAB_01f9778c;
      plVar13 = *(long **)(unaff_x25 + unaff_x26 * 8);
      if (plVar13 == (long *)0x0) {
LAB_01f9749c:
        if (unaff_x22 == (long *)0x0) goto LAB_01f97790;
        uVar4 = FUN_01f81644(unaff_x22,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = (**(code **)(*unaff_x22 + 0x288))
                            (unaff_x22,plVar13,*(undefined8 *)(*unaff_x22 + 0x290));
        }
        else {
          if ((plVar13 == (long *)0x0) ||
             (lVar5 = (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310)),
             lVar5 == 0)) goto LAB_01f97790;
          uVar4 = FUN_01f80150(lVar5,0);
          if ((uVar4 & 1) == 0) goto LAB_01f9757c;
          uVar12 = (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
          uVar6 = (**(code **)(*unaff_x22 + 0x308))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x310));
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
          }
          uVar4 = FUN_01f97838(uVar12,uVar6);
        }
        if ((uVar4 & 1) != 0) goto LAB_01f97554;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_027bcd98)) goto LAB_01f9749c;
        if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto LAB_01f9778c;
        plVar8 = (long *)*unaff_x24;
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_027bacc8)) {
            plVar13 = (long *)FUN_01ee92d4(plVar13,plVar8,0);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01220628(*unaff_x29);
            }
            uVar4 = FUN_01f7f404(plVar13,0,0);
            if ((uVar4 & 1) == 0) goto LAB_01f9749c;
          }
        }
      }
LAB_01f9757c:
      iVar3 = *(int *)(unaff_x19 + 0x18);
      while( true ) {
        if ((int)unaff_x26 == iVar3) {
          uVar9 = *(uint *)(unaff_x20 + 3);
          if (uVar9 <= unaff_w27) goto LAB_01f9778c;
          lVar5 = *unaff_x24;
          if (lVar5 != 0) {
            lVar7 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar7 == 0) {
              uVar12 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
              FUN_01230b78(uVar12,0);
            }
            uVar9 = *(uint *)(unaff_x20 + 3);
          }
          if (uVar9 <= in_stack_00000008._4_4_) goto LAB_01f9778c;
          lVar7 = (long)(int)in_stack_00000008._4_4_;
          unaff_x20[lVar7 + 4] = lVar5;
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
          thunk_FUN_01286abc(unaff_x20 + lVar7 + 4,lVar5);
        }
        do {
          unaff_w27 = unaff_w27 + 1;
          uVar9 = (uint)unaff_x20[3];
          if ((int)uVar9 <= (int)unaff_w27) {
            if (in_stack_00000008._4_4_ == 0) {
              return 0;
            }
            if (in_stack_00000008._4_4_ == 1) {
              if (uVar9 != 0) goto LAB_01f97768;
              goto LAB_01f9778c;
            }
            if (unaff_x19 == 0) goto LAB_01f97790;
            lVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,*(undefined4 *)(unaff_x19 + 0x18));
            iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
            if (iVar3 < 1) goto LAB_01f9766c;
            if (lVar5 == 0) goto LAB_01f97790;
            uVar9 = *(uint *)(lVar5 + 0x18);
            uVar4 = 0;
            goto OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode;
          }
          if (uVar9 <= unaff_w27) goto LAB_01f9778c;
          unaff_x24 = unaff_x20 + (long)(int)unaff_w27 + 4;
          plVar13 = (long *)*unaff_x24;
          if (((plVar13 == (long *)0x0) ||
              (unaff_x21 = (**(code **)(*plVar13 + 0x378))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x380)), unaff_x21 == 0))
             || (unaff_x19 == 0)) goto LAB_01f97790;
          iVar3 = *(int *)(unaff_x19 + 0x18);
          iVar10 = (int)*(undefined8 *)(unaff_x21 + 0x18);
        } while (iVar10 != iVar3);
        if (0 < iVar10) break;
        unaff_x26 = 0;
      }
      if (iVar10 == 0) goto LAB_01f9778c;
      unaff_x26 = 0;
      unaff_x28 = unaff_x21 + 0x20;
    }
    else {
LAB_01f97554:
      unaff_x26 = unaff_x26 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x26) {
        unaff_x26 = (ulong)(uVar9 + 1);
        goto LAB_01f9757c;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26) goto LAB_01f9778c;
    }
    plVar13 = *(long **)(unaff_x28 + unaff_x26 * 8);
    if (plVar13 == (long *)0x0) {
LAB_01f97790:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    unaff_x22 = (long *)(**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
    if ((*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x26) ||
       (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26)) goto LAB_01f9778c;
    param_1 = *(undefined8 *)(unaff_x25 + unaff_x26 * 8);
    param_2 = *(undefined8 *)(unaff_x28 + unaff_x26 * 8);
    param_3 = 0;
  } while( true );
  while( true ) {
    *(int *)(lVar5 + 0x20 + uVar4 * 4) = (int)uVar4;
    uVar4 = uVar4 + 1;
    if ((long)iVar3 <= (long)uVar4) break;
OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode:
    if (uVar9 <= uVar4) goto LAB_01f9778c;
  }
LAB_01f9766c:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar9 = 0;
  }
  else {
    lVar7 = 0;
    uVar9 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar9) || ((unaff_x20[3] & 0xffffffffU) <= lVar7 + 1U))
      goto LAB_01f9778c;
      lVar11 = unaff_x20[lVar7 + 5];
      lVar14 = unaff_x20[(long)(int)uVar9 + 4];
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar3 = FUN_01f947fc(lVar14,lVar5,0,lVar11,lVar5,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar9 = (int)lVar7 + 1;
      }
      lVar7 = lVar7 + 1;
    } while ((ulong)in_stack_00000008._4_4_ - 1 != lVar7);
    if (bVar2) {
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar12 = thunk_FUN_0124bba8();
      uVar6 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      FUN_01ee31d4(uVar12,uVar6,0);
      uVar6 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar12,uVar6);
    }
  }
  if (uVar9 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar9;
LAB_01f97768:
    return unaff_x20[4];
  }
LAB_01f9778c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


