/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 02bffb14
PROGRAM: sharks-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__remove_InputFocusLost(void)

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
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar12;
  long *unaff_x22;
  long lVar13;
  long *unaff_x23;
  long lVar14;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x02bffb14:
  uVar5 = (**(code **)(*unaff_x23 + 0x308))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x310));
  uVar6 = (**(code **)(*unaff_x22 + 0x308))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x310));
  if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)PTR_DAT_0380a318);
  }
  uVar7 = FUN_02bffe74(uVar5,uVar6);
  uVar10 = unaff_x26;
  if ((uVar7 & 1) != 0) goto LAB_02bffb90;
LAB_02bffbb8:
  iVar3 = *(int *)(unaff_x19 + 0x18);
  while( true ) {
    if ((int)unaff_x26 == iVar3) {
      uVar9 = *(uint *)(unaff_x20 + 3);
      if (uVar9 <= unaff_w27) goto LAB_02bffdc8;
      lVar12 = *unaff_x24;
      if (lVar12 != 0) {
        lVar8 = thunk_FUN_01861ac0(lVar12,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar8 == 0) {
          uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar5,0);
        }
        uVar9 = *(uint *)(unaff_x20 + 3);
      }
      if (uVar9 <= in_stack_00000008._4_4_) goto LAB_02bffdc8;
      lVar8 = (long)(int)in_stack_00000008._4_4_;
      unaff_x20[lVar8 + 4] = lVar12;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
      thunk_FUN_0188fd20(unaff_x20 + lVar8 + 4,lVar12);
    }
    do {
      unaff_w27 = unaff_w27 + 1;
      uVar9 = (uint)unaff_x20[3];
      if ((int)uVar9 <= (int)unaff_w27) {
        if (in_stack_00000008._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000008._4_4_ == 1) {
          if (uVar9 == 0) goto LAB_02bffdc8;
          goto LAB_02bffda4;
        }
        if (unaff_x19 == 0) goto LAB_02bffdcc;
        lVar12 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,*(undefined4 *)(unaff_x19 + 0x18));
        iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (iVar3 < 1) goto LAB_02bffca8;
        if (lVar12 == 0) goto LAB_02bffdcc;
        uVar9 = *(uint *)(lVar12 + 0x18);
        uVar10 = 0;
        goto LAB_02bffc90;
      }
      if (uVar9 <= unaff_w27) goto LAB_02bffdc8;
      unaff_x24 = unaff_x20 + (long)(int)unaff_w27 + 4;
      plVar4 = (long *)*unaff_x24;
      if (((plVar4 == (long *)0x0) ||
          (unaff_x21 = (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0)),
          unaff_x21 == 0)) || (unaff_x19 == 0)) goto LAB_02bffdcc;
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
LAB_02bffdcc:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      unaff_x22 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      uVar9 = (uint)unaff_x26;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar9) || (*(uint *)(unaff_x21 + 0x18) <= uVar9)) break;
      uVar7 = System_AppDomain__GetData
                        (*(undefined8 *)(unaff_x25 + unaff_x26 * 8),
                         *(undefined8 *)(unaff_x28 + unaff_x26 * 8),0);
      uVar10 = unaff_x26;
      if ((uVar7 & 1) == 0) {
        uVar5 = *(undefined8 *)PTR_DAT_037fa3c0;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar5 = FUN_02bddb5c(uVar5,0);
        uVar7 = FUN_02be66d0(unaff_x22,uVar5,0);
        if ((uVar7 & 1) == 0) {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar9) break;
          unaff_x23 = *(long **)(unaff_x25 + unaff_x26 * 8);
          if (unaff_x23 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03804aa8 + 0x130);
            if ((bVar1 <= *(byte *)(*unaff_x23 + 0x130)) &&
               (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_03804aa8)) {
              if (*(uint *)(unaff_x20 + 3) <= unaff_w27) break;
              plVar4 = (long *)*unaff_x24;
              if (plVar4 == (long *)0x0) goto LAB_02bffbb8;
              bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
              if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_037fc238)) goto LAB_02bffbb8;
              unaff_x23 = (long *)FUN_02b13274(unaff_x23,plVar4,0);
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01843fdc(*unaff_x29);
              }
              uVar7 = FUN_02be66d0(unaff_x23,0,0);
              if ((uVar7 & 1) != 0) goto LAB_02bffbb8;
            }
          }
          if (unaff_x22 == (long *)0x0) goto LAB_02bffdcc;
          uVar7 = FUN_02be8a80(unaff_x22,0);
          if ((uVar7 & 1) != 0) {
            if ((unaff_x23 == (long *)0x0) ||
               (lVar12 = (**(code **)(*unaff_x23 + 0x308))
                                   (unaff_x23,*(undefined8 *)(*unaff_x23 + 0x310)), lVar12 == 0))
            goto LAB_02bffdcc;
            uVar10 = FUN_02be741c(lVar12,0);
            if ((uVar10 & 1) != 0) goto code_r0x02bffb14;
            goto LAB_02bffbb8;
          }
          uVar7 = (**(code **)(*unaff_x22 + 0x288))
                            (unaff_x22,unaff_x23,*(undefined8 *)(*unaff_x22 + 0x290));
          if ((uVar7 & 1) == 0) goto LAB_02bffbb8;
        }
      }
LAB_02bffb90:
      unaff_x26 = uVar10 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x26) goto LAB_02bffbb4;
      if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26) break;
    } while( true );
  }
  goto LAB_02bffdc8;
LAB_02bffbb4:
  unaff_x26 = (ulong)((int)uVar10 + 1);
  goto LAB_02bffbb8;
  while( true ) {
    *(int *)(lVar12 + 0x20 + uVar10 * 4) = (int)uVar10;
    uVar10 = uVar10 + 1;
    if ((long)iVar3 <= (long)uVar10) break;
LAB_02bffc90:
    if (uVar9 <= uVar10) goto LAB_02bffdc8;
  }
LAB_02bffca8:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar9 = 0;
  }
  else {
    lVar8 = 0;
    uVar9 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar9) || ((unaff_x20[3] & 0xffffffffU) <= lVar8 + 1U))
      goto LAB_02bffdc8;
      lVar13 = unaff_x20[lVar8 + 5];
      lVar14 = unaff_x20[(long)(int)uVar9 + 4];
      if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      iVar3 = FUN_02bfce0c(lVar14,lVar12,0,lVar13,lVar12,0);
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
      thunk_FUN_01851c08(PTR_DAT_03803f28);
      uVar5 = thunk_FUN_01861bbc();
      uVar6 = thunk_FUN_01851c08(PTR_DAT_038045f0);
      FUN_02b0d074(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01851c08(PTR_DAT_0380ac48);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar6);
    }
  }
  if (uVar9 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar9;
LAB_02bffda4:
    return unaff_x20[4];
  }
LAB_02bffdc8:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


