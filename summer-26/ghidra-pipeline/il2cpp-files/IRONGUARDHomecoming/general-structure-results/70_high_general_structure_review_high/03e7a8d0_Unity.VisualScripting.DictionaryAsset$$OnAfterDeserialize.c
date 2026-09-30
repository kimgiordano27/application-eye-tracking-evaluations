/*
FUNCTION_NAME: Unity.VisualScripting.DictionaryAsset$$OnAfterDeserialize
ENTRY_POINT: 03e7a8d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


float Unity_VisualScripting_DictionaryAsset__OnAfterDeserialize(long param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined1 uVar18;
  undefined4 in_w10;
  long unaff_x19;
  uint uVar19;
  uint unaff_w20;
  uint *unaff_x21;
  int iVar20;
  ulong unaff_x22;
  long *unaff_x23;
  undefined4 unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w29;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float unaff_s13;
  undefined4 uVar33;
  float unaff_s15;
  float fVar34;
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
  uint uVar35;
  uint uVar36;
  undefined8 in_stack_00000be0;
  undefined8 in_stack_00000be8;
  undefined4 in_stack_00000bf0;
  
  uVar6 = in_stack_00000040;
  uVar5 = _uStack0000000000000030;
code_r0x03e7a8d0:
  uVar35 = unaff_w26 + 1;
  *(undefined4 *)(param_1 + 0x58) = in_w10;
  *(char *)(unaff_x19 + 0x2f8) = (char)unaff_w29;
  uVar36 = 3;
  uVar12 = 0x2026;
  uVar19 = unaff_w20;
LAB_03e7a8f4:
  iVar20 = (int)unaff_x22;
  if (uVar12 == 3) goto LAB_03e7a944;
  if (*(int *)(unaff_x19 + 0x324) <= (int)unaff_w26) goto LAB_03e7a944;
  lVar17 = *in_stack_00000078;
  if (lVar17 == 0) {
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar17 + 0x18) <= unaff_w26) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar17 = lVar17 + (long)(int)unaff_w26 * (long)iVar20;
  *(undefined1 *)(lVar17 + 0x194) = 0;
  *(undefined2 *)(lVar17 + 0x20) = 0x200b;
  *(undefined4 *)(lVar17 + 100) = 0;
  *unaff_x21 = unaff_w26 + 1;
LAB_03e7bfb0:
  lVar17 = *(long *)(unaff_x19 + 0x478);
  unaff_w27 = unaff_w27 + 1;
  if (lVar17 != 0) {
    if ((int)*(uint *)(lVar17 + 0x18) <= (int)unaff_w27) {
LAB_03e7bfc4:
      if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
           ((_uStack0000000000000018 & 1) == 0)) ||
          (fVar34 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar34)) ||
         (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        fVar34 = *(float *)(unaff_x19 + 0x340);
        fVar22 = *(float *)(unaff_x19 + 0x348);
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        *(undefined1 *)(unaff_x19 + 0x24c) = 1;
        fVar22 = (fStack000000000000006c + fVar34 + fVar22) * 100.0 + 1.0;
        fVar34 = DAT_00c92378;
        if (fVar22 != INFINITY) {
          fVar34 = (float)(int)fVar22 / 100.0;
        }
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
        return fVar34;
      }
      if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
        fVar34 = *in_stack_00000010;
      }
      *(float *)(unaff_x19 + 0x240) = fVar34;
      fVar34 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
      if (fVar34 <= DAT_00c92764) {
        fVar34 = DAT_00c92764;
      }
      fVar34 = *in_stack_00000010 + fVar34;
      *in_stack_00000010 = fVar34;
      fVar22 = fVar34 * 20.0 + 0.5;
      fVar34 = DAT_00c92a58;
      if (fVar22 != INFINITY) {
        fVar34 = (float)(int)fVar22 / 20.0;
      }
      if (*(float *)(unaff_x19 + 0x254) <= fVar34) {
        fVar34 = *(float *)(unaff_x19 + 0x254);
      }
      *in_stack_00000010 = fVar34;
      goto LAB_03e7c098;
    }
    if (*(uint *)(lVar17 + 0x18) <= unaff_w27) goto LAB_03e7c214;
    uVar12 = *(uint *)(lVar17 + (long)(int)unaff_w27 * 0xc + 0x20);
    if (uVar12 == 0) goto LAB_03e7bfc4;
    if ((uVar12 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03e7a6e4;
    if ((*(long *)(unaff_x19 + 0x368) != 0) &&
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 != 0)) {
      if (*unaff_x21 < *(uint *)(lVar17 + 0x18)) {
        lVar17 = lVar17 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar17 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar17 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar17 + 0x38);
        thunk_FUN_01f51358();
        goto LAB_03e7a758;
      }
      goto LAB_03e7c214;
    }
  }
  goto LAB_03e7bfc0;
code_r0x03e7a6e4:
  *(undefined1 *)(unaff_x19 + 0x431) = 1;
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  uVar13 = FUN_03e7c218();
  if (((uVar13 & 1) != 0) && (unaff_w27 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) == 0)
     ) goto LAB_03e7bfb0;
LAB_03e7a758:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
  unaff_w26 = *unaff_x21;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w26) goto LAB_03e7c214;
  lVar21 = (long)(int)unaff_w26;
  bVar2 = *(byte *)(lVar17 + lVar21 * unaff_x22 + 0x5c);
  unaff_w20 = (uint)bVar2;
  uVar19 = (uint)bVar2;
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  unaff_w24 = *(undefined4 *)(unaff_x19 + 0x120);
  if (uVar35 != unaff_w26) {
    unaff_w29 = 0;
    uVar19 = unaff_w20;
    goto LAB_03e7a8f4;
  }
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  if (uVar36 == 0x2026) {
    lVar17 = *in_stack_00000078;
    if (lVar17 == 0) goto LAB_03e7bfc0;
    if (*(uint *)(lVar17 + 0x18) <= unaff_w26) goto LAB_03e7c214;
    *(undefined8 *)(lVar17 + lVar21 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
    thunk_FUN_01f51358();
    lVar17 = *in_stack_00000078;
    if (lVar17 == 0) goto LAB_03e7bfc0;
    if (*(uint *)(lVar17 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
    lVar17 = lVar17 + (long)(int)*unaff_x21 * unaff_x22;
    *(undefined4 *)(lVar17 + 0x2c) = 0;
    *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
    thunk_FUN_01f51358();
    lVar17 = *(long *)(unaff_x19 + 0x488);
    if (lVar17 == 0) goto LAB_03e7bfc0;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
    *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
         *(undefined8 *)(unaff_x19 + 0x660);
    thunk_FUN_01f51358();
    param_1 = *in_stack_00000078;
    if (param_1 == 0) goto LAB_03e7bfc0;
    unaff_w26 = *unaff_x21;
    if (*(uint *)(param_1 + 0x18) <= unaff_w26) goto LAB_03e7c214;
    in_w10 = *(undefined4 *)(unaff_x19 + 0x668);
    param_1 = param_1 + (long)(int)unaff_w26 * unaff_x22;
    unaff_w29 = 1;
    goto code_r0x03e7a8d0;
  }
  if (uVar36 != 3) goto LAB_03e7a8f0;
  lVar17 = *in_stack_00000078;
  if (((lVar17 == 0) || (*unaff_x23 == 0)) || (lVar14 = FUN_03e5d25c(*unaff_x23,0), lVar14 == 0))
  goto LAB_03e7bfc0;
  uVar15 = FUN_02bd6170(lVar14,3,*(undefined8 *)PTR_DAT_04579db0);
  if (*(uint *)(lVar17 + 0x18) <= unaff_w26) goto LAB_03e7c214;
  *(undefined8 *)(lVar17 + lVar21 * unaff_x22 + 0x30) = uVar15;
  thunk_FUN_01f51358();
  unaff_w29 = 1;
  uVar12 = 3;
  *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
LAB_03e7a944:
  iVar10 = *(int *)(unaff_x19 + 0x644);
  if (iVar10 == 0) {
    uVar11 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar11 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_034fc51c(uVar12,0);
          fStack0000000000000068 = 1.0;
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar12 = FUN_034fc7fc(uVar12,0);
            fStack0000000000000068 = in_stack_00000008._4_4_;
            goto LAB_03e7ac68;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_034fc460(uVar12,0);
        fStack0000000000000068 = 1.0;
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_034fc974(uVar12,0);
          goto LAB_03e7ac68;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_034fc51c(uVar12,0);
      fStack0000000000000068 = 1.0;
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_034fc7fc(uVar12,0);
LAB_03e7ac68:
        uVar12 = uVar12 & 0xffff;
      }
    }
    iVar10 = *(int *)(unaff_x19 + 0x644);
    if (iVar10 != 0) goto LAB_03e7a954;
LAB_03e7ac74:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar17 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
    *unaff_x25 = *(long *)(lVar17 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    thunk_FUN_01f51358();
    if (*unaff_x25 == 0) goto LAB_03e7bfb0;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
    uVar1 = *unaff_x21;
    uVar11 = *(uint *)(lVar17 + 0x18);
    if (uVar11 <= uVar1) goto LAB_03e7c214;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar17 + (long)(int)uVar1 * unaff_x22 + 0x58);
    if (unaff_w29 == 0) {
LAB_03e7ad14:
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar34 = *(float *)(unaff_x19 + 0x1e8);
      iVar10 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar17 = *(long *)(unaff_x19 + 0x100);
    }
    else {
      lVar21 = *(long *)(unaff_x19 + 0x478);
      if (lVar21 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar21 + 0x18) <= unaff_w27) goto LAB_03e7c214;
      if ((*(int *)(lVar21 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar1 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
      if (uVar11 <= uVar1 - 1) goto LAB_03e7c214;
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar34 = *(float *)(lVar17 + (long)(int)(uVar1 - 1) * (long)iVar20 + 0x60);
      iVar10 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar17 = *unaff_x23;
    }
    if (lVar17 == 0) goto LAB_03e7bfc0;
    fVar30 = (float)FUN_040ced80(lVar17 + 0x50,0);
    fVar29 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar29 = 1.0;
    }
    fVar22 = 0.0;
    fVar24 = 0.0;
    if ((unaff_w29 & uVar12 == 0x2026) == 0) {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar24 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar22 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar17 = *(long *)(unaff_x19 + 0x488), lVar17 == 0))
    goto LAB_03e7bfc0;
    uVar11 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_03e7c214;
    unaff_s15 = ((fStack0000000000000068 * fVar34) / (float)iVar10) * fVar30 * fVar29 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar17 + (long)(int)uVar11 * unaff_x22 + 0x2c) = 0;
LAB_03e7afa0:
    bVar8 = uVar12 == 0xad;
    fVar34 = unaff_s13;
    if (!bVar8 && uVar12 != 3) {
      fVar34 = unaff_s15;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar10 == 0) goto LAB_03e7ac74;
LAB_03e7a954:
    if (iVar10 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar17 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      thunk_FUN_01f51358(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar17 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar17 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar17 == 0)) goto LAB_03e7bfc0;
      lVar17 = FUN_030f28e4(lVar17,*(undefined4 *)(unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_04579db8);
      if (lVar17 == 0) goto LAB_03e7bfb0;
      if (uVar12 == 0x3c) {
        uVar12 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
      memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar10 = FUN_040ced70(&stack0x00000100,0);
      fVar34 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar10 < 1) {
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        iVar10 = FUN_040ced70(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar29 = (float)FUN_040ced80(&stack0x00000100,0);
        fVar22 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar22 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar30 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*(long *)(lVar17 + 0x20) == 0) goto LAB_03e7bfc0;
        FUN_040cf28c(&stack0x00000be0,*(long *)(lVar17 + 0x20),0);
        in_stack_000000c0 = in_stack_00000be0;
        in_stack_000000c8 = in_stack_00000be8;
        in_stack_000000d0 = in_stack_00000bf0;
        fVar23 = (float)FUN_040cf0bc(&stack0x000000c0,0);
        if (*(long *)(lVar17 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar27 = *(float *)(lVar17 + 0x2c);
        fVar25 = (float)FUN_040cf2c8(*(long *)(lVar17 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar24 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar22 = (fVar34 / (float)iVar10) * fVar29 * fVar22;
        unaff_s15 = fVar22 * (fVar30 / fVar23) * fVar27 * fVar25;
        fVar22 = fVar22 / unaff_s15;
        fVar24 = fVar22 * fVar24;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar34 = (float)FUN_040cede0(&stack0x00000100,0);
        fVar22 = fVar22 * fVar34;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar10 = FUN_040ced70(&stack0x00000100,0);
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar22 = (float)FUN_040ced80(&stack0x00000100,0);
        if (*(long *)(lVar17 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar30 = *(float *)(lVar17 + 0x2c);
        fVar29 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar29 = 1.0;
        }
        fVar23 = (float)FUN_040cf2c8(*(long *)(lVar17 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar24 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        unaff_s15 = (fVar34 / (float)iVar10) * fVar22 * fVar29 * fVar30 * fVar23;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar22 = (float)FUN_040cede0(&stack0x00000100,0);
      }
      *unaff_x25 = lVar17;
      thunk_FUN_01f51358();
      unaff_s13 = 0.0;
      lVar17 = *in_stack_00000078;
      if (lVar17 == 0) goto LAB_03e7bfc0;
      uVar11 = *unaff_x21;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_03e7c214;
      lVar21 = lVar17 + (long)(int)uVar11 * unaff_x22;
      *(undefined4 *)(lVar21 + 0x2c) = 1;
      *(float *)(lVar21 + 0x160) = unaff_s15;
      *(undefined4 *)(unaff_x19 + 0x120) = unaff_w24;
      goto LAB_03e7afa0;
    }
    bVar8 = uVar12 == 0xad;
    lVar17 = *in_stack_00000078;
    fVar24 = 0.0;
    fVar34 = 0.0;
    if (!bVar8 && uVar12 != 3) {
      fVar34 = unaff_s15;
    }
    if (lVar17 == 0) goto LAB_03e7bfc0;
    uVar11 = *unaff_x21;
    fVar22 = 0.0;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_03e7c214;
  *(short *)(lVar17 + (long)(int)uVar11 * (long)iVar20 + 0x20) = (short)uVar12;
  if ((*unaff_x25 == 0) || (lVar17 = *(long *)(*unaff_x25 + 0x20), lVar17 == 0)) goto LAB_03e7bfc0;
  FUN_040cf28c(&stack0x00000be0,lVar17,0);
  in_stack_000000e0 = in_stack_00000be0;
  in_stack_000000e8 = in_stack_00000be8;
  in_stack_000000f0 = in_stack_00000bf0;
  if ((int)uVar12 < 0x10000) {
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_034f9bb4(uVar12,0);
    uVar11 = uVar11 & 1;
  }
  else {
    uVar11 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    fVar29 = 0.0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03e7bfc0;
    uVar16 = *unaff_x21;
    uVar1 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar16 < (int)in_stack_00000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= uVar16 + 1) goto LAB_03e7c214;
      lVar17 = *(long *)(lVar17 + (long)(int)(uVar16 + 1) * (long)iVar20 + 0x30);
      if ((((lVar17 == 0) || (*unaff_x23 == 0)) ||
          (lVar21 = *(long *)(*unaff_x23 + 0x128), lVar21 == 0)) ||
         (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)) goto LAB_03e7bfc0;
      uVar13 = FUN_02bd799c(lVar21,uVar1 | *(int *)(lVar17 + 0x28) << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      uVar31 = 0;
      if ((uVar13 & 1) == 0) {
        uVar32 = 0;
        fVar29 = 0.0;
        uVar33 = 0;
      }
      else {
        if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
        uVar31 = *(undefined4 *)(in_stack_000000b8 + 0x14);
        uVar32 = *(undefined4 *)(in_stack_000000b8 + 0x18);
        fVar29 = *(float *)(in_stack_000000b8 + 0x1c);
        uVar33 = *(undefined4 *)(in_stack_000000b8 + 0x20);
        if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar16 = *unaff_x21;
    }
    else {
      uVar31 = 0;
      uVar32 = 0;
      fVar29 = 0.0;
      uVar33 = 0;
    }
    if (0 < (int)uVar16) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= uVar16 - 1) goto LAB_03e7c214;
      lVar17 = *(long *)(lVar17 + (ulong)(uVar16 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar17 == 0) || (*unaff_x23 == 0)) ||
         ((lVar21 = *(long *)(*unaff_x23 + 0x128), lVar21 == 0 ||
          (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)))) goto LAB_03e7bfc0;
      uVar13 = FUN_02bd799c(lVar21,*(uint *)(lVar17 + 0x28) | uVar1 << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      if ((uVar13 & 1) != 0) {
        if ((in_stack_000000b8 == 0) ||
           (FUN_03e67c10(uVar31,uVar32,fVar29,uVar33,*(undefined4 *)(in_stack_000000b8 + 0x28),
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
    *(float *)(unaff_x19 + 0x2fc) = fVar29;
  }
  fStack0000000000000060 = 0.0;
  fVar30 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar30 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar17 = *(long *)(*unaff_x25 + 0x20), lVar17 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar17,0);
    in_stack_000000c0 = in_stack_00000be0;
    in_stack_000000c8 = in_stack_00000be8;
    in_stack_000000d0 = in_stack_00000bf0;
    fVar23 = (float)FUN_040cf0b4(&stack0x000000c0,0);
    if ((*unaff_x25 == 0) || (lVar17 = *(long *)(*unaff_x25 + 0x20), lVar17 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar17,0);
    in_stack_000000c0 = in_stack_00000be0;
    in_stack_000000c8 = in_stack_00000be8;
    in_stack_000000d0 = in_stack_00000bf0;
    fVar25 = (float)FUN_040cf0c4(&stack0x000000c0,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar30 * 0.5 - fVar34 * (fVar23 * 0.5 + fVar25));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar10 = *(int *)(unaff_x19 + 0x644);
  fVar30 = 0.0;
  if (((uVar19 == 0) && (fVar30 = 0.0, iVar10 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar30 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar17 = *in_stack_00000078;
  if (lVar17 == 0) goto LAB_03e7bfc0;
  uVar19 = *unaff_x21;
  lVar21 = (long)(int)uVar19;
  if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_03e7c214;
  fVar23 = *(float *)(unaff_x19 + 0x4d8);
  fVar25 = *(float *)(unaff_x19 + 0x61c);
  fVar24 = fVar24 * fVar34;
  *(float *)(lVar17 + lVar21 * unaff_x22 + 0x14c) = (unaff_s13 - fVar23) + fVar25;
  if (iVar10 == 0) {
    fVar24 = fVar24 / fStack0000000000000068;
    fVar22 = (fVar22 * fVar34) / fStack0000000000000068;
  }
  else {
    fVar22 = fVar22 * fVar34;
  }
  fVar24 = fVar25 + fVar24;
  if ((uVar11 == 0) || (uVar19 == *(uint *)(unaff_x19 + 0x498))) {
    fVar22 = fVar25 + fVar22;
    fVar27 = fVar24;
    fVar26 = fVar22;
    if (fVar25 != 0.0) {
      fVar27 = (fVar24 - fVar25) / *(float *)(unaff_x19 + 0x404);
      fVar26 = (fVar22 - fVar25) / *(float *)(unaff_x19 + 0x404);
      if (fVar27 <= fVar24) {
        fVar27 = fVar24;
      }
      if (fVar22 <= fVar26) {
        fVar26 = fVar22;
      }
    }
    lVar17 = lVar17 + lVar21 * unaff_x22;
    fVar25 = fVar27;
    if (fVar27 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar25 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar28 = fVar26;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar26) {
      fVar28 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar28;
    *(float *)(unaff_x19 + 0x4c8) = fVar25;
    *(float *)(lVar17 + 0x154) = fVar27;
    *(float *)(lVar17 + 0x158) = fVar26;
    *(float *)(lVar17 + 0x148) = fVar24 - fVar23;
    *(float *)(unaff_x19 + 0x4c0) = fVar24 - fVar23;
    *(float *)(lVar17 + 0x150) = fVar22 - fVar23;
    *(float *)(unaff_x19 + 0x4c4) = fVar22 - fVar23;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar25;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
      fVar22 = *(float *)(unaff_x19 + 0x4bc);
      fVar23 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (fVar34 * fVar23) / fStack0000000000000068;
      fVar23 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar22 <= fStack0000000000000068) {
        fVar22 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar22;
    }
  }
  else {
    fVar22 = *(float *)(unaff_x19 + 0x4c8);
    lVar17 = lVar17 + lVar21 * unaff_x22;
    *(float *)(lVar17 + 0x154) = fVar22;
    fVar25 = *(float *)(unaff_x19 + 0x4cc);
    fVar22 = fVar22 - fVar23;
    *(float *)(lVar17 + 0x148) = fVar22;
    *(float *)(lVar17 + 0x158) = fVar25;
    *(float *)(unaff_x19 + 0x4c0) = fVar22;
    fVar25 = fVar25 - fVar23;
    *(float *)(lVar17 + 0x150) = fVar25;
    *(float *)(unaff_x19 + 0x4c4) = fVar25;
  }
  if (fVar23 == 0.0) {
    if ((uVar11 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar22 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar24) {
        fVar22 = fVar24;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar22;
      goto LAB_03e7b470;
    }
    bVar9 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar12 != 9) goto LAB_03e7b4c4;
LAB_03e7b484:
    bVar3 = true;
LAB_03e7b4e0:
    fVar23 = *(float *)(unaff_x19 + 0x360);
    fVar25 = *(float *)(unaff_x19 + 0x640);
    fVar22 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
    bVar7 = true;
    if ((fVar23 <= fVar22) && (bVar7 = false, !NAN(fVar23))) {
      bVar7 = fVar23 == -1.0;
    }
    if (!bVar7) {
      fVar22 = fVar23;
    }
    fVar23 = (float)FUN_040cf0d4(&stack0x000000e0,0);
    if (bVar8 == false) {
      unaff_s15 = fVar34;
    }
    fVar27 = 1.0;
    if (!bVar9) {
      fVar27 = DAT_00c926dc;
    }
    fStack000000000000005c =
         ABS(fVar25) + unaff_s15 * fVar23 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fVar27 * fVar22 < fStack000000000000005c && (uVar6 & 1) == 0) &&
       (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
      unaff_w27 = FUN_03e81e20();
      lVar17 = *(long *)(unaff_x19 + 0x488);
      if (lVar17 == 0) goto LAB_03e7bfc0;
      uVar12 = *(uint *)(unaff_x19 + 0x494);
      uVar19 = uVar12 - 1;
      if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_03e7c214;
      if (((bStack000000000000004c & 1) == 0 &&
           *(short *)(lVar17 + (long)(int)uVar19 * (long)iVar20 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        bStack000000000000004c = 0;
        uVar36 = 0x2d;
        *unaff_x21 = uVar19;
        unaff_w27 = unaff_w27 - 1;
        unaff_s15 = fVar34;
        uVar35 = uVar19;
        goto LAB_03e7bfb0;
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_03e7c214;
      if (*(short *)(lVar17 + (long)(int)uVar12 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        unaff_s15 = fVar34;
        goto LAB_03e7bfb0;
      }
      if ((uStack0000000000000030 & uStack0000000000000018 & 1) == 0) {
LAB_03e7bd10:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar22 = *(float *)(unaff_x19 + 0x4c8);
          fVar29 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c();
          }
          fVar22 = fVar22 - fVar29;
          if (((fStack000000000000001c < ABS(fVar22)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar22;
            *(float *)(unaff_x19 + 0x4d8) = fVar22 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar30 = *(float *)(unaff_x19 + 0x640);
        fVar29 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar22 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar29 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar22 = fVar29;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar22;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar5 & 0x100000000) == 0) {
          fVar29 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar29;
          if (fStack0000000000000038 <= fVar29) {
            fStack0000000000000038 = fVar29;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar22;
        }
        FUN_03e821b4();
        lVar17 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar17 == 0) goto LAB_03e7bfc0;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
        fVar22 = *(float *)(unaff_x19 + 0x2c0);
        fVar29 = *(float *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar8 = fVar22 != DAT_00c927ac;
        if (bVar8) {
          fVar23 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar23 = fVar29 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar22 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar8;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar22 + fVar23;
        puVar4 = PTR_DAT_04579e70;
        lVar17 = *(long *)PTR_DAT_04579e70;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar17 = *(long *)puVar4;
        }
        bStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar30;
        uVar15 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar15 = NEON_rev64(uVar15,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar29;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar15;
        uStack0000000000000030 = 1;
        unaff_s15 = fVar34;
        goto LAB_03e7bfb0;
      }
      fVar29 = *(float *)(unaff_x19 + 0x2d4);
      fVar30 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
      if ((fVar30 <= fVar29) || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        if ((*in_stack_00000010 <= *(float *)(unaff_x19 + 0x250)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) goto LAB_03e7bd10;
        *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
        fVar34 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
        if (fVar34 <= DAT_00c92764) {
          fVar34 = DAT_00c92764;
        }
        fVar34 = *in_stack_00000010 - fVar34;
        *in_stack_00000010 = fVar34;
        fVar22 = fVar34 * 20.0 + 0.5;
        fVar34 = DAT_00c92a58;
        if (fVar22 != INFINITY) {
          fVar34 = (float)(int)fVar22 / 20.0;
        }
        if (fVar34 <= *(float *)(unaff_x19 + 0x250)) {
          fVar34 = *(float *)(unaff_x19 + 0x250);
        }
        *in_stack_00000010 = fVar34;
      }
      else {
        fVar34 = fStack000000000000005c;
        if (0.0 < fVar29) {
          fVar34 = fStack000000000000005c / (1.0 - fVar29);
        }
        fVar29 = fVar29 + (fStack000000000000005c - fVar27 * (fVar22 + DAT_00c928e4)) / fVar34;
        if (fVar30 <= fVar29) {
          fVar29 = fVar30;
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
    in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
    if (!bVar3) goto LAB_03e7b658;
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
    fVar22 = (float)FUN_040cee68(&stack0x00000100,0);
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar30 = *(float *)(unaff_x19 + 0x640);
    fVar29 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
    fVar29 = fVar34 * fVar22 * fVar29;
    fVar22 = fVar29 * (float)(int)(fVar30 / fVar29);
    if (fVar22 <= fVar30) {
      fVar22 = fVar30 + fVar29;
    }
LAB_03e7b75c:
    bVar9 = false;
    *(float *)(unaff_x19 + 0x640) = fVar22;
LAB_03e7b764:
    if (*unaff_x21 == in_stack_00000070) goto LAB_03e7b820;
  }
  else {
LAB_03e7b470:
    bVar9 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar12 == 9) goto LAB_03e7b484;
    if ((((uVar11 == 0) && (uVar12 != 3)) && (uVar12 != 0x200b)) && (uVar12 != 0xad)) {
LAB_03e7b4dc:
      bVar3 = false;
      goto LAB_03e7b4e0;
    }
LAB_03e7b4c4:
    if ((((bStack000000000000004c | bVar8 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x644) == 1))
    goto LAB_03e7b4dc;
LAB_03e7b658:
    fVar22 = *(float *)(unaff_x19 + 0x640);
    if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
      fVar23 = (float)FUN_040cf0d4(&stack0x000000e0,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar29 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               fVar34 * (fVar29 + fVar23) +
               fStack0000000000000058 *
               (fVar30 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    else {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar29 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
               fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    fVar22 = fVar22 + fVar29;
    *(float *)(unaff_x19 + 0x640) = fVar22;
    if ((uVar12 == 0x200b) || (uVar11 != 0)) {
      fVar22 = fVar22 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
      *(float *)(unaff_x19 + 0x640) = fVar22;
    }
    if (uVar12 == 0xd) {
      if (fStack0000000000000064 <= fStack000000000000006c + fVar22) {
        fStack0000000000000064 = fStack000000000000006c + fVar22;
      }
      fStack000000000000006c = 0.0;
      fVar22 = *(float *)(unaff_x19 + 0x40c) + 0.0;
      goto LAB_03e7b75c;
    }
    bVar9 = uVar12 == 10;
    if (((0xb < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0xc08U) == 0)) && (1 < uVar12 - 0x2028))
    goto LAB_03e7b764;
LAB_03e7b820:
    if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
      fVar22 = *(float *)(unaff_x19 + 0x4c8);
      fVar29 = *(float *)(unaff_x19 + 0x4d0);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar22 = fVar22 - fVar29;
      if (((fStack000000000000001c < ABS(fVar22)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
         (*(char *)(unaff_x19 + 0x33c) == '\0')) {
        *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar22;
        *(float *)(unaff_x19 + 0x4d8) = fVar22 + *(float *)(unaff_x19 + 0x4d8);
      }
    }
    fVar22 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
    if (fVar22 <= *(float *)(unaff_x19 + 0x4c4)) {
      fStack0000000000000038 = fVar22;
    }
    fVar29 = in_stack_00000040._4_4_ +
             fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
    fVar22 = fStack0000000000000064;
    if (fStack0000000000000064 <= fVar29) {
      fVar22 = fVar29;
    }
    *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
    fStack000000000000006c = fVar22;
    if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
      fStack000000000000006c = unaff_s13;
      fStack0000000000000064 = fVar22;
    }
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
    *(undefined1 *)(unaff_x19 + 0x33c) = 0;
    if (bVar9) {
LAB_03e7bb3c:
      FUN_03e821b4();
      FUN_03e821b4();
      uVar19 = *(uint *)(unaff_x19 + 0x494);
      lVar17 = *(long *)(unaff_x19 + 0x488);
      iVar10 = uVar19 + 1;
      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
      *(int *)(unaff_x19 + 0x498) = iVar10;
      if (lVar17 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_03e7c214;
      fVar22 = *(float *)(lVar17 + (long)(int)uVar19 * unaff_x22 + 0x154);
      if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
        fVar29 = 0.0;
        if (!(bool)(uVar12 != 0x2029 & (bVar9 ^ 1U))) {
          fVar29 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar18 = 0;
        fVar29 = fVar22 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                 fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                 fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar29) +
                 *(float *)(unaff_x19 + 0x4d8);
      }
      else {
        fVar29 = 0.0;
        if (!(bool)(uVar12 != 0x2029 & (bVar9 ^ 1U))) {
          fVar29 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar18 = 1;
        fVar29 = *(float *)(unaff_x19 + 0x4d8) +
                 *(float *)(unaff_x19 + 0x2c0) +
                 fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar29);
      }
      *(float *)(unaff_x19 + 0x4d8) = fVar29;
      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar18;
      puVar4 = PTR_DAT_04579e70;
      lVar17 = *(long *)PTR_DAT_04579e70;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar17 = *(long *)puVar4;
        iVar10 = *unaff_x21 + 1;
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
      *(float *)(unaff_x19 + 0x640) =
           *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
      uVar15 = NEON_rev64(uVar15,4);
      *(float *)(unaff_x19 + 0x4d0) = fVar22;
      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar15;
      *(int *)(unaff_x19 + 0x494) = iVar10;
      unaff_s15 = fVar34;
      goto LAB_03e7bfb0;
    }
    if ((int)uVar12 < 0x2028) {
      if (uVar12 == 3) {
        if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03e7bfc0;
        unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
        uVar12 = 3;
      }
      else if ((uVar12 == 0xb) || (uVar12 == 0x2d)) goto LAB_03e7bb3c;
    }
    else if (uVar12 - 0x2028 < 2) goto LAB_03e7bb3c;
  }
  if (((uVar5 & 0x100000000) == 0) && ((*(uint *)(unaff_x19 + 0x2e0) | 2) != 3))
  goto Unity_VisualScripting_Serialization__Serialize;
  if ((uVar11 == 0) && (((uVar12 != 0x2d && (uVar12 != 0x200b)) && (uVar12 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03e7b79c;
LAB_03e7b9d0:
    if (((((0x2bfd < uVar12 - 0xac01) && (0xfd < uVar12 - 0x1101)) && (0x1d < uVar12 - 0xa961)) ||
        (uVar13 = FUN_03e90be8(0), (uVar13 & 1) != 0)) &&
       ((((0xed < uVar12 - 0xff01 && (0x1d < uVar12 - 0xfe31)) && (0x717d < uVar12 - 0x2e81)) &&
        (0x1fd < uVar12 - 0xf901)))) goto LAB_03e7b79c;
    lVar17 = FUN_03e90a7c(0);
    if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) goto LAB_03e7bfc0;
    uVar12 = FUN_02afbd84(*(long *)(lVar17 + 0x10),uVar12,*(undefined8 *)PTR_DAT_04579da0);
    if ((int)in_stack_00000070 <= (int)*unaff_x21) {
      if (((uStack0000000000000030 | uVar12 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
        FUN_03e821b4();
      }
LAB_03e7bf74:
      uStack0000000000000030 = 0;
      uStack0000000000000028 = 1;
      goto Unity_VisualScripting_Serialization__Serialize;
    }
    lVar17 = FUN_03e90a7c(0);
    if ((lVar17 == 0) || (lVar21 = *in_stack_00000078, lVar21 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x21 + 1) goto LAB_03e7c214;
    if (*(long *)(lVar17 + 0x18) == 0) goto LAB_03e7bfc0;
    uVar13 = FUN_02afbd84(*(long *)(lVar17 + 0x18),
                          *(undefined2 *)
                           (lVar21 + (long)(int)(*unaff_x21 + 1) * (long)iVar20 + 0x20),
                          *(undefined8 *)PTR_DAT_04579da0);
    if (((uStack0000000000000030 | uVar12 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
    if ((uVar13 & 1) == 0) goto LAB_03e7bf60;
    if ((uStack0000000000000030 & 1) == 0) goto LAB_03e7bf74;
    if (uVar11 != 0) {
      FUN_03e821b4();
    }
    FUN_03e821b4();
    uStack0000000000000028 = 1;
  }
  else {
    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
      if (((0x28 < uVar12 - 0x2007) ||
          ((1L << ((ulong)(uVar12 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((uVar12 != 0xa0 && (uVar12 != 0x2060)))) {
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
      lVar17 = FUN_03e90a7c(0);
      if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) goto LAB_03e7bfc0;
      uVar13 = FUN_02afbd84(*(long *)(lVar17 + 0x10),uVar12,*(undefined8 *)PTR_DAT_04579da0);
      if ((uVar13 & 1) == 0) {
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
    if ((((bStack000000000000004c | bVar8 ^ 0xffU) & 1) == 0) || (uVar11 != 0)) {
      FUN_03e821b4();
    }
    FUN_03e821b4();
    uStack0000000000000028 = 0;
  }
  uStack0000000000000030 = 1;
Unity_VisualScripting_Serialization__Serialize:
  *unaff_x21 = *unaff_x21 + 1;
  unaff_s15 = fVar34;
  goto LAB_03e7bfb0;
LAB_03e7a8f0:
  unaff_w29 = 1;
  uVar12 = uVar36;
  uVar19 = unaff_w20;
  goto LAB_03e7a8f4;
}


