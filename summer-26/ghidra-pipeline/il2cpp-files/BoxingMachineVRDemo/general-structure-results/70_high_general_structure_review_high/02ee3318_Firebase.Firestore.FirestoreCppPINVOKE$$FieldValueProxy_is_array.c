/*
FUNCTION_NAME: Firebase.Firestore.FirestoreCppPINVOKE$$FieldValueProxy_is_array
ENTRY_POINT: 02ee3318
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Firebase_Firestore_FirestoreCppPINVOKE__FieldValueProxy_is_array(float param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  uint uVar6;
  long *unaff_x23;
  ulong unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_s4;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  ulong unaff_d9;
  float fVar16;
  undefined4 uVar17;
  ulong unaff_d10;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float unaff_s15;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000030;
  float *in_stack_00000038;
  float *in_stack_00000040;
  float *in_stack_00000050;
  float *in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 in_stack_00000088;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float in_stack_000000d0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float in_stack_00000100;
  
code_r0x02ee3318:
  param_1 = param_1 + in_s4;
  fVar13 = fStack00000000000000c8 + (float)unaff_d9;
  fVar15 = in_stack_000000c0._4_4_ + (float)unaff_d10;
  do {
    lVar2 = *(long *)(unaff_x19 + 0x158);
    if (lVar2 == 0) goto LAB_02ee3ac4;
    uVar7 = 0;
    while( true ) {
      uVar3 = (uint)*(ulong *)(lVar2 + 0x18);
      uVar6 = (uint)unaff_x25;
      if ((long)(int)uVar3 <= (long)uVar7) break;
      if (unaff_x25 != uVar7 && fStack00000000000000f0 < fStack00000000000000ec) {
        if (uVar3 <= uVar6) goto LAB_02ee3ac8;
        lVar4 = *(long *)(lVar2 + unaff_x28 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_02ee3ac4;
        if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) <= uVar7) goto LAB_02ee3ac8;
        lVar2 = *(long *)(lVar2 + uVar7 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        fVar16 = *(float *)(lVar4 + 0x20);
        uVar18 = *(undefined8 *)(lVar4 + 0x24);
        fVar19 = *(float *)(lVar2 + 0x20);
        uVar20 = *(undefined8 *)(lVar2 + 0x24);
        if (*(char *)(unaff_x26 + 0x328) == '\0') {
          FUN_02d6084c();
          *(undefined1 *)(unaff_x26 + 0x328) = unaff_w27;
        }
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        fVar16 = fVar16 - fVar19;
        fVar19 = (float)uVar18 - (float)uVar20;
        fVar9 = (float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar20 >> 0x20);
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (in_stack_00000100 <= SQRT(fVar9 * fVar9 + fVar16 * fVar16 + fVar19 * fVar19)) {
          if (lVar2 == 0) goto LAB_02ee3ac4;
        }
        else {
          if (lVar2 == 0) goto LAB_02ee3ac4;
          if ((uint)*(ulong *)(lVar2 + 0x18) <= uVar6) goto LAB_02ee3ac8;
          lVar4 = *(long *)(lVar2 + unaff_x28 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_02ee3ac4;
          if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) <= uVar7) goto LAB_02ee3ac8;
          lVar5 = *(long *)(lVar2 + uVar7 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_02ee3ac4;
          fVar16 = *(float *)(lVar4 + 0x20) - param_1;
          fVar19 = *(float *)(lVar4 + 0x24) - fVar13;
          fVar11 = *(float *)(lVar5 + 0x20) - param_1;
          fVar12 = *(float *)(lVar5 + 0x24) - fVar13;
          fVar10 = *(float *)(lVar4 + 0x28) - fVar15;
          fVar9 = *(float *)(lVar5 + 0x28) - fVar15;
          if (fVar16 * fVar16 + fVar19 * fVar19 + fVar10 * fVar10 <
              fVar11 * fVar11 + fVar12 * fVar12 + fVar9 * fVar9) goto LAB_02ee3544;
        }
        if ((uint)*(ulong *)(lVar2 + 0x18) <= uVar6) goto LAB_02ee3ac8;
        lVar4 = *(long *)(lVar2 + unaff_x28 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_02ee3ac4;
        if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) <= uVar7) goto LAB_02ee3ac8;
        if (*(long *)(lVar2 + uVar7 * 8 + 0x20) == 0) goto LAB_02ee3ac4;
        uVar1 = FUN_02ee3dc8(*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                             *(undefined4 *)(lVar4 + 0x28),param_1,fVar13,fVar15);
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if ((uVar1 & 1) != 0) {
          if (lVar2 == 0) goto LAB_02ee3ac4;
          break;
        }
      }
LAB_02ee3544:
      uVar7 = uVar7 + 1;
      if (lVar2 == 0) goto LAB_02ee3ac4;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_02ee3ac8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    lVar2 = *(long *)(lVar2 + unaff_x28 * 8 + 0x20);
    if (lVar2 == 0) {
LAB_02ee3ac4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    fVar19 = 0.0;
    fVar16 = (float)NEON_fminnm(ABS(unaff_s15 * *(float *)(lVar2 + 0x48) +
                                    fStack00000000000000e8 * *(float *)(lVar2 + 0x44) +
                                    fStack00000000000000f8 * *(float *)(lVar2 + 0x3c) +
                                    fStack00000000000000fc * *(float *)(lVar2 + 0x40)),0x3f800000);
    if (fVar16 <= DAT_01208434) {
      fVar16 = acosf(fVar16);
      fVar19 = (fVar16 + fVar16) * DAT_0120865c;
    }
    if (((long)(int)uVar3 <= (long)uVar7) || (*(float *)(unaff_x19 + 0xd8) < fVar19)) {
      fVar16 = *(float *)(lVar2 + 0x20);
      fVar9 = *(float *)(lVar2 + 0x24);
      fVar10 = *(float *)(lVar2 + 0x28);
      if (*(char *)(unaff_x26 + 0x328) == '\0') {
        FUN_02d6084c();
        *(undefined1 *)(unaff_x26 + 0x328) = unaff_w27;
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar2 = *(long *)(unaff_x19 + 0x158);
      if (lVar2 == 0) goto LAB_02ee3ac4;
      if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_02ee3ac8;
      lVar2 = *(long *)(lVar2 + unaff_x28 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_02ee3ac4;
      fVar11 = *(float *)(unaff_x19 + 0xd4) * in_stack_000000d0;
      if (*(char *)(lVar2 + 0x4d) != '\0') {
        fVar11 = 0.0;
      }
      fVar11 = fVar11 + fStack0000000000000098 * (fVar11 * DAT_01208378 - fVar11);
      if (fStack00000000000000ec <= fStack00000000000000f0) {
        fVar11 = fVar11 * 0.5;
      }
      uVar7 = FUN_02ee3b34(*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                           *(undefined4 *)(lVar2 + 0x28),param_1,fVar13,fVar15);
      if ((uVar7 & 1) == 0) {
        fVar16 = fVar16 - param_1;
        fVar9 = fVar9 - fVar13;
        fVar10 = fVar10 - fVar15;
        fVar15 = SQRT(fVar10 * fVar10 + fVar16 * fVar16 + fVar9 * fVar9);
        fVar13 = fVar11 * DAT_01208380;
        if (uVar6 != 0) {
          fVar13 = fVar11;
        }
        if (((fVar13 < fVar15) || (*(float *)(unaff_x19 + 0xd8) < fVar19)) &&
           (fVar15 = 0.0 - fVar15, in_stack_00000078._4_4_ < fVar15)) {
          in_stack_00000060 = unaff_x25 & 0xffffffff;
          in_stack_00000078._4_4_ = fVar15;
        }
      }
    }
    do {
      lVar2 = *(long *)(unaff_x19 + 0x158);
      unaff_x25 = unaff_x25 + 1;
      if (lVar2 == 0) goto LAB_02ee3ac4;
      uVar3 = (uint)*(undefined8 *)(lVar2 + 0x18);
      uVar6 = (uint)unaff_x25;
      if ((int)uVar3 <= (int)uVar6) {
        uVar6 = (uint)in_stack_00000060;
        if (uVar6 != 0xffffffff) {
          if (uVar3 <= uVar6) goto LAB_02ee3ac8;
          lVar4 = (long)(int)uVar6;
          lVar2 = *(long *)(lVar2 + lVar4 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_02ee3ac4;
          fVar15 = *(float *)(unaff_x22 + 0x3c);
          fVar16 = *(float *)(unaff_x22 + 0x40);
          fVar13 = (float)FUN_06058dfc(*(undefined4 *)(unaff_x22 + 0x38),fVar15,fVar16,
                                       *(undefined4 *)(unaff_x22 + 0x44),
                                       *(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),
                                       *(undefined4 *)(lVar2 + 0x1c),0);
          lVar2 = *(long *)(unaff_x19 + 0x158);
          if (lVar2 == 0) goto LAB_02ee3ac4;
          if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_02ee3ac8;
          lVar2 = *(long *)(lVar2 + lVar4 * 8 + 0x20);
          uVar8 = FUN_06060f00(*(float *)(unaff_x19 + 0xf0),*(float *)(unaff_x19 + 0xf0) * 1.5,0);
          if (lVar2 == 0) goto LAB_02ee3ac4;
          *(undefined4 *)(lVar2 + 0x10) = uVar8;
          lVar2 = *(long *)(unaff_x19 + 0x158);
          if (lVar2 == 0) goto LAB_02ee3ac4;
          if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_02ee3ac8;
          if (*(long *)(lVar2 + lVar4 * 8 + 0x20) == 0) goto LAB_02ee3ac4;
          FUN_02eddc88(fStack00000000000000cc + fVar13,fStack00000000000000c8 + fVar15,
                       in_stack_000000c0._4_4_ + fVar16,fStack00000000000000f8,
                       fStack00000000000000fc,fStack00000000000000e8,fStack00000000000000f4,
                       *(float *)(unaff_x19 + 0xd4) * in_stack_000000d0);
        }
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_02ee3ac8;
        if (*(long *)(lVar2 + 0x20) == 0) goto LAB_02ee3ac4;
        FUN_02ede288(uStack00000000000000b4,*(long *)(lVar2 + 0x20),
                     *(undefined4 *)(unaff_x19 + 0x118),*(undefined8 *)(unaff_x19 + 0x138));
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_02ee3ac8;
        if (*(long *)(lVar2 + 0x28) == 0) goto LAB_02ee3ac4;
        FUN_02ede288(uStack00000000000000b4,*(long *)(lVar2 + 0x28),
                     *(undefined4 *)(unaff_x19 + 0x118),*(undefined8 *)(unaff_x19 + 0x140));
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_02ee3ac8;
        lVar2 = *(long *)(lVar2 + 0x20);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        uVar18 = *(undefined8 *)(lVar2 + 0x20);
        *(undefined4 *)(in_stack_00000020 + 1) = *(undefined4 *)(lVar2 + 0x28);
        *in_stack_00000020 = uVar18;
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_02ee3ac8;
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        uVar18 = *(undefined8 *)(lVar2 + 0x20);
        *(undefined4 *)(in_stack_00000080 + 1) = *(undefined4 *)(lVar2 + 0x28);
        *in_stack_00000080 = uVar18;
        uVar14 = *(undefined4 *)in_stack_00000020;
        uVar8 = *(undefined4 *)((long)in_stack_00000020 + 4);
        uVar17 = *(undefined4 *)(in_stack_00000020 + 1);
        lVar2 = FUN_02ede4dc(in_stack_000000b8);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        uVar14 = FUN_02e59740(uVar14,uVar8,uVar17,*(undefined4 *)(lVar2 + 0x10),
                              *(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),0);
        *(undefined4 *)in_stack_00000020 = uVar14;
        *(undefined4 *)((long)in_stack_00000020 + 4) = uVar8;
        *(undefined4 *)(in_stack_00000020 + 1) = uVar17;
        uVar14 = *(undefined4 *)in_stack_00000080;
        uVar8 = *(undefined4 *)((long)in_stack_00000080 + 4);
        uVar17 = *(undefined4 *)(in_stack_00000080 + 1);
        lVar2 = FUN_02ede4dc(unaff_x21);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        uVar14 = FUN_02e59740(uVar14,uVar8,uVar17,*(undefined4 *)(lVar2 + 0x10),
                              *(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),0);
        *(undefined4 *)in_stack_00000080 = uVar14;
        *(undefined4 *)((long)in_stack_00000080 + 4) = uVar8;
        *(undefined4 *)(in_stack_00000080 + 1) = uVar17;
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_02ee3ac8;
        if ((*(long *)(lVar2 + 0x20) == 0) || (*(long *)(unaff_x19 + 0xf8) == 0)) goto LAB_02ee3ac4;
        fVar13 = (float)FUN_06017d20(*(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x50),
                                     *(long *)(unaff_x19 + 0xf8),0);
        *in_stack_00000058 = fVar13 * in_stack_000000d0;
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_02ee3ac8;
        if ((*(long *)(lVar2 + 0x28) == 0) || (*(long *)(unaff_x19 + 0xf8) == 0)) goto LAB_02ee3ac4;
        fVar13 = (float)FUN_06017d20(*(undefined4 *)(*(long *)(lVar2 + 0x28) + 0x50),
                                     *(long *)(unaff_x19 + 0xf8),0);
        *in_stack_00000050 = fVar13 * in_stack_000000d0;
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_02ee3ac8;
        if ((*(long *)(lVar2 + 0x20) == 0) || (*(long *)(unaff_x19 + 0x108) == 0))
        goto LAB_02ee3ac4;
        fVar13 = (float)FUN_06017d20(*(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x50),
                                     *(long *)(unaff_x19 + 0x108),0);
        *in_stack_00000040 = fVar13 * in_stack_000000d0;
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_02ee3ac8;
        if ((*(long *)(lVar2 + 0x28) == 0) || (*(long *)(unaff_x19 + 0x108) == 0))
        goto LAB_02ee3ac4;
        fVar13 = (float)FUN_06017d20(*(undefined4 *)(*(long *)(lVar2 + 0x28) + 0x50),
                                     *(long *)(unaff_x19 + 0x108),0);
        *in_stack_00000038 = fVar13 * in_stack_000000d0;
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_02ee3ac8;
        lVar2 = *(long *)(lVar2 + 0x20);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        uVar18 = *(undefined8 *)(lVar2 + 0x2c);
        in_stack_00000030[1] = *(undefined8 *)(lVar2 + 0x34);
        *in_stack_00000030 = uVar18;
        lVar2 = *(long *)(unaff_x19 + 0x158);
        if (lVar2 == 0) goto LAB_02ee3ac4;
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_02ee3ac8;
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 != 0) {
          uVar18 = *(undefined8 *)(lVar2 + 0x2c);
          in_stack_00000068[1] = *(undefined8 *)(lVar2 + 0x34);
          *in_stack_00000068 = uVar18;
          return;
        }
        goto LAB_02ee3ac4;
      }
      if (uVar3 <= uVar6) goto LAB_02ee3ac8;
      unaff_x28 = (long)(int)uVar6;
      lVar2 = *(long *)(lVar2 + unaff_x28 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_02ee3ac4;
    } while (*(float *)(lVar2 + 0x50) < 1.0);
    unaff_d9 = (ulong)*(uint *)(unaff_x22 + 0x3c);
    unaff_d10 = (ulong)*(uint *)(unaff_x22 + 0x40);
    in_s4 = (float)FUN_06058dfc(*(undefined4 *)(unaff_x22 + 0x38),unaff_d9,unaff_d10,
                                *(undefined4 *)(unaff_x22 + 0x44),*(undefined4 *)(lVar2 + 0x14),
                                *(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),0);
    lVar4 = *(long *)(unaff_x19 + 0x158);
    fVar16 = fStack00000000000000a8;
    fVar13 = fStack00000000000000ac;
    lVar2 = in_stack_000000b8;
    fVar15 = fStack00000000000000b0;
    if (uVar6 != 0) {
      fVar16 = fStack000000000000009c;
      fVar13 = fStack00000000000000a0;
      lVar2 = unaff_x21;
      fVar15 = fStack00000000000000a4;
    }
    if (lVar4 == 0) goto LAB_02ee3ac4;
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_02ee3ac8;
    lVar4 = *(long *)(lVar4 + unaff_x28 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_02ee3ac4;
    fStack00000000000000ec = *(float *)(lVar2 + 0x14);
    fVar19 = *(float *)(lVar4 + 0x20);
    fVar9 = *(float *)(lVar4 + 0x24);
    fVar10 = *(float *)(lVar4 + 0x28);
    if (*(char *)(unaff_x26 + 0x328) == '\0') {
      FUN_02d6084c();
      *(undefined1 *)(unaff_x26 + 0x328) = unaff_w27;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    fVar19 = fVar19 - fVar15;
    fVar9 = fVar9 - fVar13;
    fVar10 = fVar10 - fVar16;
    fStack00000000000000f0 = SQRT(fVar10 * fVar10 + fVar19 * fVar19 + fVar9 * fVar9);
    fStack00000000000000ec = fStack00000000000000ec * *(float *)(unaff_x19 + 0xe8);
    param_1 = fStack00000000000000cc;
    unaff_s15 = fStack00000000000000f4;
    if (fStack00000000000000f0 < fStack00000000000000ec) goto code_r0x02ee3318;
    lVar2 = *(long *)(unaff_x19 + 0x158);
    if (lVar2 == 0) goto LAB_02ee3ac4;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_02ee3ac8;
    lVar2 = *(long *)(lVar2 + unaff_x28 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_02ee3ac4;
    fVar13 = *(float *)(unaff_x22 + 0x3c);
    fVar15 = *(float *)(unaff_x22 + 0x40);
    param_1 = (float)FUN_06058dfc(*(undefined4 *)(unaff_x22 + 0x38),fVar13,fVar15,
                                  *(undefined4 *)(unaff_x22 + 0x44),*(undefined4 *)(lVar2 + 0x14),
                                  *(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),0);
    param_1 = fStack0000000000000094 + param_1;
    fVar13 = fStack0000000000000090 + fVar13;
    fVar15 = in_stack_00000088._4_4_ + fVar15;
  } while( true );
}


