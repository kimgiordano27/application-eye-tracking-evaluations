/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 033c198c
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


long OVRPlugin__IsInsightPassthroughSupported(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  long unaff_x19;
  uint unaff_w20;
  uint uVar13;
  long *unaff_x21;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = FUN_033ab18c(in_stack_00000010,0,0);
    uVar14 = unaff_w20;
    if ((uVar5 & 1) == 0) {
LAB_033c1b60:
      uVar12 = *(uint *)(unaff_x21 + 3);
      if (uVar12 <= unaff_x28) goto LAB_033c1e60;
      lVar7 = unaff_x21[unaff_x28 + 4];
      if (lVar7 != 0) {
        lVar15 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar15 == 0) {
          uVar9 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar9,0);
        }
        uVar12 = (uint)unaff_x21[3];
      }
      if (uVar12 <= in_stack_00000018._4_4_) goto LAB_033c1e60;
      lVar15 = (long)(int)in_stack_00000018._4_4_;
      unaff_x21[lVar15 + 4] = lVar7;
      in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
      thunk_FUN_01e10808(unaff_x21 + lVar15 + 4,lVar7);
    }
    else {
      if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_033c1e60;
      plVar8 = unaff_x21 + unaff_x28 + 4;
      plVar6 = (long *)*plVar8;
      if ((plVar6 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         lVar7 == 0)) goto LAB_033c1e64;
      uVar5 = FUN_033ac7d8(lVar7,0);
      if ((uVar5 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_033c1e60;
        plVar8 = (long *)*plVar8;
        if ((plVar8 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230))
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
            if (unaff_x28 < *(uint *)(unaff_x21 + 3)) {
              plVar8 = (long *)*plVar8;
                    /* try { // try from 033c1a6c to 034c1b73 has its CatchHandler @ 033c1a6c
                       catch() { ... } // from try @ 033c1a6c with catch @ 033c1a6c
                       catch() { ... } // from try @ 033c1c5c with catch @ 033c1a6c
                       catch() { ... } // from try @ 033c1cc4 with catch @ 033c1a6c
                       catch() { ... } // from try @ 033c1d84 with catch @ 033c1a6c
                       catch() { ... } // from try @ 033c1dc4 with catch @ 033c1a6c
                       catch() { ... } // from try @ 033c1e30 with catch @ 033c1a6c */
              if ((plVar8 != (long *)0x0) &&
                 (plVar8 = (long *)(**(code **)(*plVar8 + 0x228))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x230)),
                 plVar8 != (long *)0x0)) {
                plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x310));
                if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                }
                lVar7 = *(long *)StringLiteral_1157;
                if (plVar6 != (long *)0x0) {
                  if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8)
                      != lVar7)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01d7df0c(plVar6);
                  }
                }
                if (plVar8 != (long *)0x0) {
                  if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8)
                      != lVar7)) {
LAB_033c1e68:
                    /* WARNING: Subroutine does not return */
                    FUN_01d7df0c(plVar8);
                  }
                }
                uVar5 = FUN_033c1f44(plVar6,plVar8);
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
      uVar5 = unaff_x28 + 1;
      if ((long)(int)uVar12 <= (long)uVar5) {
        if (in_stack_00000018._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000018._4_4_ == 1) {
          if (uVar12 != 0) goto LAB_033c1e3c;
          goto LAB_033c1e60;
        }
        lVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,unaff_w20);
        if ((int)unaff_w20 < 1) goto LAB_033c1c40;
        if (lVar7 == 0) goto LAB_033c1e64;
        uVar14 = *(uint *)(lVar7 + 0x18);
        uVar5 = 0;
        goto LAB_033c1c28;
      }
      if (unaff_x19 != 0) {
        if (uVar12 <= uVar5) goto LAB_033c1e60;
        plVar6 = (long *)unaff_x21[unaff_x28 + 5];
        if ((plVar6 == (long *)0x0) ||
           (lVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)),
           lVar7 == 0)) goto LAB_033c1e64;
        uVar12 = (uint)*(undefined8 *)(lVar7 + 0x18);
        unaff_x28 = uVar5;
        if (unaff_w20 != uVar12) goto LAB_033c1bb8;
        if (0 < (int)unaff_w20) {
          if (uVar12 != 0) {
            lVar15 = 0;
            uVar12 = 1;
            do {
              plVar6 = *(long **)(lVar7 + lVar15 * 8 + 0x20);
              if (plVar6 == (long *)0x0) goto LAB_033c1e64;
              uVar14 = uVar12 - 1;
              plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
              if (*(uint *)(unaff_x19 + 0x18) <= uVar14) break;
              plVar8 = (long *)(unaff_x19 + lVar15 * 8 + 0x20);
              lVar15 = *plVar8;
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar4 = FUN_033aa3b4(plVar6,lVar15,0);
              if ((uVar4 & 1) == 0) {
                uVar9 = *(undefined8 *)StringLiteral_2477;
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar9 = FUN_033a87c8(uVar9,0);
                uVar4 = FUN_033aa3b4(plVar6,uVar9,0);
                if ((uVar4 & 1) == 0) {
                  if (plVar6 == (long *)0x0) goto LAB_033c1e64;
                  uVar4 = FUN_033ac7d8(plVar6,0);
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar14) break;
                  plVar11 = (long *)*plVar8;
                  if ((uVar4 & 1) == 0) {
                    uVar4 = (**(code **)(*plVar6 + 0x288))
                                      (plVar6,plVar11,*(undefined8 *)(*plVar6 + 0x290));
                  }
                  else {
                    if (plVar11 == (long *)0x0) goto LAB_033c1e64;
                    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                                (plVar11,*(undefined8 *)(*plVar11 + 0x310));
                    if (plVar11 == (long *)0x0) goto LAB_033c1980;
                    bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
                    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)StringLiteral_1157)) goto LAB_033c1980;
                    if (*(uint *)(unaff_x19 + 0x18) <= uVar14) break;
                    plVar8 = (long *)*plVar8;
                    if (plVar8 == (long *)0x0) goto LAB_033c1e64;
                    plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                                (plVar8,*(undefined8 *)(*plVar8 + 0x310));
                    plVar8 = (long *)(**(code **)(*plVar6 + 0x308))
                                               (plVar6,*(undefined8 *)(*plVar6 + 0x310));
                    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                    }
                    lVar15 = *(long *)StringLiteral_1157;
                    if (plVar11 != (long *)0x0) {
                      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8
                                   + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(plVar11);
                      }
                    }
                    if (plVar8 != (long *)0x0) {
                      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8
                                   + -8) != lVar15)) goto LAB_033c1e68;
                    }
                    uVar4 = FUN_033c1f44(plVar11,plVar8);
                  }
                  if ((uVar4 & 1) == 0) goto LAB_033c1980;
                }
              }
              if (unaff_w20 == uVar12) goto LAB_033c1988;
              lVar15 = (long)(int)uVar12;
              bVar2 = *(uint *)(lVar7 + 0x18) <= uVar12;
              uVar12 = uVar12 + 1;
              if (bVar2) break;
            } while( true );
          }
          goto LAB_033c1e60;
        }
        uVar14 = 0;
      }
LAB_033c1980:
      unaff_x28 = uVar5;
    } while (uVar14 != unaff_w20);
LAB_033c1988:
    param_1 = *unaff_x29;
    unaff_x28 = uVar5;
  } while( true );
  while( true ) {
    *(int *)(lVar7 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (unaff_w20 == uVar5) break;
LAB_033c1c28:
    if (uVar14 <= uVar5) goto LAB_033c1e60;
  }
LAB_033c1c40:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar14 = 0;
  }
  else {
    bVar2 = false;
    uVar12 = 1;
    uVar13 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar13) goto LAB_033c1e60;
      plVar8 = unaff_x21 + (long)(int)uVar13 + 4;
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) goto LAB_033c1e64;
      uVar9 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
      plVar11 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar6 = (long *)*plVar11;
      if (plVar6 == (long *)0x0) goto LAB_033c1e64;
      uVar10 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
      }
      iVar3 = FUN_033c2168(uVar9,uVar10,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar13) goto LAB_033c1e60;
        plVar6 = (long *)*plVar8;
        if (plVar6 == (long *)0x0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar9 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
        plVar6 = (long *)*plVar11;
        if (plVar6 == (long *)0x0) goto LAB_033c1e64;
        uVar10 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
        }
        iVar3 = FUN_033c2504(uVar9,lVar7,0,uVar10,lVar7,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar13) || (*(uint *)(unaff_x21 + 3) <= uVar12))
        goto LAB_033c1e60;
        lVar15 = *plVar8;
        lVar16 = *plVar11;
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar3 = FUN_033c2954(lVar15,lVar16);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar14 = uVar12;
      if (iVar3 != 2) {
        uVar14 = uVar13;
      }
      uVar12 = uVar12 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar13 = uVar14;
    } while (in_stack_00000018._4_4_ != uVar12);
    if (bVar2) {
      uVar9 = thunk_FUN_01dd295c(StringLiteral_6016);
      uVar9 = FUN_033d6e4c(uVar9,0);
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar10 = thunk_FUN_01de27b8();
      FUN_033063d0(uVar10,uVar9,0);
      uVar9 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar10,uVar9);
    }
  }
  if (uVar14 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar14;
LAB_033c1e3c:
    return unaff_x21[4];
  }
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


