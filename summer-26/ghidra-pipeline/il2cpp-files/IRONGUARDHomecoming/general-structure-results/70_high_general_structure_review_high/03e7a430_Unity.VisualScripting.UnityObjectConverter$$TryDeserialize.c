/*
FUNCTION_NAME: Unity.VisualScripting.UnityObjectConverter$$TryDeserialize
ENTRY_POINT: 03e7a430
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


float Unity_VisualScripting_UnityObjectConverter__TryDeserialize
                (undefined1 param_1 [16],float param_2,float param_3)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined *puVar12;
  bool in_ZR;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  undefined1 uVar25;
  long unaff_x19;
  undefined8 *unaff_x21;
  float *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  uint unaff_w26;
  long *unaff_x27;
  int unaff_w28;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float unaff_s8;
  float unaff_s9;
  float fVar42;
  undefined4 uVar43;
  float unaff_s12;
  undefined4 uVar44;
  undefined4 uVar45;
  float unaff_s14;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
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
  
  fVar30 = param_3;
  if (!in_ZR) {
    fVar30 = param_2;
  }
  fStack000000000000002c = param_3;
  FUN_027714ac(unaff_x19 + 0x1f0,*unaff_x21);
  *(undefined4 *)(unaff_x19 + 0x25c) = *(undefined4 *)(unaff_x19 + 600);
  *(undefined4 *)(unaff_x19 + 0x278) = *(undefined4 *)(unaff_x19 + 0x26c);
  FUN_027700e8(unaff_x19 + 0x280,*(undefined4 *)(unaff_x19 + 0x26c),*(undefined8 *)PTR_DAT_04579e28)
  ;
  *(undefined4 *)(unaff_x19 + 0x61c) = 0;
  FUN_027714a0(unaff_x19 + 0x620,*(undefined8 *)PTR_DAT_04579df8);
  *(undefined4 *)(unaff_x19 + 0x4d8) = 0;
  *(undefined4 *)(unaff_x19 + 0x2c0) = 0xc6fffe00;
  if (*(long *)(unaff_x19 + 0x100) != 0) {
    memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
    fVar27 = (float)FUN_040ced90(&stack0x00000100,0);
    if (*unaff_x23 != 0) {
      memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
      fVar28 = (float)FUN_040ceda0(&stack0x00000100,0);
      if (*unaff_x23 != 0) {
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar29 = (float)FUN_040cede0(&stack0x00000100,0);
        *(undefined8 *)(unaff_x19 + 0x2ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x640) = 0;
        *(undefined8 *)(unaff_x19 + 0x408) = 0;
        FUN_027714ac(0,unaff_x19 + 0x410,*unaff_x21);
        *(undefined1 *)(unaff_x19 + 0x430) = 0;
        *(undefined8 *)(unaff_x19 + 0x494) = 0;
        lVar21 = *unaff_x27;
        uStack0000000000000034 = unaff_w26;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar21 = *unaff_x27;
        }
        uVar37 = NEON_rev64(*(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8),4);
        *(undefined4 *)(unaff_x19 + 0x4a8) = 0;
        *(undefined4 *)(unaff_x19 + 0x4d0) = 0;
        *(undefined1 *)(unaff_x19 + 0x2c4) = 0;
        *(undefined8 *)(unaff_x19 + 0x350) = 0;
        *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
        *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
        *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
        *(undefined4 *)(unaff_x19 + 0x4c4) = 0;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar37;
        *(undefined1 *)(unaff_x19 + 0x2da) = 0;
        FUN_03e989e0(&stack0x00000bd8,0xffffffff,0,0);
        memset(&stack0x00000860,0,0x378);
        memset(&stack0x000004e8,0,0x378);
        memset(&stack0x00000170,0,0x378);
        lVar21 = *(long *)(unaff_x19 + 0x478);
        *(int *)(unaff_x19 + 0x244) = *(int *)(unaff_x19 + 0x244) + 1;
        fVar11 = DAT_00c9294c;
        fVar10 = DAT_00c924f4;
        if (lVar21 != 0) {
          plVar1 = (long *)(unaff_x19 + 0x698);
          uVar7 = unaff_w28 - 1;
          uVar4 = uStack0000000000000034 ^ 1;
          fStack0000000000000064 = 0.0;
          fStack0000000000000048 = 0.0;
          fStack0000000000000044 = 0.0;
          fVar27 = fVar27 - (fVar28 - fVar29);
          fStack000000000000006c = 0.0;
          fStack0000000000000038 = 0.0;
          fVar29 = unaff_s8 + DAT_00c92318;
          fStack000000000000005c = 0.0;
          fVar38 = (unaff_s9 / (float)unaff_w25) * unaff_s14 * fVar30;
          bVar9 = false;
          bVar14 = false;
          fVar30 = fVar30 * unaff_s12 * DAT_00c9294c;
          uVar19 = 0;
          puVar2 = (uint *)(unaff_x19 + 0x494);
          plVar3 = (long *)(unaff_x19 + 0x648);
          uStack0000000000000030 = 1;
          fVar28 = fVar38;
LAB_03e7a6b4:
          if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar19) {
LAB_03e7bfc4:
            if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
                 ((unaff_w24 & 1) == 0)) ||
                (fVar30 = *unaff_x22, *(float *)(unaff_x19 + 0x254) <= fVar30)) ||
               (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
              fVar30 = *(float *)(unaff_x19 + 0x340);
              fVar27 = *(float *)(unaff_x19 + 0x348);
              if (fVar30 <= 0.0) {
                fVar30 = 0.0;
              }
              if (fVar27 <= 0.0) {
                fVar27 = 0.0;
              }
              *(undefined1 *)(unaff_x19 + 0x24c) = 1;
              fVar27 = (fStack000000000000006c + fVar30 + fVar27) * 100.0 + 1.0;
              fVar30 = DAT_00c92378;
              if (fVar27 != INFINITY) {
                fVar30 = (float)(int)fVar27 / 100.0;
              }
              *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
              return fVar30;
            }
            if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
              fVar30 = *unaff_x22;
            }
            *(float *)(unaff_x19 + 0x240) = fVar30;
            fVar30 = (*(float *)(unaff_x19 + 0x23c) - *unaff_x22) * 0.5;
            if (fVar30 <= DAT_00c92764) {
              fVar30 = DAT_00c92764;
            }
            fVar30 = *unaff_x22 + fVar30;
            *unaff_x22 = fVar30;
            fVar27 = fVar30 * 20.0 + 0.5;
            fVar30 = DAT_00c92a58;
            if (fVar27 != INFINITY) {
              fVar30 = (float)(int)fVar27 / 20.0;
            }
            if (*(float *)(unaff_x19 + 0x254) <= fVar30) {
              fVar30 = *(float *)(unaff_x19 + 0x254);
            }
            *unaff_x22 = fVar30;
            goto LAB_03e7c098;
          }
          if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_03e7c214;
          uVar20 = *(uint *)(lVar21 + (long)(int)uVar19 * 0xc + 0x20);
          if (uVar20 == 0) goto LAB_03e7bfc4;
          if ((uVar20 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
            *(undefined1 *)(unaff_x19 + 0x431) = 1;
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            uVar22 = FUN_03e7c218();
            if (((uVar22 & 1) == 0) ||
               (uVar19 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
            goto LAB_03e7a758;
          }
          else {
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
            goto LAB_03e7bfc0;
            if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_03e7c214;
            lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
            *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar21 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar21 + 0x58);
            *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar21 + 0x38);
            thunk_FUN_01f51358();
LAB_03e7a758:
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
            goto LAB_03e7bfc0;
            uVar18 = *puVar2;
            if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
            lVar26 = (long)(int)uVar18;
            cVar6 = *(char *)(lVar21 + lVar26 * 0x178 + 0x5c);
            *(undefined1 *)(unaff_x19 + 0x431) = 0;
            uVar43 = *(undefined4 *)(unaff_x19 + 0x120);
            if (in_stack_00000bd8 == uVar18) {
              *(undefined4 *)(unaff_x19 + 0x644) = 0;
              if (in_stack_00000bdc == 0x2026) {
                lVar21 = *in_stack_00000078;
                if (lVar21 != 0) {
                  if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
                  *(undefined8 *)(lVar21 + lVar26 * 0x178 + 0x30) =
                       *(undefined8 *)(unaff_x19 + 0x650);
                  thunk_FUN_01f51358();
                  lVar21 = *in_stack_00000078;
                  if (lVar21 != 0) {
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_03e7c214;
                    lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                    *(undefined4 *)(lVar21 + 0x2c) = 0;
                    *(undefined8 *)(lVar21 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                    thunk_FUN_01f51358();
                    lVar21 = *(long *)(unaff_x19 + 0x488);
                    if (lVar21 != 0) {
                      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                      goto LAB_03e7c214;
                      *(undefined8 *)
                       (lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                           *(undefined8 *)(unaff_x19 + 0x660);
                      thunk_FUN_01f51358();
                      lVar21 = *in_stack_00000078;
                      if (lVar21 != 0) {
                        uVar18 = *puVar2;
                        if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
                        bVar15 = true;
                        in_stack_00000bd8 = uVar18 + 1;
                        *(undefined4 *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x58) =
                             *(undefined4 *)(unaff_x19 + 0x668);
                        uVar20 = 0x2026;
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
                bVar15 = true;
                uVar20 = in_stack_00000bdc;
                goto LAB_03e7a8f4;
              }
              lVar21 = *in_stack_00000078;
              if (((lVar21 == 0) || (*unaff_x23 == 0)) ||
                 (lVar23 = FUN_03e5d25c(*unaff_x23,0), lVar23 == 0)) goto LAB_03e7bfc0;
              uVar37 = FUN_02bd6170(lVar23,3,*(undefined8 *)PTR_DAT_04579db0);
              if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
              *(undefined8 *)(lVar21 + lVar26 * 0x178 + 0x30) = uVar37;
              thunk_FUN_01f51358();
              bVar15 = true;
              uVar20 = 3;
              *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
            }
            else {
              bVar15 = false;
LAB_03e7a8f4:
              if ((uVar20 != 3) && ((int)uVar18 < *(int *)(unaff_x19 + 0x324))) {
                lVar21 = *in_stack_00000078;
                if (lVar21 != 0) {
                  if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
                  lVar21 = lVar21 + (long)(int)uVar18 * 0x178;
                  *(undefined1 *)(lVar21 + 0x194) = 0;
                  *(undefined2 *)(lVar21 + 0x20) = 0x200b;
                  *(undefined4 *)(lVar21 + 100) = 0;
                  *puVar2 = uVar18 + 1;
                  goto LAB_03e7bfb0;
                }
                goto LAB_03e7bfc0;
              }
            }
            iVar17 = *(int *)(unaff_x19 + 0x644);
            if (iVar17 == 0) {
              uVar18 = *(uint *)(unaff_x19 + 0x25c);
              if ((uVar18 >> 4 & 1) == 0) {
                if ((uVar18 >> 3 & 1) == 0) {
                  fStack0000000000000068 = 1.0;
                  if ((uVar18 >> 5 & 1) != 0) {
                    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar22 = FUN_034fc51c(uVar20,0);
                    fStack0000000000000068 = 1.0;
                    if ((uVar22 & 1) != 0) {
                      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar20 = FUN_034fc7fc(uVar20,0);
                      fStack0000000000000068 = fVar10;
                      goto LAB_03e7ac68;
                    }
                  }
                }
                else {
                  if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar22 = FUN_034fc460(uVar20,0);
                  fStack0000000000000068 = 1.0;
                  if ((uVar22 & 1) != 0) {
                    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar20 = FUN_034fc974(uVar20,0);
                    goto LAB_03e7ac68;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar22 = FUN_034fc51c(uVar20,0);
                fStack0000000000000068 = 1.0;
                if ((uVar22 & 1) != 0) {
                  if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar20 = FUN_034fc7fc(uVar20,0);
LAB_03e7ac68:
                  uVar20 = uVar20 & 0xffff;
                }
              }
              iVar17 = *(int *)(unaff_x19 + 0x644);
              if (iVar17 != 0) goto LAB_03e7a954;
LAB_03e7ac74:
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
              goto LAB_03e7bfc0;
              if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_03e7c214;
              *plVar3 = *(long *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x30);
              thunk_FUN_01f51358(plVar3);
              if (*plVar3 == 0) goto LAB_03e7bfb0;
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
              goto LAB_03e7bfc0;
              uVar5 = *puVar2;
              uVar18 = *(uint *)(lVar21 + 0x18);
              if (uVar18 <= uVar5) goto LAB_03e7c214;
              *(undefined4 *)(unaff_x19 + 0x120) =
                   *(undefined4 *)(lVar21 + (long)(int)uVar5 * 0x178 + 0x58);
              if (bVar15) {
                lVar26 = *(long *)(unaff_x19 + 0x478);
                if (lVar26 == 0) goto LAB_03e7bfc0;
                if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_03e7c214;
                if ((*(int *)(lVar26 + (long)(int)uVar19 * 0xc + 0x20) != 10) ||
                   (uVar5 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
                if (uVar18 <= uVar5 - 1) goto LAB_03e7c214;
                if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                fVar28 = *(float *)(lVar21 + (long)(int)(uVar5 - 1) * 0x178 + 0x60);
                iVar17 = FUN_040ced70(*unaff_x23 + 0x50,0);
                lVar21 = *unaff_x23;
              }
              else {
LAB_03e7ad14:
                if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                fVar28 = *(float *)(unaff_x19 + 0x1e8);
                iVar17 = FUN_040ced70(*unaff_x23 + 0x50,0);
                lVar21 = *(long *)(unaff_x19 + 0x100);
              }
              if (lVar21 == 0) goto LAB_03e7bfc0;
              fVar42 = (float)FUN_040ced80(lVar21 + 0x50,0);
              fVar34 = fStack000000000000002c;
              if (*(char *)(unaff_x19 + 0x305) != '\0') {
                fVar34 = 1.0;
              }
              fVar31 = 0.0;
              fVar33 = 0.0;
              if (!(bool)(bVar15 & uVar20 == 0x2026)) {
                if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                fVar33 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
                if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                fVar31 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
              }
              if ((*plVar3 == 0) || (lVar21 = *(long *)(unaff_x19 + 0x488), lVar21 == 0))
              goto LAB_03e7bfc0;
              uVar18 = *(uint *)(unaff_x19 + 0x494);
              if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
              fVar28 = ((fStack0000000000000068 * fVar28) / (float)iVar17) * fVar42 * fVar34 *
                       *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar3 + 0x2c);
              *(undefined4 *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x2c) = 0;
LAB_03e7afa0:
              bVar15 = uVar20 == 0xad;
              fVar34 = 0.0;
              if (!bVar15 && uVar20 != 3) {
                fVar34 = fVar28;
              }
            }
            else {
              fStack0000000000000068 = 1.0;
              if (iVar17 == 0) goto LAB_03e7ac74;
LAB_03e7a954:
              if (iVar17 == 1) {
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_03e7bfc0;
                if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_03e7c214;
                *(undefined8 *)(unaff_x19 + 0x698) =
                     *(undefined8 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x40);
                thunk_FUN_01f51358(plVar1);
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_03e7bfc0;
                if (*(uint *)(lVar21 + 0x18) <= *puVar2) goto LAB_03e7c214;
                *(undefined4 *)(unaff_x19 + 0x6a4) =
                     *(undefined4 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x48);
                if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                   (lVar21 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar21 == 0))
                goto LAB_03e7bfc0;
                lVar21 = FUN_030f28e4(lVar21,*(undefined4 *)(unaff_x19 + 0x6a4),
                                      *(undefined8 *)PTR_DAT_04579db8);
                if (lVar21 == 0) goto LAB_03e7bfb0;
                if (uVar20 == 0x3c) {
                  uVar20 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
                }
                if (*plVar1 == 0) goto LAB_03e7bfc0;
                memmove(&stack0x00000100,(void *)(*plVar1 + 0x48),0x60);
                iVar17 = FUN_040ced70(&stack0x00000100,0);
                fVar28 = *(float *)(unaff_x19 + 0x1e8);
                if (iVar17 < 1) {
                  if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                  memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                  iVar17 = FUN_040ced70(&stack0x00000100,0);
                  if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                  memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar34 = (float)FUN_040ced80(&stack0x00000100,0);
                  fVar31 = fStack000000000000002c;
                  if (*(char *)(unaff_x19 + 0x305) != '\0') {
                    fVar31 = 1.0;
                  }
                  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
                  memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
                  fVar42 = (float)FUN_040ceda0(&stack0x00000100,0);
                  if (*(long *)(lVar21 + 0x20) == 0) goto LAB_03e7bfc0;
                  FUN_040cf28c(&stack0x00000be0,*(long *)(lVar21 + 0x20),0);
                  in_stack_000000c0 = in_stack_00000be0;
                  in_stack_000000c8 = in_stack_00000be8;
                  in_stack_000000d0 = in_stack_00000bf0;
                  fVar32 = (float)FUN_040cf0bc(&stack0x000000c0,0);
                  if (*(long *)(lVar21 + 0x20) == 0) goto LAB_03e7bfc0;
                  fVar36 = *(float *)(lVar21 + 0x2c);
                  fVar35 = (float)FUN_040cf2c8(*(long *)(lVar21 + 0x20),0);
                  if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                  memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar33 = (float)FUN_040ceda0(&stack0x00000100,0);
                  if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                  fVar31 = (fVar28 / (float)iVar17) * fVar34 * fVar31;
                  fVar28 = fVar31 * (fVar42 / fVar32) * fVar36 * fVar35;
                  fVar31 = fVar31 / fVar28;
                  fVar33 = fVar31 * fVar33;
                  memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar34 = (float)FUN_040cede0(&stack0x00000100,0);
                  fVar31 = fVar31 * fVar34;
                }
                else {
                  if (*plVar1 == 0) goto LAB_03e7bfc0;
                  memmove(&stack0x00000100,(void *)(*plVar1 + 0x48),0x60);
                  iVar17 = FUN_040ced70(&stack0x00000100,0);
                  if (*plVar1 == 0) goto LAB_03e7bfc0;
                  memmove(&stack0x00000100,(void *)(*plVar1 + 0x48),0x60);
                  fVar31 = (float)FUN_040ced80(&stack0x00000100,0);
                  if (*(long *)(lVar21 + 0x20) == 0) goto LAB_03e7bfc0;
                  fVar42 = *(float *)(lVar21 + 0x2c);
                  fVar34 = fStack000000000000002c;
                  if (*(char *)(unaff_x19 + 0x305) != '\0') {
                    fVar34 = 1.0;
                  }
                  fVar32 = (float)FUN_040cf2c8(*(long *)(lVar21 + 0x20),0);
                  if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
                  memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
                  fVar33 = (float)FUN_040ceda0(&stack0x00000100,0);
                  if (*plVar1 == 0) goto LAB_03e7bfc0;
                  fVar28 = (fVar28 / (float)iVar17) * fVar31 * fVar34 * fVar42 * fVar32;
                  memmove(&stack0x00000100,(void *)(*plVar1 + 0x48),0x60);
                  fVar31 = (float)FUN_040cede0(&stack0x00000100,0);
                }
                *plVar3 = lVar21;
                thunk_FUN_01f51358(plVar3,lVar21);
                lVar21 = *in_stack_00000078;
                if (lVar21 != 0) {
                  uVar18 = *puVar2;
                  if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
                  lVar26 = lVar21 + (long)(int)uVar18 * 0x178;
                  *(undefined4 *)(lVar26 + 0x2c) = 1;
                  *(float *)(lVar26 + 0x160) = fVar28;
                  *(undefined4 *)(unaff_x19 + 0x120) = uVar43;
                  goto LAB_03e7afa0;
                }
                goto LAB_03e7bfc0;
              }
              bVar15 = uVar20 == 0xad;
              lVar21 = *in_stack_00000078;
              fVar33 = 0.0;
              fVar34 = 0.0;
              if (!bVar15 && uVar20 != 3) {
                fVar34 = fVar28;
              }
              if (lVar21 == 0) goto LAB_03e7bfc0;
              uVar18 = *puVar2;
              fVar31 = 0.0;
            }
            if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
            *(short *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x20) = (short)uVar20;
            if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
            goto LAB_03e7bfc0;
            FUN_040cf28c(&stack0x00000be0,lVar21,0);
            in_stack_000000e0 = in_stack_00000be0;
            in_stack_000000e8 = in_stack_00000be8;
            in_stack_000000f0 = in_stack_00000bf0;
            if ((int)uVar20 < 0x10000) {
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar18 = FUN_034f9bb4(uVar20,0);
              uVar18 = uVar18 & 1;
            }
            else {
              uVar18 = 0;
            }
            fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
            *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
            if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
              fVar42 = 0.0;
            }
            else {
              if (*plVar3 == 0) goto LAB_03e7bfc0;
              uVar24 = *puVar2;
              uVar5 = *(uint *)(*plVar3 + 0x28);
              if ((int)uVar24 < (int)uVar7) {
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_03e7bfc0;
                if (*(uint *)(lVar21 + 0x18) <= uVar24 + 1) goto LAB_03e7c214;
                lVar21 = *(long *)(lVar21 + (long)(int)(uVar24 + 1) * 0x178 + 0x30);
                if ((((lVar21 == 0) || (*unaff_x23 == 0)) ||
                    (lVar26 = *(long *)(*unaff_x23 + 0x128), lVar26 == 0)) ||
                   (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_03e7bfc0;
                uVar22 = FUN_02bd799c(lVar26,uVar5 | *(int *)(lVar21 + 0x28) << 0x10,
                                      &stack0x000000b8,*(undefined8 *)PTR_DAT_04579da8);
                uVar43 = 0;
                if ((uVar22 & 1) == 0) {
                  uVar44 = 0;
                  fVar42 = 0.0;
                  uVar45 = 0;
                }
                else {
                  if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
                  uVar43 = *(undefined4 *)(in_stack_000000b8 + 0x14);
                  uVar44 = *(undefined4 *)(in_stack_000000b8 + 0x18);
                  fVar42 = *(float *)(in_stack_000000b8 + 0x1c);
                  uVar45 = *(undefined4 *)(in_stack_000000b8 + 0x20);
                  if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
                    fStack0000000000000074 = 0.0;
                  }
                }
                uVar24 = *puVar2;
              }
              else {
                uVar43 = 0;
                uVar44 = 0;
                fVar42 = 0.0;
                uVar45 = 0;
              }
              if (0 < (int)uVar24) {
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_03e7bfc0;
                if (*(uint *)(lVar21 + 0x18) <= uVar24 - 1) goto LAB_03e7c214;
                lVar21 = *(long *)(lVar21 + (ulong)(uVar24 - 1) * 0x178 + 0x30);
                if (((lVar21 == 0) || (*unaff_x23 == 0)) ||
                   ((lVar26 = *(long *)(*unaff_x23 + 0x128), lVar26 == 0 ||
                    (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)))) goto LAB_03e7bfc0;
                uVar22 = FUN_02bd799c(lVar26,*(uint *)(lVar21 + 0x28) | uVar5 << 0x10,
                                      &stack0x000000b8,*(undefined8 *)PTR_DAT_04579da8);
                if ((uVar22 & 1) != 0) {
                  if ((in_stack_000000b8 == 0) ||
                     (FUN_03e67c10(uVar43,uVar44,fVar42,uVar45,
                                   *(undefined4 *)(in_stack_000000b8 + 0x28),
                                   *(undefined4 *)(in_stack_000000b8 + 0x2c),
                                   *(undefined4 *)(in_stack_000000b8 + 0x30),
                                   *(undefined4 *)(in_stack_000000b8 + 0x34),0),
                     in_stack_000000b8 == 0)) goto LAB_03e7bfc0;
                  if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
                    fStack0000000000000074 = 0.0;
                  }
                }
              }
              *(float *)(unaff_x19 + 0x2fc) = fVar42;
            }
            fStack0000000000000060 = 0.0;
            fVar32 = *(float *)(unaff_x19 + 0x2b0);
            if (fVar32 != 0.0) {
              if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
              goto LAB_03e7bfc0;
              FUN_040cf28c(&stack0x00000be0,lVar21,0);
              in_stack_000000c0 = in_stack_00000be0;
              in_stack_000000c8 = in_stack_00000be8;
              in_stack_000000d0 = in_stack_00000bf0;
              fVar35 = (float)FUN_040cf0b4(&stack0x000000c0,0);
              if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
              goto LAB_03e7bfc0;
              FUN_040cf28c(&stack0x00000be0,lVar21,0);
              in_stack_000000c0 = in_stack_00000be0;
              in_stack_000000c8 = in_stack_00000be8;
              in_stack_000000d0 = in_stack_00000bf0;
              fVar36 = (float)FUN_040cf0c4(&stack0x000000c0,0);
              fStack0000000000000060 =
                   (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                   (fVar32 * 0.5 - fVar34 * (fVar35 * 0.5 + fVar36));
              *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060
              ;
            }
            iVar17 = *(int *)(unaff_x19 + 0x644);
            fVar32 = 0.0;
            if (((cVar6 == '\0') && (fVar32 = 0.0, iVar17 == 0)) &&
               ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
              if (*unaff_x23 == 0) goto LAB_03e7bfc0;
              fVar32 = *(float *)(*unaff_x23 + 0x1b4);
            }
            lVar21 = *in_stack_00000078;
            if (lVar21 == 0) goto LAB_03e7bfc0;
            uVar5 = *puVar2;
            lVar26 = (long)(int)uVar5;
            if (*(uint *)(lVar21 + 0x18) <= uVar5) goto LAB_03e7c214;
            fVar35 = *(float *)(unaff_x19 + 0x4d8);
            fVar36 = *(float *)(unaff_x19 + 0x61c);
            fVar33 = fVar33 * fVar34;
            *(float *)(lVar21 + lVar26 * 0x178 + 0x14c) = (0.0 - fVar35) + fVar36;
            if (iVar17 == 0) {
              fVar33 = fVar33 / fStack0000000000000068;
              fVar31 = (fVar31 * fVar34) / fStack0000000000000068;
            }
            else {
              fVar31 = fVar31 * fVar34;
            }
            fVar33 = fVar36 + fVar33;
            if ((uVar18 == 0) || (uVar5 == *(uint *)(unaff_x19 + 0x498))) {
              fVar31 = fVar36 + fVar31;
              fVar40 = fVar33;
              fVar39 = fVar31;
              if (fVar36 != 0.0) {
                fVar40 = (fVar33 - fVar36) / *(float *)(unaff_x19 + 0x404);
                fVar39 = (fVar31 - fVar36) / *(float *)(unaff_x19 + 0x404);
                if (fVar40 <= fVar33) {
                  fVar40 = fVar33;
                }
                if (fVar31 <= fVar39) {
                  fVar39 = fVar31;
                }
              }
              lVar21 = lVar21 + lVar26 * 0x178;
              fVar36 = fVar40;
              if (fVar40 <= *(float *)(unaff_x19 + 0x4c8)) {
                fVar36 = *(float *)(unaff_x19 + 0x4c8);
              }
              fVar41 = fVar39;
              if (*(float *)(unaff_x19 + 0x4cc) <= fVar39) {
                fVar41 = *(float *)(unaff_x19 + 0x4cc);
              }
              *(float *)(unaff_x19 + 0x4cc) = fVar41;
              *(float *)(unaff_x19 + 0x4c8) = fVar36;
              *(float *)(lVar21 + 0x154) = fVar40;
              *(float *)(lVar21 + 0x158) = fVar39;
              *(float *)(lVar21 + 0x148) = fVar33 - fVar35;
              *(float *)(unaff_x19 + 0x4c0) = fVar33 - fVar35;
              *(float *)(lVar21 + 0x150) = fVar31 - fVar35;
              *(float *)(unaff_x19 + 0x4c4) = fVar31 - fVar35;
              if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
                *(float *)(unaff_x19 + 0x4b8) = fVar36;
                if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
                fVar31 = *(float *)(unaff_x19 + 0x4bc);
                fVar35 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
                fStack0000000000000068 = (fVar34 * fVar35) / fStack0000000000000068;
                fVar35 = *(float *)(unaff_x19 + 0x4d8);
                if (fVar31 <= fStack0000000000000068) {
                  fVar31 = fStack0000000000000068;
                }
                *(float *)(unaff_x19 + 0x4bc) = fVar31;
              }
            }
            else {
              fVar31 = *(float *)(unaff_x19 + 0x4c8);
              lVar21 = lVar21 + lVar26 * 0x178;
              *(float *)(lVar21 + 0x154) = fVar31;
              fVar36 = *(float *)(unaff_x19 + 0x4cc);
              fVar31 = fVar31 - fVar35;
              *(float *)(lVar21 + 0x148) = fVar31;
              *(float *)(lVar21 + 0x158) = fVar36;
              *(float *)(unaff_x19 + 0x4c0) = fVar31;
              fVar36 = fVar36 - fVar35;
              *(float *)(lVar21 + 0x150) = fVar36;
              *(float *)(unaff_x19 + 0x4c4) = fVar36;
            }
            if (fVar35 == 0.0) {
              if ((uVar18 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
                fVar31 = *(float *)(unaff_x19 + 0x4b4);
                if (*(float *)(unaff_x19 + 0x4b4) <= fVar33) {
                  fVar31 = fVar33;
                }
                *(float *)(unaff_x19 + 0x4b4) = fVar31;
                goto LAB_03e7b470;
              }
              bVar16 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
              if (uVar20 == 9) goto LAB_03e7b484;
LAB_03e7b4c4:
              if ((!(bool)(bVar14 | bVar15 ^ 1U)) || (*(int *)(unaff_x19 + 0x644) == 1))
              goto LAB_03e7b4dc;
LAB_03e7b658:
              fVar28 = *(float *)(unaff_x19 + 0x640);
              if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
                fVar31 = (float)FUN_040cf0d4(&stack0x000000e0,0);
                if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                fVar31 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                         (*(float *)(unaff_x19 + 0x2ac) +
                         fVar34 * (fVar42 + fVar31) +
                         fVar30 * (fVar32 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac))
                         );
              }
              else {
                if (*unaff_x23 == 0) goto LAB_03e7bfc0;
                fVar31 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                         (*(float *)(unaff_x19 + 0x2ac) +
                         (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                         fVar30 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
              }
              fVar28 = fVar28 + fVar31;
              *(float *)(unaff_x19 + 0x640) = fVar28;
              if ((uVar20 == 0x200b) || (uVar18 != 0)) {
                fVar28 = fVar28 + fVar30 * *(float *)(unaff_x19 + 0x2b4);
                *(float *)(unaff_x19 + 0x640) = fVar28;
              }
              if (uVar20 == 0xd) {
                if (fStack0000000000000064 <= fStack000000000000006c + fVar28) {
                  fStack0000000000000064 = fStack000000000000006c + fVar28;
                }
                fStack000000000000006c = 0.0;
                fVar28 = *(float *)(unaff_x19 + 0x40c) + 0.0;
                goto LAB_03e7b75c;
              }
              bVar16 = uVar20 == 10;
              if (((0xb < uVar20) || ((1 << (ulong)(uVar20 & 0x1f) & 0xc08U) == 0)) &&
                 (1 < uVar20 - 0x2028)) goto LAB_03e7b764;
LAB_03e7b820:
              if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                fVar28 = *(float *)(unaff_x19 + 0x4c8);
                fVar31 = *(float *)(unaff_x19 + 0x4d0);
                if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0
                            ) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                fVar28 = fVar28 - fVar31;
                if (((fVar11 < ABS(fVar28)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                   (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                  *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar28;
                  *(float *)(unaff_x19 + 0x4d8) = fVar28 + *(float *)(unaff_x19 + 0x4d8);
                }
              }
              fVar28 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
              fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
              if (fVar28 <= *(float *)(unaff_x19 + 0x4c4)) {
                fStack0000000000000038 = fVar28;
              }
              fVar31 = fStack0000000000000044 +
                       fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
              fVar28 = fStack0000000000000064;
              if (fStack0000000000000064 <= fVar31) {
                fVar28 = fVar31;
              }
              *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
              fStack000000000000006c = fVar28;
              if (*(uint *)(unaff_x19 + 0x494) != uVar7) {
                fStack000000000000006c = 0.0;
                fStack0000000000000064 = fVar28;
              }
              fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
              *(undefined1 *)(unaff_x19 + 0x33c) = 0;
              if (bVar16) {
LAB_03e7bb3c:
                FUN_03e821b4();
                FUN_03e821b4();
                uVar18 = *(uint *)(unaff_x19 + 0x494);
                lVar21 = *(long *)(unaff_x19 + 0x488);
                iVar17 = uVar18 + 1;
                *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                *(int *)(unaff_x19 + 0x498) = iVar17;
                if (lVar21 != 0) {
                  if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
                  fVar28 = *(float *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x154);
                  if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
                    fVar31 = 0.0;
                    if (!(bool)(uVar20 != 0x2029 & (bVar16 ^ 1U))) {
                      fVar31 = *(float *)(unaff_x19 + 0x2cc);
                    }
                    uVar25 = 0;
                    fVar31 = fVar28 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                             fVar38 * (fVar27 + *(float *)(unaff_x19 + 700)) +
                             fVar30 * (*(float *)(unaff_x19 + 0x2b8) + fVar31) +
                             *(float *)(unaff_x19 + 0x4d8);
                  }
                  else {
                    fVar31 = 0.0;
                    if (!(bool)(uVar20 != 0x2029 & (bVar16 ^ 1U))) {
                      fVar31 = *(float *)(unaff_x19 + 0x2cc);
                    }
                    uVar25 = 1;
                    fVar31 = *(float *)(unaff_x19 + 0x4d8) +
                             *(float *)(unaff_x19 + 0x2c0) +
                             fVar30 * (*(float *)(unaff_x19 + 0x2b8) + fVar31);
                  }
                  *(float *)(unaff_x19 + 0x4d8) = fVar31;
                  *(undefined1 *)(unaff_x19 + 0x2c4) = uVar25;
                  puVar12 = PTR_DAT_04579e70;
                  lVar21 = *(long *)PTR_DAT_04579e70;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar21 = *(long *)puVar12;
                    iVar17 = *puVar2 + 1;
                  }
                  uVar37 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x640) =
                       *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
                  uVar37 = NEON_rev64(uVar37,4);
                  *(float *)(unaff_x19 + 0x4d0) = fVar28;
                  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar37;
                  *(int *)(unaff_x19 + 0x494) = iVar17;
                  fVar28 = fVar34;
                  goto LAB_03e7bfb0;
                }
                goto LAB_03e7bfc0;
              }
              if ((int)uVar20 < 0x2028) {
                if (uVar20 == 3) {
                  if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03e7bfc0;
                  uVar19 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
                  uVar20 = 3;
                }
                else if ((uVar20 == 0xb) || (uVar20 == 0x2d)) goto LAB_03e7bb3c;
              }
              else if (uVar20 - 0x2028 < 2) goto LAB_03e7bb3c;
            }
            else {
LAB_03e7b470:
              bVar16 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
              if (uVar20 == 9) {
LAB_03e7b484:
                bVar8 = true;
              }
              else {
                if ((((uVar18 != 0) || (uVar20 == 3)) || (uVar20 == 0x200b)) || (uVar20 == 0xad))
                goto LAB_03e7b4c4;
LAB_03e7b4dc:
                bVar8 = false;
              }
              fVar35 = *(float *)(unaff_x19 + 0x360);
              fVar36 = *(float *)(unaff_x19 + 0x640);
              fVar31 = (fVar29 - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
              bVar13 = true;
              if ((fVar35 <= fVar31) && (bVar13 = false, !NAN(fVar35))) {
                bVar13 = fVar35 == -1.0;
              }
              if (!bVar13) {
                fVar31 = fVar35;
              }
              fVar35 = (float)FUN_040cf0d4(&stack0x000000e0,0);
              if (!bVar15) {
                fVar28 = fVar34;
              }
              fVar33 = 1.0;
              if (!bVar16) {
                fVar33 = DAT_00c926dc;
              }
              fStack000000000000005c =
                   ABS(fVar36) + fVar28 * fVar35 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
              if ((fVar33 * fVar31 < fStack000000000000005c && (uVar4 & 1) == 0) &&
                 (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
                uVar19 = FUN_03e81e20();
                lVar21 = *(long *)(unaff_x19 + 0x488);
                if (lVar21 == 0) goto LAB_03e7bfc0;
                uVar20 = *(uint *)(unaff_x19 + 0x494);
                uVar18 = uVar20 - 1;
                if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_03e7c214;
                if ((!bVar14 && *(short *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x20) == 0xad) &&
                   (*(int *)(unaff_x19 + 0x2e0) == 0)) {
                  bVar14 = false;
                  in_stack_00000bdc = 0x2d;
                  *puVar2 = uVar18;
                  fVar28 = fVar34;
                  uVar19 = uVar19 - 1;
                  in_stack_00000bd8 = uVar18;
                  goto LAB_03e7bfb0;
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_03e7c214;
                if (*(short *)(lVar21 + (long)(int)uVar20 * 0x178 + 0x20) == 0xad) {
                  bVar14 = true;
                  fVar28 = fVar34;
                }
                else {
                  if ((uStack0000000000000030 & unaff_w24) != 0) {
                    fVar28 = *(float *)(unaff_x19 + 0x2d4);
                    fVar42 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
                    if ((fVar28 < fVar42) &&
                       (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                      fVar30 = fStack000000000000005c;
                      if (0.0 < fVar28) {
                        fVar30 = fStack000000000000005c / (1.0 - fVar28);
                      }
                      fVar28 = fVar28 + (fStack000000000000005c - fVar33 * (fVar31 + DAT_00c928e4))
                                        / fVar30;
                      if (fVar42 <= fVar28) {
                        fVar28 = fVar42;
                      }
                      *(float *)(unaff_x19 + 0x2d4) = fVar28;
LAB_03e7c098:
                      if (DAT_0482ee9c == '\0') {
                        thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
                        DAT_0482ee9c = '\x01';
                      }
                      return **(float **)
                               (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ +
                               0xb8);
                    }
                    if ((*(float *)(unaff_x19 + 0x250) < *unaff_x22) &&
                       (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                      *(float *)(unaff_x19 + 0x23c) = *unaff_x22;
                      fVar30 = (*unaff_x22 - *(float *)(unaff_x19 + 0x240)) * 0.5;
                      if (fVar30 <= DAT_00c92764) {
                        fVar30 = DAT_00c92764;
                      }
                      fVar30 = *unaff_x22 - fVar30;
                      *unaff_x22 = fVar30;
                      fVar27 = fVar30 * 20.0 + 0.5;
                      fVar30 = DAT_00c92a58;
                      if (fVar27 != INFINITY) {
                        fVar30 = (float)(int)fVar27 / 20.0;
                      }
                      if (fVar30 <= *(float *)(unaff_x19 + 0x250)) {
                        fVar30 = *(float *)(unaff_x19 + 0x250);
                      }
                      *unaff_x22 = fVar30;
                      goto LAB_03e7c098;
                    }
                  }
                  if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                    fVar28 = *(float *)(unaff_x19 + 0x4c8);
                    fVar31 = *(float *)(unaff_x19 + 0x4d0);
                    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    fVar28 = fVar28 - fVar31;
                    if (((fVar11 < ABS(fVar28)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                       (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                      *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar28;
                      *(float *)(unaff_x19 + 0x4d8) = fVar28 + *(float *)(unaff_x19 + 0x4d8);
                    }
                  }
                  fVar42 = *(float *)(unaff_x19 + 0x640);
                  fVar31 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                  fVar28 = *(float *)(unaff_x19 + 0x4c4);
                  if (fVar31 <= *(float *)(unaff_x19 + 0x4c4)) {
                    fVar28 = fVar31;
                  }
                  *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
                  *(float *)(unaff_x19 + 0x4c4) = fVar28;
                  *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
                  if ((uStack0000000000000034 & 1) == 0) {
                    fVar31 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) -
                             fVar31;
                    if (fStack0000000000000038 <= fVar31) {
                      fStack0000000000000038 = fVar31;
                    }
                  }
                  else {
                    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar28;
                  }
                  FUN_03e821b4();
                  lVar21 = *(long *)(unaff_x19 + 0x488);
                  *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                  if (lVar21 == 0) goto LAB_03e7bfc0;
                  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
                  fVar28 = *(float *)(unaff_x19 + 0x2c0);
                  fVar31 = *(float *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 +
                                     0x154);
                  bVar14 = fVar28 != DAT_00c927ac;
                  if (bVar14) {
                    fVar32 = fVar30 * *(float *)(unaff_x19 + 0x2b8);
                  }
                  else {
                    fVar32 = fVar31 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                             fVar38 * (fVar27 + *(float *)(unaff_x19 + 700));
                    fVar28 = fVar30 * *(float *)(unaff_x19 + 0x2b8);
                  }
                  *(bool *)(unaff_x19 + 0x2c4) = bVar14;
                  *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar28 + fVar32;
                  puVar12 = PTR_DAT_04579e70;
                  lVar21 = *(long *)PTR_DAT_04579e70;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar21 = *(long *)puVar12;
                  }
                  bVar14 = false;
                  fStack000000000000006c = fStack000000000000006c + fVar42;
                  uVar37 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
                  uVar37 = NEON_rev64(uVar37,4);
                  *(float *)(unaff_x19 + 0x4d0) = fVar31;
                  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar37;
                  uStack0000000000000030 = 1;
                  fVar28 = fVar34;
                }
                goto LAB_03e7bfb0;
              }
              fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
              fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
              if (!bVar8) goto LAB_03e7b658;
              if (*unaff_x23 == 0) goto LAB_03e7bfc0;
              memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
              fVar28 = (float)FUN_040cee68(&stack0x00000100,0);
              if (*unaff_x23 == 0) goto LAB_03e7bfc0;
              fVar42 = *(float *)(unaff_x19 + 0x640);
              fVar31 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
              fVar31 = fVar34 * fVar28 * fVar31;
              fVar28 = fVar31 * (float)(int)(fVar42 / fVar31);
              if (fVar28 <= fVar42) {
                fVar28 = fVar42 + fVar31;
              }
LAB_03e7b75c:
              bVar16 = false;
              *(float *)(unaff_x19 + 0x640) = fVar28;
LAB_03e7b764:
              if (*puVar2 == uVar7) goto LAB_03e7b820;
            }
            if (((uStack0000000000000034 & 1) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
              if ((uVar18 == 0) && (((uVar20 != 0x2d && (uVar20 != 0x200b)) && (uVar20 != 0xad)))) {
                if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03e7b9d0:
                  if (((((0x2bfd < uVar20 - 0xac01) && (0xfd < uVar20 - 0x1101)) &&
                       (0x1d < uVar20 - 0xa961)) || (uVar22 = FUN_03e90be8(0), (uVar22 & 1) != 0))
                     && ((((0xed < uVar20 - 0xff01 && (0x1d < uVar20 - 0xfe31)) &&
                          (0x717d < uVar20 - 0x2e81)) && (0x1fd < uVar20 - 0xf901))))
                  goto LAB_03e7b79c;
                  lVar21 = FUN_03e90a7c(0);
                  if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_03e7bfc0;
                  uVar20 = FUN_02afbd84(*(long *)(lVar21 + 0x10),uVar20,
                                        *(undefined8 *)PTR_DAT_04579da0);
                  if ((int)uVar7 <= (int)*puVar2) {
                    if (uStack0000000000000030 != 0 || ((uVar20 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
                      FUN_03e821b4();
                    }
LAB_03e7bf74:
                    uStack0000000000000030 = 0;
                    bVar9 = true;
                    goto Unity_VisualScripting_Serialization__Serialize;
                  }
                  lVar21 = FUN_03e90a7c(0);
                  if ((lVar21 == 0) || (lVar26 = *in_stack_00000078, lVar26 == 0))
                  goto LAB_03e7bfc0;
                  if (*(uint *)(lVar26 + 0x18) <= *puVar2 + 1) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  if (*(long *)(lVar21 + 0x18) == 0) goto LAB_03e7bfc0;
                  uVar22 = FUN_02afbd84(*(long *)(lVar21 + 0x18),
                                        *(undefined2 *)
                                         (lVar26 + (long)(int)(*puVar2 + 1) * 0x178 + 0x20),
                                        *(undefined8 *)PTR_DAT_04579da0);
                  if (uStack0000000000000030 == 0 && ((uVar20 ^ 0xffffffff) & 1) == 0)
                  goto LAB_03e7bf74;
                  if ((uVar22 & 1) == 0) goto LAB_03e7bf60;
                  if (uStack0000000000000030 == 0) goto LAB_03e7bf74;
                  if (uVar18 != 0) {
                    FUN_03e821b4();
                  }
                  FUN_03e821b4();
                  bVar9 = true;
LAB_03e7b988:
                  uStack0000000000000030 = 1;
                }
                else {
LAB_03e7b79c:
                  if (bVar9) {
                    lVar21 = FUN_03e90a7c(0);
                    if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_03e7bfc0;
                    uVar22 = FUN_02afbd84(*(long *)(lVar21 + 0x10),uVar20,
                                          *(undefined8 *)PTR_DAT_04579da0);
                    if ((uVar22 & 1) == 0) {
                      FUN_03e821b4();
                    }
                    bVar9 = false;
                  }
                  else {
                    if (uStack0000000000000030 != 0) {
                      if ((!bVar14 && bVar15) || (uVar18 != 0)) {
                        FUN_03e821b4();
                      }
                      FUN_03e821b4();
                      bVar9 = false;
                      goto LAB_03e7b988;
                    }
                    bVar9 = false;
                    uStack0000000000000030 = 0;
                  }
                }
              }
              else {
                if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03e7b79c;
                if (((uVar20 - 0x2007 < 0x29) &&
                    ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                   ((uVar20 == 0xa0 || (uVar20 == 0x2060)))) goto LAB_03e7b9d0;
                FUN_03e821b4();
                bVar9 = false;
                uStack0000000000000030 = 0;
                in_stack_00000170 = 0xffffffff;
              }
            }
Unity_VisualScripting_Serialization__Serialize:
            *puVar2 = *puVar2 + 1;
            fVar28 = fVar34;
          }
LAB_03e7bfb0:
          lVar21 = *(long *)(unaff_x19 + 0x478);
          uVar19 = uVar19 + 1;
          if (lVar21 == 0) goto LAB_03e7bfc0;
          goto LAB_03e7a6b4;
        }
      }
    }
  }
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


