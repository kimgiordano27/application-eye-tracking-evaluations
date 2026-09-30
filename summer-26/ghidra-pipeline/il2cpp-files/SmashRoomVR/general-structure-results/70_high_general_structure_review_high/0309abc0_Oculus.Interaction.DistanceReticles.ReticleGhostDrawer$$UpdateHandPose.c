/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 0309abc0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose(ulong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  ulong unaff_x26;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long unaff_x28;
  long in_stack_00000000;
  int iStack0000000000000008;
  int iStack000000000000000c;
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  long in_stack_00000028;
  
  while( true ) {
    unaff_x28 = unaff_x28 + -9;
    uVar14 = (uint)unaff_x28;
    if (param_1 != 0) break;
    if ((int)uVar14 < 10) {
      lVar13 = *unaff_x23;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar13 = *unaff_x23;
      }
      lVar13 = **(long **)(lVar13 + 0xb8);
      if (lVar13 == 0) goto LAB_0309b0a0;
      if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_0309b0a4;
      uVar11 = 0;
      unaff_x26 = unaff_x26 * *(uint *)(lVar13 + unaff_x28 * 4 + 0x20);
      goto LAB_0309ace8;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    unaff_x26 = (unaff_x26 & 0xffffffff) * unaff_x22;
    param_1 = unaff_x26 >> 0x20;
  }
  lVar13 = (long)(int)uVar14;
  do {
    lVar4 = *unaff_x23;
    if (lVar13 < 9) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *unaff_x23;
      }
      lVar8 = **(long **)(lVar4 + 0xb8);
      if (lVar8 == 0) goto LAB_0309b0a0;
      if (*(uint *)(lVar8 + 0x18) <= (uint)lVar13) goto LAB_0309b0a4;
      uVar14 = *(uint *)(lVar8 + lVar13 * 4 + 0x20);
    }
    else {
      uVar14 = 1000000000;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar11 = (unaff_x26 & 0xffffffff) * (ulong)uVar14;
    uVar9 = (unaff_x26 >> 0x20) * (ulong)uVar14 + (uVar11 >> 0x20);
    unaff_x26 = uVar11 & 0xffffffff | uVar9 << 0x20;
    uVar11 = uVar9 >> 0x20;
    uVar14 = (uint)(uVar9 >> 0x20);
    if (lVar13 < 10) goto LAB_0309ae08;
    lVar13 = lVar13 + -9;
  } while (uVar11 == 0);
  lVar13 = (long)(int)lVar13;
  while( true ) {
    lVar4 = *unaff_x23;
    if (lVar13 < 9) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *unaff_x23;
      }
      lVar8 = **(long **)(lVar4 + 0xb8);
      if (lVar8 == 0) goto LAB_0309b0a0;
      if (*(uint *)(lVar8 + 0x18) <= (uint)lVar13) goto LAB_0309b0a4;
      uVar14 = *(uint *)(lVar8 + lVar13 * 4 + 0x20);
    }
    else {
      uVar14 = 1000000000;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar12 = (unaff_x26 & 0xffffffff) * (ulong)uVar14;
    uVar9 = (unaff_x26 >> 0x20) * (ulong)uVar14 + (uVar12 >> 0x20);
    uVar11 = (uVar9 >> 0x20) + (ulong)uVar14 * (uVar11 & 0xffffffff);
    unaff_x26 = uVar12 & 0xffffffff | uVar9 << 0x20;
    if (uVar11 >> 0x20 != 0) break;
    bVar2 = lVar13 < 10;
    lVar13 = lVar13 + -9;
    if (bVar2) goto LAB_0309ace8;
  }
  uVar15 = (uint)lVar13 - 9;
  in_stack_00000010 = unaff_x26;
  _uStack0000000000000018 = uVar11;
  uVar14 = 3;
  if (0 < (int)uVar15) {
    do {
      uVar7 = 1000000000;
      if ((int)uVar15 < 9) {
        lVar13 = *unaff_x23;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar13 = *unaff_x23;
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) {
LAB_0309b0a0:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar15) {
LAB_0309b0a4:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar7 = *(uint *)(lVar13 + (ulong)uVar15 * 4 + 0x20);
      }
      uVar11 = 0;
      uVar9 = 0;
      do {
        uVar1 = *(uint *)((long)&stack0x00000010 + uVar9 * 4);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar12 = uVar11 + (ulong)uVar1 * (ulong)uVar7;
        uVar1 = (int)uVar9 + 1;
        uVar11 = uVar12 >> 0x20;
        *(int *)((long)&stack0x00000010 + uVar9 * 4) = (int)uVar12;
        uVar9 = (ulong)uVar1;
      } while (uVar1 <= uVar14);
      iVar3 = (int)(uVar12 >> 0x20);
      if (iVar3 != 0) {
        uVar14 = uVar14 + 1;
        *(int *)((long)&stack0x00000010 + (ulong)uVar14 * 4) = iVar3;
      }
      uVar7 = uVar15 - 9;
      bVar2 = 8 < (int)uVar15;
      uVar15 = uVar7;
    } while (uVar7 != 0 && bVar2);
  }
  uVar9 = in_stack_00000010;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = *(ulong *)(unaff_x20 + 8);
  uVar15 = *(uint *)(unaff_x20 + 4);
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar12 = uVar11 + uVar9;
    uVar7 = uVar15 + uStack0000000000000018;
    if (!CARRY8(uVar11,uVar9)) {
      if (uVar7 < uStack0000000000000018) goto LAB_0309af24;
      goto LAB_0309af8c;
    }
    uVar7 = uVar7 + 1;
    if (uStack0000000000000018 < uVar7) goto LAB_0309af8c;
LAB_0309af24:
    uVar9 = 3;
    do {
      iVar3 = *(int *)((long)&stack0x00000010 + uVar9 * 4);
      *(int *)((long)&stack0x00000010 + uVar9 * 4) = iVar3 + 1;
      if (iVar3 != -1) goto LAB_0309af8c;
      uVar15 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar15;
    } while (uVar15 <= uVar14);
    *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar15 * 4) = 1;
  }
  else {
    uVar12 = uVar9 - uVar11;
    uVar7 = uStack0000000000000018 - uVar15;
    if (uVar9 < uVar11) {
      uVar7 = uVar7 - 1;
      if (uStack0000000000000018 <= uVar7) {
LAB_0309af60:
        uVar9 = 3;
        do {
          iVar3 = *(int *)((long)&stack0x00000010 + uVar9 * 4);
          *(int *)((long)&stack0x00000010 + uVar9 * 4) = iVar3 + -1;
          uVar9 = (ulong)((int)uVar9 + 1);
        } while (iVar3 == 0);
        if (*(int *)((long)&stack0x00000010 + (ulong)uVar14 * 4) == 0) {
          uVar9 = (ulong)(uVar14 - 1);
          if (uVar14 - 1 < 3) goto LAB_0309afc8;
          goto LAB_0309af90;
        }
      }
    }
    else if (uStack0000000000000018 < uVar15) goto LAB_0309af60;
LAB_0309af8c:
    uVar9 = (ulong)uVar14;
  }
LAB_0309af90:
  _uStack0000000000000018 = CONCAT44(uStack000000000000001c,uVar7);
  in_stack_00000010 = uVar12;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  iVar3 = FUN_0309f960(&stack0x00000010,uVar9,unaff_w24 >> 0x10 & 0xff);
  unaff_w24 = unaff_w24 & 0xff00ffff | iVar3 << 0x10;
  uVar12 = in_stack_00000010;
  uVar7 = uStack0000000000000018;
LAB_0309afc8:
  *unaff_x19 = unaff_w24;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  unaff_x19[1] = uVar7;
  *(ulong *)(unaff_x19 + 2) = uVar12;
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0309ace8:
  uVar14 = (uint)uVar11;
LAB_0309ae08:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = *(ulong *)(unaff_x20 + 8);
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar12 = uVar9 + unaff_x26;
    uVar15 = *(int *)(unaff_x20 + 4) + uVar14;
    if (CARRY8(uVar9,unaff_x26)) {
      uVar7 = uVar15 + 1;
      uVar15 = uVar7;
      if (uVar14 < uVar7) goto LAB_0309afc8;
    }
    else {
      uVar7 = uVar15;
      if (uVar14 <= uVar15) goto LAB_0309afc8;
    }
    if ((unaff_w24 & 0xff0000) == 0) {
      thunk_FUN_01ad9084(StringLiteral_2231);
      uVar5 = thunk_FUN_01afaadc();
      uVar6 = thunk_FUN_01ad9084(StringLiteral_11745);
      FUN_0304f2d8(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01ad9084(StringLiteral_12710);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar5,uVar6);
    }
    uVar7 = (uint)(((ulong)uVar15 | 0x100000000) / 10);
    uVar10 = (uVar12 >> 0x20 | (ulong)(uVar15 + uVar7 * -10) << 0x20) / 10;
    uVar9 = uVar12 & 0xfffffffe | (ulong)(uint)((int)(uVar12 >> 0x20) + (int)uVar10 * -10) << 0x20;
    uVar11 = uVar9 / 10;
    uVar14 = (int)uVar12 + (int)uVar11 * -10;
    unaff_w24 = unaff_w24 - 0x10000;
    uVar12 = uVar10 << 0x20 | uVar9 / 10 & 0xffffffff;
    if ((4 < uVar14) &&
       ((((uVar11 & 1) != 0 || (uVar14 != 5)) &&
        (bVar2 = uVar12 == 0xffffffffffffffff, uVar12 = uVar12 + 1, bVar2)))) {
      uVar7 = uVar7 + 1;
    }
  }
  else {
    uVar12 = unaff_x26 - uVar9;
    uVar15 = uVar14 - *(uint *)(unaff_x20 + 4);
    if (unaff_x26 < uVar9) {
      uVar7 = uVar15 - 1;
      if (uVar14 <= uVar7) {
        unaff_w24 = unaff_w24 ^ 0x80000000;
        uVar12 = -uVar12;
        uVar7 = -uVar15;
      }
    }
    else {
      uVar7 = uVar15;
      if (uVar14 < *(uint *)(unaff_x20 + 4)) {
        bVar2 = uVar12 != 0;
        uVar7 = -uVar15;
        unaff_w24 = unaff_w24 ^ 0x80000000;
        uVar12 = -uVar12;
        if (bVar2) {
          uVar7 = ~uVar15;
        }
      }
    }
  }
  goto LAB_0309afc8;
}


