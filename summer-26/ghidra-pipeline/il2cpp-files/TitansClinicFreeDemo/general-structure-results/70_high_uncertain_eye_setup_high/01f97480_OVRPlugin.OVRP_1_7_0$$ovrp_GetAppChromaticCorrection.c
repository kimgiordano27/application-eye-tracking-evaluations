/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$ovrp_GetAppChromaticCorrection
ENTRY_POINT: 01f97480
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin_OVRP_1_7_0__ovrp_GetAppChromaticCorrection(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar12;
  long *unaff_x23;
  long lVar13;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar14;
  uint unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x01f97480:
  thunk_FUN_01220628(param_1);
LAB_01f97488:
  uVar5 = FUN_01f7f404(unaff_x23,0,0);
  if ((uVar5 & 1) != 0) goto LAB_01f9757c;
LAB_01f9749c:
  if (unaff_x22 == (long *)0x0) {
LAB_01f97790:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar5 = FUN_01f81644(unaff_x22,0);
  if ((uVar5 & 1) == 0) {
    uVar5 = (**(code **)(*unaff_x22 + 0x288))
                      (unaff_x22,unaff_x23,*(undefined8 *)(*unaff_x22 + 0x290));
  }
  else {
    if ((unaff_x23 == (long *)0x0) ||
       (lVar6 = (**(code **)(*unaff_x23 + 0x308))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x310)),
       lVar6 == 0)) goto LAB_01f97790;
    uVar5 = FUN_01f80150(lVar6,0);
    if ((uVar5 & 1) == 0) goto LAB_01f9757c;
    uVar7 = (**(code **)(*unaff_x23 + 0x308))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x310));
    uVar8 = (**(code **)(*unaff_x22 + 0x308))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x310));
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
    }
    uVar5 = FUN_01f97838(uVar7,uVar8);
  }
  uVar14 = unaff_x26;
  if ((uVar5 & 1) != 0) goto LAB_01f97554;
LAB_01f9757c:
  do {
    iVar3 = *(int *)(unaff_x19 + 0x18);
    while( true ) {
      if ((int)unaff_x26 == iVar3) {
        uVar10 = *(uint *)(unaff_x20 + 3);
        if (uVar10 <= unaff_w27) goto LAB_01f9778c;
        lVar6 = *unaff_x24;
        if (lVar6 != 0) {
          lVar9 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar9 == 0) {
            uVar7 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar7,0);
          }
          uVar10 = *(uint *)(unaff_x20 + 3);
        }
        if (uVar10 <= in_stack_00000008._4_4_) goto LAB_01f9778c;
        lVar9 = (long)(int)in_stack_00000008._4_4_;
        unaff_x20[lVar9 + 4] = lVar6;
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
        thunk_FUN_01286abc(unaff_x20 + lVar9 + 4,lVar6);
      }
      do {
        unaff_w27 = unaff_w27 + 1;
        uVar10 = (uint)unaff_x20[3];
        if ((int)uVar10 <= (int)unaff_w27) {
          if (in_stack_00000008._4_4_ == 0) {
            return 0;
          }
          if (in_stack_00000008._4_4_ == 1) {
            if (uVar10 != 0) goto LAB_01f97768;
            goto LAB_01f9778c;
          }
          if (unaff_x19 == 0) goto LAB_01f97790;
          lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,*(undefined4 *)(unaff_x19 + 0x18));
          iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
          if (iVar3 < 1) goto LAB_01f9766c;
          if (lVar6 == 0) goto LAB_01f97790;
          uVar10 = *(uint *)(lVar6 + 0x18);
          uVar5 = 0;
          goto OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode;
        }
        if (uVar10 <= unaff_w27) goto LAB_01f9778c;
        unaff_x24 = unaff_x20 + (long)(int)unaff_w27 + 4;
        plVar4 = (long *)*unaff_x24;
        if (((plVar4 == (long *)0x0) ||
            (unaff_x21 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380)),
            unaff_x21 == 0)) || (unaff_x19 == 0)) goto LAB_01f97790;
        iVar3 = *(int *)(unaff_x19 + 0x18);
        iVar11 = (int)*(undefined8 *)(unaff_x21 + 0x18);
      } while (iVar11 != iVar3);
      if (0 < iVar11) break;
      unaff_x26 = 0;
    }
    if (iVar11 == 0) goto LAB_01f9778c;
    unaff_x26 = 0;
    unaff_x28 = unaff_x21 + 0x20;
    while( true ) {
      plVar4 = *(long **)(unaff_x28 + unaff_x26 * 8);
      if (plVar4 == (long *)0x0) goto LAB_01f97790;
      unaff_x22 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      uVar10 = (uint)unaff_x26;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar10) || (*(uint *)(unaff_x21 + 0x18) <= uVar10))
      goto LAB_01f9778c;
      uVar5 = FUN_01ee8e78(*(undefined8 *)(unaff_x25 + unaff_x26 * 8),
                           *(undefined8 *)(unaff_x28 + unaff_x26 * 8),0);
      uVar14 = unaff_x26;
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)PTR_DAT_027b5b48;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar7 = FUN_01f7d8a0(uVar7,0);
        uVar5 = FUN_01f7f404(unaff_x22,uVar7,0);
        if ((uVar5 & 1) == 0) {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto LAB_01f9778c;
          unaff_x23 = *(long **)(unaff_x25 + unaff_x26 * 8);
          if (unaff_x23 == (long *)0x0) goto LAB_01f9749c;
          bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
          if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_027bcd98)) goto LAB_01f9749c;
          if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto LAB_01f9778c;
          plVar4 = (long *)*unaff_x24;
          if (plVar4 == (long *)0x0) goto LAB_01f9757c;
          bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_027bacc8)) goto LAB_01f9757c;
          unaff_x23 = (long *)FUN_01ee92d4(unaff_x23,plVar4,0);
          param_1 = *unaff_x29;
          if (*(int *)(param_1 + 0xe0) != 0) goto LAB_01f97488;
          goto code_r0x01f97480;
        }
      }
LAB_01f97554:
      unaff_x26 = uVar14 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x26) break;
      if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26) goto LAB_01f9778c;
    }
    unaff_x26 = (ulong)((int)uVar14 + 1);
  } while( true );
  while( true ) {
    *(int *)(lVar6 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if ((long)iVar3 <= (long)uVar5) break;
OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode:
    if (uVar10 <= uVar5) goto LAB_01f9778c;
  }
LAB_01f9766c:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar10 = 0;
  }
  else {
    lVar9 = 0;
    uVar10 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar10) || ((unaff_x20[3] & 0xffffffffU) <= lVar9 + 1U))
      goto LAB_01f9778c;
      lVar12 = unaff_x20[lVar9 + 5];
      lVar13 = unaff_x20[(long)(int)uVar10 + 4];
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar3 = FUN_01f947fc(lVar13,lVar6,0,lVar12,lVar6,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar10 = (int)lVar9 + 1;
      }
      lVar9 = lVar9 + 1;
    } while ((ulong)in_stack_00000008._4_4_ - 1 != lVar9);
    if (bVar2) {
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar7 = thunk_FUN_0124bba8();
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      FUN_01ee31d4(uVar7,uVar8,0);
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar7,uVar8);
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


