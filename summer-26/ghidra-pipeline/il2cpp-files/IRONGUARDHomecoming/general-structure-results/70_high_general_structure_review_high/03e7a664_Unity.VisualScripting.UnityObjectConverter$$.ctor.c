/*
FUNCTION_NAME: Unity.VisualScripting.UnityObjectConverter$$.ctor
ENTRY_POINT: 03e7a664
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


float Unity_VisualScripting_UnityObjectConverter___ctor
                (long param_1,float param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  undefined1 uVar21;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  uint uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float in_s4;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float unaff_s15;
  float fVar36;
  undefined8 in_stack_00000008;
  float *in_stack_00000010;
  uint in_stack_00000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  uint uStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  ulong in_stack_00000040;
  float in_stack_00000048;
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
  
  uVar9 = in_stack_00000040;
  uVar8 = _uStack0000000000000030;
  fStack000000000000001c = *(float *)(param_1 + 0x94c);
  fStack000000000000005c = 0.0;
  param_2 = param_2 * unaff_s15;
  bVar6 = false;
  uStack000000000000004c = 0;
  fStack0000000000000058 = unaff_s15 * fStack0000000000000074 * fStack000000000000001c;
  uVar14 = 0;
  puVar1 = (uint *)(unaff_x20 + 0x1e8);
  plVar2 = (long *)(unaff_x19 + 0x648);
  uStack0000000000000030 = 1;
  fStack0000000000000020 = param_2;
  fStack0000000000000024 = in_s4;
LAB_03e7a6b4:
  if ((int)*(uint *)(param_4 + 0x18) <= (int)uVar14) {
LAB_03e7bfc4:
    if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
         ((in_stack_00000018 & 1) == 0)) ||
        (fVar36 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar36)) ||
       (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
      fVar36 = *(float *)(unaff_x19 + 0x340);
      fVar24 = *(float *)(unaff_x19 + 0x348);
      if (fVar36 <= 0.0) {
        fVar36 = 0.0;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      *(undefined1 *)(unaff_x19 + 0x24c) = 1;
      fVar24 = (fStack000000000000006c + fVar36 + fVar24) * 100.0 + 1.0;
      fVar36 = DAT_00c92378;
      if (fVar24 != INFINITY) {
        fVar36 = (float)(int)fVar24 / 100.0;
      }
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
      return fVar36;
    }
    if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
      fVar36 = *in_stack_00000010;
    }
    *(float *)(unaff_x19 + 0x240) = fVar36;
    fVar36 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
    if (fVar36 <= DAT_00c92764) {
      fVar36 = DAT_00c92764;
    }
    fVar36 = *in_stack_00000010 + fVar36;
    *in_stack_00000010 = fVar36;
    fVar24 = fVar36 * 20.0 + 0.5;
    fVar36 = DAT_00c92a58;
    if (fVar24 != INFINITY) {
      fVar36 = (float)(int)fVar24 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x254) <= fVar36) {
      fVar36 = *(float *)(unaff_x19 + 0x254);
    }
    *in_stack_00000010 = fVar36;
    goto LAB_03e7c098;
  }
  if (*(uint *)(param_4 + 0x18) <= uVar14) goto LAB_03e7c214;
  uVar15 = *(uint *)(param_4 + (long)(int)uVar14 * 0xc + 0x20);
  if (uVar15 == 0) goto LAB_03e7bfc4;
  if ((uVar15 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x431) = 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    uVar16 = FUN_03e7c218();
    if (((uVar16 & 1) == 0) || (uVar14 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
    goto LAB_03e7a758;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar20 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar20 + 0x18) <= *puVar1) goto LAB_03e7c214;
    lVar20 = lVar20 + (long)(int)*puVar1 * 0x178;
    *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar20 + 0x2c);
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar20 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar20 + 0x38);
    thunk_FUN_01f51358();
LAB_03e7a758:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar20 == 0)) goto LAB_03e7bfc0;
    uVar13 = *puVar1;
    if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
    lVar23 = (long)(int)uVar13;
    cVar4 = *(char *)(lVar20 + lVar23 * 0x178 + 0x5c);
    *(undefined1 *)(unaff_x19 + 0x431) = 0;
    uVar33 = *(undefined4 *)(unaff_x19 + 0x120);
    if (in_stack_00000bd8 == uVar13) {
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      if (in_stack_00000bdc == 0x2026) {
        lVar20 = *in_stack_00000078;
        if (lVar20 != 0) {
          if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
          *(undefined8 *)(lVar20 + lVar23 * 0x178 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
          thunk_FUN_01f51358();
          lVar20 = *in_stack_00000078;
          if (lVar20 != 0) {
            if (*(uint *)(lVar20 + 0x18) <= *puVar1) goto LAB_03e7c214;
            lVar20 = lVar20 + (long)(int)*puVar1 * 0x178;
            *(undefined4 *)(lVar20 + 0x2c) = 0;
            *(undefined8 *)(lVar20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
            thunk_FUN_01f51358();
            lVar20 = *(long *)(unaff_x19 + 0x488);
            if (lVar20 != 0) {
              if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
              *(undefined8 *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                   *(undefined8 *)(unaff_x19 + 0x660);
              thunk_FUN_01f51358();
              lVar20 = *in_stack_00000078;
              if (lVar20 != 0) {
                uVar13 = *puVar1;
                if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
                bVar11 = true;
                in_stack_00000bd8 = uVar13 + 1;
                *(undefined4 *)(lVar20 + (long)(int)uVar13 * 0x178 + 0x58) =
                     *(undefined4 *)(unaff_x19 + 0x668);
                uVar15 = 0x2026;
                *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                in_stack_00000bdc = 3;
                goto LAB_03e7a8f4;
              }
            }
          }
        }
        goto LAB_03e7bfc0;
      }
      if (in_stack_00000bdc != 3) {
        bVar11 = true;
        uVar15 = in_stack_00000bdc;
        goto LAB_03e7a8f4;
      }
      lVar20 = *in_stack_00000078;
      if (((lVar20 == 0) || (*unaff_x23 == 0)) || (lVar17 = FUN_03e5d25c(*unaff_x23,0), lVar17 == 0)
         ) goto LAB_03e7bfc0;
      uVar18 = FUN_02bd6170(lVar17,3,*(undefined8 *)PTR_DAT_04579db0);
      if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
      *(undefined8 *)(lVar20 + lVar23 * 0x178 + 0x30) = uVar18;
      thunk_FUN_01f51358();
      bVar11 = true;
      uVar15 = 3;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
    }
    else {
      bVar11 = false;
LAB_03e7a8f4:
      if ((uVar15 != 3) && ((int)uVar13 < *(int *)(unaff_x19 + 0x324))) {
        lVar20 = *in_stack_00000078;
        if (lVar20 != 0) {
          if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
          lVar20 = lVar20 + (long)(int)uVar13 * 0x178;
          *(undefined1 *)(lVar20 + 0x194) = 0;
          *(undefined2 *)(lVar20 + 0x20) = 0x200b;
          *(undefined4 *)(lVar20 + 100) = 0;
          *puVar1 = uVar13 + 1;
          goto LAB_03e7bfb0;
        }
        goto LAB_03e7bfc0;
      }
    }
    iVar12 = *(int *)(unaff_x19 + 0x644);
    if (iVar12 == 0) {
      uVar13 = *(uint *)(unaff_x19 + 0x25c);
      if ((uVar13 >> 4 & 1) == 0) {
        if ((uVar13 >> 3 & 1) == 0) {
          fStack0000000000000068 = 1.0;
          if ((uVar13 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar16 = FUN_034fc51c(uVar15,0);
            fStack0000000000000068 = 1.0;
            if ((uVar16 & 1) != 0) {
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar15 = FUN_034fc7fc(uVar15,0);
              fStack0000000000000068 = in_stack_00000008._4_4_;
              goto LAB_03e7ac68;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar16 = FUN_034fc460(uVar15,0);
          fStack0000000000000068 = 1.0;
          if ((uVar16 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar15 = FUN_034fc974(uVar15,0);
            goto LAB_03e7ac68;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar16 = FUN_034fc51c(uVar15,0);
        fStack0000000000000068 = 1.0;
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar15 = FUN_034fc7fc(uVar15,0);
LAB_03e7ac68:
          uVar15 = uVar15 & 0xffff;
        }
      }
      iVar12 = *(int *)(unaff_x19 + 0x644);
      if (iVar12 != 0) goto LAB_03e7a954;
LAB_03e7ac74:
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar20 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar20 + 0x18) <= *puVar1) goto LAB_03e7c214;
      *plVar2 = *(long *)(lVar20 + (long)(int)*puVar1 * 0x178 + 0x30);
      thunk_FUN_01f51358(plVar2);
      if (*plVar2 == 0) goto LAB_03e7bfb0;
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar20 == 0)) goto LAB_03e7bfc0;
      uVar22 = *puVar1;
      uVar13 = *(uint *)(lVar20 + 0x18);
      if (uVar13 <= uVar22) goto LAB_03e7c214;
      *(undefined4 *)(unaff_x19 + 0x120) =
           *(undefined4 *)(lVar20 + (long)(int)uVar22 * 0x178 + 0x58);
      if (bVar11) {
        lVar23 = *(long *)(unaff_x19 + 0x478);
        if (lVar23 == 0) goto LAB_03e7bfc0;
        if (*(uint *)(lVar23 + 0x18) <= uVar14) goto LAB_03e7c214;
        if ((*(int *)(lVar23 + (long)(int)uVar14 * 0xc + 0x20) != 10) ||
           (uVar22 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
        if (uVar13 <= uVar22 - 1) goto LAB_03e7c214;
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar36 = *(float *)(lVar20 + (long)(int)(uVar22 - 1) * 0x178 + 0x60);
        iVar12 = FUN_040ced70(*unaff_x23 + 0x50,0);
        lVar20 = *unaff_x23;
      }
      else {
LAB_03e7ad14:
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar36 = *(float *)(unaff_x19 + 0x1e8);
        iVar12 = FUN_040ced70(*unaff_x23 + 0x50,0);
        lVar20 = *(long *)(unaff_x19 + 0x100);
      }
      if (lVar20 == 0) goto LAB_03e7bfc0;
      fVar32 = (float)FUN_040ced80(lVar20 + 0x50,0);
      fVar31 = in_stack_00000028._4_4_;
      if (*(char *)(unaff_x19 + 0x305) != '\0') {
        fVar31 = 1.0;
      }
      fVar24 = 0.0;
      fVar26 = 0.0;
      if (!(bool)(bVar11 & uVar15 == 0x2026)) {
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar26 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar24 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
      }
      if ((*plVar2 == 0) || (lVar20 = *(long *)(unaff_x19 + 0x488), lVar20 == 0)) goto LAB_03e7bfc0;
      uVar13 = *(uint *)(unaff_x19 + 0x494);
      if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
      param_2 = ((fStack0000000000000068 * fVar36) / (float)iVar12) * fVar32 * fVar31 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar2 + 0x2c);
      *(undefined4 *)(lVar20 + (long)(int)uVar13 * 0x178 + 0x2c) = 0;
LAB_03e7afa0:
      uVar22 = (uint)(uVar15 == 0xad);
      fVar36 = 0.0;
      if (uVar15 != 0xad && uVar15 != 3) {
        fVar36 = param_2;
      }
    }
    else {
      fStack0000000000000068 = 1.0;
      if (iVar12 == 0) goto LAB_03e7ac74;
LAB_03e7a954:
      if (iVar12 == 1) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar20 == 0))
        goto LAB_03e7bfc0;
        if (*(uint *)(lVar20 + 0x18) <= *puVar1) goto LAB_03e7c214;
        *(undefined8 *)(unaff_x19 + 0x698) =
             *(undefined8 *)(lVar20 + (long)(int)*puVar1 * 0x178 + 0x40);
        thunk_FUN_01f51358(in_stack_00000050);
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar20 == 0))
        goto LAB_03e7bfc0;
        if (*(uint *)(lVar20 + 0x18) <= *puVar1) goto LAB_03e7c214;
        *(undefined4 *)(unaff_x19 + 0x6a4) =
             *(undefined4 *)(lVar20 + (long)(int)*puVar1 * 0x178 + 0x48);
        if ((*(long *)(unaff_x19 + 0x698) == 0) ||
           (lVar20 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar20 == 0)) goto LAB_03e7bfc0;
        lVar20 = FUN_030f28e4(lVar20,*(undefined4 *)(unaff_x19 + 0x6a4),
                              *(undefined8 *)PTR_DAT_04579db8);
        if (lVar20 == 0) goto LAB_03e7bfb0;
        if (uVar15 == 0x3c) {
          uVar15 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
        }
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar12 = FUN_040ced70(&stack0x00000100,0);
        fVar36 = *(float *)(unaff_x19 + 0x1e8);
        if (iVar12 < 1) {
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
          iVar12 = FUN_040ced70(&stack0x00000100,0);
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
          fVar31 = (float)FUN_040ced80(&stack0x00000100,0);
          fVar24 = in_stack_00000028._4_4_;
          if (*(char *)(unaff_x19 + 0x305) != '\0') {
            fVar24 = 1.0;
          }
          if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
          fVar32 = (float)FUN_040ceda0(&stack0x00000100,0);
          if (*(long *)(lVar20 + 0x20) == 0) goto LAB_03e7bfc0;
          FUN_040cf28c(&stack0x00000be0,*(long *)(lVar20 + 0x20),0);
          in_stack_000000c0 = in_stack_00000be0;
          in_stack_000000c8 = in_stack_00000be8;
          in_stack_000000d0 = in_stack_00000bf0;
          fVar25 = (float)FUN_040cf0bc(&stack0x000000c0,0);
          if (*(long *)(lVar20 + 0x20) == 0) goto LAB_03e7bfc0;
          fVar29 = *(float *)(lVar20 + 0x2c);
          fVar27 = (float)FUN_040cf2c8(*(long *)(lVar20 + 0x20),0);
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
          fVar26 = (float)FUN_040ceda0(&stack0x00000100,0);
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          fVar24 = (fVar36 / (float)iVar12) * fVar31 * fVar24;
          param_2 = fVar24 * (fVar32 / fVar25) * fVar29 * fVar27;
          fVar24 = fVar24 / param_2;
          fVar26 = fVar24 * fVar26;
          memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
          fVar36 = (float)FUN_040cede0(&stack0x00000100,0);
          fVar24 = fVar24 * fVar36;
        }
        else {
          if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
          iVar12 = FUN_040ced70(&stack0x00000100,0);
          if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
          fVar24 = (float)FUN_040ced80(&stack0x00000100,0);
          if (*(long *)(lVar20 + 0x20) == 0) goto LAB_03e7bfc0;
          fVar32 = *(float *)(lVar20 + 0x2c);
          fVar31 = in_stack_00000028._4_4_;
          if (*(char *)(unaff_x19 + 0x305) != '\0') {
            fVar31 = 1.0;
          }
          fVar25 = (float)FUN_040cf2c8(*(long *)(lVar20 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
          fVar26 = (float)FUN_040ceda0(&stack0x00000100,0);
          if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
          param_2 = (fVar36 / (float)iVar12) * fVar24 * fVar31 * fVar32 * fVar25;
          memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
          fVar24 = (float)FUN_040cede0(&stack0x00000100,0);
        }
        *plVar2 = lVar20;
        thunk_FUN_01f51358(plVar2,lVar20);
        lVar20 = *in_stack_00000078;
        if (lVar20 != 0) {
          uVar13 = *puVar1;
          if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
          lVar23 = lVar20 + (long)(int)uVar13 * 0x178;
          *(undefined4 *)(lVar23 + 0x2c) = 1;
          *(float *)(lVar23 + 0x160) = param_2;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar33;
          goto LAB_03e7afa0;
        }
        goto LAB_03e7bfc0;
      }
      uVar22 = (uint)(uVar15 == 0xad);
      lVar20 = *in_stack_00000078;
      fVar26 = 0.0;
      fVar36 = 0.0;
      if (uVar15 != 0xad && uVar15 != 3) {
        fVar36 = param_2;
      }
      if (lVar20 == 0) goto LAB_03e7bfc0;
      uVar13 = *puVar1;
      fVar24 = 0.0;
    }
    if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
    *(short *)(lVar20 + (long)(int)uVar13 * 0x178 + 0x20) = (short)uVar15;
    if ((*plVar2 == 0) || (lVar20 = *(long *)(*plVar2 + 0x20), lVar20 == 0)) goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar20,0);
    in_stack_000000e0 = in_stack_00000be0;
    in_stack_000000e8 = in_stack_00000be8;
    in_stack_000000f0 = in_stack_00000bf0;
    if ((int)uVar15 < 0x10000) {
      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_034f9bb4(uVar15,0);
      uVar13 = uVar13 & 1;
    }
    else {
      uVar13 = 0;
    }
    fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
    *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
    if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
      fVar31 = 0.0;
    }
    else {
      if (*plVar2 == 0) goto LAB_03e7bfc0;
      uVar19 = *puVar1;
      uVar3 = *(uint *)(*plVar2 + 0x28);
      if ((int)uVar19 < (int)uStack0000000000000070) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar20 == 0))
        goto LAB_03e7bfc0;
        if (*(uint *)(lVar20 + 0x18) <= uVar19 + 1) goto LAB_03e7c214;
        lVar20 = *(long *)(lVar20 + (long)(int)(uVar19 + 1) * 0x178 + 0x30);
        if ((((lVar20 == 0) || (*unaff_x23 == 0)) ||
            (lVar23 = *(long *)(*unaff_x23 + 0x128), lVar23 == 0)) ||
           (lVar23 = *(long *)(lVar23 + 0x18), lVar23 == 0)) goto LAB_03e7bfc0;
        uVar16 = FUN_02bd799c(lVar23,uVar3 | *(int *)(lVar20 + 0x28) << 0x10,&stack0x000000b8,
                              *(undefined8 *)PTR_DAT_04579da8);
        uVar33 = 0;
        if ((uVar16 & 1) == 0) {
          uVar34 = 0;
          fVar31 = 0.0;
          uVar35 = 0;
        }
        else {
          if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
          uVar33 = *(undefined4 *)(in_stack_000000b8 + 0x14);
          uVar34 = *(undefined4 *)(in_stack_000000b8 + 0x18);
          fVar31 = *(float *)(in_stack_000000b8 + 0x1c);
          uVar35 = *(undefined4 *)(in_stack_000000b8 + 0x20);
          if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
            fStack0000000000000074 = 0.0;
          }
        }
        uVar19 = *puVar1;
      }
      else {
        uVar33 = 0;
        uVar34 = 0;
        fVar31 = 0.0;
        uVar35 = 0;
      }
      if (0 < (int)uVar19) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar20 == 0))
        goto LAB_03e7bfc0;
        if (*(uint *)(lVar20 + 0x18) <= uVar19 - 1) goto LAB_03e7c214;
        lVar20 = *(long *)(lVar20 + (ulong)(uVar19 - 1) * 0x178 + 0x30);
        if (((lVar20 == 0) || (*unaff_x23 == 0)) ||
           ((lVar23 = *(long *)(*unaff_x23 + 0x128), lVar23 == 0 ||
            (lVar23 = *(long *)(lVar23 + 0x18), lVar23 == 0)))) goto LAB_03e7bfc0;
        uVar16 = FUN_02bd799c(lVar23,*(uint *)(lVar20 + 0x28) | uVar3 << 0x10,&stack0x000000b8,
                              *(undefined8 *)PTR_DAT_04579da8);
        if ((uVar16 & 1) != 0) {
          if ((in_stack_000000b8 == 0) ||
             (FUN_03e67c10(uVar33,uVar34,fVar31,uVar35,*(undefined4 *)(in_stack_000000b8 + 0x28),
                           *(undefined4 *)(in_stack_000000b8 + 0x2c),
                           *(undefined4 *)(in_stack_000000b8 + 0x30),
                           *(undefined4 *)(in_stack_000000b8 + 0x34),0), in_stack_000000b8 == 0))
          goto LAB_03e7bfc0;
          if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
            fStack0000000000000074 = 0.0;
          }
        }
      }
      *(float *)(unaff_x19 + 0x2fc) = fVar31;
    }
    fStack0000000000000060 = 0.0;
    fVar32 = *(float *)(unaff_x19 + 0x2b0);
    if (fVar32 != 0.0) {
      if ((*plVar2 == 0) || (lVar20 = *(long *)(*plVar2 + 0x20), lVar20 == 0)) goto LAB_03e7bfc0;
      FUN_040cf28c(&stack0x00000be0,lVar20,0);
      in_stack_000000c0 = in_stack_00000be0;
      in_stack_000000c8 = in_stack_00000be8;
      in_stack_000000d0 = in_stack_00000bf0;
      fVar25 = (float)FUN_040cf0b4(&stack0x000000c0,0);
      if ((*plVar2 == 0) || (lVar20 = *(long *)(*plVar2 + 0x20), lVar20 == 0)) goto LAB_03e7bfc0;
      FUN_040cf28c(&stack0x00000be0,lVar20,0);
      in_stack_000000c0 = in_stack_00000be0;
      in_stack_000000c8 = in_stack_00000be8;
      in_stack_000000d0 = in_stack_00000bf0;
      fVar27 = (float)FUN_040cf0c4(&stack0x000000c0,0);
      fStack0000000000000060 =
           (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar32 * 0.5 - fVar36 * (fVar25 * 0.5 + fVar27))
      ;
      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
    }
    iVar12 = *(int *)(unaff_x19 + 0x644);
    fVar32 = 0.0;
    if (((cVar4 == '\0') && (fVar32 = 0.0, iVar12 == 0)) &&
       ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar32 = *(float *)(*unaff_x23 + 0x1b4);
    }
    lVar20 = *in_stack_00000078;
    if (lVar20 == 0) goto LAB_03e7bfc0;
    uVar3 = *puVar1;
    lVar23 = (long)(int)uVar3;
    if (*(uint *)(lVar20 + 0x18) <= uVar3) goto LAB_03e7c214;
    fVar25 = *(float *)(unaff_x19 + 0x4d8);
    fVar27 = *(float *)(unaff_x19 + 0x61c);
    fVar26 = fVar26 * fVar36;
    *(float *)(lVar20 + lVar23 * 0x178 + 0x14c) = (0.0 - fVar25) + fVar27;
    if (iVar12 == 0) {
      fVar26 = fVar26 / fStack0000000000000068;
      fVar24 = (fVar24 * fVar36) / fStack0000000000000068;
    }
    else {
      fVar24 = fVar24 * fVar36;
    }
    fVar26 = fVar27 + fVar26;
    if ((uVar13 == 0) || (uVar3 == *(uint *)(unaff_x19 + 0x498))) {
      fVar24 = fVar27 + fVar24;
      fVar29 = fVar26;
      fVar28 = fVar24;
      if (fVar27 != 0.0) {
        fVar29 = (fVar26 - fVar27) / *(float *)(unaff_x19 + 0x404);
        fVar28 = (fVar24 - fVar27) / *(float *)(unaff_x19 + 0x404);
        if (fVar29 <= fVar26) {
          fVar29 = fVar26;
        }
        if (fVar24 <= fVar28) {
          fVar28 = fVar24;
        }
      }
      lVar20 = lVar20 + lVar23 * 0x178;
      fVar27 = fVar29;
      if (fVar29 <= *(float *)(unaff_x19 + 0x4c8)) {
        fVar27 = *(float *)(unaff_x19 + 0x4c8);
      }
      fVar30 = fVar28;
      if (*(float *)(unaff_x19 + 0x4cc) <= fVar28) {
        fVar30 = *(float *)(unaff_x19 + 0x4cc);
      }
      *(float *)(unaff_x19 + 0x4cc) = fVar30;
      *(float *)(unaff_x19 + 0x4c8) = fVar27;
      *(float *)(lVar20 + 0x154) = fVar29;
      *(float *)(lVar20 + 0x158) = fVar28;
      *(float *)(lVar20 + 0x148) = fVar26 - fVar25;
      *(float *)(unaff_x19 + 0x4c0) = fVar26 - fVar25;
      *(float *)(lVar20 + 0x150) = fVar24 - fVar25;
      *(float *)(unaff_x19 + 0x4c4) = fVar24 - fVar25;
      if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
        *(float *)(unaff_x19 + 0x4b8) = fVar27;
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
        fVar24 = *(float *)(unaff_x19 + 0x4bc);
        fVar25 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
        fStack0000000000000068 = (fVar36 * fVar25) / fStack0000000000000068;
        fVar25 = *(float *)(unaff_x19 + 0x4d8);
        if (fVar24 <= fStack0000000000000068) {
          fVar24 = fStack0000000000000068;
        }
        *(float *)(unaff_x19 + 0x4bc) = fVar24;
      }
    }
    else {
      fVar24 = *(float *)(unaff_x19 + 0x4c8);
      lVar20 = lVar20 + lVar23 * 0x178;
      *(float *)(lVar20 + 0x154) = fVar24;
      fVar27 = *(float *)(unaff_x19 + 0x4cc);
      fVar24 = fVar24 - fVar25;
      *(float *)(lVar20 + 0x148) = fVar24;
      *(float *)(lVar20 + 0x158) = fVar27;
      *(float *)(unaff_x19 + 0x4c0) = fVar24;
      fVar27 = fVar27 - fVar25;
      *(float *)(lVar20 + 0x150) = fVar27;
      *(float *)(unaff_x19 + 0x4c4) = fVar27;
    }
    if (fVar25 == 0.0) {
      if ((uVar13 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fVar24 = *(float *)(unaff_x19 + 0x4b4);
        if (*(float *)(unaff_x19 + 0x4b4) <= fVar26) {
          fVar24 = fVar26;
        }
        *(float *)(unaff_x19 + 0x4b4) = fVar24;
        goto LAB_03e7b470;
      }
      bVar11 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (uVar15 == 9) goto LAB_03e7b484;
LAB_03e7b4c4:
      if ((((uStack000000000000004c | uVar22 ^ 0xffffffff) & 1) == 0) ||
         (*(int *)(unaff_x19 + 0x644) == 1)) goto LAB_03e7b4dc;
LAB_03e7b658:
      fVar24 = *(float *)(unaff_x19 + 0x640);
      if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
        fVar25 = (float)FUN_040cf0d4(&stack0x000000e0,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar31 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 fVar36 * (fVar31 + fVar25) +
                 fStack0000000000000058 *
                 (fVar32 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
      }
      else {
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar31 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                 fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)))
        ;
      }
      fVar24 = fVar24 + fVar31;
      *(float *)(unaff_x19 + 0x640) = fVar24;
      if ((uVar15 == 0x200b) || (uVar13 != 0)) {
        fVar24 = fVar24 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
        *(float *)(unaff_x19 + 0x640) = fVar24;
      }
      if (uVar15 == 0xd) {
        if (fStack0000000000000064 <= fStack000000000000006c + fVar24) {
          fStack0000000000000064 = fStack000000000000006c + fVar24;
        }
        fStack000000000000006c = 0.0;
        fVar24 = *(float *)(unaff_x19 + 0x40c) + 0.0;
        goto LAB_03e7b75c;
      }
      bVar11 = uVar15 == 10;
      if (((0xb < uVar15) || ((1 << (ulong)(uVar15 & 0x1f) & 0xc08U) == 0)) && (1 < uVar15 - 0x2028)
         ) goto LAB_03e7b764;
LAB_03e7b820:
      if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
        fVar24 = *(float *)(unaff_x19 + 0x4c8);
        fVar31 = *(float *)(unaff_x19 + 0x4d0);
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0)
        {
          thunk_FUN_01ee6d7c();
        }
        fVar24 = fVar24 - fVar31;
        if (((fStack000000000000001c < ABS(fVar24)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
           (*(char *)(unaff_x19 + 0x33c) == '\0')) {
          *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar24;
          *(float *)(unaff_x19 + 0x4d8) = fVar24 + *(float *)(unaff_x19 + 0x4d8);
        }
      }
      fVar24 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
      fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
      if (fVar24 <= *(float *)(unaff_x19 + 0x4c4)) {
        fStack0000000000000038 = fVar24;
      }
      fVar31 = in_stack_00000040._4_4_ +
               in_stack_00000048 + fStack000000000000006c + fStack000000000000005c;
      fVar24 = fStack0000000000000064;
      if (fStack0000000000000064 <= fVar31) {
        fVar24 = fVar31;
      }
      *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
      fStack000000000000006c = fVar24;
      if (*(uint *)(unaff_x19 + 0x494) != uStack0000000000000070) {
        fStack000000000000006c = 0.0;
        fStack0000000000000064 = fVar24;
      }
      fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
      *(undefined1 *)(unaff_x19 + 0x33c) = 0;
      if (bVar11) {
LAB_03e7bb3c:
        FUN_03e821b4();
        FUN_03e821b4();
        uVar13 = *(uint *)(unaff_x19 + 0x494);
        lVar20 = *(long *)(unaff_x19 + 0x488);
        iVar12 = uVar13 + 1;
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        *(int *)(unaff_x19 + 0x498) = iVar12;
        if (lVar20 != 0) {
          if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
          fVar24 = *(float *)(lVar20 + (long)(int)uVar13 * 0x178 + 0x154);
          if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
            fVar31 = 0.0;
            if (!(bool)(uVar15 != 0x2029 & (bVar11 ^ 1U))) {
              fVar31 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar21 = 0;
            fVar31 = fVar24 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
                     + fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar31) +
                     *(float *)(unaff_x19 + 0x4d8);
          }
          else {
            fVar31 = 0.0;
            if (!(bool)(uVar15 != 0x2029 & (bVar11 ^ 1U))) {
              fVar31 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar21 = 1;
            fVar31 = *(float *)(unaff_x19 + 0x4d8) +
                     *(float *)(unaff_x19 + 0x2c0) +
                     fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar31);
          }
          *(float *)(unaff_x19 + 0x4d8) = fVar31;
          *(undefined1 *)(unaff_x19 + 0x2c4) = uVar21;
          puVar7 = PTR_DAT_04579e70;
          lVar20 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar20 = *(long *)puVar7;
            iVar12 = *puVar1 + 1;
          }
          uVar18 = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) =
               *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
          uVar18 = NEON_rev64(uVar18,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar24;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar18;
          *(int *)(unaff_x19 + 0x494) = iVar12;
          param_2 = fVar36;
          goto LAB_03e7bfb0;
        }
        goto LAB_03e7bfc0;
      }
      if ((int)uVar15 < 0x2028) {
        if (uVar15 == 3) {
          if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03e7bfc0;
          uVar14 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
          uVar15 = 3;
        }
        else if ((uVar15 == 0xb) || (uVar15 == 0x2d)) goto LAB_03e7bb3c;
      }
      else if (uVar15 - 0x2028 < 2) goto LAB_03e7bb3c;
    }
    else {
LAB_03e7b470:
      bVar11 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (uVar15 == 9) {
LAB_03e7b484:
        bVar5 = true;
      }
      else {
        if ((((uVar13 != 0) || (uVar15 == 3)) || (uVar15 == 0x200b)) || (uVar15 == 0xad))
        goto LAB_03e7b4c4;
LAB_03e7b4dc:
        bVar5 = false;
      }
      fVar25 = *(float *)(unaff_x19 + 0x360);
      fVar27 = *(float *)(unaff_x19 + 0x640);
      fVar24 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
               *(float *)(unaff_x19 + 0x354);
      bVar10 = true;
      if ((fVar25 <= fVar24) && (bVar10 = false, !NAN(fVar25))) {
        bVar10 = fVar25 == -1.0;
      }
      if (!bVar10) {
        fVar24 = fVar25;
      }
      fVar25 = (float)FUN_040cf0d4(&stack0x000000e0,0);
      if (uVar22 == 0) {
        param_2 = fVar36;
      }
      fVar29 = 1.0;
      if (!bVar11) {
        fVar29 = DAT_00c926dc;
      }
      fVar25 = ABS(fVar27) + param_2 * fVar25 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
      fStack000000000000005c = fVar25;
      if ((fVar29 * fVar24 < fVar25 && (uVar9 & 1) == 0) &&
         (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
        uVar14 = FUN_03e81e20();
        lVar20 = *(long *)(unaff_x19 + 0x488);
        if (lVar20 == 0) goto LAB_03e7bfc0;
        uVar15 = *(uint *)(unaff_x19 + 0x494);
        uVar13 = uVar15 - 1;
        if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_03e7c214;
        if (((uStack000000000000004c & 1) == 0 &&
             *(short *)(lVar20 + (long)(int)uVar13 * 0x178 + 0x20) == 0xad) &&
           (*(int *)(unaff_x19 + 0x2e0) == 0)) {
          uStack000000000000004c = 0;
          in_stack_00000bdc = 0x2d;
          *puVar1 = uVar13;
          param_2 = fVar36;
          uVar14 = uVar14 - 1;
          in_stack_00000bd8 = uVar13;
          goto LAB_03e7bfb0;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03e7c214;
        if (*(short *)(lVar20 + (long)(int)uVar15 * 0x178 + 0x20) == 0xad) {
          uStack000000000000004c = 1;
          param_2 = fVar36;
        }
        else {
          if ((uStack0000000000000030 & in_stack_00000018) != 0) {
            fVar31 = *(float *)(unaff_x19 + 0x2d4);
            fVar32 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
            if ((fVar31 < fVar32) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              fVar36 = fVar25;
              if (0.0 < fVar31) {
                fVar36 = fVar25 / (1.0 - fVar31);
              }
              fVar31 = fVar31 + (fVar25 - fVar29 * (fVar24 + DAT_00c928e4)) / fVar36;
              if (fVar32 <= fVar31) {
                fVar31 = fVar32;
              }
              *(float *)(unaff_x19 + 0x2d4) = fVar31;
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
              fVar36 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
              if (fVar36 <= DAT_00c92764) {
                fVar36 = DAT_00c92764;
              }
              fVar36 = *in_stack_00000010 - fVar36;
              *in_stack_00000010 = fVar36;
              fVar24 = fVar36 * 20.0 + 0.5;
              fVar36 = DAT_00c92a58;
              if (fVar24 != INFINITY) {
                fVar36 = (float)(int)fVar24 / 20.0;
              }
              if (fVar36 <= *(float *)(unaff_x19 + 0x250)) {
                fVar36 = *(float *)(unaff_x19 + 0x250);
              }
              *in_stack_00000010 = fVar36;
              goto LAB_03e7c098;
            }
          }
          if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
            fVar24 = *(float *)(unaff_x19 + 0x4c8);
            fVar31 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) ==
                0) {
              thunk_FUN_01ee6d7c();
            }
            fVar24 = fVar24 - fVar31;
            if (((fStack000000000000001c < ABS(fVar24)) && (*(char *)(unaff_x19 + 0x2c4) == '\0'))
               && (*(char *)(unaff_x19 + 0x33c) == '\0')) {
              *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar24;
              *(float *)(unaff_x19 + 0x4d8) = fVar24 + *(float *)(unaff_x19 + 0x4d8);
            }
          }
          fVar32 = *(float *)(unaff_x19 + 0x640);
          fVar31 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
          fVar24 = *(float *)(unaff_x19 + 0x4c4);
          if (fVar31 <= *(float *)(unaff_x19 + 0x4c4)) {
            fVar24 = fVar31;
          }
          *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
          *(float *)(unaff_x19 + 0x4c4) = fVar24;
          *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
          if ((uVar8 & 0x100000000) == 0) {
            fVar31 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar31;
            if (fStack0000000000000038 <= fVar31) {
              fStack0000000000000038 = fVar31;
            }
          }
          else {
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar24;
          }
          FUN_03e821b4();
          lVar20 = *(long *)(unaff_x19 + 0x488);
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          if (lVar20 == 0) goto LAB_03e7bfc0;
          if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
          fVar24 = *(float *)(unaff_x19 + 0x2c0);
          fVar31 = *(float *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x154);
          bVar11 = fVar24 != DAT_00c927ac;
          if (bVar11) {
            fVar25 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          else {
            fVar25 = fVar31 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
            ;
            fVar24 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          *(bool *)(unaff_x19 + 0x2c4) = bVar11;
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar24 + fVar25;
          puVar7 = PTR_DAT_04579e70;
          lVar20 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar20 = *(long *)puVar7;
          }
          uStack000000000000004c = 0;
          fStack000000000000006c = fStack000000000000006c + fVar32;
          uVar18 = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
          uVar18 = NEON_rev64(uVar18,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar31;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar18;
          uStack0000000000000030 = 1;
          param_2 = fVar36;
        }
        goto LAB_03e7bfb0;
      }
      in_stack_00000048 = *(float *)(unaff_x19 + 0x350);
      in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
      if (!bVar5) goto LAB_03e7b658;
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
      fVar24 = (float)FUN_040cee68(&stack0x00000100,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar32 = *(float *)(unaff_x19 + 0x640);
      fVar31 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
      fVar31 = fVar36 * fVar24 * fVar31;
      fVar24 = fVar31 * (float)(int)(fVar32 / fVar31);
      if (fVar24 <= fVar32) {
        fVar24 = fVar32 + fVar31;
      }
LAB_03e7b75c:
      bVar11 = false;
      *(float *)(unaff_x19 + 0x640) = fVar24;
LAB_03e7b764:
      if (*puVar1 == uStack0000000000000070) goto LAB_03e7b820;
    }
    if (((uVar8 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
      if ((uVar13 == 0) && (((uVar15 != 0x2d && (uVar15 != 0x200b)) && (uVar15 != 0xad)))) {
        if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03e7b9d0:
          if (((((0x2bfd < uVar15 - 0xac01) && (0xfd < uVar15 - 0x1101)) && (0x1d < uVar15 - 0xa961)
               ) || (uVar16 = FUN_03e90be8(0), (uVar16 & 1) != 0)) &&
             ((((0xed < uVar15 - 0xff01 && (0x1d < uVar15 - 0xfe31)) && (0x717d < uVar15 - 0x2e81))
              && (0x1fd < uVar15 - 0xf901)))) goto LAB_03e7b79c;
          lVar20 = FUN_03e90a7c(0);
          if ((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) goto LAB_03e7bfc0;
          uVar15 = FUN_02afbd84(*(long *)(lVar20 + 0x10),uVar15,*(undefined8 *)PTR_DAT_04579da0);
          if ((int)uStack0000000000000070 <= (int)*puVar1) {
            if (uStack0000000000000030 != 0 || ((uVar15 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
              FUN_03e821b4();
            }
LAB_03e7bf74:
            uStack0000000000000030 = 0;
            bVar6 = true;
            goto Unity_VisualScripting_Serialization__Serialize;
          }
          lVar20 = FUN_03e90a7c(0);
          if ((lVar20 == 0) || (lVar23 = *in_stack_00000078, lVar23 == 0)) goto LAB_03e7bfc0;
          if (*(uint *)(lVar23 + 0x18) <= *puVar1 + 1) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          if (*(long *)(lVar20 + 0x18) == 0) goto LAB_03e7bfc0;
          uVar16 = FUN_02afbd84(*(long *)(lVar20 + 0x18),
                                *(undefined2 *)(lVar23 + (long)(int)(*puVar1 + 1) * 0x178 + 0x20),
                                *(undefined8 *)PTR_DAT_04579da0);
          if (uStack0000000000000030 == 0 && ((uVar15 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
          if ((uVar16 & 1) == 0) goto LAB_03e7bf60;
          if (uStack0000000000000030 == 0) goto LAB_03e7bf74;
          if (uVar13 != 0) {
            FUN_03e821b4();
          }
          FUN_03e821b4();
          bVar6 = true;
LAB_03e7b988:
          uStack0000000000000030 = 1;
        }
        else {
LAB_03e7b79c:
          if (bVar6) {
            lVar20 = FUN_03e90a7c(0);
            if ((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) goto LAB_03e7bfc0;
            uVar16 = FUN_02afbd84(*(long *)(lVar20 + 0x10),uVar15,*(undefined8 *)PTR_DAT_04579da0);
            if ((uVar16 & 1) == 0) {
              FUN_03e821b4();
            }
            bVar6 = false;
          }
          else {
            if (uStack0000000000000030 != 0) {
              if ((((uStack000000000000004c | uVar22 ^ 0xffffffff) & 1) == 0) || (uVar13 != 0)) {
                FUN_03e821b4();
              }
              FUN_03e821b4();
              bVar6 = false;
              goto LAB_03e7b988;
            }
            bVar6 = false;
            uStack0000000000000030 = 0;
          }
        }
      }
      else {
        if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03e7b79c;
        if (((uVar15 - 0x2007 < 0x29) &&
            ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
           ((uVar15 == 0xa0 || (uVar15 == 0x2060)))) goto LAB_03e7b9d0;
        FUN_03e821b4();
        bVar6 = false;
        uStack0000000000000030 = 0;
        in_stack_00000170 = 0xffffffff;
      }
    }
Unity_VisualScripting_Serialization__Serialize:
    *puVar1 = *puVar1 + 1;
    param_2 = fVar36;
  }
LAB_03e7bfb0:
  param_4 = *(long *)(unaff_x19 + 0x478);
  uVar14 = uVar14 + 1;
  if (param_4 == 0) {
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  goto LAB_03e7a6b4;
}


