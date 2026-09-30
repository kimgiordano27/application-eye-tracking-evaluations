/*
FUNCTION_NAME: OVRPlugin$$InitializeInsightPassthrough
ENTRY_POINT: 033c1af4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__InitializeInsightPassthrough(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 in_CY;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  ulong in_x9;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long *unaff_x21;
  uint uVar13;
  long lVar14;
  long *unaff_x23;
  long *unaff_x24;
  long lVar15;
  long *plVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x033c1af4:
  if ((!(bool)in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
LAB_033c1e68:
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c(unaff_x24);
  }
LAB_033c1b0c:
  uVar5 = FUN_033c1f44(unaff_x23,unaff_x24);
joined_r0x033c1b18:
  uVar13 = unaff_w20;
  if ((uVar5 & 1) != 0) goto LAB_033c1b60;
LAB_033c1bb8:
  uVar5 = unaff_x28;
  uVar11 = *(uint *)(unaff_x21 + 3);
  unaff_x28 = uVar5 + 1;
  if ((long)unaff_x28 < (long)(int)uVar11) {
    if (unaff_x19 == 0) goto LAB_033c1980;
    if (unaff_x28 < uVar11) {
      plVar7 = (long *)unaff_x21[uVar5 + 5];
      if ((plVar7 != (long *)0x0) &&
         (lVar6 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
         lVar6 != 0)) goto code_r0x033c173c;
      goto LAB_033c1e64;
    }
    goto LAB_033c1e60;
  }
  if (in_stack_00000018._4_4_ == 0) {
    return 0;
  }
  if (in_stack_00000018._4_4_ == 1) {
    if (uVar11 == 0) goto LAB_033c1e60;
    goto LAB_033c1e3c;
  }
  lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,unaff_w20);
  if ((int)unaff_w20 < 1) goto LAB_033c1c40;
  if (lVar6 == 0) goto LAB_033c1e64;
  uVar13 = *(uint *)(lVar6 + 0x18);
  uVar5 = 0;
  goto LAB_033c1c28;
code_r0x033c173c:
  uVar11 = (uint)*(undefined8 *)(lVar6 + 0x18);
  if (unaff_w20 != uVar11) goto LAB_033c1bb8;
  if ((int)unaff_w20 < 1) {
    uVar13 = 0;
LAB_033c1980:
    if (uVar13 != unaff_w20) goto LAB_033c1bb8;
  }
  else {
    if (uVar11 == 0) goto LAB_033c1e60;
    lVar14 = 0;
    uVar11 = 1;
    while( true ) {
      plVar7 = *(long **)(lVar6 + lVar14 * 8 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_033c1e64;
      uVar13 = uVar11 - 1;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
      if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_033c1e60;
      plVar16 = (long *)(unaff_x19 + lVar14 * 8 + 0x20);
      lVar14 = *plVar16;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar4 = FUN_033aa3b4(plVar7,lVar14,0);
      if ((uVar4 & 1) == 0) {
        uVar8 = *(undefined8 *)StringLiteral_2477;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar8 = FUN_033a87c8(uVar8,0);
        uVar4 = FUN_033aa3b4(plVar7,uVar8,0);
        if ((uVar4 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_033c1e64;
          uVar4 = FUN_033ac7d8(plVar7,0);
          if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_033c1e60;
          plVar10 = (long *)*plVar16;
          if ((uVar4 & 1) == 0) {
            uVar4 = (**(code **)(*plVar7 + 0x288))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x290));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_033c1e64;
            plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar10 == (long *)0x0) goto LAB_033c1980;
            bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_1157)) goto LAB_033c1980;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_033c1e60;
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_033c1e64;
            plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x310));
            unaff_x24 = (long *)(**(code **)(*plVar7 + 0x308))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x310));
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
            if (unaff_x24 != (long *)0x0) {
              if ((*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                 (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8)
                  != lVar14)) goto LAB_033c1e68;
            }
            uVar4 = FUN_033c1f44(plVar16,unaff_x24);
          }
          if ((uVar4 & 1) == 0) goto LAB_033c1980;
        }
      }
      if (unaff_w20 == uVar11) break;
      lVar14 = (long)(int)uVar11;
      bVar2 = *(uint *)(lVar6 + 0x18) <= uVar11;
      uVar11 = uVar11 + 1;
      if (bVar2) goto LAB_033c1e60;
    }
  }
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar4 = FUN_033ab18c(in_stack_00000010,0,0);
  if ((uVar4 & 1) == 0) {
LAB_033c1b60:
    uVar13 = *(uint *)(unaff_x21 + 3);
    if (uVar13 <= unaff_x28) goto LAB_033c1e60;
    lVar6 = unaff_x21[unaff_x28 + 4];
                    /* try { // try from 033c1b74 to 034c1b8b has its CatchHandler @ 033c1cdc */
    if (lVar6 != 0) {
      lVar14 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar14 == 0) {
        uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar8,0);
      }
                    /* try { // try from 033c1b8c to 034c1b93 has its CatchHandler @ 033c1cd8 */
      uVar13 = (uint)unaff_x21[3];
    }
                    /* try { // try from 033c1b98 to 034c1bab has its CatchHandler @ 033c1cec */
    if (uVar13 <= in_stack_00000018._4_4_) goto LAB_033c1e60;
    lVar14 = (long)(int)in_stack_00000018._4_4_;
    unaff_x21[lVar14 + 4] = lVar6;
    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
    thunk_FUN_01e10808(unaff_x21 + lVar14 + 4,lVar6);
    uVar13 = unaff_w20;
    goto LAB_033c1bb8;
  }
  if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_033c1e60;
  plVar16 = unaff_x21 + uVar5 + 5;
  plVar7 = (long *)*plVar16;
  if ((plVar7 == (long *)0x0) ||
     (lVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)), lVar6 == 0))
  goto LAB_033c1e64;
  uVar5 = FUN_033ac7d8(lVar6,0);
  if ((uVar5 & 1) != 0) {
    if (in_stack_00000010 == (long *)0x0) goto LAB_033c1e64;
    plVar7 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                               (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
    uVar13 = unaff_w20;
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_1157
         )) {
        unaff_x23 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                      (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310)
                                      );
        if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_033c1e60;
        plVar16 = (long *)*plVar16;
        if ((plVar16 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar16 + 0x228))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
           plVar7 == (long *)0x0)) goto LAB_033c1e64;
        unaff_x24 = (long *)(**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310));
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
        }
        param_3 = *(long *)StringLiteral_1157;
        if (unaff_x23 != (long *)0x0) {
          if ((*(byte *)(*unaff_x23 + 0x130) < *(byte *)(param_3 + 0x130)) ||
             (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) !=
              param_3)) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(unaff_x23);
          }
        }
        if (unaff_x24 == (long *)0x0) goto LAB_033c1b0c;
        param_1 = *unaff_x24;
        in_x9 = (ulong)*(byte *)(param_3 + 0x130);
        in_CY = *(byte *)(param_3 + 0x130) <= *(byte *)(param_1 + 0x130);
        goto code_r0x033c1af4;
      }
    }
    goto LAB_033c1bb8;
  }
  if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_033c1e60;
  plVar16 = (long *)*plVar16;
  if ((plVar16 == (long *)0x0) ||
     (plVar7 = (long *)(**(code **)(*plVar16 + 0x228))(plVar16,*(undefined8 *)(*plVar16 + 0x230)),
     plVar7 == (long *)0x0)) goto LAB_033c1e64;
  uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,in_stack_00000010,*(undefined8 *)(*plVar7 + 0x290));
  goto joined_r0x033c1b18;
  while( true ) {
    *(int *)(lVar6 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (unaff_w20 == uVar5) break;
LAB_033c1c28:
    if (uVar13 <= uVar5) goto LAB_033c1e60;
  }
LAB_033c1c40:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar13 = 0;
  }
  else {
    bVar2 = false;
    uVar11 = 1;
    uVar12 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
      plVar16 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar7 = (long *)*plVar16;
      if (plVar7 == (long *)0x0) goto LAB_033c1e64;
      uVar8 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_033c1e60;
      plVar10 = unaff_x21 + (long)(int)uVar11 + 4;
      plVar7 = (long *)*plVar10;
      if (plVar7 == (long *)0x0) goto LAB_033c1e64;
      uVar9 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
      }
      iVar3 = FUN_033c2168(uVar8,uVar9,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
        plVar7 = (long *)*plVar16;
        if (plVar7 == (long *)0x0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar8 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_033c1e60;
        plVar7 = (long *)*plVar10;
        if (plVar7 == (long *)0x0) goto LAB_033c1e64;
        uVar9 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
        }
        iVar3 = FUN_033c2504(uVar8,lVar6,0,uVar9,lVar6,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar12) || (*(uint *)(unaff_x21 + 3) <= uVar11))
        goto LAB_033c1e60;
        lVar14 = *plVar16;
        lVar15 = *plVar10;
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar3 = FUN_033c2954(lVar14,lVar15);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar13 = uVar11;
      if (iVar3 != 2) {
        uVar13 = uVar12;
      }
      uVar11 = uVar11 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar12 = uVar13;
    } while (in_stack_00000018._4_4_ != uVar11);
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
  if (uVar13 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar13;
LAB_033c1e3c:
    return unaff_x21[4];
  }
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


