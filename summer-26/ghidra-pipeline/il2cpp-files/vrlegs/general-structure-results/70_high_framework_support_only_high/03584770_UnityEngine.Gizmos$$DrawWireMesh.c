/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawWireMesh
ENTRY_POINT: 03584770
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_12
*/


float UnityEngine_Gizmos__DrawWireMesh(long param_1,undefined8 param_2,undefined8 param_3)

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
  uint in_w9;
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
  undefined8 uVar36;
  float fVar37;
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
  float unaff_s15;
  undefined8 in_stack_00000028;
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
  uint uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_000001a8;
  uint in_stack_00000c10;
  uint in_stack_00000c14;
  
  uStack00000000000000c0 = in_w9;
  FUN_0209aa94(param_2,param_3,**(undefined8 **)(param_1 + 0x800));
  *(undefined4 *)(unaff_x19 + 0x61c) = 0;
  FUN_0209aa1c(unaff_x19 + 0x620,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
  *(undefined4 *)(unaff_x19 + 0x4d8) = 0;
  *(undefined4 *)(unaff_x19 + 0x2c0) = 0xc6fffe00;
  if (*(long *)(unaff_x19 + 0x100) != 0) {
    memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
    fVar27 = (float)FUN_03776970(&stack0x00000140,0);
    if (*unaff_x23 != 0) {
      memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
      fVar28 = (float)FUN_03776980(&stack0x00000140,0);
      if (*unaff_x23 != 0) {
        memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
        fVar29 = (float)FUN_037769c0(&stack0x00000140,0);
        *(undefined8 *)(unaff_x19 + 0x2ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x640) = 0;
        *(undefined8 *)(unaff_x19 + 0x408) = 0;
        uStack00000000000000c0 = 0;
        FUN_0209aa94(unaff_x19 + 0x410,&stack0x000000c0,*unaff_x21);
        *(undefined1 *)(unaff_x19 + 0x430) = 0;
        *(undefined8 *)(unaff_x19 + 0x494) = 0;
        lVar21 = *unaff_x27;
        uStack0000000000000034 = unaff_w26;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *unaff_x27;
        }
        uVar36 = NEON_rev64(*(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8),4);
        *(undefined4 *)(unaff_x19 + 0x4a8) = 0;
        *(undefined4 *)(unaff_x19 + 0x4d0) = 0;
        *(undefined1 *)(unaff_x19 + 0x2c4) = 0;
        *(undefined8 *)(unaff_x19 + 0x350) = 0;
        *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
        *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
        *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
        *(undefined4 *)(unaff_x19 + 0x4c4) = 0;
        *(undefined8 *)(unaff_x19 + 0x4c8) = uVar36;
        *(undefined1 *)(unaff_x19 + 0x2da) = 0;
        FUN_0359f73c(&stack0x00000c10,0xffffffff,0,0);
        memset(&stack0x00000898,0,0x378);
        memset(&stack0x00000520,0,0x378);
        memset(&stack0x000001a8,0,0x378);
        lVar21 = *(long *)(unaff_x19 + 0x478);
        *(int *)(unaff_x19 + 0x244) = *(int *)(unaff_x19 + 0x244) + 1;
        fVar11 = DAT_00d38d28;
        fVar10 = DAT_00d38938;
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
          fVar37 = unaff_s8 + DAT_00d3879c;
          fStack000000000000005c = 0.0;
          fVar38 = (unaff_s9 / (float)unaff_w25) * unaff_s14 * unaff_s15;
          bVar9 = false;
          bVar14 = false;
          fVar29 = unaff_s15 * unaff_s12 * DAT_00d38d28;
          uVar19 = 0;
          puVar2 = (uint *)(unaff_x19 + 0x494);
          plVar3 = (long *)(unaff_x19 + 0x648);
          uStack0000000000000030 = 1;
          fVar28 = fVar38;
LAB_035849d0:
          if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar19) {
LAB_03586314:
            if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8) ||
                 ((unaff_w24 & 1) == 0)) ||
                (fVar27 = *unaff_x22, *(float *)(unaff_x19 + 0x254) <= fVar27)) ||
               (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
              fVar27 = *(float *)(unaff_x19 + 0x340);
              fVar28 = *(float *)(unaff_x19 + 0x348);
              if (fVar27 <= 0.0) {
                fVar27 = 0.0;
              }
              if (fVar28 <= 0.0) {
                fVar28 = 0.0;
              }
              *(undefined1 *)(unaff_x19 + 0x24c) = 1;
              fVar28 = (fStack000000000000006c + fVar27 + fVar28) * 100.0 + 1.0;
              fVar27 = DAT_00d387f8;
              if (fVar28 != INFINITY) {
                fVar27 = (float)(int)fVar28 / 100.0;
              }
              *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
              return fVar27;
            }
            if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
              fVar27 = *unaff_x22;
            }
            *(float *)(unaff_x19 + 0x240) = fVar27;
            fVar27 = (*(float *)(unaff_x19 + 0x23c) - *unaff_x22) * 0.5;
            if (fVar27 <= DAT_00d38b84) {
              fVar27 = DAT_00d38b84;
            }
            fVar27 = *unaff_x22 + fVar27;
            *unaff_x22 = fVar27;
            fVar28 = fVar27 * 20.0 + 0.5;
            fVar27 = DAT_00d38e60;
            if (fVar28 != INFINITY) {
              fVar27 = (float)(int)fVar28 / 20.0;
            }
            if (*(float *)(unaff_x19 + 0x254) <= fVar27) {
              fVar27 = *(float *)(unaff_x19 + 0x254);
            }
            *unaff_x22 = fVar27;
            goto LAB_035863e8;
          }
          if (*(uint *)(lVar21 + 0x18) <= uVar19) goto UnityEngine_LightProbesQuery__get_IsCreated;
          uVar20 = *(uint *)(lVar21 + (long)(int)uVar19 * 0xc + 0x20);
          if (uVar20 == 0) goto LAB_03586314;
          if ((uVar20 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
            *(undefined1 *)(unaff_x19 + 0x431) = 1;
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            uVar22 = FUN_03586568();
            if (((uVar22 & 1) == 0) ||
               (uVar19 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
            goto LAB_03584a74;
          }
          else {
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
            goto LAB_03586310;
            if (*(uint *)(lVar21 + 0x18) <= *puVar2)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
            *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar21 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar21 + 0x58);
            *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar21 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_03584a74:
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
            goto LAB_03586310;
            uVar18 = *puVar2;
            if (*(uint *)(lVar21 + 0x18) <= uVar18)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            lVar26 = (long)(int)uVar18;
            cVar6 = *(char *)(lVar21 + lVar26 * 0x178 + 0x5c);
            *(undefined1 *)(unaff_x19 + 0x431) = 0;
            uVar43 = *(undefined4 *)(unaff_x19 + 0x120);
            if (in_stack_00000c10 == uVar18) {
              *(undefined4 *)(unaff_x19 + 0x644) = 0;
              if (in_stack_00000c14 == 0x2026) {
                lVar21 = *in_stack_00000078;
                if (lVar21 != 0) {
                  if (*(uint *)(lVar21 + 0x18) <= uVar18)
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  *(undefined8 *)(lVar21 + lVar26 * 0x178 + 0x30) =
                       *(undefined8 *)(unaff_x19 + 0x650);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar21 = *in_stack_00000078;
                  if (lVar21 != 0) {
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                    lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                    *(undefined4 *)(lVar21 + 0x2c) = 0;
                    *(undefined8 *)(lVar21 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    lVar21 = *(long *)(unaff_x19 + 0x488);
                    if (lVar21 != 0) {
                      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                      goto UnityEngine_LightProbesQuery__get_IsCreated;
                      *(undefined8 *)
                       (lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                           *(undefined8 *)(unaff_x19 + 0x660);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar21 = *in_stack_00000078;
                      if (lVar21 != 0) {
                        uVar18 = *puVar2;
                        if (*(uint *)(lVar21 + 0x18) <= uVar18)
                        goto UnityEngine_LightProbesQuery__get_IsCreated;
                        bVar15 = true;
                        in_stack_00000c10 = uVar18 + 1;
                        *(undefined4 *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x58) =
                             *(undefined4 *)(unaff_x19 + 0x668);
                        uVar20 = 0x2026;
                        *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                        in_stack_00000c14 = 3;
                        goto LAB_03584c20;
                      }
                    }
                  }
                }
                goto LAB_03586310;
              }
              if (in_stack_00000c14 != 3) {
                bVar15 = true;
                uVar20 = in_stack_00000c14;
                goto LAB_03584c20;
              }
              lVar21 = *in_stack_00000078;
              if (((lVar21 == 0) || (*unaff_x23 == 0)) ||
                 (lVar23 = FUN_03568ac0(*unaff_x23,0), lVar23 == 0)) goto LAB_03586310;
              FUN_0219b634(lVar23,&stack0x00000c1c,&stack0x000000c0,
                           *(undefined8 *)OVRPlugin_Hand_TypeInfo);
              if (*(uint *)(lVar21 + 0x18) <= uVar18)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              *(ulong *)(lVar21 + lVar26 * 0x178 + 0x30) =
                   CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              bVar15 = true;
              uVar20 = 3;
              *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
            }
            else {
              bVar15 = false;
LAB_03584c20:
              if ((uVar20 != 3) && ((int)uVar18 < *(int *)(unaff_x19 + 0x324))) {
                lVar21 = *in_stack_00000078;
                if (lVar21 != 0) {
                  if (*(uint *)(lVar21 + 0x18) <= uVar18)
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  lVar21 = lVar21 + (long)(int)uVar18 * 0x178;
                  *(undefined1 *)(lVar21 + 0x194) = 0;
                  *(undefined2 *)(lVar21 + 0x20) = 0x200b;
                  *(undefined4 *)(lVar21 + 100) = 0;
                  *puVar2 = uVar18 + 1;
                  goto LAB_03586300;
                }
                goto LAB_03586310;
              }
            }
            iVar17 = *(int *)(unaff_x19 + 0x644);
            if (iVar17 == 0) {
              uVar18 = *(uint *)(unaff_x19 + 0x25c);
              if ((uVar18 >> 4 & 1) == 0) {
                if ((uVar18 >> 3 & 1) == 0) {
                  fStack0000000000000068 = 1.0;
                  if ((uVar18 >> 5 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar22 = FUN_026b812c(uVar20,0);
                    fStack0000000000000068 = 1.0;
                    if ((uVar22 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar20 = FUN_026b8410(uVar20,0);
                      fStack0000000000000068 = fVar10;
                      goto LAB_03584f98;
                    }
                  }
                }
                else {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar22 = FUN_026b8070(uVar20,0);
                  fStack0000000000000068 = 1.0;
                  if ((uVar22 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar20 = FUN_026b8594(uVar20,0);
                    goto LAB_03584f98;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar22 = FUN_026b812c(uVar20,0);
                fStack0000000000000068 = 1.0;
                if ((uVar22 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar20 = FUN_026b8410(uVar20,0);
LAB_03584f98:
                  uVar20 = uVar20 & 0xffff;
                }
              }
              iVar17 = *(int *)(unaff_x19 + 0x644);
              if (iVar17 != 0) goto LAB_03584c80;
LAB_03584fa4:
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
              goto LAB_03586310;
              if (*(uint *)(lVar21 + 0x18) <= *puVar2)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              *plVar3 = *(long *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x30);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3);
              if (*plVar3 == 0) goto LAB_03586300;
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
              goto LAB_03586310;
              uVar5 = *puVar2;
              uVar18 = *(uint *)(lVar21 + 0x18);
              if (uVar18 <= uVar5) goto UnityEngine_LightProbesQuery__get_IsCreated;
              *(undefined4 *)(unaff_x19 + 0x120) =
                   *(undefined4 *)(lVar21 + (long)(int)uVar5 * 0x178 + 0x58);
              if (bVar15) {
                lVar26 = *(long *)(unaff_x19 + 0x478);
                if (lVar26 == 0) goto LAB_03586310;
                if (*(uint *)(lVar26 + 0x18) <= uVar19)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                if ((*(int *)(lVar26 + (long)(int)uVar19 * 0xc + 0x20) != 10) ||
                   (uVar5 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
                if (uVar18 <= uVar5 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
                if (*unaff_x23 == 0) goto LAB_03586310;
                fVar28 = *(float *)(lVar21 + (long)(int)(uVar5 - 1) * 0x178 + 0x60);
                iVar17 = FUN_03776950(*unaff_x23 + 0x50,0);
                lVar21 = *unaff_x23;
              }
              else {
LAB_03585044:
                if (*unaff_x23 == 0) goto LAB_03586310;
                fVar28 = *(float *)(unaff_x19 + 0x1e8);
                iVar17 = FUN_03776950(*unaff_x23 + 0x50,0);
                lVar21 = *(long *)(unaff_x19 + 0x100);
              }
              if (lVar21 == 0) goto LAB_03586310;
              fVar42 = (float)FUN_03776960(lVar21 + 0x50,0);
              fVar33 = in_stack_00000028._4_4_;
              if (*(char *)(unaff_x19 + 0x305) != '\0') {
                fVar33 = 1.0;
              }
              fVar30 = 0.0;
              fVar32 = 0.0;
              if (!(bool)(bVar15 & uVar20 == 0x2026)) {
                if (*unaff_x23 == 0) goto LAB_03586310;
                fVar32 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
                if (*unaff_x23 == 0) goto LAB_03586310;
                fVar30 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
              }
              if ((*plVar3 == 0) || (lVar21 = *(long *)(unaff_x19 + 0x488), lVar21 == 0))
              goto LAB_03586310;
              uVar18 = *(uint *)(unaff_x19 + 0x494);
              if (*(uint *)(lVar21 + 0x18) <= uVar18)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              fVar28 = ((fStack0000000000000068 * fVar28) / (float)iVar17) * fVar42 * fVar33 *
                       *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar3 + 0x2c);
              *(undefined4 *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x2c) = 0;
LAB_035852d0:
              bVar15 = uVar20 == 0xad;
              fVar33 = 0.0;
              if (!bVar15 && uVar20 != 3) {
                fVar33 = fVar28;
              }
            }
            else {
              fStack0000000000000068 = 1.0;
              if (iVar17 == 0) goto LAB_03584fa4;
LAB_03584c80:
              if (iVar17 == 1) {
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_03586310;
                if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                *(undefined8 *)(unaff_x19 + 0x698) =
                     *(undefined8 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x40);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_03586310;
                if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                *(undefined4 *)(unaff_x19 + 0x6a4) =
                     *(undefined4 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x48);
                if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                   (lVar21 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0),
                   lVar21 == 0)) goto LAB_03586310;
                FUN_02215a88(lVar21,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                             *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                lVar21 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
                if (lVar21 == 0) goto LAB_03586300;
                if (uVar20 == 0x3c) {
                  uVar20 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
                }
                if (*plVar1 == 0) goto LAB_03586310;
                memmove(&stack0x00000140,(void *)(*plVar1 + 0x48),0x60);
                iVar17 = FUN_03776950(&stack0x00000140,0);
                fVar28 = *(float *)(unaff_x19 + 0x1e8);
                if (iVar17 < 1) {
                  if (*unaff_x23 == 0) goto LAB_03586310;
                  memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                  iVar17 = FUN_03776950(&stack0x00000140,0);
                  if (*unaff_x23 == 0) goto LAB_03586310;
                  memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar33 = (float)FUN_03776960(&stack0x00000140,0);
                  fVar30 = in_stack_00000028._4_4_;
                  if (*(char *)(unaff_x19 + 0x305) != '\0') {
                    fVar30 = 1.0;
                  }
                  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
                  memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
                  fVar42 = (float)FUN_03776980(&stack0x00000140,0);
                  if (*(long *)(lVar21 + 0x20) == 0) goto LAB_03586310;
                  FUN_03776e6c(&stack0x000000c0,*(long *)(lVar21 + 0x20),0);
                  in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
                  in_stack_00000108 = in_stack_000000c8;
                  in_stack_00000110 = in_stack_000000d0;
                  fVar31 = (float)FUN_03776c9c(&stack0x00000100,0);
                  if (*(long *)(lVar21 + 0x20) == 0) goto LAB_03586310;
                  fVar35 = *(float *)(lVar21 + 0x2c);
                  fVar34 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
                  if (*unaff_x23 == 0) goto LAB_03586310;
                  memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar32 = (float)FUN_03776980(&stack0x00000140,0);
                  if (*unaff_x23 == 0) goto LAB_03586310;
                  fVar30 = (fVar28 / (float)iVar17) * fVar33 * fVar30;
                  fVar28 = fVar30 * (fVar42 / fVar31) * fVar35 * fVar34;
                  fVar30 = fVar30 / fVar28;
                  fVar32 = fVar30 * fVar32;
                  memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar33 = (float)FUN_037769c0(&stack0x00000140,0);
                  fVar30 = fVar30 * fVar33;
                }
                else {
                  if (*plVar1 == 0) goto LAB_03586310;
                  memmove(&stack0x00000140,(void *)(*plVar1 + 0x48),0x60);
                  iVar17 = FUN_03776950(&stack0x00000140,0);
                  if (*plVar1 == 0) goto LAB_03586310;
                  memmove(&stack0x00000140,(void *)(*plVar1 + 0x48),0x60);
                  fVar30 = (float)FUN_03776960(&stack0x00000140,0);
                  if (*(long *)(lVar21 + 0x20) == 0) goto LAB_03586310;
                  fVar42 = *(float *)(lVar21 + 0x2c);
                  fVar33 = in_stack_00000028._4_4_;
                  if (*(char *)(unaff_x19 + 0x305) != '\0') {
                    fVar33 = 1.0;
                  }
                  fVar31 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
                  if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
                  memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
                  fVar32 = (float)FUN_03776980(&stack0x00000140,0);
                  if (*plVar1 == 0) goto LAB_03586310;
                  fVar28 = (fVar28 / (float)iVar17) * fVar30 * fVar33 * fVar42 * fVar31;
                  memmove(&stack0x00000140,(void *)(*plVar1 + 0x48),0x60);
                  fVar30 = (float)FUN_037769c0(&stack0x00000140,0);
                }
                *plVar3 = lVar21;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3,lVar21);
                lVar21 = *in_stack_00000078;
                if (lVar21 != 0) {
                  uVar18 = *puVar2;
                  if (*(uint *)(lVar21 + 0x18) <= uVar18)
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  lVar26 = lVar21 + (long)(int)uVar18 * 0x178;
                  *(undefined4 *)(lVar26 + 0x2c) = 1;
                  *(float *)(lVar26 + 0x160) = fVar28;
                  *(undefined4 *)(unaff_x19 + 0x120) = uVar43;
                  goto LAB_035852d0;
                }
                goto LAB_03586310;
              }
              bVar15 = uVar20 == 0xad;
              lVar21 = *in_stack_00000078;
              fVar32 = 0.0;
              fVar33 = 0.0;
              if (!bVar15 && uVar20 != 3) {
                fVar33 = fVar28;
              }
              if (lVar21 == 0) goto LAB_03586310;
              uVar18 = *puVar2;
              fVar30 = 0.0;
            }
            if (*(uint *)(lVar21 + 0x18) <= uVar18)
            goto UnityEngine_LightProbesQuery__get_IsCreated;
            *(short *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x20) = (short)uVar20;
            if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
            goto LAB_03586310;
            FUN_03776e6c(&stack0x000000c0,lVar21,0);
            in_stack_00000120 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
            in_stack_00000128 = in_stack_000000c8;
            in_stack_00000130 = in_stack_000000d0;
            if ((int)uVar20 < 0x10000) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar18 = FUN_026b63d8(uVar20,0);
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
              if (*plVar3 == 0) goto LAB_03586310;
              uVar24 = *puVar2;
              uVar5 = *(uint *)(*plVar3 + 0x28);
              if ((int)uVar24 < (int)uVar7) {
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar21 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar21 == 0))
                goto LAB_03586310;
                if (*(uint *)(lVar21 + 0x18) <= uVar24 + 1)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                lVar21 = *(long *)(lVar21 + (long)(int)(uVar24 + 1) * 0x178 + 0x30);
                if ((((lVar21 == 0) || (*unaff_x23 == 0)) ||
                    (lVar26 = *(long *)(*unaff_x23 + 0x128), lVar26 == 0)) ||
                   (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_03586310;
                uStack00000000000000c0 = uVar5 | *(int *)(lVar21 + 0x28) << 0x10;
                uVar22 = FUN_0219f8b8(lVar26,&stack0x000000c0,&stack0x000000f8,
                                      *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                uVar43 = 0;
                if ((uVar22 & 1) == 0) {
                  uVar44 = 0;
                  fVar42 = 0.0;
                  uVar45 = 0;
                }
                else {
                  if (in_stack_000000f8 == 0) goto LAB_03586310;
                  uVar43 = *(undefined4 *)(in_stack_000000f8 + 0x14);
                  uVar44 = *(undefined4 *)(in_stack_000000f8 + 0x18);
                  fVar42 = *(float *)(in_stack_000000f8 + 0x1c);
                  uVar45 = *(undefined4 *)(in_stack_000000f8 + 0x20);
                  if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
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
                goto LAB_03586310;
                if (*(uint *)(lVar21 + 0x18) <= uVar24 - 1)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                lVar21 = *(long *)(lVar21 + (ulong)(uVar24 - 1) * 0x178 + 0x30);
                if (((lVar21 == 0) || (*unaff_x23 == 0)) ||
                   ((lVar26 = *(long *)(*unaff_x23 + 0x128), lVar26 == 0 ||
                    (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)))) goto LAB_03586310;
                uStack00000000000000c0 = *(uint *)(lVar21 + 0x28) | uVar5 << 0x10;
                uVar22 = FUN_0219f8b8(lVar26,&stack0x000000c0,&stack0x000000f8,
                                      *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                if ((uVar22 & 1) != 0) {
                  if ((in_stack_000000f8 == 0) ||
                     (FUN_03571cb4(uVar43,uVar44,fVar42,uVar45,
                                   *(undefined4 *)(in_stack_000000f8 + 0x28),
                                   *(undefined4 *)(in_stack_000000f8 + 0x2c),
                                   *(undefined4 *)(in_stack_000000f8 + 0x30),
                                   *(undefined4 *)(in_stack_000000f8 + 0x34),0),
                     in_stack_000000f8 == 0)) goto LAB_03586310;
                  if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
                    fStack0000000000000074 = 0.0;
                  }
                }
              }
              *(float *)(unaff_x19 + 0x2fc) = fVar42;
            }
            fStack0000000000000060 = 0.0;
            fVar31 = *(float *)(unaff_x19 + 0x2b0);
            if (fVar31 != 0.0) {
              if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
              goto LAB_03586310;
              FUN_03776e6c(&stack0x000000c0,lVar21,0);
              in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
              in_stack_00000108 = in_stack_000000c8;
              in_stack_00000110 = in_stack_000000d0;
              fVar34 = (float)FUN_03776c94(&stack0x00000100,0);
              if ((*plVar3 == 0) || (lVar21 = *(long *)(*plVar3 + 0x20), lVar21 == 0))
              goto LAB_03586310;
              FUN_03776e6c(&stack0x000000c0,lVar21,0);
              in_stack_00000100 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
              in_stack_00000108 = in_stack_000000c8;
              in_stack_00000110 = in_stack_000000d0;
              fVar35 = (float)FUN_03776ca4(&stack0x00000100,0);
              fStack0000000000000060 =
                   (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                   (fVar31 * 0.5 - fVar33 * (fVar34 * 0.5 + fVar35));
              *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060
              ;
            }
            iVar17 = *(int *)(unaff_x19 + 0x644);
            fVar31 = 0.0;
            if (((cVar6 == '\0') && (fVar31 = 0.0, iVar17 == 0)) &&
               ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
              if (*unaff_x23 == 0) goto LAB_03586310;
              fVar31 = *(float *)(*unaff_x23 + 0x1b4);
            }
            lVar21 = *in_stack_00000078;
            if (lVar21 == 0) goto LAB_03586310;
            uVar5 = *puVar2;
            lVar26 = (long)(int)uVar5;
            if (*(uint *)(lVar21 + 0x18) <= uVar5) goto UnityEngine_LightProbesQuery__get_IsCreated;
            fVar34 = *(float *)(unaff_x19 + 0x4d8);
            fVar35 = *(float *)(unaff_x19 + 0x61c);
            fVar32 = fVar32 * fVar33;
            *(float *)(lVar21 + lVar26 * 0x178 + 0x14c) = (0.0 - fVar34) + fVar35;
            if (iVar17 == 0) {
              fVar32 = fVar32 / fStack0000000000000068;
              fVar30 = (fVar30 * fVar33) / fStack0000000000000068;
            }
            else {
              fVar30 = fVar30 * fVar33;
            }
            fVar32 = fVar35 + fVar32;
            if ((uVar18 == 0) || (uVar5 == *(uint *)(unaff_x19 + 0x498))) {
              fVar30 = fVar35 + fVar30;
              fVar40 = fVar32;
              fVar39 = fVar30;
              if (fVar35 != 0.0) {
                fVar40 = (fVar32 - fVar35) / *(float *)(unaff_x19 + 0x404);
                fVar39 = (fVar30 - fVar35) / *(float *)(unaff_x19 + 0x404);
                if (fVar40 <= fVar32) {
                  fVar40 = fVar32;
                }
                if (fVar30 <= fVar39) {
                  fVar39 = fVar30;
                }
              }
              lVar21 = lVar21 + lVar26 * 0x178;
              fVar35 = fVar40;
              if (fVar40 <= *(float *)(unaff_x19 + 0x4c8)) {
                fVar35 = *(float *)(unaff_x19 + 0x4c8);
              }
              fVar41 = fVar39;
              if (*(float *)(unaff_x19 + 0x4cc) <= fVar39) {
                fVar41 = *(float *)(unaff_x19 + 0x4cc);
              }
              *(float *)(unaff_x19 + 0x4cc) = fVar41;
              *(float *)(unaff_x19 + 0x4c8) = fVar35;
              *(float *)(lVar21 + 0x154) = fVar40;
              *(float *)(lVar21 + 0x158) = fVar39;
              *(float *)(lVar21 + 0x148) = fVar32 - fVar34;
              *(float *)(unaff_x19 + 0x4c0) = fVar32 - fVar34;
              *(float *)(lVar21 + 0x150) = fVar30 - fVar34;
              *(float *)(unaff_x19 + 0x4c4) = fVar30 - fVar34;
              if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
                *(float *)(unaff_x19 + 0x4b8) = fVar35;
                if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
                fVar30 = *(float *)(unaff_x19 + 0x4bc);
                fVar34 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
                fStack0000000000000068 = (fVar33 * fVar34) / fStack0000000000000068;
                fVar34 = *(float *)(unaff_x19 + 0x4d8);
                if (fVar30 <= fStack0000000000000068) {
                  fVar30 = fStack0000000000000068;
                }
                *(float *)(unaff_x19 + 0x4bc) = fVar30;
              }
            }
            else {
              fVar30 = *(float *)(unaff_x19 + 0x4c8);
              lVar21 = lVar21 + lVar26 * 0x178;
              *(float *)(lVar21 + 0x154) = fVar30;
              fVar35 = *(float *)(unaff_x19 + 0x4cc);
              fVar30 = fVar30 - fVar34;
              *(float *)(lVar21 + 0x148) = fVar30;
              *(float *)(lVar21 + 0x158) = fVar35;
              *(float *)(unaff_x19 + 0x4c0) = fVar30;
              fVar35 = fVar35 - fVar34;
              *(float *)(lVar21 + 0x150) = fVar35;
              *(float *)(unaff_x19 + 0x4c4) = fVar35;
            }
            if (fVar34 == 0.0) {
              if ((uVar18 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
                fVar30 = *(float *)(unaff_x19 + 0x4b4);
                if (*(float *)(unaff_x19 + 0x4b4) <= fVar32) {
                  fVar30 = fVar32;
                }
                *(float *)(unaff_x19 + 0x4b4) = fVar30;
                goto LAB_035857b0;
              }
              bVar16 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
              if (uVar20 == 9) goto LAB_035857c4;
LAB_03585804:
              if ((!(bool)(bVar14 | bVar15 ^ 1U)) || (*(int *)(unaff_x19 + 0x644) == 1))
              goto UnityEngine_Display__Activate;
LAB_03585998:
              fVar28 = *(float *)(unaff_x19 + 0x640);
              if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
                fVar30 = (float)FUN_03776cb4(&stack0x00000120,0);
                if (*unaff_x23 == 0) goto LAB_03586310;
                fVar30 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                         (*(float *)(unaff_x19 + 0x2ac) +
                         fVar33 * (fVar42 + fVar30) +
                         fVar29 * (fVar31 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac))
                         );
              }
              else {
                if (*unaff_x23 == 0) goto LAB_03586310;
                fVar30 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                         (*(float *)(unaff_x19 + 0x2ac) +
                         (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                         fVar29 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
              }
              fVar28 = fVar28 + fVar30;
              *(float *)(unaff_x19 + 0x640) = fVar28;
              if ((uVar20 == 0x200b) || (uVar18 != 0)) {
                fVar28 = fVar28 + fVar29 * *(float *)(unaff_x19 + 0x2b4);
                *(float *)(unaff_x19 + 0x640) = fVar28;
              }
              if (uVar20 == 0xd) {
                if (fStack0000000000000064 <= fStack000000000000006c + fVar28) {
                  fStack0000000000000064 = fStack000000000000006c + fVar28;
                }
                fStack000000000000006c = 0.0;
                fVar28 = *(float *)(unaff_x19 + 0x40c) + 0.0;
                goto LAB_03585a9c;
              }
              bVar16 = uVar20 == 10;
              if (((0xb < uVar20) || ((1 << (ulong)(uVar20 & 0x1f) & 0xc08U) == 0)) &&
                 (1 < uVar20 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
              if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                fVar28 = *(float *)(unaff_x19 + 0x4c8);
                fVar30 = *(float *)(unaff_x19 + 0x4d0);
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                fVar28 = fVar28 - fVar30;
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
              fVar30 = fStack0000000000000044 +
                       fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
              fVar28 = fStack0000000000000064;
              if (fStack0000000000000064 <= fVar30) {
                fVar28 = fVar30;
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
LAB_03585e8c:
                FUN_0358c4f0();
                FUN_0358c4f0();
                uVar18 = *(uint *)(unaff_x19 + 0x494);
                lVar21 = *(long *)(unaff_x19 + 0x488);
                iVar17 = uVar18 + 1;
                *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                *(int *)(unaff_x19 + 0x498) = iVar17;
                if (lVar21 != 0) {
                  if (*(uint *)(lVar21 + 0x18) <= uVar18)
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  fVar28 = *(float *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x154);
                  if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
                    fVar30 = 0.0;
                    if (!(bool)(uVar20 != 0x2029 & (bVar16 ^ 1U))) {
                      fVar30 = *(float *)(unaff_x19 + 0x2cc);
                    }
                    uVar25 = 0;
                    fVar30 = fVar28 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                             fVar38 * (fVar27 + *(float *)(unaff_x19 + 700)) +
                             fVar29 * (*(float *)(unaff_x19 + 0x2b8) + fVar30) +
                             *(float *)(unaff_x19 + 0x4d8);
                  }
                  else {
                    fVar30 = 0.0;
                    if (!(bool)(uVar20 != 0x2029 & (bVar16 ^ 1U))) {
                      fVar30 = *(float *)(unaff_x19 + 0x2cc);
                    }
                    uVar25 = 1;
                    fVar30 = *(float *)(unaff_x19 + 0x4d8) +
                             *(float *)(unaff_x19 + 0x2c0) +
                             fVar29 * (*(float *)(unaff_x19 + 0x2b8) + fVar30);
                  }
                  *(float *)(unaff_x19 + 0x4d8) = fVar30;
                  *(undefined1 *)(unaff_x19 + 0x2c4) = uVar25;
                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar21 = *(long *)puVar12;
                    iVar17 = *puVar2 + 1;
                  }
                  uVar36 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x640) =
                       *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
                  uVar36 = NEON_rev64(uVar36,4);
                  *(float *)(unaff_x19 + 0x4d0) = fVar28;
                  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar36;
                  *(int *)(unaff_x19 + 0x494) = iVar17;
                  fVar28 = fVar33;
                  goto LAB_03586300;
                }
                goto LAB_03586310;
              }
              if ((int)uVar20 < 0x2028) {
                if (uVar20 == 3) {
                  if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
                  uVar19 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
                  uVar20 = 3;
                }
                else if ((uVar20 == 0xb) || (uVar20 == 0x2d)) goto LAB_03585e8c;
              }
              else if (uVar20 - 0x2028 < 2) goto LAB_03585e8c;
            }
            else {
LAB_035857b0:
              bVar16 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
              if (uVar20 == 9) {
LAB_035857c4:
                bVar8 = true;
              }
              else {
                if ((((uVar18 != 0) || (uVar20 == 3)) || (uVar20 == 0x200b)) || (uVar20 == 0xad))
                goto LAB_03585804;
UnityEngine_Display__Activate:
                bVar8 = false;
              }
              fVar34 = *(float *)(unaff_x19 + 0x360);
              fVar35 = *(float *)(unaff_x19 + 0x640);
              fVar30 = (fVar37 - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
              bVar13 = true;
              if ((fVar34 <= fVar30) && (bVar13 = false, !NAN(fVar34))) {
                bVar13 = fVar34 == -1.0;
              }
              if (!bVar13) {
                fVar30 = fVar34;
              }
              fVar34 = (float)FUN_03776cb4(&stack0x00000120,0);
              if (!bVar15) {
                fVar28 = fVar33;
              }
              fVar32 = 1.0;
              if (!bVar16) {
                fVar32 = DAT_00d38acc;
              }
              fStack000000000000005c =
                   ABS(fVar35) + fVar28 * fVar34 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
              if ((fVar32 * fVar30 < fStack000000000000005c && (uVar4 & 1) == 0) &&
                 (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
                uVar19 = FUN_0358c15c();
                lVar21 = *(long *)(unaff_x19 + 0x488);
                if (lVar21 == 0) goto LAB_03586310;
                uVar20 = *(uint *)(unaff_x19 + 0x494);
                uVar18 = uVar20 - 1;
                if (*(uint *)(lVar21 + 0x18) <= uVar18)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                if ((!bVar14 && *(short *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x20) == 0xad) &&
                   (*(int *)(unaff_x19 + 0x2e0) == 0)) {
                  bVar14 = false;
                  in_stack_00000c14 = 0x2d;
                  *puVar2 = uVar18;
                  fVar28 = fVar33;
                  uVar19 = uVar19 - 1;
                  in_stack_00000c10 = uVar18;
                  goto LAB_03586300;
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar20)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                if (*(short *)(lVar21 + (long)(int)uVar20 * 0x178 + 0x20) == 0xad) {
                  bVar14 = true;
                  fVar28 = fVar33;
                }
                else {
                  if ((uStack0000000000000030 & unaff_w24) != 0) {
                    fVar28 = *(float *)(unaff_x19 + 0x2d4);
                    fVar42 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
                    if ((fVar28 < fVar42) &&
                       (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                      fVar27 = fStack000000000000005c;
                      if (0.0 < fVar28) {
                        fVar27 = fStack000000000000005c / (1.0 - fVar28);
                      }
                      fVar28 = fVar28 + (fStack000000000000005c - fVar32 * (fVar30 + DAT_00d38cc4))
                                        / fVar27;
                      if (fVar42 <= fVar28) {
                        fVar28 = fVar42;
                      }
                      *(float *)(unaff_x19 + 0x2d4) = fVar28;
LAB_035863e8:
                      if (DAT_0411f1e3 == '\0') {
                        FUN_01ab69ac(PTR_DAT_03cbeb70);
                        DAT_0411f1e3 = '\x01';
                      }
                      return **(float **)(*(long *)PTR_DAT_03cbeb70 + 0xb8);
                    }
                    if ((*(float *)(unaff_x19 + 0x250) < *unaff_x22) &&
                       (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                      *(float *)(unaff_x19 + 0x23c) = *unaff_x22;
                      fVar27 = (*unaff_x22 - *(float *)(unaff_x19 + 0x240)) * 0.5;
                      if (fVar27 <= DAT_00d38b84) {
                        fVar27 = DAT_00d38b84;
                      }
                      fVar27 = *unaff_x22 - fVar27;
                      *unaff_x22 = fVar27;
                      fVar28 = fVar27 * 20.0 + 0.5;
                      fVar27 = DAT_00d38e60;
                      if (fVar28 != INFINITY) {
                        fVar27 = (float)(int)fVar28 / 20.0;
                      }
                      if (fVar27 <= *(float *)(unaff_x19 + 0x250)) {
                        fVar27 = *(float *)(unaff_x19 + 0x250);
                      }
                      *unaff_x22 = fVar27;
                      goto LAB_035863e8;
                    }
                  }
                  if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                    fVar28 = *(float *)(unaff_x19 + 0x4c8);
                    fVar30 = *(float *)(unaff_x19 + 0x4d0);
                    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    fVar28 = fVar28 - fVar30;
                    if (((fVar11 < ABS(fVar28)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                       (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                      *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar28;
                      *(float *)(unaff_x19 + 0x4d8) = fVar28 + *(float *)(unaff_x19 + 0x4d8);
                    }
                  }
                  fVar42 = *(float *)(unaff_x19 + 0x640);
                  fVar30 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                  fVar28 = *(float *)(unaff_x19 + 0x4c4);
                  if (fVar30 <= *(float *)(unaff_x19 + 0x4c4)) {
                    fVar28 = fVar30;
                  }
                  *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
                  *(float *)(unaff_x19 + 0x4c4) = fVar28;
                  *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
                  if ((uStack0000000000000034 & 1) == 0) {
                    fVar30 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) -
                             fVar30;
                    if (fStack0000000000000038 <= fVar30) {
                      fStack0000000000000038 = fVar30;
                    }
                  }
                  else {
                    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar28;
                  }
                  FUN_0358c4f0();
                  lVar21 = *(long *)(unaff_x19 + 0x488);
                  *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                  if (lVar21 == 0) goto LAB_03586310;
                  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  fVar28 = *(float *)(unaff_x19 + 0x2c0);
                  fVar30 = *(float *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 +
                                     0x154);
                  bVar14 = fVar28 != DAT_00d38ba4;
                  if (bVar14) {
                    fVar31 = fVar29 * *(float *)(unaff_x19 + 0x2b8);
                  }
                  else {
                    fVar31 = fVar30 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                             fVar38 * (fVar27 + *(float *)(unaff_x19 + 700));
                    fVar28 = fVar29 * *(float *)(unaff_x19 + 0x2b8);
                  }
                  *(bool *)(unaff_x19 + 0x2c4) = bVar14;
                  *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar28 + fVar31;
                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar21 = *(long *)puVar12;
                  }
                  bVar14 = false;
                  fStack000000000000006c = fStack000000000000006c + fVar42;
                  uVar36 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
                  uVar36 = NEON_rev64(uVar36,4);
                  *(float *)(unaff_x19 + 0x4d0) = fVar30;
                  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar36;
                  uStack0000000000000030 = 1;
                  fVar28 = fVar33;
                }
                goto LAB_03586300;
              }
              fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
              fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
              if (!bVar8) goto LAB_03585998;
              if (*unaff_x23 == 0) goto LAB_03586310;
              memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
              fVar28 = (float)FUN_03776a48(&stack0x00000140,0);
              if (*unaff_x23 == 0) goto LAB_03586310;
              fVar42 = *(float *)(unaff_x19 + 0x640);
              fVar30 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
              fVar30 = fVar33 * fVar28 * fVar30;
              fVar28 = fVar30 * (float)(int)(fVar42 / fVar30);
              if (fVar28 <= fVar42) {
                fVar28 = fVar42 + fVar30;
              }
LAB_03585a9c:
              bVar16 = false;
              *(float *)(unaff_x19 + 0x640) = fVar28;
LAB_03585aa4:
              if (*puVar2 == uVar7) goto LAB_03585b64;
            }
            if (((uStack0000000000000034 & 1) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
              if ((uVar18 == 0) && (((uVar20 != 0x2d && (uVar20 != 0x200b)) && (uVar20 != 0xad)))) {
                if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
                  if (((((0x2bfd < uVar20 - 0xac01) && (0xfd < uVar20 - 0x1101)) &&
                       (0x1d < uVar20 - 0xa961)) || (uVar22 = FUN_03597a54(0), (uVar22 & 1) != 0))
                     && ((((0xed < uVar20 - 0xff01 && (0x1d < uVar20 - 0xfe31)) &&
                          (0x717d < uVar20 - 0x2e81)) && (0x1fd < uVar20 - 0xf901))))
                  goto LAB_03585adc;
                  lVar21 = FUN_035978e8(0);
                  if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_03586310;
                  uStack00000000000000c0 = uVar20;
                  uVar20 = FUN_0219c130(*(long *)(lVar21 + 0x10),&stack0x000000c0,
                                        *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                  if ((int)uVar7 <= (int)*puVar2) {
                    if (uStack0000000000000030 != 0 || ((uVar20 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
                      FUN_0358c4f0();
                    }
LAB_035862c4:
                    uStack0000000000000030 = 0;
                    bVar9 = true;
                    goto LAB_035862f4;
                  }
                  lVar21 = FUN_035978e8(0);
                  if ((lVar21 == 0) || (lVar26 = *in_stack_00000078, lVar26 == 0))
                  goto LAB_03586310;
                  if (*(uint *)(lVar26 + 0x18) <= *puVar2 + 1) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  if (*(long *)(lVar21 + 0x18) == 0) goto LAB_03586310;
                  uStack00000000000000c0 =
                       (uint)*(ushort *)(lVar26 + (long)(int)(*puVar2 + 1) * 0x178 + 0x20);
                  uVar22 = FUN_0219c130(*(long *)(lVar21 + 0x18),&stack0x000000c0,
                                        *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                  if (uStack0000000000000030 == 0 && ((uVar20 ^ 0xffffffff) & 1) == 0)
                  goto LAB_035862c4;
                  if ((uVar22 & 1) == 0) goto LAB_035862b0;
                  if (uStack0000000000000030 == 0) goto LAB_035862c4;
                  if (uVar18 != 0) {
                    FUN_0358c4f0();
                  }
                  FUN_0358c4f0();
                  bVar9 = true;
LAB_03585ccc:
                  uStack0000000000000030 = 1;
                }
                else {
LAB_03585adc:
                  if (bVar9) {
                    lVar21 = FUN_035978e8(0);
                    if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_03586310;
                    uStack00000000000000c0 = uVar20;
                    uVar22 = FUN_0219c130(*(long *)(lVar21 + 0x10),&stack0x000000c0,
                                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo
                                         );
                    if ((uVar22 & 1) == 0) {
                      FUN_0358c4f0();
                    }
                    bVar9 = false;
                  }
                  else {
                    if (uStack0000000000000030 != 0) {
                      if ((!bVar14 && bVar15) || (uVar18 != 0)) {
                        FUN_0358c4f0();
                      }
                      FUN_0358c4f0();
                      bVar9 = false;
                      goto LAB_03585ccc;
                    }
                    bVar9 = false;
                    uStack0000000000000030 = 0;
                  }
                }
              }
              else {
                if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
                if (((uVar20 - 0x2007 < 0x29) &&
                    ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                   ((uVar20 == 0xa0 || (uVar20 == 0x2060)))) goto LAB_03585d14;
                FUN_0358c4f0();
                bVar9 = false;
                uStack0000000000000030 = 0;
                in_stack_000001a8 = 0xffffffff;
              }
            }
LAB_035862f4:
            *puVar2 = *puVar2 + 1;
            fVar28 = fVar33;
          }
LAB_03586300:
          lVar21 = *(long *)(unaff_x19 + 0x478);
          uVar19 = uVar19 + 1;
          if (lVar21 == 0) goto LAB_03586310;
          goto LAB_035849d0;
        }
      }
    }
  }
LAB_03586310:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


