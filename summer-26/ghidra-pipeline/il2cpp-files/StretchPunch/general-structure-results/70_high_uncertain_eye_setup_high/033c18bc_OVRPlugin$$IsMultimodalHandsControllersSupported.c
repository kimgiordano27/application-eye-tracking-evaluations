/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 033c18bc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__IsMultimodalHandsControllersSupported(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int in_w9;
  long unaff_x19;
  uint unaff_w20;
  uint uVar13;
  long *unaff_x21;
  uint unaff_w22;
  long lVar14;
  long unaff_x23;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  uint unaff_w26;
  uint uVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x033c18bc:
  if (in_w9 == 0) {
    thunk_FUN_01dc4f30(param_1);
  }
  lVar11 = *(long *)StringLiteral_1157;
  if (unaff_x25 != (long *)0x0) {
    if ((*(byte *)(*unaff_x25 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(unaff_x25);
    }
  }
  if (unaff_x24 != (long *)0x0) {
    if ((*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
       )) {
LAB_033c1e68:
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(unaff_x24);
    }
  }
  uVar4 = FUN_033c1f44(unaff_x25,unaff_x24);
  if ((uVar4 & 1) != 0) goto LAB_033c1958;
LAB_033c1980:
  uVar4 = unaff_x28;
  if (unaff_w22 != unaff_w20) goto LAB_033c1bb8;
  do {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = FUN_033ab18c(in_stack_00000010,0,0);
    unaff_w22 = unaff_w20;
    if ((uVar5 & 1) == 0) {
LAB_033c1b60:
      uVar12 = *(uint *)(unaff_x21 + 3);
      if (uVar12 <= uVar4) goto LAB_033c1e60;
      lVar11 = unaff_x21[uVar4 + 4];
      if (lVar11 != 0) {
        lVar14 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar14 == 0) {
          uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar8,0);
        }
        uVar12 = (uint)unaff_x21[3];
      }
      if (uVar12 <= in_stack_00000018._4_4_) goto LAB_033c1e60;
      lVar14 = (long)(int)in_stack_00000018._4_4_;
      unaff_x21[lVar14 + 4] = lVar11;
      in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
      thunk_FUN_01e10808(unaff_x21 + lVar14 + 4,lVar11);
    }
    else {
      if (*(uint *)(unaff_x21 + 3) <= uVar4) goto LAB_033c1e60;
      plVar7 = unaff_x21 + uVar4 + 4;
      plVar6 = (long *)*plVar7;
      if ((plVar6 == (long *)0x0) ||
         (lVar11 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         lVar11 == 0)) goto LAB_033c1e64;
      uVar5 = FUN_033ac7d8(lVar11,0);
      if ((uVar5 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 3) <= uVar4) goto LAB_033c1e60;
        plVar7 = (long *)*plVar7;
        if ((plVar7 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230))
           , plVar6 == (long *)0x0)) goto LAB_033c1e64;
        uVar5 = (**(code **)(*plVar6 + 0x288))
                          (plVar6,in_stack_00000010,*(undefined8 *)(*plVar6 + 0x290));
joined_r0x033c1b5c:
        if ((uVar5 & 1) != 0) goto LAB_033c1b60;
      }
      else {
        if (in_stack_00000010 == (long *)0x0) goto LAB_033c1e64;
        plVar6 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                   (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
        if (plVar6 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)StringLiteral_1157)) {
            plVar6 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                       (in_stack_00000010,
                                        *(undefined8 *)(*in_stack_00000010 + 0x310));
            if (uVar4 < *(uint *)(unaff_x21 + 3)) {
              plVar7 = (long *)*plVar7;
              if ((plVar7 != (long *)0x0) &&
                 (plVar7 = (long *)(**(code **)(*plVar7 + 0x228))
                                             (plVar7,*(undefined8 *)(*plVar7 + 0x230)),
                 plVar7 != (long *)0x0)) {
                unaff_x24 = (long *)(**(code **)(*plVar7 + 0x308))
                                              (plVar7,*(undefined8 *)(*plVar7 + 0x310));
                if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                }
                lVar11 = *(long *)StringLiteral_1157;
                if (plVar6 != (long *)0x0) {
                  if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8
                               ) != lVar11)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01d7df0c(plVar6);
                  }
                }
                if (unaff_x24 != (long *)0x0) {
                  if ((*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
                     (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 +
                               -8) != lVar11)) goto LAB_033c1e68;
                }
                uVar5 = FUN_033c1f44(plVar6,unaff_x24);
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
      uVar12 = *(uint *)(unaff_x21 + 3);
      unaff_x28 = uVar4 + 1;
      if ((long)(int)uVar12 <= (long)unaff_x28) {
        if (in_stack_00000018._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000018._4_4_ == 1) {
          if (uVar12 != 0) goto LAB_033c1e3c;
          goto LAB_033c1e60;
        }
        lVar11 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,unaff_w20);
        if ((int)unaff_w20 < 1) goto LAB_033c1c40;
        if (lVar11 == 0) goto LAB_033c1e64;
        uVar12 = *(uint *)(lVar11 + 0x18);
        uVar4 = 0;
        goto LAB_033c1c28;
      }
      if (unaff_x19 == 0) goto LAB_033c1980;
      if (uVar12 <= unaff_x28) goto LAB_033c1e60;
      plVar6 = (long *)unaff_x21[uVar4 + 5];
      if ((plVar6 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)),
         unaff_x23 == 0)) goto LAB_033c1e64;
      uVar12 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
      uVar4 = unaff_x28;
    } while (unaff_w20 != uVar12);
    if ((int)unaff_w20 < 1) {
      unaff_w22 = 0;
      goto LAB_033c1980;
    }
    if (uVar12 == 0) goto LAB_033c1e60;
    lVar11 = 0;
    unaff_w26 = 1;
    while( true ) {
      plVar6 = *(long **)(unaff_x23 + lVar11 * 8 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_033c1e64;
      unaff_w22 = unaff_w26 - 1;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_033c1e60;
      plVar7 = (long *)(unaff_x19 + lVar11 * 8 + 0x20);
      lVar11 = *plVar7;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar4 = FUN_033aa3b4(plVar6,lVar11,0);
      if ((uVar4 & 1) == 0) {
        uVar8 = *(undefined8 *)StringLiteral_2477;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar8 = FUN_033a87c8(uVar8,0);
        uVar4 = FUN_033aa3b4(plVar6,uVar8,0);
        if ((uVar4 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_033c1e64;
          uVar4 = FUN_033ac7d8(plVar6,0);
          if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_033c1e60;
          plVar10 = (long *)*plVar7;
          if ((uVar4 & 1) != 0) {
            if (plVar10 == (long *)0x0) goto LAB_033c1e64;
            plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar10 == (long *)0x0) goto LAB_033c1980;
            bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_1157)) goto LAB_033c1980;
            if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_033c1e60;
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_033c1e64;
            unaff_x25 = (long *)(**(code **)(*plVar7 + 0x308))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x310));
            unaff_x24 = (long *)(**(code **)(*plVar6 + 0x308))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x310));
            param_1 = *(long *)StringLiteral_8523;
            in_w9 = *(int *)(param_1 + 0xe0);
            goto code_r0x033c18bc;
          }
          uVar4 = (**(code **)(*plVar6 + 0x288))(plVar6,plVar10,*(undefined8 *)(*plVar6 + 0x290));
          if ((uVar4 & 1) == 0) goto LAB_033c1980;
        }
      }
LAB_033c1958:
      uVar4 = unaff_x28;
      if (unaff_w20 == unaff_w26) break;
      lVar11 = (long)(int)unaff_w26;
      bVar2 = *(uint *)(unaff_x23 + 0x18) <= unaff_w26;
      unaff_w26 = unaff_w26 + 1;
      if (bVar2) goto LAB_033c1e60;
    }
  } while( true );
  while( true ) {
    *(int *)(lVar11 + 0x20 + uVar4 * 4) = (int)uVar4;
    uVar4 = uVar4 + 1;
    if (unaff_w20 == uVar4) break;
LAB_033c1c28:
    if (uVar12 <= uVar4) goto LAB_033c1e60;
  }
LAB_033c1c40:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar12 = 0;
  }
  else {
    bVar2 = false;
    uVar16 = 1;
    uVar13 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar13) goto LAB_033c1e60;
      plVar7 = unaff_x21 + (long)(int)uVar13 + 4;
      plVar6 = (long *)*plVar7;
      if (plVar6 == (long *)0x0) goto LAB_033c1e64;
      uVar8 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar16) goto LAB_033c1e60;
      plVar10 = unaff_x21 + (long)(int)uVar16 + 4;
      plVar6 = (long *)*plVar10;
      if (plVar6 == (long *)0x0) goto LAB_033c1e64;
      uVar9 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
      }
      iVar3 = FUN_033c2168(uVar8,uVar9,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar13) goto LAB_033c1e60;
        plVar6 = (long *)*plVar7;
        if (plVar6 == (long *)0x0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar8 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar16) goto LAB_033c1e60;
        plVar6 = (long *)*plVar10;
        if (plVar6 == (long *)0x0) goto LAB_033c1e64;
        uVar9 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
        }
        iVar3 = FUN_033c2504(uVar8,lVar11,0,uVar9,lVar11,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar13) || (*(uint *)(unaff_x21 + 3) <= uVar16))
        goto LAB_033c1e60;
        lVar14 = *plVar7;
        lVar15 = *plVar10;
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar3 = FUN_033c2954(lVar14,lVar15);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar12 = uVar16;
      if (iVar3 != 2) {
        uVar12 = uVar13;
      }
      uVar16 = uVar16 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar13 = uVar12;
    } while (in_stack_00000018._4_4_ != uVar16);
    if (bVar2) {
      uVar8 = thunk_FUN_01dd295c(StringLiteral_6016);
      uVar8 = FUN_033d6e4c(uVar8,0);
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar9 = thunk_FUN_01de27b8();
      FUN_033063d0(uVar9,uVar8,0);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar9,uVar8);
    }
  }
  if (uVar12 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar12;
LAB_033c1e3c:
    return unaff_x21[4];
  }
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


