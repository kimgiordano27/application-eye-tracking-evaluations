/*
FUNCTION_NAME: Unity.VisualScripting.SerializableType$$Equals
ENTRY_POINT: 03e7b468
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


float Unity_VisualScripting_SerializableType__Equals(float param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  char in_NG;
  undefined1 in_ZR;
  bool bVar6;
  char in_OV;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 uVar15;
  long unaff_x19;
  uint *unaff_x21;
  int iVar16;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_s8;
  uint uVar24;
  ulong unaff_d10;
  float fVar25;
  undefined4 uVar26;
  float unaff_s11;
  undefined4 uVar27;
  undefined4 uVar28;
  float unaff_s13;
  float fVar29;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float *in_stack_00000010;
  uint uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  ulong in_stack_00000040;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint uStack0000000000000070;
  float fStack0000000000000074;
  long *in_stack_00000078;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_00000170;
  uint in_stack_00000bd8;
  uint in_stack_00000bdc;
  undefined8 in_stack_00000be0;
  undefined8 in_stack_00000be8;
  undefined4 in_stack_00000bf0;
  
  uVar5 = in_stack_00000040;
  uVar4 = _uStack0000000000000030;
code_r0x03e7b468:
  if ((bool)in_ZR || in_NG != in_OV) {
    param_1 = unaff_s8;
  }
  *(float *)(unaff_x19 + 0x4b4) = param_1;
LAB_03e7b470:
  bVar7 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
  iVar16 = (int)unaff_x22;
  if (unaff_w28 != 9) {
    if (unaff_w29 != 0) goto LAB_03e7b4c4;
    if (unaff_w28 == 3) goto LAB_03e7b4c4;
    if (unaff_w28 == 0x200b) goto LAB_03e7b4c4;
    if (unaff_w28 == 0xad) goto LAB_03e7b4c4;
    goto LAB_03e7b4dc;
  }
LAB_03e7b484:
  bVar2 = true;
  uVar9 = in_stack_00000bd8;
LAB_03e7b4e0:
  fVar25 = (float)unaff_d10;
  fVar22 = *(float *)(unaff_x19 + 0x360);
  fVar23 = *(float *)(unaff_x19 + 0x640);
  fVar21 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
  bVar6 = true;
  if ((fVar22 <= fVar21) && (bVar6 = false, !NAN(fVar22))) {
    bVar6 = fVar22 == -1.0;
  }
  if (!bVar6) {
    fVar21 = fVar22;
  }
  fVar22 = (float)FUN_040cf0d4(&stack0x000000e0,0);
  if (unaff_w26 == 0) {
    unaff_s15 = unaff_s14;
  }
  fVar18 = 1.0;
  if (!bVar7) {
    fVar18 = DAT_00c926dc;
  }
  fStack000000000000005c = ABS(fVar23) + unaff_s15 * fVar22 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
  if ((fStack000000000000005c <= fVar18 * fVar21 || (uVar5 & 1) != 0) ||
     (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
    fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
    in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
    if (!bVar2) goto LAB_03e7b658;
    if (*unaff_x23 != 0) {
      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
      fVar21 = (float)FUN_040cee68(&stack0x00000100,0);
      if (*unaff_x23 != 0) {
        fVar23 = *(float *)(unaff_x19 + 0x640);
        fVar22 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
        fVar22 = unaff_s14 * fVar21 * fVar22;
        fVar21 = fVar22 * (float)(int)(fVar23 / fVar22);
        if (fVar23 < fVar21) goto LAB_03e7b75c;
        fVar21 = fVar23 + fVar22;
        goto LAB_03e7b75c;
      }
    }
  }
  else {
    unaff_w27 = FUN_03e81e20();
    lVar13 = *(long *)(unaff_x19 + 0x488);
    if (lVar13 != 0) {
      uVar10 = *(uint *)(unaff_x19 + 0x494);
      in_stack_00000bd8 = uVar10 - 1;
      if (*(uint *)(lVar13 + 0x18) <= in_stack_00000bd8) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (((uStack000000000000004c & 1) == 0 &&
           *(short *)(lVar13 + (long)(int)in_stack_00000bd8 * (long)iVar16 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        uStack000000000000004c = 0;
        in_stack_00000bdc = 0x2d;
        *unaff_x21 = in_stack_00000bd8;
        unaff_w27 = unaff_w27 - 1;
        unaff_s15 = unaff_s14;
      }
      else {
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_03e7c214;
        in_stack_00000bd8 = uVar9;
        if (*(short *)(lVar13 + (long)(int)uVar10 * unaff_x22 + 0x20) == 0xad) {
          uStack000000000000004c = 1;
          unaff_s15 = unaff_s14;
          goto LAB_03e7bfb0;
        }
        if ((uStack0000000000000030 & uStack0000000000000018 & 1) != 0) {
          fVar22 = *(float *)(unaff_x19 + 0x2d4);
          fVar23 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
          if ((fVar22 < fVar23) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
            fVar25 = fStack000000000000005c;
            if (0.0 < fVar22) {
              fVar25 = fStack000000000000005c / (1.0 - fVar22);
            }
            fVar22 = fVar22 + (fStack000000000000005c - fVar18 * (fVar21 + DAT_00c928e4)) / fVar25;
            if (fVar23 <= fVar22) {
              fVar22 = fVar23;
            }
            *(float *)(unaff_x19 + 0x2d4) = fVar22;
LAB_03e7c098:
            if (DAT_0482ee9c == '\0') {
              thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
              DAT_0482ee9c = '\x01';
            }
            return **(float **)
                     (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
          }
          if ((*(float *)(unaff_x19 + 0x250) < *in_stack_00000010) &&
             (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
            *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
            fVar21 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
            if (fVar21 <= DAT_00c92764) {
              fVar21 = DAT_00c92764;
            }
            fVar21 = *in_stack_00000010 - fVar21;
            *in_stack_00000010 = fVar21;
            fVar22 = fVar21 * 20.0 + 0.5;
            fVar21 = DAT_00c92a58;
            if (fVar22 != INFINITY) {
              fVar21 = (float)(int)fVar22 / 20.0;
            }
            if (fVar21 <= *(float *)(unaff_x19 + 0x250)) {
              fVar21 = *(float *)(unaff_x19 + 0x250);
            }
            *in_stack_00000010 = fVar21;
            goto LAB_03e7c098;
          }
        }
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar21 = *(float *)(unaff_x19 + 0x4c8);
          fVar22 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c();
          }
          fVar21 = fVar21 - fVar22;
          if (((fStack000000000000001c < ABS(fVar21)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar21;
            *(float *)(unaff_x19 + 0x4d8) = fVar21 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar23 = *(float *)(unaff_x19 + 0x640);
        fVar22 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar21 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar22 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar21 = fVar22;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar21;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar4 & 0x100000000) == 0) {
          fVar22 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar22;
          if (fStack0000000000000038 <= fVar22) {
            fStack0000000000000038 = fVar22;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar21;
        }
        FUN_03e821b4();
        lVar13 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar13 == 0) goto LAB_03e7bfc0;
        if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
        fVar21 = *(float *)(unaff_x19 + 0x2c0);
        fVar22 = *(float *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar7 = fVar21 != DAT_00c927ac;
        if (bVar7) {
          fVar25 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar25 = fVar22 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar21 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar7;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar21 + fVar25;
        puVar3 = PTR_DAT_04579e70;
        lVar13 = *(long *)PTR_DAT_04579e70;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar13 = *(long *)puVar3;
        }
        uStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar23;
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar12 = NEON_rev64(uVar12,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar22;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar12;
        uStack0000000000000030 = 1;
        unaff_s15 = unaff_s14;
      }
LAB_03e7bfb0:
      lVar13 = *(long *)(unaff_x19 + 0x478);
      unaff_w27 = unaff_w27 + 1;
      if (lVar13 != 0) {
        if ((int)unaff_w27 < (int)*(uint *)(lVar13 + 0x18)) {
          if (*(uint *)(lVar13 + 0x18) <= unaff_w27) goto LAB_03e7c214;
          unaff_w28 = *(uint *)(lVar13 + (long)(int)unaff_w27 * 0xc + 0x20);
          if (unaff_w28 == 0) goto LAB_03e7bfc4;
          if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03e7a6e4;
          if ((*(long *)(unaff_x19 + 0x368) != 0) &&
             (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 != 0)) {
            if (*unaff_x21 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)*unaff_x21 * unaff_x22;
              *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar13 + 0x2c);
              *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar13 + 0x58);
              *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar13 + 0x38);
              thunk_FUN_01f51358();
              goto LAB_03e7a758;
            }
            goto LAB_03e7c214;
          }
          goto LAB_03e7bfc0;
        }
LAB_03e7bfc4:
        if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
             ((_uStack0000000000000018 & 1) == 0)) ||
            (fVar21 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar21)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
          fVar21 = *(float *)(unaff_x19 + 0x340);
          fVar22 = *(float *)(unaff_x19 + 0x348);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          *(undefined1 *)(unaff_x19 + 0x24c) = 1;
          fVar22 = (fStack000000000000006c + fVar21 + fVar22) * 100.0 + 1.0;
          fVar21 = DAT_00c92378;
          if (fVar22 != INFINITY) {
            fVar21 = (float)(int)fVar22 / 100.0;
          }
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          return fVar21;
        }
        if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
          *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
          fVar21 = *in_stack_00000010;
        }
        *(float *)(unaff_x19 + 0x240) = fVar21;
        fVar21 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
        if (fVar21 <= DAT_00c92764) {
          fVar21 = DAT_00c92764;
        }
        fVar21 = *in_stack_00000010 + fVar21;
        *in_stack_00000010 = fVar21;
        fVar22 = fVar21 * 20.0 + 0.5;
        fVar21 = DAT_00c92a58;
        if (fVar22 != INFINITY) {
          fVar21 = (float)(int)fVar22 / 20.0;
        }
        if (*(float *)(unaff_x19 + 0x254) <= fVar21) {
          fVar21 = *(float *)(unaff_x19 + 0x254);
        }
        *in_stack_00000010 = fVar21;
        goto LAB_03e7c098;
      }
    }
  }
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x03e7a6e4:
  *(undefined1 *)(unaff_x19 + 0x431) = 1;
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  uVar14 = FUN_03e7c218();
  if (((uVar14 & 1) != 0) && (unaff_w27 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) == 0)
     ) goto LAB_03e7bfb0;
LAB_03e7a758:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
  uVar9 = *unaff_x21;
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
  lVar17 = (long)(int)uVar9;
  cVar1 = *(char *)(lVar13 + lVar17 * unaff_x22 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  uVar26 = *(undefined4 *)(unaff_x19 + 0x120);
  if (in_stack_00000bd8 == uVar9) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000bdc == 0x2026) {
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
      *(undefined8 *)(lVar13 + lVar17 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
      thunk_FUN_01f51358();
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      lVar13 = lVar13 + (long)(int)*unaff_x21 * unaff_x22;
      *(undefined4 *)(lVar13 + 0x2c) = 0;
      *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
      thunk_FUN_01f51358();
      lVar13 = *(long *)(unaff_x19 + 0x488);
      if (lVar13 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
      *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
           *(undefined8 *)(unaff_x19 + 0x660);
      thunk_FUN_01f51358();
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03e7bfc0;
      uVar9 = *unaff_x21;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
      bVar7 = true;
      in_stack_00000bd8 = uVar9 + 1;
      *(undefined4 *)(lVar13 + (long)(int)uVar9 * unaff_x22 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x668);
      unaff_w28 = 0x2026;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      in_stack_00000bdc = 3;
      goto LAB_03e7a8f4;
    }
    if (in_stack_00000bdc != 3) {
      bVar7 = true;
      unaff_w28 = in_stack_00000bdc;
      goto LAB_03e7a8f4;
    }
    lVar13 = *in_stack_00000078;
    if (((lVar13 == 0) || (*unaff_x23 == 0)) || (lVar11 = FUN_03e5d25c(*unaff_x23,0), lVar11 == 0))
    goto LAB_03e7bfc0;
    uVar12 = FUN_02bd6170(lVar11,3,*(undefined8 *)PTR_DAT_04579db0);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
    *(undefined8 *)(lVar13 + lVar17 * unaff_x22 + 0x30) = uVar12;
    thunk_FUN_01f51358();
    bVar7 = true;
    unaff_w28 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar7 = false;
LAB_03e7a8f4:
    if ((unaff_w28 != 3) && ((int)uVar9 < *(int *)(unaff_x19 + 0x324))) {
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
      lVar13 = lVar13 + (long)(int)uVar9 * (long)iVar16;
      *(undefined1 *)(lVar13 + 0x194) = 0;
      *(undefined2 *)(lVar13 + 0x20) = 0x200b;
      *(undefined4 *)(lVar13 + 100) = 0;
      *unaff_x21 = uVar9 + 1;
      goto LAB_03e7bfb0;
    }
  }
  iVar8 = *(int *)(unaff_x19 + 0x644);
  if (iVar8 == 0) {
    uVar9 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar9 >> 4 & 1) == 0) {
      if ((uVar9 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar9 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_034fc51c(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar14 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_034fc7fc(unaff_w28,0);
            fStack0000000000000068 = in_stack_00000008._4_4_;
            goto LAB_03e7ac68;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_034fc460(unaff_w28,0);
        fStack0000000000000068 = 1.0;
        if ((uVar14 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_034fc974(unaff_w28,0);
          goto LAB_03e7ac68;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_034fc51c(unaff_w28,0);
      fStack0000000000000068 = 1.0;
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_034fc7fc(unaff_w28,0);
LAB_03e7ac68:
        unaff_w28 = uVar9 & 0xffff;
      }
    }
    iVar8 = *(int *)(unaff_x19 + 0x644);
    if (iVar8 != 0) goto LAB_03e7a954;
LAB_03e7ac74:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
    *unaff_x25 = *(long *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    thunk_FUN_01f51358();
    if (*unaff_x25 == 0) goto LAB_03e7bfb0;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
    uVar10 = *unaff_x21;
    uVar9 = *(uint *)(lVar13 + 0x18);
    if (uVar9 <= uVar10) goto LAB_03e7c214;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar13 + (long)(int)uVar10 * unaff_x22 + 0x58);
    if (bVar7) {
      lVar17 = *(long *)(unaff_x19 + 0x478);
      if (lVar17 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= unaff_w27) goto LAB_03e7c214;
      if ((*(int *)(lVar17 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar10 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
      if (uVar9 <= uVar10 - 1) goto LAB_03e7c214;
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar21 = *(float *)(lVar13 + (long)(int)(uVar10 - 1) * (long)iVar16 + 0x60);
      iVar8 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar13 = *unaff_x23;
    }
    else {
LAB_03e7ad14:
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar21 = *(float *)(unaff_x19 + 0x1e8);
      iVar8 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar13 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar13 == 0) goto LAB_03e7bfc0;
    fVar25 = (float)FUN_040ced80(lVar13 + 0x50,0);
    fVar23 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar23 = 1.0;
    }
    fVar22 = 0.0;
    fVar19 = 0.0;
    if (!(bool)(bVar7 & unaff_w28 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar19 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar22 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(unaff_x19 + 0x488), lVar13 == 0))
    goto LAB_03e7bfc0;
    uVar9 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
    unaff_s15 = ((fStack0000000000000068 * fVar21) / (float)iVar8) * fVar25 * fVar23 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar13 + (long)(int)uVar9 * unaff_x22 + 0x2c) = 0;
LAB_03e7afa0:
    unaff_w26 = (uint)(unaff_w28 == 0xad);
    unaff_s14 = unaff_s13;
    if (unaff_w28 != 0xad && unaff_w28 != 3) {
      unaff_s14 = unaff_s15;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar8 == 0) goto LAB_03e7ac74;
LAB_03e7a954:
    if (iVar8 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      thunk_FUN_01f51358(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar13 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar13 == 0)) goto LAB_03e7bfc0;
      lVar13 = FUN_030f28e4(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_04579db8);
      if (lVar13 == 0) goto LAB_03e7bfb0;
      if (unaff_w28 == 0x3c) {
        unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
      memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar8 = FUN_040ced70(&stack0x00000100,0);
      fVar21 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar8 < 1) {
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        iVar8 = FUN_040ced70(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar23 = (float)FUN_040ced80(&stack0x00000100,0);
        fVar22 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar22 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar25 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03e7bfc0;
        FUN_040cf28c(&stack0x00000be0,*(long *)(lVar13 + 0x20),0);
        in_stack_000000c0 = in_stack_00000be0;
        in_stack_000000c8 = in_stack_00000be8;
        in_stack_000000d0 = in_stack_00000bf0;
        fVar18 = (float)FUN_040cf0bc(&stack0x000000c0,0);
        if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar29 = *(float *)(lVar13 + 0x2c);
        fVar20 = (float)FUN_040cf2c8(*(long *)(lVar13 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar19 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar22 = (fVar21 / (float)iVar8) * fVar23 * fVar22;
        unaff_s15 = fVar22 * (fVar25 / fVar18) * fVar29 * fVar20;
        fVar22 = fVar22 / unaff_s15;
        fVar19 = fVar22 * fVar19;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar21 = (float)FUN_040cede0(&stack0x00000100,0);
        fVar22 = fVar22 * fVar21;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar8 = FUN_040ced70(&stack0x00000100,0);
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar22 = (float)FUN_040ced80(&stack0x00000100,0);
        if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar25 = *(float *)(lVar13 + 0x2c);
        fVar23 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar23 = 1.0;
        }
        fVar18 = (float)FUN_040cf2c8(*(long *)(lVar13 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar19 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        unaff_s15 = (fVar21 / (float)iVar8) * fVar22 * fVar23 * fVar25 * fVar18;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar22 = (float)FUN_040cede0(&stack0x00000100,0);
      }
      *unaff_x25 = lVar13;
      thunk_FUN_01f51358();
      unaff_s13 = 0.0;
      lVar13 = *in_stack_00000078;
      if (lVar13 == 0) goto LAB_03e7bfc0;
      uVar9 = *unaff_x21;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
      lVar17 = lVar13 + (long)(int)uVar9 * unaff_x22;
      *(undefined4 *)(lVar17 + 0x2c) = 1;
      *(float *)(lVar17 + 0x160) = unaff_s15;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar26;
      goto LAB_03e7afa0;
    }
    unaff_w26 = (uint)(unaff_w28 == 0xad);
    lVar13 = *in_stack_00000078;
    fVar19 = 0.0;
    unaff_s14 = 0.0;
    if (unaff_w28 != 0xad && unaff_w28 != 3) {
      unaff_s14 = unaff_s15;
    }
    if (lVar13 == 0) goto LAB_03e7bfc0;
    uVar9 = *unaff_x21;
    fVar22 = 0.0;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
  *(short *)(lVar13 + (long)(int)uVar9 * (long)iVar16 + 0x20) = (short)unaff_w28;
  if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0)) goto LAB_03e7bfc0;
  FUN_040cf28c(&stack0x00000be0,lVar13,0);
  in_stack_000000e0 = in_stack_00000be0;
  in_stack_000000e8 = in_stack_00000be8;
  in_stack_000000f0 = in_stack_00000bf0;
  if ((int)unaff_w28 < 0x10000) {
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_034f9bb4(unaff_w28,0);
    unaff_w29 = uVar9 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    unaff_d10 = 0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03e7bfc0;
    uVar10 = *unaff_x21;
    uVar9 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar10 < (int)uStack0000000000000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= uVar10 + 1) goto LAB_03e7c214;
      lVar13 = *(long *)(lVar13 + (long)(int)(uVar10 + 1) * (long)iVar16 + 0x30);
      if ((((lVar13 == 0) || (*unaff_x23 == 0)) ||
          (lVar17 = *(long *)(*unaff_x23 + 0x128), lVar17 == 0)) ||
         (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0)) goto LAB_03e7bfc0;
      uVar14 = FUN_02bd799c(lVar17,uVar9 | *(int *)(lVar13 + 0x28) << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      uVar26 = 0;
      if ((uVar14 & 1) == 0) {
        uVar27 = 0;
        uVar24 = 0;
        uVar28 = 0;
      }
      else {
        if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
        uVar26 = *(undefined4 *)(in_stack_000000b8 + 0x14);
        uVar27 = *(undefined4 *)(in_stack_000000b8 + 0x18);
        uVar24 = *(uint *)(in_stack_000000b8 + 0x1c);
        uVar28 = *(undefined4 *)(in_stack_000000b8 + 0x20);
        if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar10 = *unaff_x21;
    }
    else {
      uVar26 = 0;
      uVar27 = 0;
      uVar24 = 0;
      uVar28 = 0;
    }
    unaff_d10 = (ulong)uVar24;
    if (0 < (int)uVar10) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= uVar10 - 1) goto LAB_03e7c214;
      lVar13 = *(long *)(lVar13 + (ulong)(uVar10 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar13 == 0) || (*unaff_x23 == 0)) ||
         ((lVar17 = *(long *)(*unaff_x23 + 0x128), lVar17 == 0 ||
          (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0)))) goto LAB_03e7bfc0;
      uVar14 = FUN_02bd799c(lVar17,*(uint *)(lVar13 + 0x28) | uVar9 << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      if ((uVar14 & 1) != 0) {
        if ((in_stack_000000b8 == 0) ||
           (FUN_03e67c10(uVar26,uVar27,unaff_d10,uVar28,*(undefined4 *)(in_stack_000000b8 + 0x28),
                         *(undefined4 *)(in_stack_000000b8 + 0x2c),
                         *(undefined4 *)(in_stack_000000b8 + 0x30),
                         *(undefined4 *)(in_stack_000000b8 + 0x34),0), in_stack_000000b8 == 0))
        goto LAB_03e7bfc0;
        if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
    }
    unaff_s13 = 0.0;
    *(int *)(unaff_x19 + 0x2fc) = (int)unaff_d10;
  }
  fStack0000000000000060 = 0.0;
  fVar21 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar21 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar13,0);
    in_stack_000000c0 = in_stack_00000be0;
    in_stack_000000c8 = in_stack_00000be8;
    in_stack_000000d0 = in_stack_00000bf0;
    fVar23 = (float)FUN_040cf0b4(&stack0x000000c0,0);
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar13,0);
    in_stack_000000c0 = in_stack_00000be0;
    in_stack_000000c8 = in_stack_00000be8;
    in_stack_000000d0 = in_stack_00000bf0;
    fVar25 = (float)FUN_040cf0c4(&stack0x000000c0,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
         (fVar21 * 0.5 - unaff_s14 * (fVar23 * 0.5 + fVar25));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar8 = *(int *)(unaff_x19 + 0x644);
  unaff_s11 = 0.0;
  if (((cVar1 == '\0') && (unaff_s11 = 0.0, iVar8 == 0)) &&
     ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    unaff_s11 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar13 = *in_stack_00000078;
  if (lVar13 == 0) goto LAB_03e7bfc0;
  uVar9 = *unaff_x21;
  lVar17 = (long)(int)uVar9;
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
  fVar21 = *(float *)(unaff_x19 + 0x4d8);
  fVar23 = *(float *)(unaff_x19 + 0x61c);
  fVar19 = fVar19 * unaff_s14;
  *(float *)(lVar13 + lVar17 * unaff_x22 + 0x14c) = (unaff_s13 - fVar21) + fVar23;
  if (iVar8 == 0) {
    fVar19 = fVar19 / fStack0000000000000068;
    fVar22 = (fVar22 * unaff_s14) / fStack0000000000000068;
  }
  else {
    fVar22 = fVar22 * unaff_s14;
  }
  unaff_s8 = fVar23 + fVar19;
  if ((unaff_w29 == 0) || (uVar9 == *(uint *)(unaff_x19 + 0x498))) {
    fVar22 = fVar23 + fVar22;
    fVar25 = unaff_s8;
    fVar18 = fVar22;
    if (fVar23 != 0.0) {
      fVar25 = (unaff_s8 - fVar23) / *(float *)(unaff_x19 + 0x404);
      fVar18 = (fVar22 - fVar23) / *(float *)(unaff_x19 + 0x404);
      if (fVar25 <= unaff_s8) {
        fVar25 = unaff_s8;
      }
      if (fVar22 <= fVar18) {
        fVar18 = fVar22;
      }
    }
    lVar13 = lVar13 + lVar17 * unaff_x22;
    fVar23 = fVar25;
    if (fVar25 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar23 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar20 = fVar18;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar18) {
      fVar20 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar20;
    *(float *)(unaff_x19 + 0x4c8) = fVar23;
    *(float *)(lVar13 + 0x154) = fVar25;
    *(float *)(lVar13 + 0x158) = fVar18;
    *(float *)(lVar13 + 0x148) = unaff_s8 - fVar21;
    *(float *)(unaff_x19 + 0x4c0) = unaff_s8 - fVar21;
    *(float *)(lVar13 + 0x150) = fVar22 - fVar21;
    *(float *)(unaff_x19 + 0x4c4) = fVar22 - fVar21;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar23;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
      fVar22 = *(float *)(unaff_x19 + 0x4bc);
      fVar21 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (unaff_s14 * fVar21) / fStack0000000000000068;
      fVar21 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar22 <= fStack0000000000000068) {
        fVar22 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar22;
    }
  }
  else {
    fVar22 = *(float *)(unaff_x19 + 0x4c8);
    lVar13 = lVar13 + lVar17 * unaff_x22;
    *(float *)(lVar13 + 0x154) = fVar22;
    fVar23 = *(float *)(unaff_x19 + 0x4cc);
    fVar22 = fVar22 - fVar21;
    *(float *)(lVar13 + 0x148) = fVar22;
    *(float *)(lVar13 + 0x158) = fVar23;
    *(float *)(unaff_x19 + 0x4c0) = fVar22;
    fVar23 = fVar23 - fVar21;
    *(float *)(lVar13 + 0x150) = fVar23;
    *(float *)(unaff_x19 + 0x4c4) = fVar23;
  }
  if (fVar21 != 0.0) goto LAB_03e7b470;
  if ((unaff_w29 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
    param_1 = *(float *)(unaff_x19 + 0x4b4);
    in_NG = '\0';
    in_ZR = false;
    in_OV = '\x01';
    if (!NAN(param_1) && !NAN(unaff_s8)) {
      in_NG = param_1 < unaff_s8;
      in_ZR = param_1 == unaff_s8;
      in_OV = '\0';
    }
    goto code_r0x03e7b468;
  }
  bVar7 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
  if (unaff_w28 == 9) goto LAB_03e7b484;
LAB_03e7b4c4:
  fVar25 = (float)unaff_d10;
  if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) ||
     (uVar9 = in_stack_00000bd8, *(int *)(unaff_x19 + 0x644) == 1)) goto LAB_03e7b4dc;
LAB_03e7b658:
  fVar21 = *(float *)(unaff_x19 + 0x640);
  if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
    fVar22 = (float)FUN_040cf0d4(&stack0x000000e0,0);
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar22 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
             (*(float *)(unaff_x19 + 0x2ac) +
             unaff_s14 * (fVar25 + fVar22) +
             fStack0000000000000058 *
             (unaff_s11 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
  }
  else {
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar22 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
             (*(float *)(unaff_x19 + 0x2ac) +
             (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
             fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
  }
  fVar21 = fVar21 + fVar22;
  *(float *)(unaff_x19 + 0x640) = fVar21;
  if ((unaff_w28 == 0x200b) || (unaff_w29 != 0)) {
    fVar21 = fVar21 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
    *(float *)(unaff_x19 + 0x640) = fVar21;
  }
  if (unaff_w28 == 0xd) {
    if (fStack0000000000000064 <= fStack000000000000006c + fVar21) {
      fStack0000000000000064 = fStack000000000000006c + fVar21;
    }
    fStack000000000000006c = 0.0;
    fVar21 = *(float *)(unaff_x19 + 0x40c) + 0.0;
LAB_03e7b75c:
    bVar7 = false;
    *(float *)(unaff_x19 + 0x640) = fVar21;
LAB_03e7b764:
    if (*unaff_x21 == uStack0000000000000070) goto LAB_03e7b820;
  }
  else {
    bVar7 = unaff_w28 == 10;
    if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
       (1 < unaff_w28 - 0x2028)) goto LAB_03e7b764;
LAB_03e7b820:
    if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
      fVar21 = *(float *)(unaff_x19 + 0x4c8);
      fVar22 = *(float *)(unaff_x19 + 0x4d0);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar21 = fVar21 - fVar22;
      if (((fStack000000000000001c < ABS(fVar21)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
         (*(char *)(unaff_x19 + 0x33c) == '\0')) {
        *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar21;
        *(float *)(unaff_x19 + 0x4d8) = fVar21 + *(float *)(unaff_x19 + 0x4d8);
      }
    }
    fVar21 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
    if (fVar21 <= *(float *)(unaff_x19 + 0x4c4)) {
      fStack0000000000000038 = fVar21;
    }
    fVar22 = in_stack_00000040._4_4_ +
             fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
    fVar21 = fStack0000000000000064;
    if (fStack0000000000000064 <= fVar22) {
      fVar21 = fVar22;
    }
    *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
    fStack000000000000006c = fVar21;
    if (*(uint *)(unaff_x19 + 0x494) != uStack0000000000000070) {
      fStack000000000000006c = unaff_s13;
      fStack0000000000000064 = fVar21;
    }
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
    *(undefined1 *)(unaff_x19 + 0x33c) = 0;
    if (bVar7) {
LAB_03e7bb3c:
      FUN_03e821b4();
      FUN_03e821b4();
      uVar10 = *(uint *)(unaff_x19 + 0x494);
      lVar13 = *(long *)(unaff_x19 + 0x488);
      iVar8 = uVar10 + 1;
      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
      *(int *)(unaff_x19 + 0x498) = iVar8;
      if (lVar13 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_03e7c214;
      fVar21 = *(float *)(lVar13 + (long)(int)uVar10 * unaff_x22 + 0x154);
      if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
        fVar22 = 0.0;
        if (!(bool)(unaff_w28 != 0x2029 & (bVar7 ^ 1U))) {
          fVar22 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar15 = 0;
        fVar22 = fVar21 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                 fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                 fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar22) +
                 *(float *)(unaff_x19 + 0x4d8);
      }
      else {
        fVar22 = 0.0;
        if (!(bool)(unaff_w28 != 0x2029 & (bVar7 ^ 1U))) {
          fVar22 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar15 = 1;
        fVar22 = *(float *)(unaff_x19 + 0x4d8) +
                 *(float *)(unaff_x19 + 0x2c0) +
                 fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar22);
      }
      *(float *)(unaff_x19 + 0x4d8) = fVar22;
      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar15;
      puVar3 = PTR_DAT_04579e70;
      lVar13 = *(long *)PTR_DAT_04579e70;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar13 = *(long *)puVar3;
        iVar8 = *unaff_x21 + 1;
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
      *(float *)(unaff_x19 + 0x640) =
           *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
      uVar12 = NEON_rev64(uVar12,4);
      *(float *)(unaff_x19 + 0x4d0) = fVar21;
      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar12;
      *(int *)(unaff_x19 + 0x494) = iVar8;
      unaff_s15 = unaff_s14;
      in_stack_00000bd8 = uVar9;
      goto LAB_03e7bfb0;
    }
    if ((int)unaff_w28 < 0x2028) {
      if (unaff_w28 == 3) {
        if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03e7bfc0;
        unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
        unaff_w28 = 3;
      }
      else if ((unaff_w28 == 0xb) || (unaff_w28 == 0x2d)) goto LAB_03e7bb3c;
    }
    else if (unaff_w28 - 0x2028 < 2) goto LAB_03e7bb3c;
  }
  if (((uVar4 & 0x100000000) == 0) && ((*(uint *)(unaff_x19 + 0x2e0) | 2) != 3))
  goto Unity_VisualScripting_Serialization__Serialize;
  if ((unaff_w29 == 0) && (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03e7b79c;
LAB_03e7b9d0:
    if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
         (0x1d < unaff_w28 - 0xa961)) || (uVar14 = FUN_03e90be8(0), (uVar14 & 1) != 0)) &&
       ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
         (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901)))) goto LAB_03e7b79c;
    lVar13 = FUN_03e90a7c(0);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_03e7bfc0;
    uVar10 = FUN_02afbd84(*(long *)(lVar13 + 0x10),unaff_w28,*(undefined8 *)PTR_DAT_04579da0);
    if ((int)uStack0000000000000070 <= (int)*unaff_x21) {
      if (((uStack0000000000000030 | uVar10 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
        FUN_03e821b4();
      }
LAB_03e7bf74:
      uStack0000000000000030 = 0;
      uStack0000000000000028 = 1;
      goto Unity_VisualScripting_Serialization__Serialize;
    }
    lVar13 = FUN_03e90a7c(0);
    if ((lVar13 == 0) || (lVar17 = *in_stack_00000078, lVar17 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar17 + 0x18) <= *unaff_x21 + 1) goto LAB_03e7c214;
    if (*(long *)(lVar13 + 0x18) == 0) goto LAB_03e7bfc0;
    uVar14 = FUN_02afbd84(*(long *)(lVar13 + 0x18),
                          *(undefined2 *)
                           (lVar17 + (long)(int)(*unaff_x21 + 1) * (long)iVar16 + 0x20),
                          *(undefined8 *)PTR_DAT_04579da0);
    if (((uStack0000000000000030 | uVar10 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
    if ((uVar14 & 1) == 0) goto LAB_03e7bf60;
    if ((uStack0000000000000030 & 1) == 0) goto LAB_03e7bf74;
    if (unaff_w29 != 0) {
      FUN_03e821b4();
    }
    FUN_03e821b4();
    uStack0000000000000028 = 1;
  }
  else {
    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
      if (((0x28 < unaff_w28 - 0x2007) ||
          ((1L << ((ulong)(unaff_w28 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((unaff_w28 != 0xa0 && (unaff_w28 != 0x2060)))) {
        FUN_03e821b4();
        uStack0000000000000028 = 0;
        uStack0000000000000030 = 0;
        in_stack_00000170 = 0xffffffff;
        goto Unity_VisualScripting_Serialization__Serialize;
      }
      goto LAB_03e7b9d0;
    }
LAB_03e7b79c:
    if ((uStack0000000000000028 & 1) != 0) {
      lVar13 = FUN_03e90a7c(0);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_03e7bfc0;
      uVar14 = FUN_02afbd84(*(long *)(lVar13 + 0x10),unaff_w28,*(undefined8 *)PTR_DAT_04579da0);
      if ((uVar14 & 1) == 0) {
        FUN_03e821b4();
      }
      uStack0000000000000028 = 0;
      goto Unity_VisualScripting_Serialization__Serialize;
    }
    if ((uStack0000000000000030 & 1) == 0) {
      uStack0000000000000028 = 0;
      uStack0000000000000030 = 0;
      goto Unity_VisualScripting_Serialization__Serialize;
    }
    if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) || (unaff_w29 != 0)) {
      FUN_03e821b4();
    }
    FUN_03e821b4();
    uStack0000000000000028 = 0;
  }
  uStack0000000000000030 = 1;
Unity_VisualScripting_Serialization__Serialize:
  *unaff_x21 = *unaff_x21 + 1;
  unaff_s15 = unaff_s14;
  in_stack_00000bd8 = uVar9;
  goto LAB_03e7bfb0;
LAB_03e7b4dc:
  bVar2 = false;
  uVar9 = in_stack_00000bd8;
  goto LAB_03e7b4e0;
}


