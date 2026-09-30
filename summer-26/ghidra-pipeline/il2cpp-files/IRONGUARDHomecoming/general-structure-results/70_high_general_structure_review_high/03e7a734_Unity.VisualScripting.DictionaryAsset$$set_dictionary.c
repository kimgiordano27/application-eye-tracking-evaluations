/*
FUNCTION_NAME: Unity.VisualScripting.DictionaryAsset$$set_dictionary
ENTRY_POINT: 03e7a734
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


float Unity_VisualScripting_DictionaryAsset__set_dictionary(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined1 uVar17;
  long in_x9;
  long unaff_x19;
  uint *unaff_x21;
  int iVar18;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  uint unaff_w27;
  uint unaff_w28;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float unaff_s13;
  undefined4 uVar31;
  float unaff_s15;
  float fVar32;
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
  
  uVar5 = in_stack_00000040;
  uVar4 = _uStack0000000000000030;
code_r0x03e7a734:
  param_1 = param_1 + in_x9 * unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(param_1 + 0x38);
  thunk_FUN_01f51358();
  do {
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_03e7bfc0;
    uVar10 = *unaff_x21;
    if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_03e7c214;
    lVar19 = (long)(int)uVar10;
    cVar1 = *(char *)(lVar16 + lVar19 * unaff_x22 + 0x5c);
    *(undefined1 *)(unaff_x19 + 0x431) = 0;
    uVar29 = *(undefined4 *)(unaff_x19 + 0x120);
    iVar18 = (int)unaff_x22;
    if (in_stack_00000bd8 == uVar10) {
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      if (in_stack_00000bdc == 0x2026) {
        lVar16 = *in_stack_00000078;
        if (lVar16 != 0) {
          if (uVar10 < *(uint *)(lVar16 + 0x18)) {
            *(undefined8 *)(lVar16 + lVar19 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650)
            ;
            thunk_FUN_01f51358();
            lVar16 = *in_stack_00000078;
            if (lVar16 != 0) {
              if (*unaff_x21 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)*unaff_x21 * unaff_x22;
                *(undefined4 *)(lVar16 + 0x2c) = 0;
                *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                thunk_FUN_01f51358();
                lVar16 = *(long *)(unaff_x19 + 0x488);
                if (lVar16 != 0) {
                  if (*(uint *)(unaff_x19 + 0x494) < *(uint *)(lVar16 + 0x18)) {
                    *(undefined8 *)
                     (lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
                         *(undefined8 *)(unaff_x19 + 0x660);
                    thunk_FUN_01f51358();
                    lVar16 = *in_stack_00000078;
                    if (lVar16 != 0) {
                      uVar10 = *unaff_x21;
                      if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                        bVar7 = true;
                        in_stack_00000bd8 = uVar10 + 1;
                        *(undefined4 *)(lVar16 + (long)(int)uVar10 * unaff_x22 + 0x58) =
                             *(undefined4 *)(unaff_x19 + 0x668);
                        unaff_w28 = 0x2026;
                        *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                        in_stack_00000bdc = 3;
                        goto LAB_03e7a8f4;
                      }
                      goto LAB_03e7c214;
                    }
                    goto LAB_03e7bfc0;
                  }
                  goto LAB_03e7c214;
                }
                goto LAB_03e7bfc0;
              }
              goto LAB_03e7c214;
            }
            goto LAB_03e7bfc0;
          }
          goto LAB_03e7c214;
        }
        goto LAB_03e7bfc0;
      }
      if (in_stack_00000bdc != 3) {
        bVar7 = true;
        unaff_w28 = in_stack_00000bdc;
        goto LAB_03e7a8f4;
      }
      lVar16 = *in_stack_00000078;
      if (((lVar16 == 0) || (*unaff_x23 == 0)) || (lVar12 = FUN_03e5d25c(*unaff_x23,0), lVar12 == 0)
         ) goto LAB_03e7bfc0;
      uVar13 = FUN_02bd6170(lVar12,3,*(undefined8 *)PTR_DAT_04579db0);
      if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_03e7c214;
      *(undefined8 *)(lVar16 + lVar19 * unaff_x22 + 0x30) = uVar13;
      thunk_FUN_01f51358();
      bVar7 = true;
      unaff_w28 = 3;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
LAB_03e7a944:
      iVar9 = *(int *)(unaff_x19 + 0x644);
      if (iVar9 == 0) {
        uVar10 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar10 >> 4 & 1) == 0) {
          if ((uVar10 >> 3 & 1) == 0) {
            fStack0000000000000068 = 1.0;
            if ((uVar10 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_034fc51c(unaff_w28,0);
              fStack0000000000000068 = 1.0;
              if ((uVar14 & 1) != 0) {
                if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar10 = FUN_034fc7fc(unaff_w28,0);
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
              uVar10 = FUN_034fc974(unaff_w28,0);
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
            uVar10 = FUN_034fc7fc(unaff_w28,0);
LAB_03e7ac68:
            unaff_w28 = uVar10 & 0xffff;
          }
        }
        iVar9 = *(int *)(unaff_x19 + 0x644);
        if (iVar9 != 0) goto LAB_03e7a954;
LAB_03e7ac74:
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0))
        goto LAB_03e7bfc0;
        if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
        *unaff_x25 = *(long *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
        thunk_FUN_01f51358();
        if (*unaff_x25 == 0) goto LAB_03e7bfb0;
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0))
        goto LAB_03e7bfc0;
        uVar11 = *unaff_x21;
        uVar10 = *(uint *)(lVar16 + 0x18);
        if (uVar10 <= uVar11) goto LAB_03e7c214;
        *(undefined4 *)(unaff_x19 + 0x120) =
             *(undefined4 *)(lVar16 + (long)(int)uVar11 * unaff_x22 + 0x58);
        if (bVar7) {
          lVar19 = *(long *)(unaff_x19 + 0x478);
          if (lVar19 == 0) {
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar19 + 0x18) <= unaff_w27) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          if ((*(int *)(lVar19 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
             (uVar11 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
          if (uVar10 <= uVar11 - 1) goto LAB_03e7c214;
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          fVar32 = *(float *)(lVar16 + (long)(int)(uVar11 - 1) * (long)iVar18 + 0x60);
          iVar9 = FUN_040ced70(*unaff_x23 + 0x50,0);
          lVar16 = *unaff_x23;
        }
        else {
LAB_03e7ad14:
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          fVar32 = *(float *)(unaff_x19 + 0x1e8);
          iVar9 = FUN_040ced70(*unaff_x23 + 0x50,0);
          lVar16 = *(long *)(unaff_x19 + 0x100);
        }
        if (lVar16 == 0) goto LAB_03e7bfc0;
        fVar28 = (float)FUN_040ced80(lVar16 + 0x50,0);
        fVar27 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar27 = 1.0;
        }
        fVar20 = 0.0;
        fVar22 = 0.0;
        if (!(bool)(bVar7 & unaff_w28 == 0x2026)) {
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          fVar22 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          fVar20 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
        }
        if ((*unaff_x25 == 0) || (lVar16 = *(long *)(unaff_x19 + 0x488), lVar16 == 0))
        goto LAB_03e7bfc0;
        uVar10 = *(uint *)(unaff_x19 + 0x494);
        if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_03e7c214;
        unaff_s15 = ((fStack0000000000000068 * fVar32) / (float)iVar9) * fVar28 * fVar27 *
                    *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
        *(undefined4 *)(lVar16 + (long)(int)uVar10 * unaff_x22 + 0x2c) = 0;
LAB_03e7afa0:
        bVar7 = unaff_w28 == 0xad;
        fVar32 = unaff_s13;
        if (!bVar7 && unaff_w28 != 3) {
          fVar32 = unaff_s15;
        }
      }
      else {
        fStack0000000000000068 = 1.0;
        if (iVar9 == 0) goto LAB_03e7ac74;
LAB_03e7a954:
        if (iVar9 == 1) {
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0))
          goto LAB_03e7bfc0;
          if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
          *(undefined8 *)(unaff_x19 + 0x698) =
               *(undefined8 *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
          thunk_FUN_01f51358(in_stack_00000050);
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0))
          goto LAB_03e7bfc0;
          if (*(uint *)(lVar16 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
          *(undefined4 *)(unaff_x19 + 0x6a4) =
               *(undefined4 *)(lVar16 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
          if ((*(long *)(unaff_x19 + 0x698) == 0) ||
             (lVar16 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar16 == 0))
          goto LAB_03e7bfc0;
          lVar16 = FUN_030f28e4(lVar16,*(undefined4 *)(unaff_x19 + 0x6a4),
                                *(undefined8 *)PTR_DAT_04579db8);
          if (lVar16 == 0) goto LAB_03e7bfb0;
          if (unaff_w28 == 0x3c) {
            unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
          }
          if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
          iVar9 = FUN_040ced70(&stack0x00000100,0);
          fVar32 = *(float *)(unaff_x19 + 0x1e8);
          if (iVar9 < 1) {
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            iVar9 = FUN_040ced70(&stack0x00000100,0);
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar27 = (float)FUN_040ced80(&stack0x00000100,0);
            fVar20 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar20 = 1.0;
            }
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
            fVar28 = (float)FUN_040ceda0(&stack0x00000100,0);
            if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03e7bfc0;
            FUN_040cf28c(&stack0x00000be0,*(long *)(lVar16 + 0x20),0);
            in_stack_000000c0 = in_stack_00000be0;
            in_stack_000000c8 = in_stack_00000be8;
            in_stack_000000d0 = in_stack_00000bf0;
            fVar21 = (float)FUN_040cf0bc(&stack0x000000c0,0);
            if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03e7bfc0;
            fVar25 = *(float *)(lVar16 + 0x2c);
            fVar23 = (float)FUN_040cf2c8(*(long *)(lVar16 + 0x20),0);
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar22 = (float)FUN_040ceda0(&stack0x00000100,0);
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            fVar20 = (fVar32 / (float)iVar9) * fVar27 * fVar20;
            unaff_s15 = fVar20 * (fVar28 / fVar21) * fVar25 * fVar23;
            fVar20 = fVar20 / unaff_s15;
            fVar22 = fVar20 * fVar22;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar32 = (float)FUN_040cede0(&stack0x00000100,0);
            fVar20 = fVar20 * fVar32;
          }
          else {
            if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            iVar9 = FUN_040ced70(&stack0x00000100,0);
            if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            fVar20 = (float)FUN_040ced80(&stack0x00000100,0);
            if (*(long *)(lVar16 + 0x20) == 0) goto LAB_03e7bfc0;
            fVar28 = *(float *)(lVar16 + 0x2c);
            fVar27 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            fVar21 = (float)FUN_040cf2c8(*(long *)(lVar16 + 0x20),0);
            if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
            fVar22 = (float)FUN_040ceda0(&stack0x00000100,0);
            if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
            unaff_s15 = (fVar32 / (float)iVar9) * fVar20 * fVar27 * fVar28 * fVar21;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            fVar20 = (float)FUN_040cede0(&stack0x00000100,0);
          }
          *unaff_x25 = lVar16;
          thunk_FUN_01f51358();
          unaff_s13 = 0.0;
          lVar16 = *in_stack_00000078;
          if (lVar16 != 0) {
            uVar10 = *unaff_x21;
            if (uVar10 < *(uint *)(lVar16 + 0x18)) {
              lVar19 = lVar16 + (long)(int)uVar10 * unaff_x22;
              *(undefined4 *)(lVar19 + 0x2c) = 1;
              *(float *)(lVar19 + 0x160) = unaff_s15;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar29;
              goto LAB_03e7afa0;
            }
            goto LAB_03e7c214;
          }
          goto LAB_03e7bfc0;
        }
        bVar7 = unaff_w28 == 0xad;
        lVar16 = *in_stack_00000078;
        fVar22 = 0.0;
        fVar32 = 0.0;
        if (!bVar7 && unaff_w28 != 3) {
          fVar32 = unaff_s15;
        }
        if (lVar16 == 0) goto LAB_03e7bfc0;
        uVar10 = *unaff_x21;
        fVar20 = 0.0;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_03e7c214;
      *(short *)(lVar16 + (long)(int)uVar10 * (long)iVar18 + 0x20) = (short)unaff_w28;
      if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0))
      goto LAB_03e7bfc0;
      FUN_040cf28c(&stack0x00000be0,lVar16,0);
      in_stack_000000e0 = in_stack_00000be0;
      in_stack_000000e8 = in_stack_00000be8;
      in_stack_000000f0 = in_stack_00000bf0;
      if ((int)unaff_w28 < 0x10000) {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_034f9bb4(unaff_w28,0);
        uVar10 = uVar10 & 1;
      }
      else {
        uVar10 = 0;
      }
      fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
      *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
      if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
        fVar27 = 0.0;
      }
      else {
        if (*unaff_x25 == 0) goto LAB_03e7bfc0;
        uVar15 = *unaff_x21;
        uVar11 = *(uint *)(*unaff_x25 + 0x28);
        if ((int)uVar15 < (int)in_stack_00000070) {
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0))
          goto LAB_03e7bfc0;
          if (*(uint *)(lVar16 + 0x18) <= uVar15 + 1) goto LAB_03e7c214;
          lVar16 = *(long *)(lVar16 + (long)(int)(uVar15 + 1) * (long)iVar18 + 0x30);
          if ((((lVar16 == 0) || (*unaff_x23 == 0)) ||
              (lVar19 = *(long *)(*unaff_x23 + 0x128), lVar19 == 0)) ||
             (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)) goto LAB_03e7bfc0;
          uVar14 = FUN_02bd799c(lVar19,uVar11 | *(int *)(lVar16 + 0x28) << 0x10,&stack0x000000b8,
                                *(undefined8 *)PTR_DAT_04579da8);
          uVar29 = 0;
          if ((uVar14 & 1) == 0) {
            uVar30 = 0;
            fVar27 = 0.0;
            uVar31 = 0;
          }
          else {
            if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
            uVar29 = *(undefined4 *)(in_stack_000000b8 + 0x14);
            uVar30 = *(undefined4 *)(in_stack_000000b8 + 0x18);
            fVar27 = *(float *)(in_stack_000000b8 + 0x1c);
            uVar31 = *(undefined4 *)(in_stack_000000b8 + 0x20);
            if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
              fStack0000000000000074 = 0.0;
            }
          }
          uVar15 = *unaff_x21;
        }
        else {
          uVar29 = 0;
          uVar30 = 0;
          fVar27 = 0.0;
          uVar31 = 0;
        }
        if (0 < (int)uVar15) {
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0))
          goto LAB_03e7bfc0;
          if (*(uint *)(lVar16 + 0x18) <= uVar15 - 1) goto LAB_03e7c214;
          lVar16 = *(long *)(lVar16 + (ulong)(uVar15 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
          if (((lVar16 == 0) || (*unaff_x23 == 0)) ||
             ((lVar19 = *(long *)(*unaff_x23 + 0x128), lVar19 == 0 ||
              (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)))) goto LAB_03e7bfc0;
          uVar14 = FUN_02bd799c(lVar19,*(uint *)(lVar16 + 0x28) | uVar11 << 0x10,&stack0x000000b8,
                                *(undefined8 *)PTR_DAT_04579da8);
          if ((uVar14 & 1) != 0) {
            if ((in_stack_000000b8 == 0) ||
               (FUN_03e67c10(uVar29,uVar30,fVar27,uVar31,*(undefined4 *)(in_stack_000000b8 + 0x28),
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
        *(float *)(unaff_x19 + 0x2fc) = fVar27;
      }
      fStack0000000000000060 = 0.0;
      fVar28 = *(float *)(unaff_x19 + 0x2b0);
      if (fVar28 != 0.0) {
        if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0))
        goto LAB_03e7bfc0;
        FUN_040cf28c(&stack0x00000be0,lVar16,0);
        in_stack_000000c0 = in_stack_00000be0;
        in_stack_000000c8 = in_stack_00000be8;
        in_stack_000000d0 = in_stack_00000bf0;
        fVar21 = (float)FUN_040cf0b4(&stack0x000000c0,0);
        if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x20), lVar16 == 0))
        goto LAB_03e7bfc0;
        FUN_040cf28c(&stack0x00000be0,lVar16,0);
        in_stack_000000c0 = in_stack_00000be0;
        in_stack_000000c8 = in_stack_00000be8;
        in_stack_000000d0 = in_stack_00000bf0;
        fVar23 = (float)FUN_040cf0c4(&stack0x000000c0,0);
        fStack0000000000000060 =
             (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
             (fVar28 * 0.5 - fVar32 * (fVar21 * 0.5 + fVar23));
        *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
      }
      iVar9 = *(int *)(unaff_x19 + 0x644);
      fVar28 = 0.0;
      if (((cVar1 == '\0') && (fVar28 = 0.0, iVar9 == 0)) &&
         ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar28 = *(float *)(*unaff_x23 + 0x1b4);
      }
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03e7bfc0;
      uVar11 = *unaff_x21;
      lVar19 = (long)(int)uVar11;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
      fVar21 = *(float *)(unaff_x19 + 0x4d8);
      fVar23 = *(float *)(unaff_x19 + 0x61c);
      fVar22 = fVar22 * fVar32;
      *(float *)(lVar16 + lVar19 * unaff_x22 + 0x14c) = (unaff_s13 - fVar21) + fVar23;
      if (iVar9 == 0) {
        fVar22 = fVar22 / fStack0000000000000068;
        fVar20 = (fVar20 * fVar32) / fStack0000000000000068;
      }
      else {
        fVar20 = fVar20 * fVar32;
      }
      fVar22 = fVar23 + fVar22;
      if ((uVar10 == 0) || (uVar11 == *(uint *)(unaff_x19 + 0x498))) {
        fVar20 = fVar23 + fVar20;
        fVar25 = fVar22;
        fVar24 = fVar20;
        if (fVar23 != 0.0) {
          fVar25 = (fVar22 - fVar23) / *(float *)(unaff_x19 + 0x404);
          fVar24 = (fVar20 - fVar23) / *(float *)(unaff_x19 + 0x404);
          if (fVar25 <= fVar22) {
            fVar25 = fVar22;
          }
          if (fVar20 <= fVar24) {
            fVar24 = fVar20;
          }
        }
        lVar16 = lVar16 + lVar19 * unaff_x22;
        fVar23 = fVar25;
        if (fVar25 <= *(float *)(unaff_x19 + 0x4c8)) {
          fVar23 = *(float *)(unaff_x19 + 0x4c8);
        }
        fVar26 = fVar24;
        if (*(float *)(unaff_x19 + 0x4cc) <= fVar24) {
          fVar26 = *(float *)(unaff_x19 + 0x4cc);
        }
        *(float *)(unaff_x19 + 0x4cc) = fVar26;
        *(float *)(unaff_x19 + 0x4c8) = fVar23;
        *(float *)(lVar16 + 0x154) = fVar25;
        *(float *)(lVar16 + 0x158) = fVar24;
        *(float *)(lVar16 + 0x148) = fVar22 - fVar21;
        *(float *)(unaff_x19 + 0x4c0) = fVar22 - fVar21;
        *(float *)(lVar16 + 0x150) = fVar20 - fVar21;
        *(float *)(unaff_x19 + 0x4c4) = fVar20 - fVar21;
        if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
          *(float *)(unaff_x19 + 0x4b8) = fVar23;
          if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
          fVar20 = *(float *)(unaff_x19 + 0x4bc);
          fVar21 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
          fStack0000000000000068 = (fVar32 * fVar21) / fStack0000000000000068;
          fVar21 = *(float *)(unaff_x19 + 0x4d8);
          if (fVar20 <= fStack0000000000000068) {
            fVar20 = fStack0000000000000068;
          }
          *(float *)(unaff_x19 + 0x4bc) = fVar20;
        }
      }
      else {
        fVar20 = *(float *)(unaff_x19 + 0x4c8);
        lVar16 = lVar16 + lVar19 * unaff_x22;
        *(float *)(lVar16 + 0x154) = fVar20;
        fVar23 = *(float *)(unaff_x19 + 0x4cc);
        fVar20 = fVar20 - fVar21;
        *(float *)(lVar16 + 0x148) = fVar20;
        *(float *)(lVar16 + 0x158) = fVar23;
        *(float *)(unaff_x19 + 0x4c0) = fVar20;
        fVar23 = fVar23 - fVar21;
        *(float *)(lVar16 + 0x150) = fVar23;
        *(float *)(unaff_x19 + 0x4c4) = fVar23;
      }
      if (fVar21 == 0.0) {
        if ((uVar10 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
          fVar20 = *(float *)(unaff_x19 + 0x4b4);
          if (*(float *)(unaff_x19 + 0x4b4) <= fVar22) {
            fVar20 = fVar22;
          }
          *(float *)(unaff_x19 + 0x4b4) = fVar20;
          goto LAB_03e7b470;
        }
        bVar8 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
        if (unaff_w28 == 9) goto LAB_03e7b484;
LAB_03e7b4c4:
        if ((((bStack000000000000004c | bVar7 ^ 0xffU) & 1) == 0) ||
           (*(int *)(unaff_x19 + 0x644) == 1)) goto LAB_03e7b4dc;
LAB_03e7b658:
        fVar20 = *(float *)(unaff_x19 + 0x640);
        if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
          fVar21 = (float)FUN_040cf0d4(&stack0x000000e0,0);
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          fVar27 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                   (*(float *)(unaff_x19 + 0x2ac) +
                   fVar32 * (fVar27 + fVar21) +
                   fStack0000000000000058 *
                   (fVar28 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
        }
        else {
          if (*unaff_x23 == 0) goto LAB_03e7bfc0;
          fVar27 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                   (*(float *)(unaff_x19 + 0x2ac) +
                   (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                   fStack0000000000000058 *
                   (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
        }
        fVar20 = fVar20 + fVar27;
        *(float *)(unaff_x19 + 0x640) = fVar20;
        if ((unaff_w28 == 0x200b) || (uVar10 != 0)) {
          fVar20 = fVar20 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
          *(float *)(unaff_x19 + 0x640) = fVar20;
        }
        if (unaff_w28 == 0xd) {
          if (fStack0000000000000064 <= fStack000000000000006c + fVar20) {
            fStack0000000000000064 = fStack000000000000006c + fVar20;
          }
          fStack000000000000006c = 0.0;
          fVar20 = *(float *)(unaff_x19 + 0x40c) + 0.0;
LAB_03e7b75c:
          bVar8 = false;
          *(float *)(unaff_x19 + 0x640) = fVar20;
LAB_03e7b764:
          if (*unaff_x21 == in_stack_00000070) goto LAB_03e7b820;
        }
        else {
          bVar8 = unaff_w28 == 10;
          if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
             (1 < unaff_w28 - 0x2028)) goto LAB_03e7b764;
LAB_03e7b820:
          if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
            fVar20 = *(float *)(unaff_x19 + 0x4c8);
            fVar27 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) ==
                0) {
              thunk_FUN_01ee6d7c();
            }
            fVar20 = fVar20 - fVar27;
            if (((fStack000000000000001c < ABS(fVar20)) && (*(char *)(unaff_x19 + 0x2c4) == '\0'))
               && (*(char *)(unaff_x19 + 0x33c) == '\0')) {
              *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar20;
              *(float *)(unaff_x19 + 0x4d8) = fVar20 + *(float *)(unaff_x19 + 0x4d8);
            }
          }
          fVar20 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
          if (fVar20 <= *(float *)(unaff_x19 + 0x4c4)) {
            fStack0000000000000038 = fVar20;
          }
          fVar27 = in_stack_00000040._4_4_ +
                   fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
          fVar20 = fStack0000000000000064;
          if (fStack0000000000000064 <= fVar27) {
            fVar20 = fVar27;
          }
          *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
          fStack000000000000006c = fVar20;
          if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
            fStack000000000000006c = unaff_s13;
            fStack0000000000000064 = fVar20;
          }
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
          *(undefined1 *)(unaff_x19 + 0x33c) = 0;
          if (bVar8) {
LAB_03e7bb3c:
            FUN_03e821b4();
            FUN_03e821b4();
            uVar10 = *(uint *)(unaff_x19 + 0x494);
            lVar16 = *(long *)(unaff_x19 + 0x488);
            iVar18 = uVar10 + 1;
            *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
            *(int *)(unaff_x19 + 0x498) = iVar18;
            if (lVar16 != 0) {
              if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                fVar20 = *(float *)(lVar16 + (long)(int)uVar10 * unaff_x22 + 0x154);
                if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
                  fVar27 = 0.0;
                  if (!(bool)(unaff_w28 != 0x2029 & (bVar8 ^ 1U))) {
                    fVar27 = *(float *)(unaff_x19 + 0x2cc);
                  }
                  uVar17 = 0;
                  fVar27 = fVar20 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                           fStack0000000000000020 *
                           (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                           fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar27) +
                           *(float *)(unaff_x19 + 0x4d8);
                }
                else {
                  fVar27 = 0.0;
                  if (!(bool)(unaff_w28 != 0x2029 & (bVar8 ^ 1U))) {
                    fVar27 = *(float *)(unaff_x19 + 0x2cc);
                  }
                  uVar17 = 1;
                  fVar27 = *(float *)(unaff_x19 + 0x4d8) +
                           *(float *)(unaff_x19 + 0x2c0) +
                           fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar27);
                }
                *(float *)(unaff_x19 + 0x4d8) = fVar27;
                *(undefined1 *)(unaff_x19 + 0x2c4) = uVar17;
                puVar3 = PTR_DAT_04579e70;
                lVar16 = *(long *)PTR_DAT_04579e70;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar16 = *(long *)puVar3;
                  iVar18 = *unaff_x21 + 1;
                }
                uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x640) =
                     *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
                uVar13 = NEON_rev64(uVar13,4);
                *(float *)(unaff_x19 + 0x4d0) = fVar20;
                *(undefined8 *)(unaff_x19 + 0x4c8) = uVar13;
                *(int *)(unaff_x19 + 0x494) = iVar18;
                unaff_s15 = fVar32;
                goto LAB_03e7bfb0;
              }
              goto LAB_03e7c214;
            }
            goto LAB_03e7bfc0;
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
        if (((uVar4 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
          if ((uVar10 == 0) &&
             (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
            if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03e7b9d0:
              if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
                   (0x1d < unaff_w28 - 0xa961)) || (uVar14 = FUN_03e90be8(0), (uVar14 & 1) != 0)) &&
                 ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
                   (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901))))
              goto LAB_03e7b79c;
              lVar16 = FUN_03e90a7c(0);
              if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) goto LAB_03e7bfc0;
              uVar11 = FUN_02afbd84(*(long *)(lVar16 + 0x10),unaff_w28,
                                    *(undefined8 *)PTR_DAT_04579da0);
              if ((int)in_stack_00000070 <= (int)*unaff_x21) {
                if (((uStack0000000000000030 | uVar11 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
                  FUN_03e821b4();
                }
LAB_03e7bf74:
                uStack0000000000000030 = 0;
                uStack0000000000000028 = 1;
                goto Unity_VisualScripting_Serialization__Serialize;
              }
              lVar16 = FUN_03e90a7c(0);
              if ((lVar16 == 0) || (lVar19 = *in_stack_00000078, lVar19 == 0)) goto LAB_03e7bfc0;
              if (*(uint *)(lVar19 + 0x18) <= *unaff_x21 + 1) goto LAB_03e7c214;
              if (*(long *)(lVar16 + 0x18) == 0) goto LAB_03e7bfc0;
              uVar14 = FUN_02afbd84(*(long *)(lVar16 + 0x18),
                                    *(undefined2 *)
                                     (lVar19 + (long)(int)(*unaff_x21 + 1) * (long)iVar18 + 0x20),
                                    *(undefined8 *)PTR_DAT_04579da0);
              if (((uStack0000000000000030 | uVar11 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
              if ((uVar14 & 1) == 0) goto LAB_03e7bf60;
              if ((uStack0000000000000030 & 1) == 0) goto LAB_03e7bf74;
              if (uVar10 != 0) {
                FUN_03e821b4();
              }
              FUN_03e821b4();
              uStack0000000000000028 = 1;
LAB_03e7b988:
              uStack0000000000000030 = 1;
            }
            else {
LAB_03e7b79c:
              if ((uStack0000000000000028 & 1) == 0) {
                if ((uStack0000000000000030 & 1) != 0) {
                  if ((((bStack000000000000004c | bVar7 ^ 0xffU) & 1) == 0) || (uVar10 != 0)) {
                    FUN_03e821b4();
                  }
                  FUN_03e821b4();
                  uStack0000000000000028 = 0;
                  goto LAB_03e7b988;
                }
                uStack0000000000000028 = 0;
                uStack0000000000000030 = 0;
              }
              else {
                lVar16 = FUN_03e90a7c(0);
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) goto LAB_03e7bfc0;
                uVar14 = FUN_02afbd84(*(long *)(lVar16 + 0x10),unaff_w28,
                                      *(undefined8 *)PTR_DAT_04579da0);
                if ((uVar14 & 1) == 0) {
                  FUN_03e821b4();
                }
                uStack0000000000000028 = 0;
              }
            }
          }
          else {
            if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03e7b79c;
            if (((unaff_w28 - 0x2007 < 0x29) &&
                ((1L << ((ulong)(unaff_w28 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
               ((unaff_w28 == 0xa0 || (unaff_w28 == 0x2060)))) goto LAB_03e7b9d0;
            FUN_03e821b4();
            uStack0000000000000028 = 0;
            uStack0000000000000030 = 0;
            in_stack_00000170 = 0xffffffff;
          }
        }
Unity_VisualScripting_Serialization__Serialize:
        *unaff_x21 = *unaff_x21 + 1;
        unaff_s15 = fVar32;
      }
      else {
LAB_03e7b470:
        bVar8 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
        if (unaff_w28 == 9) {
LAB_03e7b484:
          bVar2 = true;
        }
        else {
          if ((((uVar10 != 0) || (unaff_w28 == 3)) || (unaff_w28 == 0x200b)) || (unaff_w28 == 0xad))
          goto LAB_03e7b4c4;
LAB_03e7b4dc:
          bVar2 = false;
        }
        fVar21 = *(float *)(unaff_x19 + 0x360);
        fVar23 = *(float *)(unaff_x19 + 0x640);
        fVar20 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
                 *(float *)(unaff_x19 + 0x354);
        bVar6 = true;
        if ((fVar21 <= fVar20) && (bVar6 = false, !NAN(fVar21))) {
          bVar6 = fVar21 == -1.0;
        }
        if (!bVar6) {
          fVar20 = fVar21;
        }
        fVar21 = (float)FUN_040cf0d4(&stack0x000000e0,0);
        if (bVar7 == false) {
          unaff_s15 = fVar32;
        }
        fVar25 = 1.0;
        if (!bVar8) {
          fVar25 = DAT_00c926dc;
        }
        fStack000000000000005c =
             ABS(fVar23) + unaff_s15 * fVar21 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
        if ((fStack000000000000005c <= fVar25 * fVar20 || (uVar5 & 1) != 0) ||
           (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
          fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
          in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
          if (!bVar2) goto LAB_03e7b658;
          if (*unaff_x23 != 0) {
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar20 = (float)FUN_040cee68(&stack0x00000100,0);
            if (*unaff_x23 != 0) {
              fVar28 = *(float *)(unaff_x19 + 0x640);
              fVar27 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
              fVar27 = fVar32 * fVar20 * fVar27;
              fVar20 = fVar27 * (float)(int)(fVar28 / fVar27);
              if (fVar20 <= fVar28) {
                fVar20 = fVar28 + fVar27;
              }
              goto LAB_03e7b75c;
            }
          }
          goto LAB_03e7bfc0;
        }
        unaff_w27 = FUN_03e81e20();
        lVar16 = *(long *)(unaff_x19 + 0x488);
        if (lVar16 == 0) goto LAB_03e7bfc0;
        uVar10 = *(uint *)(unaff_x19 + 0x494);
        uVar11 = uVar10 - 1;
        if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03e7c214;
        if (((bStack000000000000004c & 1) == 0 &&
             *(short *)(lVar16 + (long)(int)uVar11 * (long)iVar18 + 0x20) == 0xad) &&
           (*(int *)(unaff_x19 + 0x2e0) == 0)) {
          bStack000000000000004c = 0;
          in_stack_00000bdc = 0x2d;
          *unaff_x21 = uVar11;
          unaff_w27 = unaff_w27 - 1;
          unaff_s15 = fVar32;
          in_stack_00000bd8 = uVar11;
        }
        else {
          if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_03e7c214;
          if (*(short *)(lVar16 + (long)(int)uVar10 * unaff_x22 + 0x20) == 0xad) {
            bStack000000000000004c = 1;
            unaff_s15 = fVar32;
          }
          else {
            if ((uStack0000000000000030 & uStack0000000000000018 & 1) != 0) {
              fVar27 = *(float *)(unaff_x19 + 0x2d4);
              fVar28 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
              if ((fVar27 < fVar28) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248)))
              {
                fVar32 = fStack000000000000005c;
                if (0.0 < fVar27) {
                  fVar32 = fStack000000000000005c / (1.0 - fVar27);
                }
                fVar27 = fVar27 + (fStack000000000000005c - fVar25 * (fVar20 + DAT_00c928e4)) /
                                  fVar32;
                if (fVar28 <= fVar27) {
                  fVar27 = fVar28;
                }
                *(float *)(unaff_x19 + 0x2d4) = fVar27;
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
                fVar32 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
                if (fVar32 <= DAT_00c92764) {
                  fVar32 = DAT_00c92764;
                }
                fVar32 = *in_stack_00000010 - fVar32;
                *in_stack_00000010 = fVar32;
                fVar20 = fVar32 * 20.0 + 0.5;
                fVar32 = DAT_00c92a58;
                if (fVar20 != INFINITY) {
                  fVar32 = (float)(int)fVar20 / 20.0;
                }
                if (fVar32 <= *(float *)(unaff_x19 + 0x250)) {
                  fVar32 = *(float *)(unaff_x19 + 0x250);
                }
                *in_stack_00000010 = fVar32;
                goto LAB_03e7c098;
              }
            }
            if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
              fVar20 = *(float *)(unaff_x19 + 0x4c8);
              fVar27 = *(float *)(unaff_x19 + 0x4d0);
              if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0)
                  == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar20 = fVar20 - fVar27;
              if (((fStack000000000000001c < ABS(fVar20)) && (*(char *)(unaff_x19 + 0x2c4) == '\0'))
                 && (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar20;
                *(float *)(unaff_x19 + 0x4d8) = fVar20 + *(float *)(unaff_x19 + 0x4d8);
              }
            }
            fVar28 = *(float *)(unaff_x19 + 0x640);
            fVar27 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
            fVar20 = *(float *)(unaff_x19 + 0x4c4);
            if (fVar27 <= *(float *)(unaff_x19 + 0x4c4)) {
              fVar20 = fVar27;
            }
            *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
            *(float *)(unaff_x19 + 0x4c4) = fVar20;
            *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
            if ((uVar4 & 0x100000000) == 0) {
              fVar27 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar27;
              if (fStack0000000000000038 <= fVar27) {
                fStack0000000000000038 = fVar27;
              }
            }
            else {
              fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar20;
            }
            FUN_03e821b4();
            lVar16 = *(long *)(unaff_x19 + 0x488);
            *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
            if (lVar16 == 0) goto LAB_03e7bfc0;
            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
            fVar20 = *(float *)(unaff_x19 + 0x2c0);
            fVar27 = *(float *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154
                               );
            bVar7 = fVar20 != DAT_00c927ac;
            if (bVar7) {
              fVar21 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
            }
            else {
              fVar21 = fVar27 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                       fStack0000000000000020 *
                       (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
              fVar20 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
            }
            *(bool *)(unaff_x19 + 0x2c4) = bVar7;
            *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar20 + fVar21;
            puVar3 = PTR_DAT_04579e70;
            lVar16 = *(long *)PTR_DAT_04579e70;
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar16 = *(long *)puVar3;
            }
            bStack000000000000004c = 0;
            fStack000000000000006c = fStack000000000000006c + fVar28;
            uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
            uVar13 = NEON_rev64(uVar13,4);
            *(float *)(unaff_x19 + 0x4d0) = fVar27;
            *(undefined8 *)(unaff_x19 + 0x4c8) = uVar13;
            uStack0000000000000030 = 1;
            unaff_s15 = fVar32;
          }
        }
      }
    }
    else {
      bVar7 = false;
LAB_03e7a8f4:
      if ((unaff_w28 == 3) || (*(int *)(unaff_x19 + 0x324) <= (int)uVar10)) goto LAB_03e7a944;
      lVar16 = *in_stack_00000078;
      if (lVar16 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_03e7c214;
      lVar16 = lVar16 + (long)(int)uVar10 * (long)iVar18;
      *(undefined1 *)(lVar16 + 0x194) = 0;
      *(undefined2 *)(lVar16 + 0x20) = 0x200b;
      *(undefined4 *)(lVar16 + 100) = 0;
      *unaff_x21 = uVar10 + 1;
    }
LAB_03e7bfb0:
    do {
      lVar16 = *(long *)(unaff_x19 + 0x478);
      unaff_w27 = unaff_w27 + 1;
      if (lVar16 == 0) goto LAB_03e7bfc0;
      if ((int)*(uint *)(lVar16 + 0x18) <= (int)unaff_w27) {
LAB_03e7bfc4:
        if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
             ((_uStack0000000000000018 & 1) == 0)) ||
            (fVar32 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar32)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
          fVar32 = *(float *)(unaff_x19 + 0x340);
          fVar20 = *(float *)(unaff_x19 + 0x348);
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          *(undefined1 *)(unaff_x19 + 0x24c) = 1;
          fVar20 = (fStack000000000000006c + fVar32 + fVar20) * 100.0 + 1.0;
          fVar32 = DAT_00c92378;
          if (fVar20 != INFINITY) {
            fVar32 = (float)(int)fVar20 / 100.0;
          }
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          return fVar32;
        }
        if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
          *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
          fVar32 = *in_stack_00000010;
        }
        *(float *)(unaff_x19 + 0x240) = fVar32;
        fVar32 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
        if (fVar32 <= DAT_00c92764) {
          fVar32 = DAT_00c92764;
        }
        fVar32 = *in_stack_00000010 + fVar32;
        *in_stack_00000010 = fVar32;
        fVar20 = fVar32 * 20.0 + 0.5;
        fVar32 = DAT_00c92a58;
        if (fVar20 != INFINITY) {
          fVar32 = (float)(int)fVar20 / 20.0;
        }
        if (*(float *)(unaff_x19 + 0x254) <= fVar32) {
          fVar32 = *(float *)(unaff_x19 + 0x254);
        }
        *in_stack_00000010 = fVar32;
        goto LAB_03e7c098;
      }
      if (*(uint *)(lVar16 + 0x18) <= unaff_w27) goto LAB_03e7c214;
      unaff_w28 = *(uint *)(lVar16 + (long)(int)unaff_w27 * 0xc + 0x20);
      if (unaff_w28 == 0) goto LAB_03e7bfc4;
      if ((unaff_w28 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (param_1 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), param_1 == 0))
        goto LAB_03e7bfc0;
        in_x9 = (long)(int)*unaff_x21;
        if (*(uint *)(param_1 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
        goto code_r0x03e7a734;
      }
      *(undefined1 *)(unaff_x19 + 0x431) = 1;
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      uVar14 = FUN_03e7c218();
    } while (((uVar14 & 1) != 0) &&
            (unaff_w27 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) == 0));
  } while( true );
}


