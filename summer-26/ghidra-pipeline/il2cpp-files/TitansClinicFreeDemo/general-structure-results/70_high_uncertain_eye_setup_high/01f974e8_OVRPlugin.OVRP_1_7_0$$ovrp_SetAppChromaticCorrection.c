/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$ovrp_SetAppChromaticCorrection
ENTRY_POINT: 01f974e8
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


long OVRPlugin_OVRP_1_7_0__ovrp_SetAppChromaticCorrection(long *param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar12;
  long *unaff_x22;
  long lVar13;
  long lVar14;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x01f974e8:
  uVar5 = (*in_x9)(param_1,param_2);
  uVar6 = (**(code **)(*unaff_x22 + 0x308))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x310));
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
  }
  uVar7 = FUN_01f97838(uVar5,uVar6);
  uVar10 = unaff_x26;
  if ((uVar7 & 1) != 0) goto LAB_01f97554;
LAB_01f9757c:
  iVar3 = *(int *)(unaff_x19 + 0x18);
  while( true ) {
    if ((int)unaff_x26 == iVar3) {
      uVar9 = *(uint *)(unaff_x20 + 3);
      if (uVar9 <= unaff_w27) goto LAB_01f9778c;
      lVar12 = *unaff_x24;
      if (lVar12 != 0) {
        lVar8 = thunk_FUN_0124baac(lVar12,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar8 == 0) {
          uVar5 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar5,0);
        }
        uVar9 = *(uint *)(unaff_x20 + 3);
      }
      if (uVar9 <= in_stack_00000008._4_4_) goto LAB_01f9778c;
      lVar8 = (long)(int)in_stack_00000008._4_4_;
      unaff_x20[lVar8 + 4] = lVar12;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
      thunk_FUN_01286abc(unaff_x20 + lVar8 + 4,lVar12);
    }
    do {
      unaff_w27 = unaff_w27 + 1;
      uVar9 = (uint)unaff_x20[3];
      if ((int)uVar9 <= (int)unaff_w27) {
        if (in_stack_00000008._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000008._4_4_ == 1) {
          if (uVar9 == 0) goto LAB_01f9778c;
          goto LAB_01f97768;
        }
        if (unaff_x19 == 0) goto LAB_01f97790;
        lVar12 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,*(undefined4 *)(unaff_x19 + 0x18));
        iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (iVar3 < 1) goto LAB_01f9766c;
        if (lVar12 == 0) goto LAB_01f97790;
        uVar9 = *(uint *)(lVar12 + 0x18);
        uVar10 = 0;
        goto OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode;
      }
      if (uVar9 <= unaff_w27) goto LAB_01f9778c;
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
  if (iVar11 != 0) {
    unaff_x26 = 0;
    unaff_x28 = unaff_x21 + 0x20;
    do {
      plVar4 = *(long **)(unaff_x28 + unaff_x26 * 8);
      if (plVar4 == (long *)0x0) {
LAB_01f97790:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      unaff_x22 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      uVar9 = (uint)unaff_x26;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar9) || (*(uint *)(unaff_x21 + 0x18) <= uVar9)) break;
      uVar7 = FUN_01ee8e78(*(undefined8 *)(unaff_x25 + unaff_x26 * 8),
                           *(undefined8 *)(unaff_x28 + unaff_x26 * 8),0);
      uVar10 = unaff_x26;
      if ((uVar7 & 1) == 0) {
        uVar5 = *(undefined8 *)PTR_DAT_027b5b48;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar5 = FUN_01f7d8a0(uVar5,0);
        uVar7 = FUN_01f7f404(unaff_x22,uVar5,0);
        if ((uVar7 & 1) == 0) {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar9) break;
          param_1 = *(long **)(unaff_x25 + unaff_x26 * 8);
          if (param_1 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_027bcd98 + 0x130);
            if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
               (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_027bcd98)) {
              if (*(uint *)(unaff_x20 + 3) <= unaff_w27) break;
              plVar4 = (long *)*unaff_x24;
              if (plVar4 == (long *)0x0) goto LAB_01f9757c;
              bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
              if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_027bacc8)) goto LAB_01f9757c;
              param_1 = (long *)FUN_01ee92d4(param_1,plVar4,0);
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01220628(*unaff_x29);
              }
              uVar7 = FUN_01f7f404(param_1,0,0);
              if ((uVar7 & 1) != 0) goto LAB_01f9757c;
            }
          }
          if (unaff_x22 == (long *)0x0) goto LAB_01f97790;
          uVar7 = FUN_01f81644(unaff_x22,0);
          if ((uVar7 & 1) != 0) {
            if ((param_1 == (long *)0x0) ||
               (lVar12 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310)),
               lVar12 == 0)) goto LAB_01f97790;
            uVar10 = FUN_01f80150(lVar12,0);
            if ((uVar10 & 1) == 0) goto LAB_01f9757c;
            in_x9 = *(code **)(*param_1 + 0x308);
            param_2 = *(undefined8 *)(*param_1 + 0x310);
            goto code_r0x01f974e8;
          }
          uVar7 = (**(code **)(*unaff_x22 + 0x288))
                            (unaff_x22,param_1,*(undefined8 *)(*unaff_x22 + 0x290));
          if ((uVar7 & 1) == 0) goto LAB_01f9757c;
        }
      }
LAB_01f97554:
      unaff_x26 = uVar10 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x26) goto LAB_01f97578;
      if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26) break;
    } while( true );
  }
  goto LAB_01f9778c;
LAB_01f97578:
  unaff_x26 = (ulong)((int)uVar10 + 1);
  goto LAB_01f9757c;
  while( true ) {
    *(int *)(lVar12 + 0x20 + uVar10 * 4) = (int)uVar10;
    uVar10 = uVar10 + 1;
    if ((long)iVar3 <= (long)uVar10) break;
OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode:
    if (uVar9 <= uVar10) goto LAB_01f9778c;
  }
LAB_01f9766c:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar9 = 0;
  }
  else {
    lVar8 = 0;
    uVar9 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar9) || ((unaff_x20[3] & 0xffffffffU) <= lVar8 + 1U))
      goto LAB_01f9778c;
      lVar13 = unaff_x20[lVar8 + 5];
      lVar14 = unaff_x20[(long)(int)uVar9 + 4];
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar3 = FUN_01f947fc(lVar14,lVar12,0,lVar13,lVar12,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar9 = (int)lVar8 + 1;
      }
      lVar8 = lVar8 + 1;
    } while ((ulong)in_stack_00000008._4_4_ - 1 != lVar8);
    if (bVar2) {
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar5 = thunk_FUN_0124bba8();
      uVar6 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      FUN_01ee31d4(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar5,uVar6);
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


