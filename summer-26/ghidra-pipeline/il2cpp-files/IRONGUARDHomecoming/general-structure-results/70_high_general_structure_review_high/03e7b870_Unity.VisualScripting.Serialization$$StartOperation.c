/*
FUNCTION_NAME: Unity.VisualScripting.Serialization$$StartOperation
ENTRY_POINT: 03e7b870
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


float Unity_VisualScripting_Serialization__StartOperation(float param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 uVar14;
  long unaff_x19;
  byte unaff_w20;
  uint *unaff_x21;
  int iVar15;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  byte unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float unaff_s12;
  undefined4 uVar28;
  float unaff_s13;
  float unaff_s14;
  float fVar29;
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
  uint in_stack_00000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  byte bStack000000000000004c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint in_stack_00000070;
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
  
  uVar4 = _uStack0000000000000030;
  fStack0000000000000048 = unaff_s12;
  fStack0000000000000044 = unaff_s15;
code_r0x03e7b870:
  *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - param_1;
                    /* try { // try from 03e7b884 to 03f7b897 has its CatchHandler @ 03e7bad0 */
  *(float *)(unaff_x19 + 0x4d8) = param_1 + *(float *)(unaff_x19 + 0x4d8);
  fVar29 = unaff_s14;
LAB_03e7b888:
  fVar20 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
  if (fVar20 <= *(float *)(unaff_x19 + 0x4c4)) {
    fStack0000000000000038 = fVar20;
  }
                    /* try { // try from 03e7b8b8 to 03f7b8c3 has its CatchHandler @ 03e7bb38 */
  fVar22 = fStack0000000000000044 +
           fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
  fVar20 = fStack0000000000000064;
  if (fStack0000000000000064 <= fVar22) {
    fVar20 = fVar22;
  }
                    /* try { // try from 03e7b8cc to 03f7b8d7 has its CatchHandler @ 03e7bb34 */
  *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
  fStack000000000000006c = fVar20;
  if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
    fStack000000000000006c = unaff_s13;
    fStack0000000000000064 = fVar20;
  }
  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
  *(undefined1 *)(unaff_x19 + 0x33c) = 0;
                    /* try { // try from 03e7b8e8 to 03f7b8eb has its CatchHandler @ 03e7baf8 */
                    /* try { // try from 03e7b8ec to 03f7b8fb has its CatchHandler @ 03e7bb1c */
  iVar15 = (int)unaff_x22;
  if ((unaff_w20 & 1) == 0) {
    if ((int)unaff_w28 < 0x2028) {
      if (unaff_w28 == 3) {
        if (*(long *)(unaff_x19 + 0x478) != 0) {
          unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
          unaff_w28 = 3;
          goto LAB_03e7b774;
        }
        goto LAB_03e7bfc0;
      }
                    /* try { // try from 03e7b90c to 03f7b90f has its CatchHandler @ 03e7badc */
                    /* try { // try from 03e7b910 to 03f7b91f has its CatchHandler @ 03e7bb08 */
      if ((unaff_w28 != 0xb) && (unaff_w28 != 0x2d)) goto LAB_03e7b774;
    }
    else if (1 < unaff_w28 - 0x2028) goto LAB_03e7b774;
  }
  FUN_03e821b4();
  FUN_03e821b4();
  uVar8 = *(uint *)(unaff_x19 + 0x494);
  lVar11 = *(long *)(unaff_x19 + 0x488);
  iVar7 = uVar8 + 1;
  *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
  *(int *)(unaff_x19 + 0x498) = iVar7;
  if (lVar11 != 0) {
    if (*(uint *)(lVar11 + 0x18) <= uVar8) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    fVar20 = *(float *)(lVar11 + (long)(int)uVar8 * unaff_x22 + 0x154);
    if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
      fVar22 = 0.0;
      if ((unaff_w28 != 0x2029 & (unaff_w20 ^ 0xff)) == 0) {
        fVar22 = *(float *)(unaff_x19 + 0x2cc);
      }
      uVar14 = 0;
      fVar22 = fVar20 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
               fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
               fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar22) +
               *(float *)(unaff_x19 + 0x4d8);
    }
    else {
      fVar22 = 0.0;
      if ((unaff_w28 != 0x2029 & (unaff_w20 ^ 0xff)) == 0) {
        fVar22 = *(float *)(unaff_x19 + 0x2cc);
      }
      uVar14 = 1;
      fVar22 = *(float *)(unaff_x19 + 0x4d8) +
               *(float *)(unaff_x19 + 0x2c0) +
               fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar22);
    }
    *(float *)(unaff_x19 + 0x4d8) = fVar22;
    *(undefined1 *)(unaff_x19 + 0x2c4) = uVar14;
    puVar3 = PTR_DAT_04579e70;
    lVar11 = *(long *)PTR_DAT_04579e70;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar3;
      iVar7 = *unaff_x21 + 1;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x15a8);
    *(float *)(unaff_x19 + 0x640) =
         *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
    uVar10 = NEON_rev64(uVar10,4);
    *(float *)(unaff_x19 + 0x4d0) = fVar20;
    *(undefined8 *)(unaff_x19 + 0x4c8) = uVar10;
    *(int *)(unaff_x19 + 0x494) = iVar7;
LAB_03e7bfb0:
    lVar11 = *(long *)(unaff_x19 + 0x478);
    unaff_w27 = unaff_w27 + 1;
    if (lVar11 != 0) {
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)unaff_w27) {
LAB_03e7bfc4:
        if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
             ((_uStack0000000000000018 & 1) == 0)) ||
            (fVar29 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar29)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
          fVar29 = *(float *)(unaff_x19 + 0x340);
          fVar20 = *(float *)(unaff_x19 + 0x348);
          if (fVar29 <= 0.0) {
            fVar29 = 0.0;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          *(undefined1 *)(unaff_x19 + 0x24c) = 1;
          fVar20 = (fStack000000000000006c + fVar29 + fVar20) * 100.0 + 1.0;
          fVar29 = DAT_00c92378;
          if (fVar20 != INFINITY) {
            fVar29 = (float)(int)fVar20 / 100.0;
          }
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          return fVar29;
        }
        if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
          *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
          fVar29 = *in_stack_00000010;
        }
        *(float *)(unaff_x19 + 0x240) = fVar29;
        fVar29 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
        if (fVar29 <= DAT_00c92764) {
          fVar29 = DAT_00c92764;
        }
        fVar29 = *in_stack_00000010 + fVar29;
        *in_stack_00000010 = fVar29;
        fVar20 = fVar29 * 20.0 + 0.5;
        fVar29 = DAT_00c92a58;
        if (fVar20 != INFINITY) {
          fVar29 = (float)(int)fVar20 / 20.0;
        }
        if (*(float *)(unaff_x19 + 0x254) <= fVar29) {
          fVar29 = *(float *)(unaff_x19 + 0x254);
        }
        *in_stack_00000010 = fVar29;
        goto LAB_03e7c098;
      }
      if (*(uint *)(lVar11 + 0x18) <= unaff_w27) goto LAB_03e7c214;
      unaff_w28 = *(uint *)(lVar11 + (long)(int)unaff_w27 * 0xc + 0x20);
      if (unaff_w28 == 0) goto LAB_03e7bfc4;
      if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03e7a6e4;
      if ((*(long *)(unaff_x19 + 0x368) != 0) &&
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 != 0)) {
        if (*unaff_x21 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)*unaff_x21 * unaff_x22;
          *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar11 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar11 + 0x58);
          *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar11 + 0x38);
          thunk_FUN_01f51358();
          goto LAB_03e7a758;
        }
        goto LAB_03e7c214;
      }
    }
  }
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x03e7a6e4:
  *(undefined1 *)(unaff_x19 + 0x431) = 1;
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  uVar12 = FUN_03e7c218();
  if (((uVar12 & 1) != 0) && (unaff_w27 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) == 0)
     ) goto LAB_03e7bfb0;
LAB_03e7a758:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03e7bfc0;
  uVar8 = *unaff_x21;
  if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
  lVar16 = (long)(int)uVar8;
  cVar1 = *(char *)(lVar11 + lVar16 * unaff_x22 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  uVar26 = *(undefined4 *)(unaff_x19 + 0x120);
  if (in_stack_00000bd8 == uVar8) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000bdc == 0x2026) {
      lVar11 = *in_stack_00000078;
      if (lVar11 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
      *(undefined8 *)(lVar11 + lVar16 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
      thunk_FUN_01f51358();
      lVar11 = *in_stack_00000078;
      if (lVar11 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar11 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      lVar11 = lVar11 + (long)(int)*unaff_x21 * unaff_x22;
      *(undefined4 *)(lVar11 + 0x2c) = 0;
      *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
      thunk_FUN_01f51358();
      lVar11 = *(long *)(unaff_x19 + 0x488);
      if (lVar11 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
      *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
           *(undefined8 *)(unaff_x19 + 0x660);
      thunk_FUN_01f51358();
      lVar11 = *in_stack_00000078;
      if (lVar11 == 0) goto LAB_03e7bfc0;
      uVar8 = *unaff_x21;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
      bVar6 = true;
      in_stack_00000bd8 = uVar8 + 1;
      *(undefined4 *)(lVar11 + (long)(int)uVar8 * unaff_x22 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x668);
      unaff_w28 = 0x2026;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      in_stack_00000bdc = 3;
      goto LAB_03e7a8f4;
    }
    if (in_stack_00000bdc != 3) {
      bVar6 = true;
      unaff_w28 = in_stack_00000bdc;
      goto LAB_03e7a8f4;
    }
    lVar11 = *in_stack_00000078;
    if (((lVar11 == 0) || (*unaff_x23 == 0)) || (lVar9 = FUN_03e5d25c(*unaff_x23,0), lVar9 == 0))
    goto LAB_03e7bfc0;
    uVar10 = FUN_02bd6170(lVar9,3,*(undefined8 *)PTR_DAT_04579db0);
    if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
    *(undefined8 *)(lVar11 + lVar16 * unaff_x22 + 0x30) = uVar10;
    thunk_FUN_01f51358();
    bVar6 = true;
    unaff_w28 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar6 = false;
LAB_03e7a8f4:
    if ((unaff_w28 != 3) && ((int)uVar8 < *(int *)(unaff_x19 + 0x324))) {
      lVar11 = *in_stack_00000078;
      if (lVar11 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
      lVar11 = lVar11 + (long)(int)uVar8 * (long)iVar15;
      *(undefined1 *)(lVar11 + 0x194) = 0;
      *(undefined2 *)(lVar11 + 0x20) = 0x200b;
      *(undefined4 *)(lVar11 + 100) = 0;
      *unaff_x21 = uVar8 + 1;
      goto LAB_03e7bfb0;
    }
  }
  iVar7 = *(int *)(unaff_x19 + 0x644);
  if (iVar7 == 0) {
    uVar8 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar8 >> 4 & 1) == 0) {
      if ((uVar8 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar8 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_034fc51c(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar12 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_034fc7fc(unaff_w28,0);
            fStack0000000000000068 = in_stack_00000008._4_4_;
            goto LAB_03e7ac68;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_034fc460(unaff_w28,0);
        fStack0000000000000068 = 1.0;
        if ((uVar12 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_034fc974(unaff_w28,0);
          goto LAB_03e7ac68;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_034fc51c(unaff_w28,0);
      fStack0000000000000068 = 1.0;
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_034fc7fc(unaff_w28,0);
LAB_03e7ac68:
        unaff_w28 = uVar8 & 0xffff;
      }
    }
    iVar7 = *(int *)(unaff_x19 + 0x644);
    if (iVar7 != 0) goto LAB_03e7a954;
LAB_03e7ac74:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar11 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
    *unaff_x25 = *(long *)(lVar11 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    thunk_FUN_01f51358();
    if (*unaff_x25 == 0) goto LAB_03e7bfb0;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03e7bfc0;
    uVar13 = *unaff_x21;
    uVar8 = *(uint *)(lVar11 + 0x18);
    if (uVar8 <= uVar13) goto LAB_03e7c214;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar11 + (long)(int)uVar13 * unaff_x22 + 0x58);
    if (bVar6) {
      lVar16 = *(long *)(unaff_x19 + 0x478);
      if (lVar16 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w27) goto LAB_03e7c214;
      if ((*(int *)(lVar16 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar13 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
      if (uVar8 <= uVar13 - 1) goto LAB_03e7c214;
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar29 = *(float *)(lVar11 + (long)(int)(uVar13 - 1) * (long)iVar15 + 0x60);
      iVar7 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar11 = *unaff_x23;
    }
    else {
LAB_03e7ad14:
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar29 = *(float *)(unaff_x19 + 0x1e8);
      iVar7 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar11 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar11 == 0) goto LAB_03e7bfc0;
    fVar25 = (float)FUN_040ced80(lVar11 + 0x50,0);
    fVar22 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar22 = 1.0;
    }
    fVar20 = 0.0;
    fVar18 = 0.0;
    if (!(bool)(bVar6 & unaff_w28 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar18 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar20 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar11 = *(long *)(unaff_x19 + 0x488), lVar11 == 0))
    goto LAB_03e7bfc0;
    uVar8 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
    fVar29 = ((fStack0000000000000068 * fVar29) / (float)iVar7) * fVar25 * fVar22 *
             *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar11 + (long)(int)uVar8 * unaff_x22 + 0x2c) = 0;
LAB_03e7afa0:
    unaff_w26 = unaff_w28 == 0xad;
    unaff_s14 = unaff_s13;
    if (!(bool)unaff_w26 && unaff_w28 != 3) {
      unaff_s14 = fVar29;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar7 == 0) goto LAB_03e7ac74;
LAB_03e7a954:
    if (iVar7 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar11 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar11 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      thunk_FUN_01f51358(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar11 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar11 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar11 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar11 == 0)) goto LAB_03e7bfc0;
      lVar11 = FUN_030f28e4(lVar11,*(undefined4 *)(unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_04579db8);
      if (lVar11 == 0) goto LAB_03e7bfb0;
      if (unaff_w28 == 0x3c) {
        unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
      memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar7 = FUN_040ced70(&stack0x00000100,0);
      fVar29 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar7 < 1) {
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        iVar7 = FUN_040ced70(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar22 = (float)FUN_040ced80(&stack0x00000100,0);
        fVar20 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar20 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar25 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*(long *)(lVar11 + 0x20) == 0) goto LAB_03e7bfc0;
        FUN_040cf28c(&stack0x00000be0,*(long *)(lVar11 + 0x20),0);
        in_stack_000000c0 = in_stack_00000be0;
        in_stack_000000c8 = in_stack_00000be8;
        in_stack_000000d0 = in_stack_00000bf0;
        fVar17 = (float)FUN_040cf0bc(&stack0x000000c0,0);
        if (*(long *)(lVar11 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar23 = *(float *)(lVar11 + 0x2c);
        fVar19 = (float)FUN_040cf2c8(*(long *)(lVar11 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar18 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar20 = (fVar29 / (float)iVar7) * fVar22 * fVar20;
        fVar29 = fVar20 * (fVar25 / fVar17) * fVar23 * fVar19;
        fVar20 = fVar20 / fVar29;
        fVar18 = fVar20 * fVar18;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar22 = (float)FUN_040cede0(&stack0x00000100,0);
        fVar20 = fVar20 * fVar22;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar7 = FUN_040ced70(&stack0x00000100,0);
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar20 = (float)FUN_040ced80(&stack0x00000100,0);
        if (*(long *)(lVar11 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar25 = *(float *)(lVar11 + 0x2c);
        fVar22 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar22 = 1.0;
        }
        fVar17 = (float)FUN_040cf2c8(*(long *)(lVar11 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar18 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        fVar29 = (fVar29 / (float)iVar7) * fVar20 * fVar22 * fVar25 * fVar17;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar20 = (float)FUN_040cede0(&stack0x00000100,0);
      }
      *unaff_x25 = lVar11;
      thunk_FUN_01f51358();
      unaff_s13 = 0.0;
      lVar11 = *in_stack_00000078;
      if (lVar11 == 0) goto LAB_03e7bfc0;
      uVar8 = *unaff_x21;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
      lVar16 = lVar11 + (long)(int)uVar8 * unaff_x22;
      *(undefined4 *)(lVar16 + 0x2c) = 1;
      *(float *)(lVar16 + 0x160) = fVar29;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar26;
      goto LAB_03e7afa0;
    }
    unaff_w26 = unaff_w28 == 0xad;
    lVar11 = *in_stack_00000078;
    fVar18 = 0.0;
    unaff_s14 = 0.0;
    if (!(bool)unaff_w26 && unaff_w28 != 3) {
      unaff_s14 = fVar29;
    }
    if (lVar11 == 0) goto LAB_03e7bfc0;
    uVar8 = *unaff_x21;
    fVar20 = 0.0;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
  *(short *)(lVar11 + (long)(int)uVar8 * (long)iVar15 + 0x20) = (short)unaff_w28;
  if ((*unaff_x25 == 0) || (lVar11 = *(long *)(*unaff_x25 + 0x20), lVar11 == 0)) goto LAB_03e7bfc0;
  FUN_040cf28c(&stack0x00000be0,lVar11,0);
  in_stack_000000e0 = in_stack_00000be0;
  in_stack_000000e8 = in_stack_00000be8;
  in_stack_000000f0 = in_stack_00000bf0;
  if ((int)unaff_w28 < 0x10000) {
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_034f9bb4(unaff_w28,0);
    unaff_w29 = uVar8 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    fVar22 = 0.0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03e7bfc0;
    uVar13 = *unaff_x21;
    uVar8 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar13 < (int)in_stack_00000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar11 + 0x18) <= uVar13 + 1) goto LAB_03e7c214;
      lVar11 = *(long *)(lVar11 + (long)(int)(uVar13 + 1) * (long)iVar15 + 0x30);
      if ((((lVar11 == 0) || (*unaff_x23 == 0)) ||
          (lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0)) ||
         (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)) goto LAB_03e7bfc0;
      uVar12 = FUN_02bd799c(lVar16,uVar8 | *(int *)(lVar11 + 0x28) << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      uVar26 = 0;
      if ((uVar12 & 1) == 0) {
        uVar27 = 0;
        fVar22 = 0.0;
        uVar28 = 0;
      }
      else {
        if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
        uVar26 = *(undefined4 *)(in_stack_000000b8 + 0x14);
        uVar27 = *(undefined4 *)(in_stack_000000b8 + 0x18);
        fVar22 = *(float *)(in_stack_000000b8 + 0x1c);
        uVar28 = *(undefined4 *)(in_stack_000000b8 + 0x20);
        if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar13 = *unaff_x21;
    }
    else {
      uVar26 = 0;
      uVar27 = 0;
      fVar22 = 0.0;
      uVar28 = 0;
    }
    if (0 < (int)uVar13) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar11 + 0x18) <= uVar13 - 1) goto LAB_03e7c214;
      lVar11 = *(long *)(lVar11 + (ulong)(uVar13 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar11 == 0) || (*unaff_x23 == 0)) ||
         ((lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0 ||
          (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)))) goto LAB_03e7bfc0;
      uVar12 = FUN_02bd799c(lVar16,*(uint *)(lVar11 + 0x28) | uVar8 << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      if ((uVar12 & 1) != 0) {
        if ((in_stack_000000b8 == 0) ||
           (FUN_03e67c10(uVar26,uVar27,fVar22,uVar28,*(undefined4 *)(in_stack_000000b8 + 0x28),
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
    *(float *)(unaff_x19 + 0x2fc) = fVar22;
  }
  fStack0000000000000060 = 0.0;
  fVar25 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar25 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar11 = *(long *)(*unaff_x25 + 0x20), lVar11 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar11,0);
    in_stack_000000c0 = in_stack_00000be0;
    in_stack_000000c8 = in_stack_00000be8;
    in_stack_000000d0 = in_stack_00000bf0;
    fVar17 = (float)FUN_040cf0b4(&stack0x000000c0,0);
    if ((*unaff_x25 == 0) || (lVar11 = *(long *)(*unaff_x25 + 0x20), lVar11 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar11,0);
    in_stack_000000c0 = in_stack_00000be0;
    in_stack_000000c8 = in_stack_00000be8;
    in_stack_000000d0 = in_stack_00000bf0;
    fVar19 = (float)FUN_040cf0c4(&stack0x000000c0,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
         (fVar25 * 0.5 - unaff_s14 * (fVar17 * 0.5 + fVar19));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar7 = *(int *)(unaff_x19 + 0x644);
  fVar25 = 0.0;
  if (((cVar1 == '\0') && (fVar25 = 0.0, iVar7 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0))
  {
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar25 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar11 = *in_stack_00000078;
  if (lVar11 == 0) goto LAB_03e7bfc0;
  uVar8 = *unaff_x21;
  lVar16 = (long)(int)uVar8;
  if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
  fVar17 = *(float *)(unaff_x19 + 0x4d8);
  fVar19 = *(float *)(unaff_x19 + 0x61c);
  fVar18 = fVar18 * unaff_s14;
  *(float *)(lVar11 + lVar16 * unaff_x22 + 0x14c) = (unaff_s13 - fVar17) + fVar19;
  if (iVar7 == 0) {
    fVar18 = fVar18 / fStack0000000000000068;
    fVar20 = (fVar20 * unaff_s14) / fStack0000000000000068;
  }
  else {
    fVar20 = fVar20 * unaff_s14;
  }
  fVar18 = fVar19 + fVar18;
  if ((unaff_w29 == 0) || (uVar8 == *(uint *)(unaff_x19 + 0x498))) {
    fVar20 = fVar19 + fVar20;
    fVar23 = fVar18;
    fVar21 = fVar20;
    if (fVar19 != 0.0) {
      fVar23 = (fVar18 - fVar19) / *(float *)(unaff_x19 + 0x404);
      fVar21 = (fVar20 - fVar19) / *(float *)(unaff_x19 + 0x404);
      if (fVar23 <= fVar18) {
        fVar23 = fVar18;
      }
      if (fVar20 <= fVar21) {
        fVar21 = fVar20;
      }
    }
    lVar11 = lVar11 + lVar16 * unaff_x22;
    fVar19 = fVar23;
    if (fVar23 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar19 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar24 = fVar21;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar21) {
      fVar24 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar24;
    *(float *)(unaff_x19 + 0x4c8) = fVar19;
    *(float *)(lVar11 + 0x154) = fVar23;
    *(float *)(lVar11 + 0x158) = fVar21;
    *(float *)(lVar11 + 0x148) = fVar18 - fVar17;
    *(float *)(unaff_x19 + 0x4c0) = fVar18 - fVar17;
    *(float *)(lVar11 + 0x150) = fVar20 - fVar17;
    *(float *)(unaff_x19 + 0x4c4) = fVar20 - fVar17;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar19;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
      fVar20 = *(float *)(unaff_x19 + 0x4bc);
      fVar17 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (unaff_s14 * fVar17) / fStack0000000000000068;
      fVar17 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar20 <= fStack0000000000000068) {
        fVar20 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar20;
    }
  }
  else {
    fVar20 = *(float *)(unaff_x19 + 0x4c8);
    lVar11 = lVar11 + lVar16 * unaff_x22;
    *(float *)(lVar11 + 0x154) = fVar20;
    fVar19 = *(float *)(unaff_x19 + 0x4cc);
    fVar20 = fVar20 - fVar17;
    *(float *)(lVar11 + 0x148) = fVar20;
    *(float *)(lVar11 + 0x158) = fVar19;
    *(float *)(unaff_x19 + 0x4c0) = fVar20;
    fVar19 = fVar19 - fVar17;
    *(float *)(lVar11 + 0x150) = fVar19;
    *(float *)(unaff_x19 + 0x4c4) = fVar19;
  }
  if (fVar17 == 0.0) {
    if ((unaff_w29 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar20 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar18) {
        fVar20 = fVar18;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar20;
      goto LAB_03e7b470;
    }
    bVar6 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (unaff_w28 == 9) goto LAB_03e7b484;
LAB_03e7b4c4:
    if ((((bStack000000000000004c | unaff_w26 ^ 0xff) & 1) == 0) ||
       (*(int *)(unaff_x19 + 0x644) == 1)) goto LAB_03e7b4dc;
LAB_03e7b658:
    fVar29 = *(float *)(unaff_x19 + 0x640);
    if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
      fVar20 = (float)FUN_040cf0d4(&stack0x000000e0,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar20 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               unaff_s14 * (fVar22 + fVar20) +
               fStack0000000000000058 *
               (fVar25 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    else {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar20 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
               fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    fVar29 = fVar29 + fVar20;
    *(float *)(unaff_x19 + 0x640) = fVar29;
    if ((unaff_w28 == 0x200b) || (unaff_w29 != 0)) {
      fVar29 = fVar29 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
      *(float *)(unaff_x19 + 0x640) = fVar29;
    }
    if (unaff_w28 == 0xd) {
      if (fStack0000000000000064 <= fStack000000000000006c + fVar29) {
        fStack0000000000000064 = fStack000000000000006c + fVar29;
      }
      fStack000000000000006c = 0.0;
      fVar29 = *(float *)(unaff_x19 + 0x40c) + 0.0;
      goto LAB_03e7b75c;
    }
    unaff_w20 = unaff_w28 == 10;
    if (((unaff_w28 < 0xc) && ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) != 0)) ||
       (unaff_w28 - 0x2028 < 2)) goto LAB_03e7b820;
  }
  else {
LAB_03e7b470:
    bVar6 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (unaff_w28 == 9) {
LAB_03e7b484:
      bVar2 = true;
    }
    else {
      if ((((unaff_w29 != 0) || (unaff_w28 == 3)) || (unaff_w28 == 0x200b)) || (unaff_w28 == 0xad))
      goto LAB_03e7b4c4;
LAB_03e7b4dc:
      bVar2 = false;
    }
    fVar17 = *(float *)(unaff_x19 + 0x360);
    fVar19 = *(float *)(unaff_x19 + 0x640);
    fVar20 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
    bVar5 = true;
    if ((fVar17 <= fVar20) && (bVar5 = false, !NAN(fVar17))) {
      bVar5 = fVar17 == -1.0;
    }
    if (!bVar5) {
      fVar20 = fVar17;
    }
    fVar17 = (float)FUN_040cf0d4(&stack0x000000e0,0);
    if ((bool)unaff_w26 == false) {
      fVar29 = unaff_s14;
    }
    fVar23 = 1.0;
    if (!bVar6) {
      fVar23 = DAT_00c926dc;
    }
    fStack000000000000005c = ABS(fVar19) + fVar29 * fVar17 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fVar23 * fVar20 < fStack000000000000005c && (in_stack_00000040 & 1) == 0) &&
       (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
      unaff_w27 = FUN_03e81e20();
      lVar11 = *(long *)(unaff_x19 + 0x488);
      if (lVar11 == 0) goto LAB_03e7bfc0;
      uVar8 = *(uint *)(unaff_x19 + 0x494);
      uVar13 = uVar8 - 1;
      if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_03e7c214;
      if (((bStack000000000000004c & 1) == 0 &&
           *(short *)(lVar11 + (long)(int)uVar13 * (long)iVar15 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        bStack000000000000004c = 0;
        in_stack_00000bdc = 0x2d;
        *unaff_x21 = uVar13;
        unaff_w27 = unaff_w27 - 1;
        fVar29 = unaff_s14;
        in_stack_00000bd8 = uVar13;
        goto LAB_03e7bfb0;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_03e7c214;
      if (*(short *)(lVar11 + (long)(int)uVar8 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        fVar29 = unaff_s14;
        goto LAB_03e7bfb0;
      }
      if ((uStack0000000000000030 & uStack0000000000000018 & 1) == 0) {
LAB_03e7bd10:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar29 = *(float *)(unaff_x19 + 0x4c8);
          fVar20 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c();
          }
          fVar29 = fVar29 - fVar20;
          if (((fStack000000000000001c < ABS(fVar29)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar29;
            *(float *)(unaff_x19 + 0x4d8) = fVar29 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar22 = *(float *)(unaff_x19 + 0x640);
        fVar20 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar29 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar20 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar29 = fVar20;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar29;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar4 & 0x100000000) == 0) {
          fVar20 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar20;
          if (fStack0000000000000038 <= fVar20) {
            fStack0000000000000038 = fVar20;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar29;
        }
        FUN_03e821b4();
        lVar11 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar11 == 0) goto LAB_03e7bfc0;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
        fVar29 = *(float *)(unaff_x19 + 0x2c0);
        fVar20 = *(float *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar6 = fVar29 != DAT_00c927ac;
        if (bVar6) {
          fVar25 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar25 = fVar20 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar29 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar6;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar29 + fVar25;
        puVar3 = PTR_DAT_04579e70;
        lVar11 = *(long *)PTR_DAT_04579e70;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)puVar3;
        }
        bStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar22;
        uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar10 = NEON_rev64(uVar10,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar20;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar10;
        uStack0000000000000030 = 1;
        fVar29 = unaff_s14;
        goto LAB_03e7bfb0;
      }
      fVar29 = *(float *)(unaff_x19 + 0x2d4);
      fVar22 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
      if ((fVar22 <= fVar29) || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        if ((*in_stack_00000010 <= *(float *)(unaff_x19 + 0x250)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) goto LAB_03e7bd10;
        *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
        fVar29 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
        if (fVar29 <= DAT_00c92764) {
          fVar29 = DAT_00c92764;
        }
        fVar29 = *in_stack_00000010 - fVar29;
        *in_stack_00000010 = fVar29;
        fVar20 = fVar29 * 20.0 + 0.5;
        fVar29 = DAT_00c92a58;
        if (fVar20 != INFINITY) {
          fVar29 = (float)(int)fVar20 / 20.0;
        }
        if (fVar29 <= *(float *)(unaff_x19 + 0x250)) {
          fVar29 = *(float *)(unaff_x19 + 0x250);
        }
        *in_stack_00000010 = fVar29;
      }
      else {
        fVar25 = fStack000000000000005c;
        if (0.0 < fVar29) {
          fVar25 = fStack000000000000005c / (1.0 - fVar29);
        }
        fVar29 = fVar29 + (fStack000000000000005c - fVar23 * (fVar20 + DAT_00c928e4)) / fVar25;
        if (fVar22 <= fVar29) {
          fVar29 = fVar22;
        }
        *(float *)(unaff_x19 + 0x2d4) = fVar29;
      }
LAB_03e7c098:
      if (DAT_0482ee9c == '\0') {
        thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
        DAT_0482ee9c = '\x01';
      }
      return **(float **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
    }
    fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
    fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
    if (!bVar2) goto LAB_03e7b658;
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
    fVar29 = (float)FUN_040cee68(&stack0x00000100,0);
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar22 = *(float *)(unaff_x19 + 0x640);
    fVar20 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
    fVar20 = unaff_s14 * fVar29 * fVar20;
    fVar29 = fVar20 * (float)(int)(fVar22 / fVar20);
    if (fVar29 <= fVar22) {
      fVar29 = fVar22 + fVar20;
    }
LAB_03e7b75c:
    unaff_w20 = false;
    *(float *)(unaff_x19 + 0x640) = fVar29;
  }
  fVar29 = unaff_s14;
  if (*unaff_x21 == in_stack_00000070) goto LAB_03e7b820;
LAB_03e7b774:
  if (((uVar4 & 0x100000000) == 0) && ((*(uint *)(unaff_x19 + 0x2e0) | 2) != 3))
  goto Unity_VisualScripting_Serialization__Serialize;
                    /* try { // try from 03e7b924 to 03f7b92f has its CatchHandler @ 03e7baf0 */
  if (((unaff_w29 == 0) && ((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)))) && (unaff_w28 != 0xad)) {
    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03e7b79c;
LAB_03e7b9d0:
                    /* try { // try from 03e7ba04 to 03f7ba07 has its CatchHandler @ 03e7bba8 */
                    /* try { // try from 03e7ba08 to 03f7ba0b has its CatchHandler @ 03e7bb54 */
                    /* try { // try from 03e7ba0c to 03f7ba0f has its CatchHandler @ 03e7bb40 */
                    /* try { // try from 03e7ba10 to 03f7ba13 has its CatchHandler @ 03e7bb30 */
                    /* try { // try from 03e7ba14 to 03f7ba17 has its CatchHandler @ 03e7bb24 */
                    /* try { // try from 03e7ba18 to 03f7ba1b has its CatchHandler @ 03e7bafc */
                    /* try { // try from 03e7ba1c to 03f7ba1f has its CatchHandler @ 03e7bab8 */
                    /* try { // try from 03e7ba20 to 03f7ba23 has its CatchHandler @ 03e7ba88 */
                    /* try { // try from 03e7ba24 to 03f7ba27 has its CatchHandler @ 03e7ba84 */
                    /* try { // try from 03e7ba28 to 03f7ba2b has its CatchHandler @ 03e7ba7c */
                    /* try { // try from 03e7ba2c to 03f7ba2f has its CatchHandler @ 03e7bab4 */
                    /* try { // try from 03e7ba30 to 03f7ba33 has its CatchHandler @ 03e7ba6c */
                    /* try { // try from 03e7ba34 to 03f7ba37 has its CatchHandler @ 03e7bab0 */
                    /* try { // try from 03e7ba38 to 03f7ba3b has its CatchHandler @ 03e7ba68 */
                    /* try { // try from 03e7ba3c to 03f7ba43 has its CatchHandler @ 03e7baac */
                    /* catch() { ... } // from try @ 03e7b2e0 with catch @ 03e7ba44
                       try { // try from 03e7ba44 to 03f7bb77 has its CatchHandler @ 03e7afa0 */
                    /* catch() { ... } // from try @ 03e7b2a0 with catch @ 03e7ba48 */
                    /* catch() { ... } // from try @ 03e7b228 with catch @ 03e7ba4c */
                    /* catch() { ... } // from try @ 03e7b278 with catch @ 03e7ba50 */
    if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
         (0x1d < unaff_w28 - 0xa961)) || (uVar12 = FUN_03e90be8(0), (uVar12 & 1) != 0)) &&
       (((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
        ((0x717d < unaff_w28 - 0x2e81 && (0x1fd < unaff_w28 - 0xf901)))))) goto LAB_03e7b79c;
                    /* catch() { ... } // from try @ 03e7b580 with catch @ 03e7ba54 */
                    /* catch() { ... } // from try @ 03e7b51c with catch @ 03e7ba58 */
    lVar11 = FUN_03e90a7c(0);
                    /* catch() { ... } // from try @ 03e7b4b8 with catch @ 03e7ba5c */
                    /* catch() { ... } // from try @ 03e7b454 with catch @ 03e7ba60 */
                    /* catch() { ... } // from try @ 03e7b3f0 with catch @ 03e7ba64 */
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_03e7bfc0;
                    /* catch() { ... } // from try @ 03e7ba38 with catch @ 03e7ba68 */
                    /* catch() { ... } // from try @ 03e7ba30 with catch @ 03e7ba6c */
                    /* catch() { ... } // from try @ 03e7b338 with catch @ 03e7ba70 */
                    /* catch() { ... } // from try @ 03e7b310 with catch @ 03e7ba74 */
                    /* catch() { ... } // from try @ 03e7b308 with catch @ 03e7ba78 */
    uVar8 = FUN_02afbd84(*(long *)(lVar11 + 0x10),unaff_w28,*(undefined8 *)PTR_DAT_04579da0);
                    /* catch() { ... } // from try @ 03e7ba28 with catch @ 03e7ba7c */
                    /* catch() { ... } // from try @ 03e7b25c with catch @ 03e7ba80 */
                    /* catch() { ... } // from try @ 03e7ba24 with catch @ 03e7ba84 */
                    /* catch() { ... } // from try @ 03e7ba20 with catch @ 03e7ba88 */
                    /* catch() { ... } // from try @ 03e7b7f8 with catch @ 03e7ba8c */
    if ((int)in_stack_00000070 <= (int)*unaff_x21) {
      if (((uStack0000000000000030 | uVar8 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
        FUN_03e821b4();
      }
LAB_03e7bf74:
      uStack0000000000000030 = 0;
      uStack0000000000000028 = 1;
      goto Unity_VisualScripting_Serialization__Serialize;
    }
                    /* catch() { ... } // from try @ 03e7b558 with catch @ 03e7ba90 */
                    /* catch() { ... } // from try @ 03e7b4f4 with catch @ 03e7ba94 */
    lVar11 = FUN_03e90a7c(0);
                    /* catch() { ... } // from try @ 03e7b490 with catch @ 03e7ba98 */
                    /* catch() { ... } // from try @ 03e7b42c with catch @ 03e7ba9c */
                    /* catch() { ... } // from try @ 03e7b3c8 with catch @ 03e7baa0 */
                    /* catch() { ... } // from try @ 03e7b814 with catch @ 03e7baa4 */
    if ((lVar11 == 0) || (lVar16 = *in_stack_00000078, lVar16 == 0)) goto LAB_03e7bfc0;
                    /* catch() { ... } // from try @ 03e7b0a4 with catch @ 03e7baa8 */
                    /* catch() { ... } // from try @ 03e7b9bc with catch @ 03e7baac
                       catch() { ... } // from try @ 03e7ba3c with catch @ 03e7baac */
                    /* catch() { ... } // from try @ 03e7b378 with catch @ 03e7bab0
                       catch() { ... } // from try @ 03e7ba34 with catch @ 03e7bab0 */
                    /* catch() { ... } // from try @ 03e7b2f8 with catch @ 03e7bab4
                       catch() { ... } // from try @ 03e7ba2c with catch @ 03e7bab4 */
                    /* catch() { ... } // from try @ 03e7b1f0 with catch @ 03e7bab8
                       catch() { ... } // from try @ 03e7ba1c with catch @ 03e7bab8 */
    if (*(uint *)(lVar16 + 0x18) <= *unaff_x21 + 1) goto LAB_03e7c214;
                    /* catch() { ... } // from try @ 03e7b7c4 with catch @ 03e7babc */
                    /* catch() { ... } // from try @ 03e7b978 with catch @ 03e7bac0 */
    if (*(long *)(lVar11 + 0x18) == 0) goto LAB_03e7bfc0;
                    /* catch() { ... } // from try @ 03e7b7fc with catch @ 03e7bac4 */
                    /* catch() { ... } // from try @ 03e7b858 with catch @ 03e7bac8 */
                    /* catch() { ... } // from try @ 03e7b950 with catch @ 03e7bacc */
    uVar12 = FUN_02afbd84(*(long *)(lVar11 + 0x18),
                          *(undefined2 *)
                           (lVar16 + (long)(int)(*unaff_x21 + 1) * (long)iVar15 + 0x20),
                          *(undefined8 *)PTR_DAT_04579da0);
    if (((uStack0000000000000030 | uVar8 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
    if ((uVar12 & 1) == 0) goto LAB_03e7bf60;
    if ((uStack0000000000000030 & 1) == 0) goto LAB_03e7bf74;
    if (unaff_w29 != 0) {
      FUN_03e821b4();
    }
    FUN_03e821b4();
    uStack0000000000000028 = 1;
  }
  else {
    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
                    /* try { // try from 03e7b9bc to 03f7b9c7 has its CatchHandler @ 03e7baac */
                    /* try { // try from 03e7b9c8 to 03f7ba03 has its CatchHandler @ 03e7afa0 */
      if ((((0x28 < unaff_w28 - 0x2007) ||
           ((1L << ((ulong)(unaff_w28 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
          (unaff_w28 != 0xa0)) && (unaff_w28 != 0x2060)) {
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
      lVar11 = FUN_03e90a7c(0);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_03e7bfc0;
      uVar12 = FUN_02afbd84(*(long *)(lVar11 + 0x10),unaff_w28,*(undefined8 *)PTR_DAT_04579da0);
      if ((uVar12 & 1) == 0) {
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
                    /* try { // try from 03e7b950 to 03f7b95f has its CatchHandler @ 03e7bacc */
    if ((((bStack000000000000004c | unaff_w26 ^ 0xff) & 1) == 0) || (unaff_w29 != 0)) {
      FUN_03e821b4();
    }
                    /* try { // try from 03e7b978 to 03f7b993 has its CatchHandler @ 03e7bac0 */
    FUN_03e821b4();
    uStack0000000000000028 = 0;
  }
  uStack0000000000000030 = 1;
Unity_VisualScripting_Serialization__Serialize:
  *unaff_x21 = *unaff_x21 + 1;
  goto LAB_03e7bfb0;
LAB_03e7b820:
  fVar29 = unaff_s14;
  if (*(float *)(unaff_x19 + 0x4d8) <= 0.0) goto LAB_03e7b888;
  param_1 = *(float *)(unaff_x19 + 0x4c8);
  fVar29 = *(float *)(unaff_x19 + 0x4d0);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  param_1 = param_1 - fVar29;
  fVar29 = unaff_s14;
  if (((ABS(param_1) <= fStack000000000000001c) || (*(char *)(unaff_x19 + 0x2c4) != '\0')) ||
     (*(char *)(unaff_x19 + 0x33c) != '\0')) goto LAB_03e7b888;
  goto code_r0x03e7b870;
}


