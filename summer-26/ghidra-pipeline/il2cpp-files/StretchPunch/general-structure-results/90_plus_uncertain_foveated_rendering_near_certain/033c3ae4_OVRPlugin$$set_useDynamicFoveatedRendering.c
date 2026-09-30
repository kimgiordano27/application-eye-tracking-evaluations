/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 033c3ae4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__set_useDynamicFoveatedRendering(long *param_1)

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
  
code_r0x033c3ae4:
  uVar5 = FUN_033aa3b4(param_1,0,0);
  if ((uVar5 & 1) != 0) goto LAB_033c3bd4;
LAB_033c3af4:
  if (unaff_x22 == (long *)0x0) {
LAB_033c3de8:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar5 = FUN_033ac7d8(unaff_x22,0);
  if ((uVar5 & 1) == 0) {
    uVar5 = (**(code **)(*unaff_x22 + 0x288))
                      (unaff_x22,unaff_x23,*(undefined8 *)(*unaff_x22 + 0x290));
  }
  else {
    if ((unaff_x23 == (long *)0x0) ||
       (lVar6 = (**(code **)(*unaff_x23 + 0x308))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x310)),
       lVar6 == 0)) goto LAB_033c3de8;
    uVar5 = FUN_033ab100(lVar6,0);
    if ((uVar5 & 1) == 0) goto LAB_033c3bd4;
    uVar7 = (**(code **)(*unaff_x23 + 0x308))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x310));
    uVar8 = (**(code **)(*unaff_x22 + 0x308))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x310));
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
    }
    uVar5 = FUN_033c3e90(uVar7,uVar8);
  }
  uVar14 = unaff_x26;
  if ((uVar5 & 1) != 0) goto LAB_033c3bac;
LAB_033c3bd4:
  do {
    iVar3 = *(int *)(unaff_x19 + 0x18);
    while( true ) {
      if ((int)unaff_x26 == iVar3) {
        uVar10 = *(uint *)(unaff_x20 + 3);
        if (uVar10 <= unaff_w27) goto thunk_FUN_01d7db78;
        lVar6 = *unaff_x24;
        if (lVar6 != 0) {
          lVar9 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar9 == 0) {
            uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar7,0);
          }
          uVar10 = *(uint *)(unaff_x20 + 3);
        }
        if (uVar10 <= in_stack_00000008._4_4_) goto thunk_FUN_01d7db78;
        lVar9 = (long)(int)in_stack_00000008._4_4_;
        unaff_x20[lVar9 + 4] = lVar6;
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
        thunk_FUN_01e10808(unaff_x20 + lVar9 + 4,lVar6);
      }
      do {
        unaff_w27 = unaff_w27 + 1;
        uVar10 = (uint)unaff_x20[3];
        if ((int)uVar10 <= (int)unaff_w27) {
          if (in_stack_00000008._4_4_ == 0) {
            return 0;
          }
          if (in_stack_00000008._4_4_ == 1) {
            if (uVar10 != 0) goto LAB_033c3dc0;
            goto thunk_FUN_01d7db78;
          }
          if (unaff_x19 == 0) goto LAB_033c3de8;
          lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,*(undefined4 *)(unaff_x19 + 0x18));
          iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
          if (iVar3 < 1) goto LAB_033c3cc4;
          if (lVar6 == 0) goto LAB_033c3de8;
          uVar10 = *(uint *)(lVar6 + 0x18);
          uVar5 = 0;
          goto LAB_033c3cac;
        }
        if (uVar10 <= unaff_w27) goto thunk_FUN_01d7db78;
        unaff_x24 = unaff_x20 + (long)(int)unaff_w27 + 4;
        plVar4 = (long *)*unaff_x24;
        if (((plVar4 == (long *)0x0) ||
            (unaff_x21 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0)),
            unaff_x21 == 0)) || (unaff_x19 == 0)) goto LAB_033c3de8;
        iVar3 = *(int *)(unaff_x19 + 0x18);
        iVar11 = (int)*(undefined8 *)(unaff_x21 + 0x18);
      } while (iVar11 != iVar3);
      if (0 < iVar11) break;
      unaff_x26 = 0;
    }
    if (iVar11 == 0) goto thunk_FUN_01d7db78;
    unaff_x26 = 0;
    unaff_x28 = unaff_x21 + 0x20;
    while( true ) {
      plVar4 = *(long **)(unaff_x28 + unaff_x26 * 8);
      if (plVar4 == (long *)0x0) goto LAB_033c3de8;
      unaff_x22 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      uVar10 = (uint)unaff_x26;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar10) || (*(uint *)(unaff_x21 + 0x18) <= uVar10))
      goto thunk_FUN_01d7db78;
      uVar5 = FUN_0330c348(*(undefined8 *)(unaff_x25 + unaff_x26 * 8),
                           *(undefined8 *)(unaff_x28 + unaff_x26 * 8),0);
      uVar14 = unaff_x26;
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)StringLiteral_2477;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar7 = FUN_033a87c8(uVar7,0);
        uVar5 = FUN_033aa3b4(unaff_x22,uVar7,0);
        if ((uVar5 & 1) == 0) {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto thunk_FUN_01d7db78;
          unaff_x23 = *(long **)(unaff_x25 + unaff_x26 * 8);
          if (unaff_x23 == (long *)0x0) goto LAB_033c3af4;
          bVar1 = *(byte *)(*(long *)StringLiteral_6170 + 0x130);
          if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_6170)) goto LAB_033c3af4;
          if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto thunk_FUN_01d7db78;
          plVar4 = (long *)*unaff_x24;
          if (plVar4 == (long *)0x0) goto LAB_033c3bd4;
          bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_1554)) goto LAB_033c3bd4;
          param_1 = (long *)FUN_0330c7a4(unaff_x23,plVar4,0);
          unaff_x23 = param_1;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*unaff_x29);
          }
          goto code_r0x033c3ae4;
        }
      }
LAB_033c3bac:
      unaff_x26 = uVar14 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x26) break;
      if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26) goto thunk_FUN_01d7db78;
    }
    unaff_x26 = (ulong)((int)uVar14 + 1);
  } while( true );
  while( true ) {
    *(int *)(lVar6 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if ((long)iVar3 <= (long)uVar5) break;
LAB_033c3cac:
    if (uVar10 <= uVar5) goto thunk_FUN_01d7db78;
  }
LAB_033c3cc4:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar10 = 0;
  }
  else {
    lVar9 = 0;
    uVar10 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar10) || ((unaff_x20[3] & 0xffffffffU) <= lVar9 + 1U))
      goto thunk_FUN_01d7db78;
      lVar12 = unaff_x20[lVar9 + 5];
      lVar13 = unaff_x20[(long)(int)uVar10 + 4];
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar3 = FUN_033c0e28(lVar13,lVar6,0,lVar12,lVar6,0);
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
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar7 = thunk_FUN_01de27b8();
      uVar8 = thunk_FUN_01dd295c(StringLiteral_6016);
      FUN_033063d0(uVar7,uVar8,0);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8819);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar8);
    }
  }
  if (uVar10 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar10;
LAB_033c3dc0:
    return unaff_x20[4];
  }
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


