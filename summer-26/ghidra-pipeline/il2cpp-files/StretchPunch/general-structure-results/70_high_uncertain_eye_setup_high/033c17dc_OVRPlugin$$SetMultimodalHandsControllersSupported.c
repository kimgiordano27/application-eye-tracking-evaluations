/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 033c17dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetMultimodalHandsControllersSupported(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long *unaff_x21;
  uint unaff_w22;
  long lVar13;
  long unaff_x23;
  long *unaff_x24;
  long lVar14;
  uint unaff_w26;
  uint uVar15;
  long *unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  long *plVar16;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x033c17dc:
  uVar4 = FUN_033a87c8(param_1,param_2);
  uVar5 = FUN_033aa3b4(unaff_x24,uVar4,0);
  if ((uVar5 & 1) != 0) goto LAB_033c1958;
  if (unaff_x24 == (long *)0x0) goto LAB_033c1e64;
  uVar5 = FUN_033ac7d8(unaff_x24,0);
  if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_033c1e60;
  plVar9 = (long *)*unaff_x27;
  if ((uVar5 & 1) == 0) {
    uVar5 = (**(code **)(*unaff_x24 + 0x288))(unaff_x24,plVar9,*(undefined8 *)(*unaff_x24 + 0x290));
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_033c1e64;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310));
    if (plVar9 == (long *)0x0) goto LAB_033c1980;
    bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1157))
    goto LAB_033c1980;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_033c1e60;
    plVar9 = (long *)*unaff_x27;
    if (plVar9 == (long *)0x0) goto LAB_033c1e64;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310));
    plVar6 = (long *)(**(code **)(*unaff_x24 + 0x308))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x310));
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
    }
    lVar10 = *(long *)StringLiteral_1157;
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar9);
      }
    }
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)
         ) {
LAB_033c1e68:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar6);
      }
    }
    uVar5 = FUN_033c1f44(plVar9,plVar6);
  }
  if ((uVar5 & 1) != 0) goto LAB_033c1958;
LAB_033c1980:
  uVar5 = unaff_x28;
  if (unaff_w22 != unaff_w20) goto LAB_033c1bb8;
  do {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar7 = FUN_033ab18c(in_stack_00000010,0,0);
    unaff_w22 = unaff_w20;
    if ((uVar7 & 1) == 0) {
LAB_033c1b60:
      uVar11 = *(uint *)(unaff_x21 + 3);
      if (uVar11 <= uVar5) goto LAB_033c1e60;
      lVar10 = unaff_x21[uVar5 + 4];
      if (lVar10 != 0) {
        lVar13 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar13 == 0) {
          uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar4,0);
        }
        uVar11 = (uint)unaff_x21[3];
      }
      if (uVar11 <= in_stack_00000018._4_4_) goto LAB_033c1e60;
      lVar13 = (long)(int)in_stack_00000018._4_4_;
      unaff_x21[lVar13 + 4] = lVar10;
      in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
      thunk_FUN_01e10808(unaff_x21 + lVar13 + 4,lVar10);
    }
    else {
      if (*(uint *)(unaff_x21 + 3) <= uVar5) goto LAB_033c1e60;
      plVar6 = unaff_x21 + uVar5 + 4;
      plVar9 = (long *)*plVar6;
      if ((plVar9 == (long *)0x0) ||
         (lVar10 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230)),
         lVar10 == 0)) goto LAB_033c1e64;
      uVar7 = FUN_033ac7d8(lVar10,0);
      if ((uVar7 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 3) <= uVar5) goto LAB_033c1e60;
        plVar6 = (long *)*plVar6;
        if ((plVar6 == (long *)0x0) ||
           (plVar9 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230))
           , plVar9 == (long *)0x0)) goto LAB_033c1e64;
        uVar7 = (**(code **)(*plVar9 + 0x288))
                          (plVar9,in_stack_00000010,*(undefined8 *)(*plVar9 + 0x290));
joined_r0x033c1b5c:
        if ((uVar7 & 1) != 0) goto LAB_033c1b60;
      }
      else {
        if (in_stack_00000010 == (long *)0x0) goto LAB_033c1e64;
        plVar9 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                   (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)StringLiteral_1157)) {
            plVar9 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                       (in_stack_00000010,
                                        *(undefined8 *)(*in_stack_00000010 + 0x310));
            if (uVar5 < *(uint *)(unaff_x21 + 3)) {
              plVar6 = (long *)*plVar6;
              if ((plVar6 != (long *)0x0) &&
                 (plVar6 = (long *)(**(code **)(*plVar6 + 0x228))
                                             (plVar6,*(undefined8 *)(*plVar6 + 0x230)),
                 plVar6 != (long *)0x0)) {
                plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x310));
                if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                }
                lVar10 = *(long *)StringLiteral_1157;
                if (plVar9 != (long *)0x0) {
                  if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8
                               ) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01d7df0c(plVar9);
                  }
                }
                if (plVar6 != (long *)0x0) {
                  if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8
                               ) != lVar10)) goto LAB_033c1e68;
                }
                uVar7 = FUN_033c1f44(plVar9,plVar6);
                goto joined_r0x033c1b5c;
              }
              goto LAB_033c1e64;
            }
            goto LAB_033c1e60;
          }
        }
      }
    }
LAB_033c1bb8:
    do {
      uVar11 = *(uint *)(unaff_x21 + 3);
      unaff_x28 = uVar5 + 1;
      if ((long)(int)uVar11 <= (long)unaff_x28) {
        if (in_stack_00000018._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000018._4_4_ == 1) {
          if (uVar11 != 0) goto LAB_033c1e3c;
          goto LAB_033c1e60;
        }
        lVar10 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,unaff_w20);
        if ((int)unaff_w20 < 1) goto LAB_033c1c40;
        if (lVar10 == 0) goto LAB_033c1e64;
        uVar11 = *(uint *)(lVar10 + 0x18);
        uVar5 = 0;
        goto LAB_033c1c28;
      }
      if (unaff_x19 == 0) goto LAB_033c1980;
      if (uVar11 <= unaff_x28) goto LAB_033c1e60;
      plVar9 = (long *)unaff_x21[uVar5 + 5];
      if ((plVar9 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
         unaff_x23 == 0)) goto LAB_033c1e64;
      uVar11 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
      uVar5 = unaff_x28;
    } while (unaff_w20 != uVar11);
    if ((int)unaff_w20 < 1) break;
    if (uVar11 == 0) goto LAB_033c1e60;
    lVar10 = 0;
    unaff_w26 = 1;
    while( true ) {
      plVar9 = *(long **)(unaff_x23 + lVar10 * 8 + 0x20);
      if (plVar9 == (long *)0x0) goto LAB_033c1e64;
      unaff_w22 = unaff_w26 - 1;
      unaff_x24 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_033c1e60;
      unaff_x27 = (long *)(unaff_x19 + lVar10 * 8 + 0x20);
      lVar10 = *unaff_x27;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar5 = FUN_033aa3b4(unaff_x24,lVar10,0);
      if ((uVar5 & 1) == 0) {
        param_1 = *(undefined8 *)StringLiteral_2477;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        param_2 = 0;
        goto code_r0x033c17dc;
      }
LAB_033c1958:
      uVar5 = unaff_x28;
      if (unaff_w20 == unaff_w26) break;
      lVar10 = (long)(int)unaff_w26;
      bVar2 = *(uint *)(unaff_x23 + 0x18) <= unaff_w26;
      unaff_w26 = unaff_w26 + 1;
      if (bVar2) goto LAB_033c1e60;
    }
  } while( true );
  unaff_w22 = 0;
  goto LAB_033c1980;
  while( true ) {
    *(int *)(lVar10 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (unaff_w20 == uVar5) break;
LAB_033c1c28:
    if (uVar11 <= uVar5) goto LAB_033c1e60;
  }
LAB_033c1c40:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar11 = 0;
  }
  else {
    bVar2 = false;
    uVar15 = 1;
    uVar12 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
      plVar6 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar9 = (long *)*plVar6;
      if (plVar9 == (long *)0x0) goto LAB_033c1e64;
      uVar4 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar15) goto LAB_033c1e60;
      plVar16 = unaff_x21 + (long)(int)uVar15 + 4;
      plVar9 = (long *)*plVar16;
      if (plVar9 == (long *)0x0) goto LAB_033c1e64;
      uVar8 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
      }
      iVar3 = FUN_033c2168(uVar4,uVar8,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
        plVar9 = (long *)*plVar6;
        if (plVar9 == (long *)0x0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar4 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar15) goto LAB_033c1e60;
        plVar9 = (long *)*plVar16;
        if (plVar9 == (long *)0x0) goto LAB_033c1e64;
        uVar8 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
        }
        iVar3 = FUN_033c2504(uVar4,lVar10,0,uVar8,lVar10,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar12) || (*(uint *)(unaff_x21 + 3) <= uVar15))
        goto LAB_033c1e60;
        lVar13 = *plVar6;
        lVar14 = *plVar16;
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar3 = FUN_033c2954(lVar13,lVar14);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar11 = uVar15;
      if (iVar3 != 2) {
        uVar11 = uVar12;
      }
      uVar15 = uVar15 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar12 = uVar11;
    } while (in_stack_00000018._4_4_ != uVar15);
    if (bVar2) {
      uVar4 = thunk_FUN_01dd295c(StringLiteral_6016);
      uVar4 = FUN_033d6e4c(uVar4,0);
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar8 = thunk_FUN_01de27b8();
      FUN_033063d0(uVar8,uVar4,0);
      uVar4 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar8,uVar4);
    }
  }
  if (uVar11 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar11;
LAB_033c1e3c:
    return unaff_x21[4];
  }
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


