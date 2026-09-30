/*
FUNCTION_NAME: OVRPlugin$$ShutdownInsightPassthrough
ENTRY_POINT: 033c1bb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__ShutdownInsightPassthrough(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long *unaff_x21;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 033c1bb4 to 034c1bb7 has its CatchHandler @ 033c1cd0 */
  uVar13 = unaff_w20;
LAB_033c1bb8:
  uVar11 = unaff_x28;
  uVar10 = *(uint *)(unaff_x21 + 3);
  unaff_x28 = uVar11 + 1;
  if ((long)unaff_x28 < (long)(int)uVar10) {
    if (unaff_x19 == 0) goto LAB_033c1980;
    if (unaff_x28 < uVar10) {
      plVar5 = (long *)unaff_x21[uVar11 + 5];
      if ((plVar5 != (long *)0x0) &&
         (lVar8 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
         lVar8 != 0)) goto code_r0x033c173c;
      goto LAB_033c1e64;
    }
    goto LAB_033c1e60;
  }
  if (in_stack_00000018._4_4_ == 0) {
    lVar8 = 0;
  }
  else {
    if (in_stack_00000018._4_4_ == 1) {
      if (uVar10 == 0) goto LAB_033c1e60;
    }
    else {
                    /* try { // try from 033c1bf8 to 034c1c23 has its CatchHandler @ 033c1ce0 */
      lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,unaff_w20);
      if (0 < (int)unaff_w20) {
        if (lVar8 == 0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar13 = *(uint *)(lVar8 + 0x18);
        uVar11 = 0;
        do {
                    /* try { // try from 033c1c28 to 034c1c3b has its CatchHandler @ 033c1cc8 */
          if (uVar13 <= uVar11) goto LAB_033c1e60;
          *(int *)(lVar8 + 0x20 + uVar11 * 4) = (int)uVar11;
          uVar11 = uVar11 + 1;
                    /* try { // try from 033c1c3c to 034c1c43 has its CatchHandler @ 033c1cc4 */
        } while (unaff_w20 != uVar11);
      }
                    /* try { // try from 033c1c48 to 034c1c5b has its CatchHandler @ 033c1ce4 */
      if ((int)in_stack_00000018._4_4_ < 2) {
        uVar13 = 0;
      }
      else {
        bVar2 = false;
        uVar10 = 1;
        uVar12 = 0;
        do {
                    /* try { // try from 033c1c5c to 034c1cb3 has its CatchHandler @ 033c1a6c */
          if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
          plVar16 = unaff_x21 + (long)(int)uVar12 + 4;
          plVar5 = (long *)*plVar16;
          if (plVar5 == (long *)0x0) goto LAB_033c1e64;
          uVar6 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_033c1e60;
          plVar9 = unaff_x21 + (long)(int)uVar10 + 4;
          plVar5 = (long *)*plVar9;
          if (plVar5 == (long *)0x0) goto LAB_033c1e64;
          uVar7 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
          }
          iVar3 = FUN_033c2168(uVar6,uVar7,in_stack_00000010);
          if ((unaff_x19 != 0) && (iVar3 == 0)) {
            if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
            plVar5 = (long *)*plVar16;
            if (plVar5 == (long *)0x0) goto LAB_033c1e64;
            uVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
            if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_033c1e60;
            plVar5 = (long *)*plVar9;
            if (plVar5 == (long *)0x0) goto LAB_033c1e64;
            uVar7 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
            }
            iVar3 = FUN_033c2504(uVar6,lVar8,0,uVar7,lVar8,0);
          }
          if (iVar3 == 0) {
            if ((*(uint *)(unaff_x21 + 3) <= uVar12) || (*(uint *)(unaff_x21 + 3) <= uVar10))
            goto LAB_033c1e60;
            lVar14 = *plVar16;
            lVar15 = *plVar9;
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            iVar3 = FUN_033c2954(lVar14,lVar15);
            bVar2 = (bool)(bVar2 | iVar3 == 0);
          }
          uVar13 = uVar10;
          if (iVar3 != 2) {
            uVar13 = uVar12;
          }
          uVar10 = uVar10 + 1;
          bVar2 = (bool)(bVar2 & iVar3 != 2);
          uVar12 = uVar13;
        } while (in_stack_00000018._4_4_ != uVar10);
        if (bVar2) {
          uVar6 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar6 = FUN_033d6e4c(uVar6,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar7 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar7,uVar6,0);
          uVar6 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar7,uVar6);
        }
      }
      if (*(uint *)(unaff_x21 + 3) <= uVar13) {
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      unaff_x21 = unaff_x21 + (int)uVar13;
    }
    lVar8 = unaff_x21[4];
  }
  return lVar8;
code_r0x033c173c:
  uVar10 = (uint)*(undefined8 *)(lVar8 + 0x18);
  if (unaff_w20 == uVar10) {
    if ((int)unaff_w20 < 1) {
      uVar13 = 0;
LAB_033c1980:
      if (uVar13 != unaff_w20) goto LAB_033c1bb8;
    }
    else {
      if (uVar10 == 0) goto LAB_033c1e60;
      lVar14 = 0;
      uVar10 = 1;
      while( true ) {
        plVar5 = *(long **)(lVar8 + lVar14 * 8 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_033c1e64;
        uVar13 = uVar10 - 1;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_033c1e60;
        plVar16 = (long *)(unaff_x19 + lVar14 * 8 + 0x20);
        lVar14 = *plVar16;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar4 = FUN_033aa3b4(plVar5,lVar14,0);
        if ((uVar4 & 1) == 0) {
          uVar6 = *(undefined8 *)StringLiteral_2477;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar6 = FUN_033a87c8(uVar6,0);
          uVar4 = FUN_033aa3b4(plVar5,uVar6,0);
          if ((uVar4 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_033c1e64;
            uVar4 = FUN_033ac7d8(plVar5,0);
            if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_033c1e60;
            plVar9 = (long *)*plVar16;
            if ((uVar4 & 1) == 0) {
              uVar4 = (**(code **)(*plVar5 + 0x288))(plVar5,plVar9,*(undefined8 *)(*plVar5 + 0x290))
              ;
            }
            else {
              if (plVar9 == (long *)0x0) goto LAB_033c1e64;
              plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x310));
              if (plVar9 == (long *)0x0) goto LAB_033c1980;
              bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
              if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)StringLiteral_1157)) goto LAB_033c1980;
              if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_033c1e60;
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_033c1e64;
              plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x310));
              plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x310));
              if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
              }
              lVar14 = *(long *)StringLiteral_1157;
              if (plVar16 != (long *)0x0) {
                if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8)
                    != lVar14)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7df0c(plVar16);
                }
              }
              if (plVar5 != (long *)0x0) {
                if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8)
                    != lVar14)) goto LAB_033c1e68;
              }
              uVar4 = FUN_033c1f44(plVar16,plVar5);
            }
            if ((uVar4 & 1) == 0) goto LAB_033c1980;
          }
        }
        if (unaff_w20 == uVar10) break;
        lVar14 = (long)(int)uVar10;
        bVar2 = *(uint *)(lVar8 + 0x18) <= uVar10;
        uVar10 = uVar10 + 1;
        if (bVar2) goto LAB_033c1e60;
      }
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar4 = FUN_033ab18c(in_stack_00000010,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_033c1e60;
      plVar16 = unaff_x21 + uVar11 + 5;
      plVar5 = (long *)*plVar16;
      if ((plVar5 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         lVar8 == 0)) goto LAB_033c1e64;
      uVar4 = FUN_033ac7d8(lVar8,0);
      if ((uVar4 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_033c1e60;
        plVar16 = (long *)*plVar16;
        if ((plVar16 == (long *)0x0) ||
           (plVar5 = (long *)(**(code **)(*plVar16 + 0x228))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
           plVar5 == (long *)0x0)) goto LAB_033c1e64;
        uVar4 = (**(code **)(*plVar5 + 0x288))
                          (plVar5,in_stack_00000010,*(undefined8 *)(*plVar5 + 0x290));
      }
      else {
        if (in_stack_00000010 == (long *)0x0) goto LAB_033c1e64;
        plVar5 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                   (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
        uVar13 = unaff_w20;
        if (plVar5 == (long *)0x0) goto LAB_033c1bb8;
        bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_1157)) goto LAB_033c1bb8;
        plVar9 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                   (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
        if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_033c1e60;
        plVar16 = (long *)*plVar16;
        if ((plVar16 == (long *)0x0) ||
           (plVar5 = (long *)(**(code **)(*plVar16 + 0x228))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
           plVar5 == (long *)0x0)) goto LAB_033c1e64;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
        }
        lVar8 = *(long *)StringLiteral_1157;
        if (plVar9 != (long *)0x0) {
          if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) !=
              lVar8)) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(plVar9);
          }
        }
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) !=
              lVar8)) {
LAB_033c1e68:
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(plVar5);
          }
        }
        uVar4 = FUN_033c1f44(plVar9,plVar5);
      }
      uVar13 = unaff_w20;
      if ((uVar4 & 1) == 0) goto LAB_033c1bb8;
    }
    uVar13 = *(uint *)(unaff_x21 + 3);
    if (uVar13 <= unaff_x28) goto LAB_033c1e60;
    lVar8 = unaff_x21[uVar11 + 5];
    if (lVar8 != 0) {
      lVar14 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar14 == 0) {
        uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar6,0);
      }
      uVar13 = (uint)unaff_x21[3];
    }
    if (uVar13 <= in_stack_00000018._4_4_) goto LAB_033c1e60;
    lVar14 = (long)(int)in_stack_00000018._4_4_;
    unaff_x21[lVar14 + 4] = lVar8;
    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
    thunk_FUN_01e10808(unaff_x21 + lVar14 + 4,lVar8);
    uVar13 = unaff_w20;
  }
  goto LAB_033c1bb8;
}


