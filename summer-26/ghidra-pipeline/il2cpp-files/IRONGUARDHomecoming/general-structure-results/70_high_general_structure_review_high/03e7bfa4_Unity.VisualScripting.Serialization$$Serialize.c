/*
FUNCTION_NAME: Unity.VisualScripting.Serialization$$Serialize
ENTRY_POINT: 03e7bfa4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


float Unity_VisualScripting_Serialization__Serialize(void)

{
  uint uVar1;
  char cVar2;
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
  long lVar16;
  uint uVar17;
  undefined1 uVar18;
  long unaff_x19;
  uint *unaff_x21;
  int iVar19;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  uint unaff_w27;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float unaff_s13;
  float unaff_s14;
  float fVar33;
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
  uint in_stack_00000bd8;
  uint in_stack_00000bdc;
  undefined8 in_stack_00000be0;
  undefined8 in_stack_00000be8;
  undefined4 in_stack_00000bf0;
  
  uVar6 = in_stack_00000040;
  uVar5 = _uStack0000000000000030;
code_r0x03e7bfa4:
  *unaff_x21 = *unaff_x21 + 1;
  fVar33 = unaff_s14;
LAB_03e7bfb0:
  lVar16 = *(long *)(unaff_x19 + 0x478);
  unaff_w27 = unaff_w27 + 1;
  if (lVar16 != 0) {
    if ((int)*(uint *)(lVar16 + 0x18) <= (int)unaff_w27) {
LAB_03e7bfc4:
      if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
           ((_uStack0000000000000018 & 1) == 0)) ||
          (fVar33 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar33)) ||
         (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        fVar33 = *(float *)(unaff_x19 + 0x340);
        fVar21 = *(float *)(unaff_x19 + 0x348);
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        *(undefined1 *)(unaff_x19 + 0x24c) = 1;
        fVar21 = (fStack000000000000006c + fVar33 + fVar21) * 100.0 + 1.0;
        fVar33 = DAT_00c92378;
        if (fVar21 != INFINITY) {
          fVar33 = (float)(int)fVar21 / 100.0;
        }
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
        return fVar33;
      }
      if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
        fVar33 = *in_stack_00000010;
      }
      *(float *)(unaff_x19 + 0x240) = fVar33;
      fVar33 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
      if (fVar33 <= DAT_00c92764) {
        fVar33 = DAT_00c92764;
      }
      fVar33 = *in_stack_00000010 + fVar33;
      *in_stack_00000010 = fVar33;
      fVar21 = fVar33 * 20.0 + 0.5;
      fVar33 = DAT_00c92a58;
      if (fVar21 != INFINITY) {
        fVar33 = (float)(int)fVar21 / 20.0;
      }
      if (*(float *)(unaff_x19 + 0x254) <= fVar33) {
        fVar33 = *(float *)(unaff_x19 + 0x254);
      }
      *in_stack_00000010 = fVar33;
      goto LAB_03e7c098;
    }
    if (*(uint *)(lVar16 + 0x18) <= unaff_w27) goto LAB_03e7c214;
    uVar12 = *(uint *)(lVar16 + (long)(int)unaff_w27 * 0xc + 0x20);
    if (uVar12 == 0) goto LAB_03e7bfc4;
    if ((uVar12 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) goto code_r0x03e7a6e4;
    if ((*(long *)(unaff_x19 + 0x368) != 0) &&
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 != 0)) {
      if (*unaff_x21 < *(uint *)(lVar16 + 0x18)) {
        lVar16 = lVar16 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar16 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar16 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar16 + 0x38);
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
     (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03e7bfc0;
  uVar11 = *unaff_x21;
  if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
  lVar20 = (long)(int)uVar11;
  cVar2 = *(char *)(lVar16 + lVar20 * unaff_x22 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  uVar30 = *(undefined4 *)(unaff_x19 + 0x120);
  iVar19 = (int)unaff_x22;
  if (in_stack_00000bd8 == uVar11) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000bdc == 0x2026) {
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
      *(undefined8 *)(lVar16 + lVar20 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
      thunk_FUN_01f51358();
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      lVar16 = lVar16 + (long)(int)*unaff_x21 * unaff_x22;
      *(undefined4 *)(lVar16 + 0x2c) = 0;
      *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
      thunk_FUN_01f51358();
      lVar16 = *(long *)(unaff_x19 + 0x488);
      if (lVar16 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
      *(undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
           *(undefined8 *)(unaff_x19 + 0x660);
      thunk_FUN_01f51358();
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03e7bfc0;
      uVar11 = *unaff_x21;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
      bVar8 = true;
      in_stack_00000bd8 = uVar11 + 1;
      *(undefined4 *)(lVar16 + (long)(int)uVar11 * unaff_x22 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x668);
      uVar12 = 0x2026;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      in_stack_00000bdc = 3;
      goto LAB_03e7a8f4;
    }
    if (in_stack_00000bdc != 3) {
      bVar8 = true;
      uVar12 = in_stack_00000bdc;
      goto LAB_03e7a8f4;
    }
    lVar16 = *in_stack_00000078;
    if (((lVar16 == 0) || (*unaff_x23 == 0)) || (lVar14 = FUN_03e5d25c(*unaff_x23,0), lVar14 == 0))
    goto LAB_03e7bfc0;
    uVar15 = FUN_02bd6170(lVar14,3,*(undefined8 *)PTR_DAT_04579db0);
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
    *(undefined8 *)(lVar16 + lVar20 * unaff_x22 + 0x30) = uVar15;
    thunk_FUN_01f51358();
    bVar8 = true;
    uVar12 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar8 = false;
LAB_03e7a8f4:
    if ((uVar12 != 3) && ((int)uVar11 < *(int *)(unaff_x19 + 0x324))) {
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
      lVar16 = lVar16 + (long)(int)uVar11 * (long)iVar19;
      *(undefined1 *)(lVar16 + 0x194) = 0;
      *(undefined2 *)(lVar16 + 0x20) = 0x200b;
      *(undefined4 *)(lVar16 + 100) = 0;
      *unaff_x21 = uVar11 + 1;
      goto LAB_03e7bfb0;
    }
  }
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
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
    *unaff_x25 = *(long *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
    thunk_FUN_01f51358();
    if (*unaff_x25 == 0) goto LAB_03e7bfb0;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03e7bfc0;
    uVar1 = *unaff_x21;
    uVar11 = *(uint *)(lVar16 + 0x18);
    if (uVar11 <= uVar1) goto LAB_03e7c214;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar16 + (long)(int)uVar1 * unaff_x22 + 0x58);
    if (bVar8) {
      lVar20 = *(long *)(unaff_x19 + 0x478);
      if (lVar20 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar20 + 0x18) <= unaff_w27) goto LAB_03e7c214;
      if ((*(int *)(lVar20 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar1 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
      if (uVar11 <= uVar1 - 1) goto LAB_03e7c214;
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar33 = *(float *)(lVar16 + (long)(int)(uVar1 - 1) * (long)iVar19 + 0x60);
      iVar10 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar16 = *unaff_x23;
    }
    else {
LAB_03e7ad14:
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar33 = *(float *)(unaff_x19 + 0x1e8);
      iVar10 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar16 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar16 == 0) goto LAB_03e7bfc0;
    fVar29 = (float)FUN_040ced80(lVar16 + 0x50,0);
    fVar28 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar28 = 1.0;
    }
    fVar21 = 0.0;
    fVar23 = 0.0;
    if (!(bool)(bVar8 & uVar12 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar23 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar21 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar16 = *(long *)(unaff_x19 + 0x488), lVar16 == 0))
    goto LAB_03e7bfc0;
    uVar11 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
    fVar33 = ((fStack0000000000000068 * fVar33) / (float)iVar10) * fVar29 * fVar28 *
             *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar16 + (long)(int)uVar11 * unaff_x22 + 0x2c) = 0;
LAB_03e7afa0:
    bVar8 = uVar12 == 0xad;
    unaff_s14 = unaff_s13;
    if (!bVar8 && uVar12 != 3) {
      unaff_s14 = fVar33;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar10 == 0) goto LAB_03e7ac74;
LAB_03e7a954:
    if (iVar10 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      thunk_FUN_01f51358(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar16 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar16 == 0)) goto LAB_03e7bfc0;
      lVar16 = FUN_030f28e4(lVar16,*(undefined4 *)(unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_04579db8);
      if (lVar16 == 0) goto LAB_03e7bfb0;
      if (uVar12 == 0x3c) {
        uVar12 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
      memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
      iVar10 = FUN_040ced70(&stack0x00000100,0);
      fVar33 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar10 < 1) {
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        iVar10 = FUN_040ced70(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar28 = (float)FUN_040ced80(&stack0x00000100,0);
        fVar21 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar21 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar29 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03e7bfc0;
        FUN_040cf28c(&stack0x00000be0,*(long *)(lVar16 + 0x20),0);
        in_stack_000000c0 = in_stack_00000be0;
        in_stack_000000c8 = in_stack_00000be8;
        in_stack_000000d0 = in_stack_00000bf0;
        fVar22 = (float)FUN_040cf0bc(&stack0x000000c0,0);
        if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar26 = *(float *)(lVar16 + 0x2c);
        fVar24 = (float)FUN_040cf2c8(*(long *)(lVar16 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar23 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar21 = (fVar33 / (float)iVar10) * fVar28 * fVar21;
        fVar33 = fVar21 * (fVar29 / fVar22) * fVar26 * fVar24;
        fVar21 = fVar21 / fVar33;
        fVar23 = fVar21 * fVar23;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar28 = (float)FUN_040cede0(&stack0x00000100,0);
        fVar21 = fVar21 * fVar28;
      }
      else {
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar10 = FUN_040ced70(&stack0x00000100,0);
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar21 = (float)FUN_040ced80(&stack0x00000100,0);
        if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar29 = *(float *)(lVar16 + 0x2c);
        fVar28 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar28 = 1.0;
        }
        fVar22 = (float)FUN_040cf2c8(*(long *)(lVar16 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar23 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        fVar33 = (fVar33 / (float)iVar10) * fVar21 * fVar28 * fVar29 * fVar22;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar21 = (float)FUN_040cede0(&stack0x00000100,0);
      }
      *unaff_x25 = lVar16;
      thunk_FUN_01f51358();
      unaff_s13 = 0.0;
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03e7bfc0;
      uVar11 = *unaff_x21;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
      lVar20 = lVar16 + (long)(int)uVar11 * unaff_x22;
      *(undefined4 *)(lVar20 + 0x2c) = 1;
      *(float *)(lVar20 + 0x160) = fVar33;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar30;
      goto LAB_03e7afa0;
    }
    bVar8 = uVar12 == 0xad;
    lVar16 = *in_stack_00000078;
    fVar23 = 0.0;
    unaff_s14 = 0.0;
    if (!bVar8 && uVar12 != 3) {
      unaff_s14 = fVar33;
    }
    if (lVar16 == 0) goto LAB_03e7bfc0;
    uVar11 = *unaff_x21;
    fVar21 = 0.0;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
  *(short *)(lVar16 + (long)(int)uVar11 * (long)iVar19 + 0x20) = (short)uVar12;
  if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0)) goto LAB_03e7bfc0;
  FUN_040cf28c(&stack0x00000be0,lVar16,0);
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
    fVar28 = 0.0;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_03e7bfc0;
    uVar17 = *unaff_x21;
    uVar1 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar17 < (int)in_stack_00000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= uVar17 + 1) goto LAB_03e7c214;
      lVar16 = *(long *)(lVar16 + (long)(int)(uVar17 + 1) * (long)iVar19 + 0x30);
      if ((((lVar16 == 0) || (*unaff_x23 == 0)) ||
          (lVar20 = *(long *)(*unaff_x23 + 0x128), lVar20 == 0)) ||
         (lVar20 = *(long *)(lVar20 + 0x18), lVar20 == 0)) goto LAB_03e7bfc0;
      uVar13 = FUN_02bd799c(lVar20,uVar1 | *(int *)(lVar16 + 0x28) << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      uVar30 = 0;
      if ((uVar13 & 1) == 0) {
        uVar31 = 0;
        fVar28 = 0.0;
        uVar32 = 0;
      }
      else {
        if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
        uVar30 = *(undefined4 *)(in_stack_000000b8 + 0x14);
        uVar31 = *(undefined4 *)(in_stack_000000b8 + 0x18);
        fVar28 = *(float *)(in_stack_000000b8 + 0x1c);
        uVar32 = *(undefined4 *)(in_stack_000000b8 + 0x20);
        if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar17 = *unaff_x21;
    }
    else {
      uVar30 = 0;
      uVar31 = 0;
      fVar28 = 0.0;
      uVar32 = 0;
    }
    if (0 < (int)uVar17) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= uVar17 - 1) goto LAB_03e7c214;
      lVar16 = *(long *)(lVar16 + (ulong)(uVar17 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar16 == 0) || (*unaff_x23 == 0)) ||
         ((lVar20 = *(long *)(*unaff_x23 + 0x128), lVar20 == 0 ||
          (lVar20 = *(long *)(lVar20 + 0x18), lVar20 == 0)))) goto LAB_03e7bfc0;
      uVar13 = FUN_02bd799c(lVar20,*(uint *)(lVar16 + 0x28) | uVar1 << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      if ((uVar13 & 1) != 0) {
        if ((in_stack_000000b8 == 0) ||
           (FUN_03e67c10(uVar30,uVar31,fVar28,uVar32,*(undefined4 *)(in_stack_000000b8 + 0x28),
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
    *(float *)(unaff_x19 + 0x2fc) = fVar28;
  }
  fStack0000000000000060 = 0.0;
  fVar29 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar29 != 0.0) {
    if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar16,0);
    in_stack_000000c0 = in_stack_00000be0;
    in_stack_000000c8 = in_stack_00000be8;
    in_stack_000000d0 = in_stack_00000bf0;
    fVar22 = (float)FUN_040cf0b4(&stack0x000000c0,0);
    if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar16,0);
    in_stack_000000c0 = in_stack_00000be0;
    in_stack_000000c8 = in_stack_00000be8;
    in_stack_000000d0 = in_stack_00000bf0;
    fVar24 = (float)FUN_040cf0c4(&stack0x000000c0,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
         (fVar29 * 0.5 - unaff_s14 * (fVar22 * 0.5 + fVar24));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar10 = *(int *)(unaff_x19 + 0x644);
  fVar29 = 0.0;
  if (((cVar2 == '\0') && (fVar29 = 0.0, iVar10 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0))
  {
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar29 = *(float *)(*unaff_x23 + 0x1b4);
  }
  lVar16 = *in_stack_00000078;
  if (lVar16 == 0) goto LAB_03e7bfc0;
  uVar1 = *unaff_x21;
  lVar20 = (long)(int)uVar1;
  if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_03e7c214;
  fVar22 = *(float *)(unaff_x19 + 0x4d8);
  fVar24 = *(float *)(unaff_x19 + 0x61c);
  fVar23 = fVar23 * unaff_s14;
  *(float *)(lVar16 + lVar20 * unaff_x22 + 0x14c) = (unaff_s13 - fVar22) + fVar24;
  if (iVar10 == 0) {
    fVar23 = fVar23 / fStack0000000000000068;
    fVar21 = (fVar21 * unaff_s14) / fStack0000000000000068;
  }
  else {
    fVar21 = fVar21 * unaff_s14;
  }
  fVar23 = fVar24 + fVar23;
  if ((uVar11 == 0) || (uVar1 == *(uint *)(unaff_x19 + 0x498))) {
    fVar21 = fVar24 + fVar21;
    fVar26 = fVar23;
    fVar25 = fVar21;
    if (fVar24 != 0.0) {
      fVar26 = (fVar23 - fVar24) / *(float *)(unaff_x19 + 0x404);
      fVar25 = (fVar21 - fVar24) / *(float *)(unaff_x19 + 0x404);
      if (fVar26 <= fVar23) {
        fVar26 = fVar23;
      }
      if (fVar21 <= fVar25) {
        fVar25 = fVar21;
      }
    }
    lVar16 = lVar16 + lVar20 * unaff_x22;
    fVar24 = fVar26;
    if (fVar26 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar24 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar27 = fVar25;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar25) {
      fVar27 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar27;
    *(float *)(unaff_x19 + 0x4c8) = fVar24;
    *(float *)(lVar16 + 0x154) = fVar26;
    *(float *)(lVar16 + 0x158) = fVar25;
    *(float *)(lVar16 + 0x148) = fVar23 - fVar22;
    *(float *)(unaff_x19 + 0x4c0) = fVar23 - fVar22;
    *(float *)(lVar16 + 0x150) = fVar21 - fVar22;
    *(float *)(unaff_x19 + 0x4c4) = fVar21 - fVar22;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar24;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
      fVar21 = *(float *)(unaff_x19 + 0x4bc);
      fVar22 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (unaff_s14 * fVar22) / fStack0000000000000068;
      fVar22 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar21 <= fStack0000000000000068) {
        fVar21 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar21;
    }
  }
  else {
    fVar21 = *(float *)(unaff_x19 + 0x4c8);
    lVar16 = lVar16 + lVar20 * unaff_x22;
    *(float *)(lVar16 + 0x154) = fVar21;
    fVar24 = *(float *)(unaff_x19 + 0x4cc);
    fVar21 = fVar21 - fVar22;
    *(float *)(lVar16 + 0x148) = fVar21;
    *(float *)(lVar16 + 0x158) = fVar24;
    *(float *)(unaff_x19 + 0x4c0) = fVar21;
    fVar24 = fVar24 - fVar22;
    *(float *)(lVar16 + 0x150) = fVar24;
    *(float *)(unaff_x19 + 0x4c4) = fVar24;
  }
  if (fVar22 == 0.0) {
    if ((uVar11 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar21 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar23) {
        fVar21 = fVar23;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar21;
      goto LAB_03e7b470;
    }
    bVar9 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar12 != 9) goto LAB_03e7b4c4;
LAB_03e7b484:
    bVar3 = true;
LAB_03e7b4e0:
    fVar22 = *(float *)(unaff_x19 + 0x360);
    fVar24 = *(float *)(unaff_x19 + 0x640);
    fVar21 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
             *(float *)(unaff_x19 + 0x354);
    bVar7 = true;
    if ((fVar22 <= fVar21) && (bVar7 = false, !NAN(fVar22))) {
      bVar7 = fVar22 == -1.0;
    }
    if (!bVar7) {
      fVar21 = fVar22;
    }
    fVar22 = (float)FUN_040cf0d4(&stack0x000000e0,0);
    if (bVar8 == false) {
      fVar33 = unaff_s14;
    }
    fVar26 = 1.0;
    if (!bVar9) {
      fVar26 = DAT_00c926dc;
    }
    fStack000000000000005c = ABS(fVar24) + fVar33 * fVar22 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fVar26 * fVar21 < fStack000000000000005c && (uVar6 & 1) == 0) &&
       (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
      unaff_w27 = FUN_03e81e20();
      lVar16 = *(long *)(unaff_x19 + 0x488);
      if (lVar16 == 0) goto LAB_03e7bfc0;
      uVar12 = *(uint *)(unaff_x19 + 0x494);
      uVar11 = uVar12 - 1;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
      if (((bStack000000000000004c & 1) == 0 &&
           *(short *)(lVar16 + (long)(int)uVar11 * (long)iVar19 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        bStack000000000000004c = 0;
        in_stack_00000bdc = 0x2d;
        *unaff_x21 = uVar11;
        unaff_w27 = unaff_w27 - 1;
        fVar33 = unaff_s14;
        in_stack_00000bd8 = uVar11;
        goto LAB_03e7bfb0;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_03e7c214;
      if (*(short *)(lVar16 + (long)(int)uVar12 * unaff_x22 + 0x20) == 0xad) {
        bStack000000000000004c = 1;
        fVar33 = unaff_s14;
        goto LAB_03e7bfb0;
      }
      if ((uStack0000000000000030 & uStack0000000000000018 & 1) == 0) {
LAB_03e7bd10:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar33 = *(float *)(unaff_x19 + 0x4c8);
          fVar21 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c();
          }
          fVar33 = fVar33 - fVar21;
          if (((fStack000000000000001c < ABS(fVar33)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar33;
            *(float *)(unaff_x19 + 0x4d8) = fVar33 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar28 = *(float *)(unaff_x19 + 0x640);
        fVar21 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar33 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar21 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar33 = fVar21;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar33;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uVar5 & 0x100000000) == 0) {
          fVar21 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar21;
          if (fStack0000000000000038 <= fVar21) {
            fStack0000000000000038 = fVar21;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar33;
        }
        FUN_03e821b4();
        lVar16 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar16 == 0) goto LAB_03e7bfc0;
        if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
        fVar33 = *(float *)(unaff_x19 + 0x2c0);
        fVar21 = *(float *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
        bVar8 = fVar33 != DAT_00c927ac;
        if (bVar8) {
          fVar29 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        else {
          fVar29 = fVar21 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                   fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
          fVar33 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
        }
        *(bool *)(unaff_x19 + 0x2c4) = bVar8;
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar33 + fVar29;
        puVar4 = PTR_DAT_04579e70;
        lVar16 = *(long *)PTR_DAT_04579e70;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar16 = *(long *)puVar4;
        }
        bStack000000000000004c = 0;
        fStack000000000000006c = fStack000000000000006c + fVar28;
        uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
        uVar15 = NEON_rev64(uVar15,4);
        *(float *)(unaff_x19 + 0x4d0) = fVar21;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar15;
        uStack0000000000000030 = 1;
        fVar33 = unaff_s14;
        goto LAB_03e7bfb0;
      }
      fVar33 = *(float *)(unaff_x19 + 0x2d4);
      fVar28 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
      if ((fVar28 <= fVar33) || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
        if ((*in_stack_00000010 <= *(float *)(unaff_x19 + 0x250)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) goto LAB_03e7bd10;
        *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
        fVar33 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
        if (fVar33 <= DAT_00c92764) {
          fVar33 = DAT_00c92764;
        }
        fVar33 = *in_stack_00000010 - fVar33;
        *in_stack_00000010 = fVar33;
        fVar21 = fVar33 * 20.0 + 0.5;
        fVar33 = DAT_00c92a58;
        if (fVar21 != INFINITY) {
          fVar33 = (float)(int)fVar21 / 20.0;
        }
        if (fVar33 <= *(float *)(unaff_x19 + 0x250)) {
          fVar33 = *(float *)(unaff_x19 + 0x250);
        }
        *in_stack_00000010 = fVar33;
      }
      else {
        fVar29 = fStack000000000000005c;
        if (0.0 < fVar33) {
          fVar29 = fStack000000000000005c / (1.0 - fVar33);
        }
        fVar33 = fVar33 + (fStack000000000000005c - fVar26 * (fVar21 + DAT_00c928e4)) / fVar29;
        if (fVar28 <= fVar33) {
          fVar33 = fVar28;
        }
        *(float *)(unaff_x19 + 0x2d4) = fVar33;
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
    fVar33 = (float)FUN_040cee68(&stack0x00000100,0);
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar28 = *(float *)(unaff_x19 + 0x640);
    fVar21 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
    fVar21 = unaff_s14 * fVar33 * fVar21;
    fVar33 = fVar21 * (float)(int)(fVar28 / fVar21);
    if (fVar33 <= fVar28) {
      fVar33 = fVar28 + fVar21;
    }
LAB_03e7b75c:
    bVar9 = false;
    *(float *)(unaff_x19 + 0x640) = fVar33;
LAB_03e7b764:
    if (*unaff_x21 != in_stack_00000070) goto LAB_03e7b774;
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
    fVar33 = *(float *)(unaff_x19 + 0x640);
    if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
      fVar21 = (float)FUN_040cf0d4(&stack0x000000e0,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar21 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               unaff_s14 * (fVar28 + fVar21) +
               fStack0000000000000058 *
               (fVar29 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    else {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar21 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
               (*(float *)(unaff_x19 + 0x2ac) +
               (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
               fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
    }
    fVar33 = fVar33 + fVar21;
    *(float *)(unaff_x19 + 0x640) = fVar33;
    if ((uVar12 == 0x200b) || (uVar11 != 0)) {
      fVar33 = fVar33 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
      *(float *)(unaff_x19 + 0x640) = fVar33;
    }
    if (uVar12 == 0xd) {
      if (fStack0000000000000064 <= fStack000000000000006c + fVar33) {
        fStack0000000000000064 = fStack000000000000006c + fVar33;
      }
      fStack000000000000006c = 0.0;
      fVar33 = *(float *)(unaff_x19 + 0x40c) + 0.0;
      goto LAB_03e7b75c;
    }
    bVar9 = uVar12 == 10;
    if (((0xb < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0xc08U) == 0)) && (1 < uVar12 - 0x2028))
    goto LAB_03e7b764;
  }
  if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
    fVar33 = *(float *)(unaff_x19 + 0x4c8);
    fVar21 = *(float *)(unaff_x19 + 0x4d0);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar33 = fVar33 - fVar21;
    if (((fStack000000000000001c < ABS(fVar33)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
       (*(char *)(unaff_x19 + 0x33c) == '\0')) {
      *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar33;
      *(float *)(unaff_x19 + 0x4d8) = fVar33 + *(float *)(unaff_x19 + 0x4d8);
    }
  }
  fVar33 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
  if (fVar33 <= *(float *)(unaff_x19 + 0x4c4)) {
    fStack0000000000000038 = fVar33;
  }
  fVar21 = in_stack_00000040._4_4_ +
           fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
  fVar33 = fStack0000000000000064;
  if (fStack0000000000000064 <= fVar21) {
    fVar33 = fVar21;
  }
  *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
  fStack000000000000006c = fVar33;
  if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
    fStack000000000000006c = unaff_s13;
    fStack0000000000000064 = fVar33;
  }
  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
  *(undefined1 *)(unaff_x19 + 0x33c) = 0;
  if (bVar9) {
LAB_03e7bb3c:
    FUN_03e821b4();
    FUN_03e821b4();
    uVar11 = *(uint *)(unaff_x19 + 0x494);
    lVar16 = *(long *)(unaff_x19 + 0x488);
    iVar19 = uVar11 + 1;
    *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
    *(int *)(unaff_x19 + 0x498) = iVar19;
    if (lVar16 == 0) goto LAB_03e7bfc0;
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
    fVar33 = *(float *)(lVar16 + (long)(int)uVar11 * unaff_x22 + 0x154);
    if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
      fVar21 = 0.0;
      if (!(bool)(uVar12 != 0x2029 & (bVar9 ^ 1U))) {
        fVar21 = *(float *)(unaff_x19 + 0x2cc);
      }
      uVar18 = 0;
      fVar21 = fVar33 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
               fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
               fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar21) +
               *(float *)(unaff_x19 + 0x4d8);
    }
    else {
      fVar21 = 0.0;
      if (!(bool)(uVar12 != 0x2029 & (bVar9 ^ 1U))) {
        fVar21 = *(float *)(unaff_x19 + 0x2cc);
      }
      uVar18 = 1;
      fVar21 = *(float *)(unaff_x19 + 0x4d8) +
               *(float *)(unaff_x19 + 0x2c0) +
               fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar21);
    }
    *(float *)(unaff_x19 + 0x4d8) = fVar21;
    *(undefined1 *)(unaff_x19 + 0x2c4) = uVar18;
    puVar4 = PTR_DAT_04579e70;
    lVar16 = *(long *)PTR_DAT_04579e70;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar16 = *(long *)puVar4;
      iVar19 = *unaff_x21 + 1;
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
    *(float *)(unaff_x19 + 0x640) =
         *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
    uVar15 = NEON_rev64(uVar15,4);
    *(float *)(unaff_x19 + 0x4d0) = fVar33;
    *(undefined8 *)(unaff_x19 + 0x4c8) = uVar15;
    *(int *)(unaff_x19 + 0x494) = iVar19;
    fVar33 = unaff_s14;
    goto LAB_03e7bfb0;
  }
  if (0x2027 < (int)uVar12) {
    if (1 < uVar12 - 0x2028) goto LAB_03e7b774;
    goto LAB_03e7bb3c;
  }
  if (uVar12 != 3) {
    if ((uVar12 != 0xb) && (uVar12 != 0x2d)) goto LAB_03e7b774;
    goto LAB_03e7bb3c;
  }
  if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03e7bfc0;
  unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
  uVar12 = 3;
LAB_03e7b774:
  if (((uVar5 & 0x100000000) == 0) && ((*(uint *)(unaff_x19 + 0x2e0) | 2) != 3))
  goto code_r0x03e7bfa4;
  if ((uVar11 == 0) && (((uVar12 != 0x2d && (uVar12 != 0x200b)) && (uVar12 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03e7b9d0:
      if (((((uVar12 - 0xac01 < 0x2bfe) || (uVar12 - 0x1101 < 0xfe)) || (uVar12 - 0xa961 < 0x1e)) &&
          (uVar13 = FUN_03e90be8(0), (uVar13 & 1) == 0)) ||
         ((((uVar12 - 0xff01 < 0xee || (uVar12 - 0xfe31 < 0x1e)) || (uVar12 - 0x2e81 < 0x717e)) ||
          (uVar12 - 0xf901 < 0x1fe)))) {
        lVar16 = FUN_03e90a7c(0);
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) goto LAB_03e7bfc0;
        uVar12 = FUN_02afbd84(*(long *)(lVar16 + 0x10),uVar12,*(undefined8 *)PTR_DAT_04579da0);
        if ((int)*unaff_x21 < (int)in_stack_00000070) goto LAB_03e7ba90;
        if (((uStack0000000000000030 | uVar12 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
        goto LAB_03e7bf60;
      }
    }
  }
  else if (*(char *)(unaff_x19 + 0x2da) == '\0') {
    if (((0x28 < uVar12 - 0x2007) ||
        ((1L << ((ulong)(uVar12 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
       ((uVar12 != 0xa0 && (uVar12 != 0x2060)))) {
      FUN_03e821b4();
      uStack0000000000000028 = 0;
      uStack0000000000000030 = 0;
      in_stack_00000170 = 0xffffffff;
      goto code_r0x03e7bfa4;
    }
    goto LAB_03e7b9d0;
  }
  if ((uStack0000000000000028 & 1) != 0) {
    lVar16 = FUN_03e90a7c(0);
    if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) goto LAB_03e7bfc0;
    uVar13 = FUN_02afbd84(*(long *)(lVar16 + 0x10),uVar12,*(undefined8 *)PTR_DAT_04579da0);
    if ((uVar13 & 1) == 0) {
      FUN_03e821b4();
    }
    uStack0000000000000028 = 0;
    goto code_r0x03e7bfa4;
  }
  if ((uStack0000000000000030 & 1) == 0) {
    uStack0000000000000028 = 0;
    uStack0000000000000030 = 0;
    goto code_r0x03e7bfa4;
  }
  if ((((bStack000000000000004c | bVar8 ^ 0xffU) & 1) == 0) || (uVar11 != 0)) {
    FUN_03e821b4();
  }
  FUN_03e821b4();
  uStack0000000000000028 = 0;
LAB_03e7b988:
  uStack0000000000000030 = 1;
  goto code_r0x03e7bfa4;
LAB_03e7ba90:
  lVar16 = FUN_03e90a7c(0);
  if ((lVar16 == 0) || (lVar20 = *in_stack_00000078, lVar20 == 0)) {
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x21 + 1) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  if (*(long *)(lVar16 + 0x18) == 0) goto LAB_03e7bfc0;
  uVar13 = FUN_02afbd84(*(long *)(lVar16 + 0x18),
                        *(undefined2 *)(lVar20 + (long)(int)(*unaff_x21 + 1) * (long)iVar19 + 0x20),
                        *(undefined8 *)PTR_DAT_04579da0);
  if (((uStack0000000000000030 | uVar12 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
  if ((uVar13 & 1) != 0) {
    if ((uStack0000000000000030 & 1) == 0) goto LAB_03e7bf74;
    if (uVar11 != 0) {
      FUN_03e821b4();
    }
    FUN_03e821b4();
    uStack0000000000000028 = 1;
    goto LAB_03e7b988;
  }
LAB_03e7bf60:
  FUN_03e821b4();
LAB_03e7bf74:
  uStack0000000000000030 = 0;
  uStack0000000000000028 = 1;
  goto code_r0x03e7bfa4;
}


