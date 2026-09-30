/*
FUNCTION_NAME: UnityEngine.Gizmos$$DrawMesh
ENTRY_POINT: 03584584
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_15
*/


float UnityEngine_Gizmos__DrawMesh(void)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  undefined1 uVar27;
  long unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  uint unaff_w26;
  long *unaff_x27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float unaff_s8;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
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
  float fStack00000000000000c0;
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
  
  FUN_0209aa94();
  iVar19 = *(int *)(unaff_x19 + 0x490);
  plVar1 = (long *)(unaff_x19 + 0x488);
  if ((*(long *)(unaff_x19 + 0x488) == 0) ||
     (*(int *)(*(long *)(unaff_x19 + 0x488) + 0x18) < iVar19)) {
    if (iVar19 < 0x401) {
      iVar18 = FUN_036c1d60(iVar19,0);
    }
    else {
      iVar18 = iVar19 + 0x100;
    }
    lVar23 = FUN_01ab6a94(*(undefined8 *)
                           Crosstales_BWF_Manager_PunctuationManager_<>c__DisplayClass28_0_TypeInfo,
                          iVar18);
    *plVar1 = lVar23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    fVar43 = *unaff_x22;
    memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
    iVar18 = FUN_03776950(&stack0x00000140,0);
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
      fVar29 = (float)FUN_03776960(&stack0x00000140,0);
      fVar46 = *unaff_x22;
      *(undefined4 *)(unaff_x19 + 0x404) = 0x3f800000;
      fStack00000000000000c0 = *unaff_x22;
      *(float *)(unaff_x19 + 0x1e8) = fStack00000000000000c0;
      puVar13 = OVRPlugin_OVRP_1_29_0_TypeInfo;
      fVar38 = DAT_00d389a8;
      fVar33 = DAT_00d389a8;
      if (*(char *)(unaff_x19 + 0x305) != '\0') {
        fVar33 = 1.0;
      }
      FUN_0209aa94(unaff_x19 + 0x1f0,&stack0x000000c0,*(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo)
      ;
      fStack00000000000000c0 = *(float *)(unaff_x19 + 0x26c);
      *(undefined4 *)(unaff_x19 + 0x25c) = *(undefined4 *)(unaff_x19 + 600);
      *(float *)(unaff_x19 + 0x278) = fStack00000000000000c0;
      FUN_0209aa94(unaff_x19 + 0x280,&stack0x000000c0,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo)
      ;
      *(undefined4 *)(unaff_x19 + 0x61c) = 0;
      FUN_0209aa1c(unaff_x19 + 0x620,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
      *(undefined4 *)(unaff_x19 + 0x4d8) = 0;
      *(undefined4 *)(unaff_x19 + 0x2c0) = 0xc6fffe00;
      if (*(long *)(unaff_x19 + 0x100) != 0) {
        memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar30 = (float)FUN_03776970(&stack0x00000140,0);
        if (*unaff_x23 != 0) {
          memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
          fVar31 = (float)FUN_03776980(&stack0x00000140,0);
          if (*unaff_x23 != 0) {
            memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
            fVar32 = (float)FUN_037769c0(&stack0x00000140,0);
            *(undefined8 *)(unaff_x19 + 0x2ac) = 0;
            *(undefined4 *)(unaff_x19 + 0x640) = 0;
            *(undefined8 *)(unaff_x19 + 0x408) = 0;
            fStack00000000000000c0 = 0.0;
            FUN_0209aa94(unaff_x19 + 0x410,&stack0x000000c0,*(undefined8 *)puVar13);
            *(undefined1 *)(unaff_x19 + 0x430) = 0;
            *(undefined8 *)(unaff_x19 + 0x494) = 0;
            lVar23 = *unaff_x27;
            uStack0000000000000034 = unaff_w26;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *unaff_x27;
            }
            uVar39 = NEON_rev64(*(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8),4);
            *(undefined4 *)(unaff_x19 + 0x4a8) = 0;
            *(undefined4 *)(unaff_x19 + 0x4d0) = 0;
            *(undefined1 *)(unaff_x19 + 0x2c4) = 0;
            *(undefined8 *)(unaff_x19 + 0x350) = 0;
            *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
            *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
            *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
            *(undefined4 *)(unaff_x19 + 0x4c4) = 0;
            *(undefined8 *)(unaff_x19 + 0x4c8) = uVar39;
            *(undefined1 *)(unaff_x19 + 0x2da) = 0;
            FUN_0359f73c(&stack0x00000c10,0xffffffff,0,0);
            memset(&stack0x00000898,0,0x378);
            memset(&stack0x00000520,0,0x378);
            memset(&stack0x000001a8,0,0x378);
            lVar23 = *(long *)(unaff_x19 + 0x478);
            *(int *)(unaff_x19 + 0x244) = *(int *)(unaff_x19 + 0x244) + 1;
            fVar12 = DAT_00d38d28;
            fVar11 = DAT_00d38938;
            if (lVar23 != 0) {
              plVar2 = (long *)(unaff_x19 + 0x698);
              uVar8 = iVar19 - 1;
              uVar5 = uStack0000000000000034 ^ 1;
              fStack0000000000000064 = 0.0;
              fStack0000000000000048 = 0.0;
              fStack0000000000000044 = 0.0;
              fVar30 = fVar30 - (fVar31 - fVar32);
              fStack000000000000006c = 0.0;
              fStack0000000000000038 = 0.0;
              fVar31 = unaff_s8 + DAT_00d3879c;
              fStack000000000000005c = 0.0;
              fVar29 = (fVar43 / (float)iVar18) * fVar29 * fVar33;
              bVar10 = false;
              bVar15 = false;
              fVar33 = fVar33 * fVar46 * DAT_00d38d28;
              uVar21 = 0;
              puVar3 = (uint *)(unaff_x19 + 0x494);
              plVar4 = (long *)(unaff_x19 + 0x648);
              uStack0000000000000030 = 1;
              fVar43 = fVar29;
LAB_035849d0:
              if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar21) {
LAB_03586314:
                if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00d389f8
                      ) || ((unaff_w24 & 1) == 0)) ||
                    (fVar43 = *unaff_x22, *(float *)(unaff_x19 + 0x254) <= fVar43)) ||
                   (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
                  fVar43 = *(float *)(unaff_x19 + 0x340);
                  fVar38 = *(float *)(unaff_x19 + 0x348);
                  if (fVar43 <= 0.0) {
                    fVar43 = 0.0;
                  }
                  if (fVar38 <= 0.0) {
                    fVar38 = 0.0;
                  }
                  *(undefined1 *)(unaff_x19 + 0x24c) = 1;
                  fVar38 = (fStack000000000000006c + fVar43 + fVar38) * 100.0 + 1.0;
                  fVar43 = DAT_00d387f8;
                  if (fVar38 != INFINITY) {
                    fVar43 = (float)(int)fVar38 / 100.0;
                  }
                  *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                  return fVar43;
                }
                if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
                  *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
                  fVar43 = *unaff_x22;
                }
                *(float *)(unaff_x19 + 0x240) = fVar43;
                fVar43 = (*(float *)(unaff_x19 + 0x23c) - *unaff_x22) * 0.5;
                if (fVar43 <= DAT_00d38b84) {
                  fVar43 = DAT_00d38b84;
                }
                fVar43 = *unaff_x22 + fVar43;
                *unaff_x22 = fVar43;
                fVar38 = fVar43 * 20.0 + 0.5;
                fVar43 = DAT_00d38e60;
                if (fVar38 != INFINITY) {
                  fVar43 = (float)(int)fVar38 / 20.0;
                }
                if (*(float *)(unaff_x19 + 0x254) <= fVar43) {
                  fVar43 = *(float *)(unaff_x19 + 0x254);
                }
                *unaff_x22 = fVar43;
                goto LAB_035863e8;
              }
              if (*(uint *)(lVar23 + 0x18) <= uVar21)
              goto UnityEngine_LightProbesQuery__get_IsCreated;
              uVar22 = *(uint *)(lVar23 + (long)(int)uVar21 * 0xc + 0x20);
              if (uVar22 == 0) goto LAB_03586314;
              if ((uVar22 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
                *(undefined1 *)(unaff_x19 + 0x431) = 1;
                *(undefined4 *)(unaff_x19 + 0x644) = 0;
                uVar24 = FUN_03586568();
                if (((uVar24 & 1) == 0) ||
                   (uVar21 = in_stack_00000118._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
                goto LAB_03584a74;
              }
              else {
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                goto LAB_03586310;
                if (*(uint *)(lVar23 + 0x18) <= *puVar3)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                lVar23 = lVar23 + (long)(int)*puVar3 * 0x178;
                *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar23 + 0x2c);
                *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar23 + 0x58);
                *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar23 + 0x38);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_03584a74:
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                goto LAB_03586310;
                uVar20 = *puVar3;
                if (*(uint *)(lVar23 + 0x18) <= uVar20)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                lVar28 = (long)(int)uVar20;
                cVar7 = *(char *)(lVar23 + lVar28 * 0x178 + 0x5c);
                *(undefined1 *)(unaff_x19 + 0x431) = 0;
                uVar45 = *(undefined4 *)(unaff_x19 + 0x120);
                if (in_stack_00000c10 == uVar20) {
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  if (in_stack_00000c14 == 0x2026) {
                    lVar23 = *plVar1;
                    if (lVar23 != 0) {
                      if (*(uint *)(lVar23 + 0x18) <= uVar20)
                      goto UnityEngine_LightProbesQuery__get_IsCreated;
                      *(undefined8 *)(lVar23 + lVar28 * 0x178 + 0x30) =
                           *(undefined8 *)(unaff_x19 + 0x650);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar23 = *plVar1;
                      if (lVar23 != 0) {
                        if (*(uint *)(lVar23 + 0x18) <= *puVar3)
                        goto UnityEngine_LightProbesQuery__get_IsCreated;
                        lVar23 = lVar23 + (long)(int)*puVar3 * 0x178;
                        *(undefined4 *)(lVar23 + 0x2c) = 0;
                        *(undefined8 *)(lVar23 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        lVar23 = *(long *)(unaff_x19 + 0x488);
                        if (lVar23 != 0) {
                          if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                          goto UnityEngine_LightProbesQuery__get_IsCreated;
                          *(undefined8 *)
                           (lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                               *(undefined8 *)(unaff_x19 + 0x660);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          lVar23 = *plVar1;
                          if (lVar23 != 0) {
                            uVar20 = *puVar3;
                            if (*(uint *)(lVar23 + 0x18) <= uVar20)
                            goto UnityEngine_LightProbesQuery__get_IsCreated;
                            bVar16 = true;
                            in_stack_00000c10 = uVar20 + 1;
                            *(undefined4 *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x58) =
                                 *(undefined4 *)(unaff_x19 + 0x668);
                            uVar22 = 0x2026;
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
                    bVar16 = true;
                    uVar22 = in_stack_00000c14;
                    goto LAB_03584c20;
                  }
                  lVar23 = *plVar1;
                  if (((lVar23 == 0) || (*unaff_x23 == 0)) ||
                     (lVar25 = FUN_03568ac0(*unaff_x23,0), lVar25 == 0)) goto LAB_03586310;
                  FUN_0219b634(lVar25,&stack0x00000c1c,&stack0x000000c0,
                               *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                  if (*(uint *)(lVar23 + 0x18) <= uVar20)
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  *(ulong *)(lVar23 + lVar28 * 0x178 + 0x30) =
                       CONCAT44(uStack00000000000000c4,fStack00000000000000c0);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  bVar16 = true;
                  uVar22 = 3;
                  *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                }
                else {
                  bVar16 = false;
LAB_03584c20:
                  if ((uVar22 != 3) && ((int)uVar20 < *(int *)(unaff_x19 + 0x324))) {
                    lVar23 = *plVar1;
                    if (lVar23 != 0) {
                      if (*(uint *)(lVar23 + 0x18) <= uVar20)
                      goto UnityEngine_LightProbesQuery__get_IsCreated;
                      lVar23 = lVar23 + (long)(int)uVar20 * 0x178;
                      *(undefined1 *)(lVar23 + 0x194) = 0;
                      *(undefined2 *)(lVar23 + 0x20) = 0x200b;
                      *(undefined4 *)(lVar23 + 100) = 0;
                      *puVar3 = uVar20 + 1;
                      goto LAB_03586300;
                    }
                    goto LAB_03586310;
                  }
                }
                iVar19 = *(int *)(unaff_x19 + 0x644);
                if (iVar19 == 0) {
                  uVar20 = *(uint *)(unaff_x19 + 0x25c);
                  if ((uVar20 >> 4 & 1) == 0) {
                    if ((uVar20 >> 3 & 1) == 0) {
                      fStack0000000000000068 = 1.0;
                      if ((uVar20 >> 5 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar24 = FUN_026b812c(uVar22,0);
                        fStack0000000000000068 = 1.0;
                        if ((uVar24 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar22 = FUN_026b8410(uVar22,0);
                          fStack0000000000000068 = fVar11;
                          goto LAB_03584f98;
                        }
                      }
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar24 = FUN_026b8070(uVar22,0);
                      fStack0000000000000068 = 1.0;
                      if ((uVar24 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar22 = FUN_026b8594(uVar22,0);
                        goto LAB_03584f98;
                      }
                    }
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar24 = FUN_026b812c(uVar22,0);
                    fStack0000000000000068 = 1.0;
                    if ((uVar24 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar22 = FUN_026b8410(uVar22,0);
LAB_03584f98:
                      uVar22 = uVar22 & 0xffff;
                    }
                  }
                  iVar19 = *(int *)(unaff_x19 + 0x644);
                  if (iVar19 != 0) goto LAB_03584c80;
LAB_03584fa4:
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                  goto LAB_03586310;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar3)
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  *plVar4 = *(long *)(lVar23 + (long)(int)*puVar3 * 0x178 + 0x30);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4);
                  if (*plVar4 == 0) goto LAB_03586300;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                  goto LAB_03586310;
                  uVar6 = *puVar3;
                  uVar20 = *(uint *)(lVar23 + 0x18);
                  if (uVar20 <= uVar6) goto UnityEngine_LightProbesQuery__get_IsCreated;
                  *(undefined4 *)(unaff_x19 + 0x120) =
                       *(undefined4 *)(lVar23 + (long)(int)uVar6 * 0x178 + 0x58);
                  if (bVar16) {
                    lVar28 = *(long *)(unaff_x19 + 0x478);
                    if (lVar28 == 0) goto LAB_03586310;
                    if (*(uint *)(lVar28 + 0x18) <= uVar21)
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                    if ((*(int *)(lVar28 + (long)(int)uVar21 * 0xc + 0x20) != 10) ||
                       (uVar6 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03585044;
                    if (uVar20 <= uVar6 - 1) goto UnityEngine_LightProbesQuery__get_IsCreated;
                    if (*unaff_x23 == 0) goto LAB_03586310;
                    fVar43 = *(float *)(lVar23 + (long)(int)(uVar6 - 1) * 0x178 + 0x60);
                    iVar19 = FUN_03776950(*unaff_x23 + 0x50,0);
                    lVar23 = *unaff_x23;
                  }
                  else {
LAB_03585044:
                    if (*unaff_x23 == 0) goto LAB_03586310;
                    fVar43 = *(float *)(unaff_x19 + 0x1e8);
                    iVar19 = FUN_03776950(*unaff_x23 + 0x50,0);
                    lVar23 = *(long *)(unaff_x19 + 0x100);
                  }
                  if (lVar23 == 0) goto LAB_03586310;
                  fVar44 = (float)FUN_03776960(lVar23 + 0x50,0);
                  fVar32 = fVar38;
                  if (*(char *)(unaff_x19 + 0x305) != '\0') {
                    fVar32 = 1.0;
                  }
                  fVar46 = 0.0;
                  fVar35 = 0.0;
                  if (!(bool)(bVar16 & uVar22 == 0x2026)) {
                    if (*unaff_x23 == 0) goto LAB_03586310;
                    fVar35 = (float)FUN_03776980(*unaff_x23 + 0x50,0);
                    if (*unaff_x23 == 0) goto LAB_03586310;
                    fVar46 = (float)FUN_037769c0(*unaff_x23 + 0x50,0);
                  }
                  if ((*plVar4 == 0) || (lVar23 = *(long *)(unaff_x19 + 0x488), lVar23 == 0))
                  goto LAB_03586310;
                  uVar20 = *(uint *)(unaff_x19 + 0x494);
                  if (*(uint *)(lVar23 + 0x18) <= uVar20)
                  goto UnityEngine_LightProbesQuery__get_IsCreated;
                  fVar43 = ((fStack0000000000000068 * fVar43) / (float)iVar19) * fVar44 * fVar32 *
                           *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar4 + 0x2c);
                  *(undefined4 *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x2c) = 0;
LAB_035852d0:
                  bVar16 = uVar22 == 0xad;
                  fVar32 = 0.0;
                  if (!bVar16 && uVar22 != 3) {
                    fVar32 = fVar43;
                  }
                }
                else {
                  fStack0000000000000068 = 1.0;
                  if (iVar19 == 0) goto LAB_03584fa4;
LAB_03584c80:
                  if (iVar19 == 1) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                    goto LAB_03586310;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar3)
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                    *(undefined8 *)(unaff_x19 + 0x698) =
                         *(undefined8 *)(lVar23 + (long)(int)*puVar3 * 0x178 + 0x40);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2);
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                    goto LAB_03586310;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar3)
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                    *(undefined4 *)(unaff_x19 + 0x6a4) =
                         *(undefined4 *)(lVar23 + (long)(int)*puVar3 * 0x178 + 0x48);
                    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                       (lVar23 = UnityEngine_Material__DisableKeyword
                                           (*(long *)(unaff_x19 + 0x698),0), lVar23 == 0))
                    goto LAB_03586310;
                    FUN_02215a88(lVar23,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000c0,
                                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                    lVar23 = CONCAT44(uStack00000000000000c4,fStack00000000000000c0);
                    if (lVar23 == 0) goto LAB_03586300;
                    if (uVar22 == 0x3c) {
                      uVar22 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
                    }
                    if (*plVar2 == 0) goto LAB_03586310;
                    memmove(&stack0x00000140,(void *)(*plVar2 + 0x48),0x60);
                    iVar19 = FUN_03776950(&stack0x00000140,0);
                    fVar43 = *(float *)(unaff_x19 + 0x1e8);
                    if (iVar19 < 1) {
                      if (*unaff_x23 == 0) goto LAB_03586310;
                      memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                      iVar19 = FUN_03776950(&stack0x00000140,0);
                      if (*unaff_x23 == 0) goto LAB_03586310;
                      memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar32 = (float)FUN_03776960(&stack0x00000140,0);
                      fVar46 = fVar38;
                      if (*(char *)(unaff_x19 + 0x305) != '\0') {
                        fVar46 = 1.0;
                      }
                      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
                      memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
                      fVar44 = (float)FUN_03776980(&stack0x00000140,0);
                      if (*(long *)(lVar23 + 0x20) == 0) goto LAB_03586310;
                      FUN_03776e6c(&stack0x000000c0,*(long *)(lVar23 + 0x20),0);
                      in_stack_00000100 = CONCAT44(uStack00000000000000c4,fStack00000000000000c0);
                      in_stack_00000108 = in_stack_000000c8;
                      in_stack_00000110 = in_stack_000000d0;
                      fVar34 = (float)FUN_03776c9c(&stack0x00000100,0);
                      if (*(long *)(lVar23 + 0x20) == 0) goto LAB_03586310;
                      fVar37 = *(float *)(lVar23 + 0x2c);
                      fVar36 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                      if (*unaff_x23 == 0) goto LAB_03586310;
                      memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar35 = (float)FUN_03776980(&stack0x00000140,0);
                      if (*unaff_x23 == 0) goto LAB_03586310;
                      fVar46 = (fVar43 / (float)iVar19) * fVar32 * fVar46;
                      fVar43 = fVar46 * (fVar44 / fVar34) * fVar37 * fVar36;
                      fVar46 = fVar46 / fVar43;
                      fVar35 = fVar46 * fVar35;
                      memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                      fVar32 = (float)FUN_037769c0(&stack0x00000140,0);
                      fVar46 = fVar46 * fVar32;
                    }
                    else {
                      if (*plVar2 == 0) goto LAB_03586310;
                      memmove(&stack0x00000140,(void *)(*plVar2 + 0x48),0x60);
                      iVar19 = FUN_03776950(&stack0x00000140,0);
                      if (*plVar2 == 0) goto LAB_03586310;
                      memmove(&stack0x00000140,(void *)(*plVar2 + 0x48),0x60);
                      fVar46 = (float)FUN_03776960(&stack0x00000140,0);
                      if (*(long *)(lVar23 + 0x20) == 0) goto LAB_03586310;
                      fVar44 = *(float *)(lVar23 + 0x2c);
                      fVar32 = fVar38;
                      if (*(char *)(unaff_x19 + 0x305) != '\0') {
                        fVar32 = 1.0;
                      }
                      fVar34 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                      if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03586310;
                      memmove(&stack0x00000140,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
                      fVar35 = (float)FUN_03776980(&stack0x00000140,0);
                      if (*plVar2 == 0) goto LAB_03586310;
                      fVar43 = (fVar43 / (float)iVar19) * fVar46 * fVar32 * fVar44 * fVar34;
                      memmove(&stack0x00000140,(void *)(*plVar2 + 0x48),0x60);
                      fVar46 = (float)FUN_037769c0(&stack0x00000140,0);
                    }
                    *plVar4 = lVar23;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar23)
                    ;
                    lVar23 = *plVar1;
                    if (lVar23 != 0) {
                      uVar20 = *puVar3;
                      if (*(uint *)(lVar23 + 0x18) <= uVar20)
                      goto UnityEngine_LightProbesQuery__get_IsCreated;
                      lVar28 = lVar23 + (long)(int)uVar20 * 0x178;
                      *(undefined4 *)(lVar28 + 0x2c) = 1;
                      *(float *)(lVar28 + 0x160) = fVar43;
                      *(undefined4 *)(unaff_x19 + 0x120) = uVar45;
                      goto LAB_035852d0;
                    }
                    goto LAB_03586310;
                  }
                  bVar16 = uVar22 == 0xad;
                  lVar23 = *plVar1;
                  fVar35 = 0.0;
                  fVar32 = 0.0;
                  if (!bVar16 && uVar22 != 3) {
                    fVar32 = fVar43;
                  }
                  if (lVar23 == 0) goto LAB_03586310;
                  uVar20 = *puVar3;
                  fVar46 = 0.0;
                }
                if (*(uint *)(lVar23 + 0x18) <= uVar20)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                *(short *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x20) = (short)uVar22;
                if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x20), lVar23 == 0))
                goto LAB_03586310;
                FUN_03776e6c(&stack0x000000c0,lVar23,0);
                in_stack_00000120 = CONCAT44(uStack00000000000000c4,fStack00000000000000c0);
                in_stack_00000128 = in_stack_000000c8;
                in_stack_00000130 = in_stack_000000d0;
                if ((int)uVar22 < 0x10000) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar20 = FUN_026b63d8(uVar22,0);
                  uVar20 = uVar20 & 1;
                }
                else {
                  uVar20 = 0;
                }
                fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
                *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
                if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
                  fVar44 = 0.0;
                }
                else {
                  if (*plVar4 == 0) goto LAB_03586310;
                  uVar26 = *puVar3;
                  uVar6 = *(uint *)(*plVar4 + 0x28);
                  if ((int)uVar26 < (int)uVar8) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                    goto LAB_03586310;
                    if (*(uint *)(lVar23 + 0x18) <= uVar26 + 1)
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                    lVar23 = *(long *)(lVar23 + (long)(int)(uVar26 + 1) * 0x178 + 0x30);
                    if ((((lVar23 == 0) || (*unaff_x23 == 0)) ||
                        (lVar28 = *(long *)(*unaff_x23 + 0x128), lVar28 == 0)) ||
                       (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_03586310;
                    fStack00000000000000c0 = (float)(uVar6 | *(int *)(lVar23 + 0x28) << 0x10);
                    uVar24 = FUN_0219f8b8(lVar28,&stack0x000000c0,&stack0x000000f8,
                                          *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo
                                         );
                    uVar45 = 0;
                    if ((uVar24 & 1) == 0) {
                      uVar47 = 0;
                      fVar44 = 0.0;
                      uVar48 = 0;
                    }
                    else {
                      if (in_stack_000000f8 == 0) goto LAB_03586310;
                      uVar45 = *(undefined4 *)(in_stack_000000f8 + 0x14);
                      uVar47 = *(undefined4 *)(in_stack_000000f8 + 0x18);
                      fVar44 = *(float *)(in_stack_000000f8 + 0x1c);
                      uVar48 = *(undefined4 *)(in_stack_000000f8 + 0x20);
                      if ((*(byte *)(in_stack_000000f8 + 0x39) & 1) != 0) {
                        fStack0000000000000074 = 0.0;
                      }
                    }
                    uVar26 = *puVar3;
                  }
                  else {
                    uVar45 = 0;
                    uVar47 = 0;
                    fVar44 = 0.0;
                    uVar48 = 0;
                  }
                  if (0 < (int)uVar26) {
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                    goto LAB_03586310;
                    if (*(uint *)(lVar23 + 0x18) <= uVar26 - 1)
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                    lVar23 = *(long *)(lVar23 + (ulong)(uVar26 - 1) * 0x178 + 0x30);
                    if (((lVar23 == 0) || (*unaff_x23 == 0)) ||
                       ((lVar28 = *(long *)(*unaff_x23 + 0x128), lVar28 == 0 ||
                        (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_03586310;
                    fStack00000000000000c0 = (float)(*(uint *)(lVar23 + 0x28) | uVar6 << 0x10);
                    uVar24 = FUN_0219f8b8(lVar28,&stack0x000000c0,&stack0x000000f8,
                                          *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo
                                         );
                    if ((uVar24 & 1) != 0) {
                      if ((in_stack_000000f8 == 0) ||
                         (FUN_03571cb4(uVar45,uVar47,fVar44,uVar48,
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
                  *(float *)(unaff_x19 + 0x2fc) = fVar44;
                }
                fStack0000000000000060 = 0.0;
                fVar34 = *(float *)(unaff_x19 + 0x2b0);
                if (fVar34 != 0.0) {
                  if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x20), lVar23 == 0))
                  goto LAB_03586310;
                  FUN_03776e6c(&stack0x000000c0,lVar23,0);
                  in_stack_00000100 = CONCAT44(uStack00000000000000c4,fStack00000000000000c0);
                  in_stack_00000108 = in_stack_000000c8;
                  in_stack_00000110 = in_stack_000000d0;
                  fVar36 = (float)FUN_03776c94(&stack0x00000100,0);
                  if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x20), lVar23 == 0))
                  goto LAB_03586310;
                  FUN_03776e6c(&stack0x000000c0,lVar23,0);
                  in_stack_00000100 = CONCAT44(uStack00000000000000c4,fStack00000000000000c0);
                  in_stack_00000108 = in_stack_000000c8;
                  in_stack_00000110 = in_stack_000000d0;
                  fVar37 = (float)FUN_03776ca4(&stack0x00000100,0);
                  fStack0000000000000060 =
                       (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                       (fVar34 * 0.5 - fVar32 * (fVar36 * 0.5 + fVar37));
                  *(float *)(unaff_x19 + 0x640) =
                       *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
                }
                iVar19 = *(int *)(unaff_x19 + 0x644);
                fVar34 = 0.0;
                if (((cVar7 == '\0') && (fVar34 = 0.0, iVar19 == 0)) &&
                   ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
                  if (*unaff_x23 == 0) goto LAB_03586310;
                  fVar34 = *(float *)(*unaff_x23 + 0x1b4);
                }
                lVar23 = *plVar1;
                if (lVar23 == 0) goto LAB_03586310;
                uVar6 = *puVar3;
                lVar28 = (long)(int)uVar6;
                if (*(uint *)(lVar23 + 0x18) <= uVar6)
                goto UnityEngine_LightProbesQuery__get_IsCreated;
                fVar36 = *(float *)(unaff_x19 + 0x4d8);
                fVar37 = *(float *)(unaff_x19 + 0x61c);
                fVar35 = fVar35 * fVar32;
                *(float *)(lVar23 + lVar28 * 0x178 + 0x14c) = (0.0 - fVar36) + fVar37;
                if (iVar19 == 0) {
                  fVar35 = fVar35 / fStack0000000000000068;
                  fVar46 = (fVar46 * fVar32) / fStack0000000000000068;
                }
                else {
                  fVar46 = fVar46 * fVar32;
                }
                fVar35 = fVar37 + fVar35;
                if ((uVar20 == 0) || (uVar6 == *(uint *)(unaff_x19 + 0x498))) {
                  fVar46 = fVar37 + fVar46;
                  fVar41 = fVar35;
                  fVar40 = fVar46;
                  if (fVar37 != 0.0) {
                    fVar41 = (fVar35 - fVar37) / *(float *)(unaff_x19 + 0x404);
                    fVar40 = (fVar46 - fVar37) / *(float *)(unaff_x19 + 0x404);
                    if (fVar41 <= fVar35) {
                      fVar41 = fVar35;
                    }
                    if (fVar46 <= fVar40) {
                      fVar40 = fVar46;
                    }
                  }
                  lVar23 = lVar23 + lVar28 * 0x178;
                  fVar37 = fVar41;
                  if (fVar41 <= *(float *)(unaff_x19 + 0x4c8)) {
                    fVar37 = *(float *)(unaff_x19 + 0x4c8);
                  }
                  fVar42 = fVar40;
                  if (*(float *)(unaff_x19 + 0x4cc) <= fVar40) {
                    fVar42 = *(float *)(unaff_x19 + 0x4cc);
                  }
                  *(float *)(unaff_x19 + 0x4cc) = fVar42;
                  *(float *)(unaff_x19 + 0x4c8) = fVar37;
                  *(float *)(lVar23 + 0x154) = fVar41;
                  *(float *)(lVar23 + 0x158) = fVar40;
                  *(float *)(lVar23 + 0x148) = fVar35 - fVar36;
                  *(float *)(unaff_x19 + 0x4c0) = fVar35 - fVar36;
                  *(float *)(lVar23 + 0x150) = fVar46 - fVar36;
                  *(float *)(unaff_x19 + 0x4c4) = fVar46 - fVar36;
                  if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0'))
                  {
                    *(float *)(unaff_x19 + 0x4b8) = fVar37;
                    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03586310;
                    fVar46 = *(float *)(unaff_x19 + 0x4bc);
                    fVar36 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x100) + 0x50,0);
                    fStack0000000000000068 = (fVar32 * fVar36) / fStack0000000000000068;
                    fVar36 = *(float *)(unaff_x19 + 0x4d8);
                    if (fVar46 <= fStack0000000000000068) {
                      fVar46 = fStack0000000000000068;
                    }
                    *(float *)(unaff_x19 + 0x4bc) = fVar46;
                  }
                }
                else {
                  fVar46 = *(float *)(unaff_x19 + 0x4c8);
                  lVar23 = lVar23 + lVar28 * 0x178;
                  *(float *)(lVar23 + 0x154) = fVar46;
                  fVar37 = *(float *)(unaff_x19 + 0x4cc);
                  fVar46 = fVar46 - fVar36;
                  *(float *)(lVar23 + 0x148) = fVar46;
                  *(float *)(lVar23 + 0x158) = fVar37;
                  *(float *)(unaff_x19 + 0x4c0) = fVar46;
                  fVar37 = fVar37 - fVar36;
                  *(float *)(lVar23 + 0x150) = fVar37;
                  *(float *)(unaff_x19 + 0x4c4) = fVar37;
                }
                if (fVar36 == 0.0) {
                  if ((uVar20 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498)))
                  {
                    fVar46 = *(float *)(unaff_x19 + 0x4b4);
                    if (*(float *)(unaff_x19 + 0x4b4) <= fVar35) {
                      fVar46 = fVar35;
                    }
                    *(float *)(unaff_x19 + 0x4b4) = fVar46;
                    goto LAB_035857b0;
                  }
                  bVar17 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
                  if (uVar22 == 9) goto LAB_035857c4;
LAB_03585804:
                  if ((!(bool)(bVar15 | bVar16 ^ 1U)) || (*(int *)(unaff_x19 + 0x644) == 1))
                  goto UnityEngine_Display__Activate;
LAB_03585998:
                  fVar43 = *(float *)(unaff_x19 + 0x640);
                  if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
                    fVar46 = (float)FUN_03776cb4(&stack0x00000120,0);
                    if (*unaff_x23 == 0) goto LAB_03586310;
                    fVar46 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                             (*(float *)(unaff_x19 + 0x2ac) +
                             fVar32 * (fVar44 + fVar46) +
                             fVar33 * (fVar34 + fStack0000000000000074 +
                                                *(float *)(*unaff_x23 + 0x1ac)));
                  }
                  else {
                    if (*unaff_x23 == 0) goto LAB_03586310;
                    fVar46 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                             (*(float *)(unaff_x19 + 0x2ac) +
                             (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                             fVar33 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
                  }
                  fVar43 = fVar43 + fVar46;
                  *(float *)(unaff_x19 + 0x640) = fVar43;
                  if ((uVar22 == 0x200b) || (uVar20 != 0)) {
                    fVar43 = fVar43 + fVar33 * *(float *)(unaff_x19 + 0x2b4);
                    *(float *)(unaff_x19 + 0x640) = fVar43;
                  }
                  if (uVar22 == 0xd) {
                    if (fStack0000000000000064 <= fStack000000000000006c + fVar43) {
                      fStack0000000000000064 = fStack000000000000006c + fVar43;
                    }
                    fStack000000000000006c = 0.0;
                    fVar43 = *(float *)(unaff_x19 + 0x40c) + 0.0;
                    goto LAB_03585a9c;
                  }
                  bVar17 = uVar22 == 10;
                  if (((0xb < uVar22) || ((1 << (ulong)(uVar22 & 0x1f) & 0xc08U) == 0)) &&
                     (1 < uVar22 - 0x2028)) goto LAB_03585aa4;
LAB_03585b64:
                  if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                    fVar43 = *(float *)(unaff_x19 + 0x4c8);
                    fVar46 = *(float *)(unaff_x19 + 0x4d0);
                    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    fVar43 = fVar43 - fVar46;
                    if (((fVar12 < ABS(fVar43)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                       (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                      *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar43;
                      *(float *)(unaff_x19 + 0x4d8) = fVar43 + *(float *)(unaff_x19 + 0x4d8);
                    }
                  }
                  fVar43 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
                  if (fVar43 <= *(float *)(unaff_x19 + 0x4c4)) {
                    fStack0000000000000038 = fVar43;
                  }
                  fVar46 = fStack0000000000000044 +
                           fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
                  fVar43 = fStack0000000000000064;
                  if (fStack0000000000000064 <= fVar46) {
                    fVar43 = fVar46;
                  }
                  *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
                  fStack000000000000006c = fVar43;
                  if (*(uint *)(unaff_x19 + 0x494) != uVar8) {
                    fStack000000000000006c = 0.0;
                    fStack0000000000000064 = fVar43;
                  }
                  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
                  *(undefined1 *)(unaff_x19 + 0x33c) = 0;
                  if (bVar17) {
LAB_03585e8c:
                    FUN_0358c4f0();
                    FUN_0358c4f0();
                    uVar20 = *(uint *)(unaff_x19 + 0x494);
                    lVar23 = *(long *)(unaff_x19 + 0x488);
                    iVar19 = uVar20 + 1;
                    *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                    *(int *)(unaff_x19 + 0x498) = iVar19;
                    if (lVar23 != 0) {
                      if (*(uint *)(lVar23 + 0x18) <= uVar20)
                      goto UnityEngine_LightProbesQuery__get_IsCreated;
                      fVar43 = *(float *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x154);
                      if (*(float *)(unaff_x19 + 0x2c0) == DAT_00d38ba4) {
                        fVar46 = 0.0;
                        if (!(bool)(uVar22 != 0x2029 & (bVar17 ^ 1U))) {
                          fVar46 = *(float *)(unaff_x19 + 0x2cc);
                        }
                        uVar27 = 0;
                        fVar46 = fVar43 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                                 fVar29 * (fVar30 + *(float *)(unaff_x19 + 700)) +
                                 fVar33 * (*(float *)(unaff_x19 + 0x2b8) + fVar46) +
                                 *(float *)(unaff_x19 + 0x4d8);
                      }
                      else {
                        fVar46 = 0.0;
                        if (!(bool)(uVar22 != 0x2029 & (bVar17 ^ 1U))) {
                          fVar46 = *(float *)(unaff_x19 + 0x2cc);
                        }
                        uVar27 = 1;
                        fVar46 = *(float *)(unaff_x19 + 0x4d8) +
                                 *(float *)(unaff_x19 + 0x2c0) +
                                 fVar33 * (*(float *)(unaff_x19 + 0x2b8) + fVar46);
                      }
                      *(float *)(unaff_x19 + 0x4d8) = fVar46;
                      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar27;
                      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar23 = *(long *)puVar13;
                        iVar19 = *puVar3 + 1;
                      }
                      uVar39 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x640) =
                           *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
                      uVar39 = NEON_rev64(uVar39,4);
                      *(float *)(unaff_x19 + 0x4d0) = fVar43;
                      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar39;
                      *(int *)(unaff_x19 + 0x494) = iVar19;
                      fVar43 = fVar32;
                      goto LAB_03586300;
                    }
                    goto LAB_03586310;
                  }
                  if ((int)uVar22 < 0x2028) {
                    if (uVar22 == 3) {
                      if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03586310;
                      uVar21 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
                      uVar22 = 3;
                    }
                    else if ((uVar22 == 0xb) || (uVar22 == 0x2d)) goto LAB_03585e8c;
                  }
                  else if (uVar22 - 0x2028 < 2) goto LAB_03585e8c;
                }
                else {
LAB_035857b0:
                  bVar17 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
                  if (uVar22 == 9) {
LAB_035857c4:
                    bVar9 = true;
                  }
                  else {
                    if ((((uVar20 != 0) || (uVar22 == 3)) || (uVar22 == 0x200b)) || (uVar22 == 0xad)
                       ) goto LAB_03585804;
UnityEngine_Display__Activate:
                    bVar9 = false;
                  }
                  fVar36 = *(float *)(unaff_x19 + 0x360);
                  fVar37 = *(float *)(unaff_x19 + 0x640);
                  fVar46 = (fVar31 - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
                  bVar14 = true;
                  if ((fVar36 <= fVar46) && (bVar14 = false, !NAN(fVar36))) {
                    bVar14 = fVar36 == -1.0;
                  }
                  if (!bVar14) {
                    fVar46 = fVar36;
                  }
                  fVar36 = (float)FUN_03776cb4(&stack0x00000120,0);
                  if (!bVar16) {
                    fVar43 = fVar32;
                  }
                  fVar35 = 1.0;
                  if (!bVar17) {
                    fVar35 = DAT_00d38acc;
                  }
                  fStack000000000000005c =
                       ABS(fVar37) + fVar43 * fVar36 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
                  if ((fVar35 * fVar46 < fStack000000000000005c && (uVar5 & 1) == 0) &&
                     (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
                    uVar21 = FUN_0358c15c();
                    lVar23 = *(long *)(unaff_x19 + 0x488);
                    if (lVar23 == 0) goto LAB_03586310;
                    uVar22 = *(uint *)(unaff_x19 + 0x494);
                    uVar20 = uVar22 - 1;
                    if (*(uint *)(lVar23 + 0x18) <= uVar20)
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                    if ((!bVar15 && *(short *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x20) == 0xad)
                       && (*(int *)(unaff_x19 + 0x2e0) == 0)) {
                      bVar15 = false;
                      in_stack_00000c14 = 0x2d;
                      *puVar3 = uVar20;
                      fVar43 = fVar32;
                      uVar21 = uVar21 - 1;
                      in_stack_00000c10 = uVar20;
                      goto LAB_03586300;
                    }
                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                    goto UnityEngine_LightProbesQuery__get_IsCreated;
                    if (*(short *)(lVar23 + (long)(int)uVar22 * 0x178 + 0x20) == 0xad) {
                      bVar15 = true;
                      fVar43 = fVar32;
                    }
                    else {
                      if ((uStack0000000000000030 & unaff_w24) != 0) {
                        fVar43 = *(float *)(unaff_x19 + 0x2d4);
                        fVar44 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
                        if ((fVar43 < fVar44) &&
                           (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                          fVar38 = fStack000000000000005c;
                          if (0.0 < fVar43) {
                            fVar38 = fStack000000000000005c / (1.0 - fVar43);
                          }
                          fVar43 = fVar43 + (fStack000000000000005c -
                                            fVar35 * (fVar46 + DAT_00d38cc4)) / fVar38;
                          if (fVar44 <= fVar43) {
                            fVar43 = fVar44;
                          }
                          *(float *)(unaff_x19 + 0x2d4) = fVar43;
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
                          fVar43 = (*unaff_x22 - *(float *)(unaff_x19 + 0x240)) * 0.5;
                          if (fVar43 <= DAT_00d38b84) {
                            fVar43 = DAT_00d38b84;
                          }
                          fVar43 = *unaff_x22 - fVar43;
                          *unaff_x22 = fVar43;
                          fVar38 = fVar43 * 20.0 + 0.5;
                          fVar43 = DAT_00d38e60;
                          if (fVar38 != INFINITY) {
                            fVar43 = (float)(int)fVar38 / 20.0;
                          }
                          if (fVar43 <= *(float *)(unaff_x19 + 0x250)) {
                            fVar43 = *(float *)(unaff_x19 + 0x250);
                          }
                          *unaff_x22 = fVar43;
                          goto LAB_035863e8;
                        }
                      }
                      if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                        fVar43 = *(float *)(unaff_x19 + 0x4c8);
                        fVar46 = *(float *)(unaff_x19 + 0x4d0);
                        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        fVar43 = fVar43 - fVar46;
                        if (((fVar12 < ABS(fVar43)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                           (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                          *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar43;
                          *(float *)(unaff_x19 + 0x4d8) = fVar43 + *(float *)(unaff_x19 + 0x4d8);
                        }
                      }
                      fVar44 = *(float *)(unaff_x19 + 0x640);
                      fVar46 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                      fVar43 = *(float *)(unaff_x19 + 0x4c4);
                      if (fVar46 <= *(float *)(unaff_x19 + 0x4c4)) {
                        fVar43 = fVar46;
                      }
                      *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
                      *(float *)(unaff_x19 + 0x4c4) = fVar43;
                      *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
                      if ((uStack0000000000000034 & 1) == 0) {
                        fVar46 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) -
                                 fVar46;
                        if (fStack0000000000000038 <= fVar46) {
                          fStack0000000000000038 = fVar46;
                        }
                      }
                      else {
                        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar43;
                      }
                      FUN_0358c4f0();
                      lVar23 = *(long *)(unaff_x19 + 0x488);
                      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                      if (lVar23 == 0) goto LAB_03586310;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x494))
                      goto UnityEngine_LightProbesQuery__get_IsCreated;
                      fVar43 = *(float *)(unaff_x19 + 0x2c0);
                      fVar46 = *(float *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 +
                                         0x154);
                      bVar15 = fVar43 != DAT_00d38ba4;
                      if (bVar15) {
                        fVar34 = fVar33 * *(float *)(unaff_x19 + 0x2b8);
                      }
                      else {
                        fVar34 = fVar46 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                                 fVar29 * (fVar30 + *(float *)(unaff_x19 + 700));
                        fVar43 = fVar33 * *(float *)(unaff_x19 + 0x2b8);
                      }
                      *(bool *)(unaff_x19 + 0x2c4) = bVar15;
                      *(float *)(unaff_x19 + 0x4d8) =
                           *(float *)(unaff_x19 + 0x4d8) + fVar43 + fVar34;
                      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar23 = *(long *)puVar13;
                      }
                      bVar15 = false;
                      fStack000000000000006c = fStack000000000000006c + fVar44;
                      uVar39 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
                      uVar39 = NEON_rev64(uVar39,4);
                      *(float *)(unaff_x19 + 0x4d0) = fVar46;
                      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar39;
                      uStack0000000000000030 = 1;
                      fVar43 = fVar32;
                    }
                    goto LAB_03586300;
                  }
                  fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
                  fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
                  if (!bVar9) goto LAB_03585998;
                  if (*unaff_x23 == 0) goto LAB_03586310;
                  memmove(&stack0x00000140,(void *)(*unaff_x23 + 0x50),0x60);
                  fVar43 = (float)FUN_03776a48(&stack0x00000140,0);
                  if (*unaff_x23 == 0) goto LAB_03586310;
                  fVar44 = *(float *)(unaff_x19 + 0x640);
                  fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
                  fVar46 = fVar32 * fVar43 * fVar46;
                  fVar43 = fVar46 * (float)(int)(fVar44 / fVar46);
                  if (fVar43 <= fVar44) {
                    fVar43 = fVar44 + fVar46;
                  }
LAB_03585a9c:
                  bVar17 = false;
                  *(float *)(unaff_x19 + 0x640) = fVar43;
LAB_03585aa4:
                  if (*puVar3 == uVar8) goto LAB_03585b64;
                }
                if (((uStack0000000000000034 & 1) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)
                   ) {
                  if ((uVar20 == 0) &&
                     (((uVar22 != 0x2d && (uVar22 != 0x200b)) && (uVar22 != 0xad)))) {
                    if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03585d14:
                      if (((((0x2bfd < uVar22 - 0xac01) && (0xfd < uVar22 - 0x1101)) &&
                           (0x1d < uVar22 - 0xa961)) ||
                          (uVar24 = FUN_03597a54(0), (uVar24 & 1) != 0)) &&
                         ((((0xed < uVar22 - 0xff01 && (0x1d < uVar22 - 0xfe31)) &&
                           (0x717d < uVar22 - 0x2e81)) && (0x1fd < uVar22 - 0xf901))))
                      goto LAB_03585adc;
                      lVar23 = FUN_035978e8(0);
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_03586310;
                      fStack00000000000000c0 = (float)uVar22;
                      uVar22 = FUN_0219c130(*(long *)(lVar23 + 0x10),&stack0x000000c0,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                      if ((int)uVar8 <= (int)*puVar3) {
                        if (uStack0000000000000030 != 0 || ((uVar22 ^ 0xffffffff) & 1) != 0) {
LAB_035862b0:
                          FUN_0358c4f0();
                        }
LAB_035862c4:
                        uStack0000000000000030 = 0;
                        bVar10 = true;
                        goto LAB_035862f4;
                      }
                      lVar23 = FUN_035978e8(0);
                      if ((lVar23 == 0) || (lVar28 = *plVar1, lVar28 == 0)) goto LAB_03586310;
                      if (*(uint *)(lVar28 + 0x18) <= *puVar3 + 1) {
UnityEngine_LightProbesQuery__get_IsCreated:
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      if (*(long *)(lVar23 + 0x18) == 0) goto LAB_03586310;
                      fStack00000000000000c0 =
                           (float)(uint)*(ushort *)
                                         (lVar28 + (long)(int)(*puVar3 + 1) * 0x178 + 0x20);
                      uVar24 = FUN_0219c130(*(long *)(lVar23 + 0x18),&stack0x000000c0,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                      if (uStack0000000000000030 == 0 && ((uVar22 ^ 0xffffffff) & 1) == 0)
                      goto LAB_035862c4;
                      if ((uVar24 & 1) == 0) goto LAB_035862b0;
                      if (uStack0000000000000030 == 0) goto LAB_035862c4;
                      if (uVar20 != 0) {
                        FUN_0358c4f0();
                      }
                      FUN_0358c4f0();
                      bVar10 = true;
LAB_03585ccc:
                      uStack0000000000000030 = 1;
                    }
                    else {
LAB_03585adc:
                      if (bVar10) {
                        lVar23 = FUN_035978e8(0);
                        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_03586310;
                        fStack00000000000000c0 = (float)uVar22;
                        uVar24 = FUN_0219c130(*(long *)(lVar23 + 0x10),&stack0x000000c0,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                        if ((uVar24 & 1) == 0) {
                          FUN_0358c4f0();
                        }
                        bVar10 = false;
                      }
                      else {
                        if (uStack0000000000000030 != 0) {
                          if ((!bVar15 && bVar16) || (uVar20 != 0)) {
                            FUN_0358c4f0();
                          }
                          FUN_0358c4f0();
                          bVar10 = false;
                          goto LAB_03585ccc;
                        }
                        bVar10 = false;
                        uStack0000000000000030 = 0;
                      }
                    }
                  }
                  else {
                    if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03585adc;
                    if (((uVar22 - 0x2007 < 0x29) &&
                        ((1L << ((ulong)(uVar22 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                       ((uVar22 == 0xa0 || (uVar22 == 0x2060)))) goto LAB_03585d14;
                    FUN_0358c4f0();
                    bVar10 = false;
                    uStack0000000000000030 = 0;
                    in_stack_000001a8 = 0xffffffff;
                  }
                }
LAB_035862f4:
                *puVar3 = *puVar3 + 1;
                fVar43 = fVar32;
              }
LAB_03586300:
              lVar23 = *(long *)(unaff_x19 + 0x478);
              uVar21 = uVar21 + 1;
              if (lVar23 == 0) goto LAB_03586310;
              goto LAB_035849d0;
            }
          }
        }
      }
    }
  }
LAB_03586310:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


