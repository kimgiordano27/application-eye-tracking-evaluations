/*
FUNCTION_NAME: UnityEngine.AudioSource$$GetSpectrumData
ENTRY_POINT: 03565730
PROGRAM: vrlegs-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4 UnityEngine_AudioSource__GetSpectrumData(undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  char in_NG;
  char in_OV;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  uint in_w8;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar20;
  uint unaff_w22;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 uVar25;
  long *unaff_x24;
  undefined8 uVar26;
  long *unaff_x25;
  ulong uVar27;
  long *unaff_x27;
  uint *puVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000038;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  uint uStack00000000000001b8;
  undefined1 uStack00000000000001bc;
  
  while (in_NG != in_OV) {
    if (in_w8 <= unaff_w22) goto LAB_035660f8;
    puVar28 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
    if (*puVar28 == 0) break;
    if (*unaff_x20 == 0) goto LAB_03566068;
    plVar22 = (long *)(*unaff_x20 + 0x38);
    lVar21 = *plVar22;
    iVar11 = *(int *)(unaff_x19 + 0x490);
    if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) <= iVar11)) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar22,iVar11 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
      in_w8 = *(uint *)(unaff_x21 + 0x18);
    }
    if (in_w8 <= unaff_w22) goto LAB_035660f8;
    uVar9 = *puVar28;
    if ((uVar9 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
      uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar20 = FUN_03586568();
      uVar7 = uStack00000000000001b8;
      if ((uVar20 & 1) == 0) goto LAB_035649d0;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
      iVar11 = *(int *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
      if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x26a) = 1;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      unaff_w22 = uStack00000000000001b8;
      if (*(int *)(unaff_x19 + 0x644) == 1) {
        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar6;
        }
        lVar21 = **(long **)(lVar21 + 0xb8);
        if (lVar21 != 0) {
          if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
            *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
            if ((*unaff_x20 != 0) && (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 != 0)) {
              if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar21 + 0x18)) {
                uVar8 = *(undefined4 *)(unaff_x19 + 0x6a4);
                lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                *(short *)(lVar21 + 0x20) = (short)uVar8 + -0x2000;
                *(undefined4 *)(lVar21 + 0x48) = uVar8;
                *(long *)(lVar21 + 0x38) = *in_stack_00000038;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if ((*unaff_x20 != 0) && (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar21 + 0x18)) {
                    *(undefined8 *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40)
                         = *(undefined8 *)(unaff_x19 + 0x698);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    if ((*unaff_x20 != 0) && (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 != 0)) {
                      uVar9 = *(uint *)(unaff_x19 + 0x490);
                      if (uVar9 < *(uint *)(lVar21 + 0x18)) {
                        *(undefined4 *)(lVar21 + (long)(int)uVar9 * 0x178 + 0x58) =
                             *(undefined4 *)(unaff_x19 + 0x120);
                        if ((*(long *)(unaff_x19 + 0x698) != 0) &&
                           (lVar13 = UnityEngine_Material__DisableKeyword
                                               (*(long *)(unaff_x19 + 0x698),0), lVar13 != 0)) {
                          FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                                       *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                          if (uVar9 < *(uint *)(lVar21 + 0x18)) {
                            *(undefined8 *)(lVar21 + (long)(int)uVar9 * 0x178 + 0x30) =
                                 in_stack_000000e0;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            if ((*unaff_x20 != 0) &&
                               (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 != 0)) {
                              uVar9 = *(uint *)(unaff_x19 + 0x490);
                              if (uVar9 < *(uint *)(lVar21 + 0x18)) {
                                uVar8 = *(undefined4 *)(unaff_x19 + 0x644);
                                lVar13 = lVar21 + (long)(int)uVar9 * 0x178;
                                *(int *)(lVar13 + 0x24) = iVar11;
                                *(undefined4 *)(lVar13 + 0x2c) = uVar8;
                                if (uVar7 < *(uint *)(unaff_x21 + 0x18)) {
                                  *(int *)(lVar21 + (long)(int)uVar9 * 0x178 + 0x28) =
                                       (*(int *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24) - iVar11
                                       ) + 1;
                                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                                  *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
                                  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                                  unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  unaff_x25 = in_stack_00000038;
                                  unaff_w22 = uVar7;
                                  goto LAB_0356571c;
                                }
                              }
                              goto LAB_035660f8;
                            }
                            goto LAB_03566068;
                          }
                          goto LAB_035660f8;
                        }
                        goto LAB_03566068;
                      }
                      goto LAB_035660f8;
                    }
                    goto LAB_03566068;
                  }
                  goto LAB_035660f8;
                }
                goto LAB_03566068;
              }
              goto LAB_035660f8;
            }
            goto LAB_03566068;
          }
          goto LAB_035660f8;
        }
        goto LAB_03566068;
      }
    }
    else {
LAB_035649d0:
      uStack00000000000001bc = 0;
      uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar25 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
      if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_03564aac;
      uVar7 = *(uint *)(unaff_x19 + 0x25c);
      if ((uVar7 >> 4 & 1) == 0) {
        if ((uVar7 >> 3 & 1) == 0) {
          if ((uVar7 >> 5 & 1) != 0) goto LAB_03564a00;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b8070(uVar9,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_026b8594(uVar9,0);
            goto LAB_03564aa8;
          }
        }
      }
      else {
LAB_03564a00:
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b812c(uVar9,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = FUN_026b8410(uVar9,0);
LAB_03564aa8:
          uVar9 = uVar9 & 0xffff;
        }
      }
LAB_03564aac:
      lVar21 = FUN_03591848();
      if (lVar21 == 0) {
        iVar11 = FUN_035975f8();
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
        if (iVar11 == 0) {
          uVar7 = 0x25a1;
        }
        else {
          uVar7 = FUN_035975f8(0);
        }
        *puVar28 = uVar7;
        uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar21 = FUN_03570fc4(uVar7,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
        if (lVar21 == 0) {
          lVar21 = FUN_03597770();
          if (lVar21 != 0) {
            lVar21 = FUN_03597770(0);
            if (lVar21 == 0) goto LAB_03566068;
            if (0 < *(int *)(lVar21 + 0x18)) {
              uVar26 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar23 = FUN_03597770(0);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              lVar21 = FUN_035714e4(uVar7,uVar26,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
              if (lVar21 != 0) goto LAB_03564b5c;
            }
          }
          uVar23 = FUN_03597650(0);
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
          }
          uVar20 = FUN_036cee6c(uVar23,0,0);
          if ((uVar20 & 1) != 0) {
            uVar23 = FUN_03597650(0);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
            }
            lVar21 = FUN_03570fc4(uVar7,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
            if (lVar21 != 0) goto LAB_03564b5c;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
          *puVar28 = 0x20;
          uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = 0x20;
          lVar21 = FUN_03570fc4(0x20,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
          if (lVar21 == 0) {
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
            *puVar28 = 3;
            uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = 3;
            lVar21 = FUN_03570fc4(3,uVar23,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
          }
        }
LAB_03564b5c:
        uVar20 = FUN_03597634(0);
        if ((uVar20 & 1) == 0) {
          plVar22 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
          if ((int)uVar9 < 0x10000) {
            in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
            lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
            if (plVar22 == (long *)0x0) goto LAB_03566068;
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if ((int)plVar22[3] == 0) goto LAB_035660f8;
            plVar22[4] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22 + 4,lVar13);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
            lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar22 + 3) < 2) goto LAB_035660f8;
            plVar22[5] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22 + 5,lVar13);
            if (lVar21 == 0) goto LAB_03566068;
            in_stack_00000168._4_4_ = *(undefined4 *)(lVar21 + 0x14);
            lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar22 + 3) < 3) goto LAB_035660f8;
            plVar22[6] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22 + 6,lVar13);
            lVar13 = FUN_036d3824();
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar22 + 3) < 4) goto LAB_035660f8;
            plVar22[7] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22 + 7,lVar13);
            puVar16 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
          }
          else {
            in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
            lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
            if (plVar22 == (long *)0x0) goto LAB_03566068;
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if ((int)plVar22[3] == 0) goto LAB_035660f8;
            plVar22[4] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22 + 4,lVar13);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03566068;
            lVar13 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar22 + 3) < 2) goto LAB_035660f8;
            plVar22[5] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22 + 5,lVar13);
            if (lVar21 == 0) goto LAB_03566068;
            in_stack_00000168._4_4_ = *(undefined4 *)(lVar21 + 0x14);
            lVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4);
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar22 + 3) < 3) goto LAB_035660f8;
            plVar22[6] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22 + 6,lVar13);
            lVar13 = FUN_036d3824();
            if ((lVar13 != 0) &&
               (lVar29 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar22 + 0x40)), lVar29 == 0))
            goto LAB_035660fc;
            if (*(uint *)(plVar22 + 3) < 4) goto LAB_035660f8;
            plVar22[7] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22 + 7,lVar13);
            puVar16 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
          }
          uVar23 = FUN_025be8f4(*puVar16,plVar22,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0367b470(uVar23);
          unaff_x25 = in_stack_00000038;
          uVar9 = uVar7;
        }
        else {
          unaff_x25 = in_stack_00000038;
          uVar9 = uVar7;
          if (lVar21 == 0) goto LAB_03566068;
        }
      }
      if (*(char *)(lVar21 + 0x10) == '\x01') {
        lVar13 = *(long *)(lVar21 + 0x18);
        if (lVar13 == 0) goto LAB_03566068;
        iVar11 = *(int *)(lVar13 + 0x18);
        if (iVar11 == 0) {
          iVar11 = FUN_036d3364(lVar13,0);
          *(int *)(lVar13 + 0x18) = iVar11;
        }
        lVar13 = *unaff_x25;
        if (lVar13 == 0) goto LAB_03566068;
        iVar12 = *(int *)(lVar13 + 0x18);
        if (iVar12 == 0) {
          iVar12 = FUN_036d3364(lVar13,0);
          *(int *)(lVar13 + 0x18) = iVar12;
        }
        if (iVar11 == iVar12) {
          bVar4 = false;
        }
        else {
          plVar22 = *(long **)(lVar21 + 0x18);
          if (plVar22 == (long *)0x0) {
            plVar22 = (long *)0x0;
            *unaff_x25 = 0;
          }
          else {
            lVar13 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
            bVar3 = *(byte *)(lVar13 + 0x130);
            if (*(byte *)(*plVar22 + 0x130) < bVar3) {
              plVar24 = (long *)0x0;
            }
            else {
              plVar24 = plVar22;
              if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
                plVar24 = (long *)0x0;
              }
            }
            *unaff_x25 = (long)plVar24;
            if (*(byte *)(*plVar22 + 0x130) < bVar3) {
              plVar22 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar13) {
              plVar22 = (long *)0x0;
            }
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,plVar22);
          bVar4 = true;
        }
      }
      else {
        bVar4 = false;
      }
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
      lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      plVar22 = (long *)(lVar13 + 0x30);
      *plVar22 = lVar21;
      *(undefined4 *)(lVar13 + 0x2c) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22,lVar21);
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
      goto LAB_03566068;
      uVar7 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_035660f8;
      lVar29 = lVar13 + (long)(int)uVar7 * 0x178;
      *(short *)(lVar29 + 0x20) = (short)uVar9;
      *(undefined1 *)(lVar29 + 0x5c) = uStack00000000000001bc;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_035660f8;
      lVar13 = lVar13 + (long)(int)uVar7 * 0x178;
      *(undefined8 *)(lVar13 + 0x24) =
           *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x24);
      *(long *)(lVar13 + 0x38) = *unaff_x25;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(char *)(lVar21 + 0x10) == '\x02') {
        plVar22 = *(long **)(lVar21 + 0x18);
        if (plVar22 == (long *)0x0) goto LAB_03566068;
        bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
        if ((*(byte *)(*plVar22 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_03566068;
        lVar29 = plVar22[4];
        lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *unaff_x24;
        }
        uVar9 = FUN_03558224(lVar29,plVar22,*(long *)(lVar13 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
        lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
        *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
        if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
        *(undefined4 *)(lVar13 + 0x2c) = 1;
        uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
        *(undefined8 *)(lVar13 + 0x40) = plVar22;
        *(undefined4 *)(lVar13 + 0x58) = uVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar13 + 0x40),plVar22);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
        goto LAB_03566068;
        uVar9 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
        *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x48) = *(undefined4 *)(lVar21 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
        unaff_x25 = in_stack_00000038;
        unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
      }
      else {
        if (bVar4) {
          lVar13 = *unaff_x25;
          if (lVar13 == 0) goto LAB_03566068;
          iVar11 = *(int *)(lVar13 + 0x18);
          if (iVar11 == 0) {
            iVar11 = FUN_036d3364(lVar13,0);
            *(int *)(lVar13 + 0x18) = iVar11;
          }
          lVar13 = *(long *)(unaff_x19 + 0xf8);
          if (lVar13 == 0) goto LAB_03566068;
          iVar12 = *(int *)(lVar13 + 0x18);
          if (iVar12 == 0) {
            iVar12 = FUN_036d3364(lVar13,0);
            *(int *)(lVar13 + 0x18) = iVar12;
          }
          if (iVar11 != iVar12) {
            uVar20 = FUN_0359778c(0);
            if ((uVar20 & 1) == 0) {
              if (*unaff_x25 == 0) goto LAB_03566068;
              uVar23 = *(undefined8 *)(*unaff_x25 + 0x20);
            }
            else {
              if (*unaff_x25 == 0) goto LAB_03566068;
              uVar26 = *(undefined8 *)(*unaff_x25 + 0x20);
              uVar23 = *in_stack_00000028;
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar23 = FUN_03594e9c(uVar23,uVar26,0);
              unaff_x25 = in_stack_00000038;
            }
            *in_stack_00000028 = uVar23;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
            lVar13 = *unaff_x24;
            uVar23 = *in_stack_00000028;
            lVar29 = *unaff_x25;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *unaff_x24;
            }
            uVar8 = FUN_03557fec(uVar23,lVar29,*(long *)(lVar13 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
            *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
            unaff_x25 = in_stack_00000038;
          }
        }
        if (*(long *)(lVar21 + 0x20) == 0) goto LAB_03566068;
        iVar11 = FUN_03776eb8(*(long *)(lVar21 + 0x20),0);
        if (0 < iVar11) {
          if (*(long *)(lVar21 + 0x20) == 0) goto LAB_03566068;
          lVar13 = *unaff_x25;
          uVar23 = *in_stack_00000028;
          uVar8 = FUN_03776eb8(*(long *)(lVar21 + 0x20),0);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
          }
          uVar23 = FUN_03594928(lVar13,uVar23,uVar8,0);
          *in_stack_00000028 = uVar23;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (in_stack_00000028,uVar23);
          lVar21 = *unaff_x24;
          uVar23 = *in_stack_00000028;
          lVar13 = *unaff_x25;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar21 = *unaff_x24;
          }
          uVar8 = FUN_03557fec(uVar23,lVar13,*(long *)(lVar21 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
          bVar4 = true;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
          unaff_x25 = in_stack_00000038;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b63d8(uVar9,0);
        unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
        if ((uVar9 != 0x200b) && ((uVar20 & 1) == 0)) {
          lVar21 = *unaff_x24;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar21);
            lVar21 = *unaff_x24;
          }
          lVar13 = **(long **)(lVar21 + 0xb8);
          if (lVar13 == 0) goto LAB_03566068;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
          if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
          if (*(int *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar21);
              lVar13 = **(long **)(*unaff_x24 + 0xb8);
              if (lVar13 == 0) goto LAB_03566068;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
          }
          else {
            uVar26 = *in_stack_00000028;
            uVar23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
            FUN_0369922c(uVar23,uVar26,0);
            lVar21 = *unaff_x24;
            lVar13 = *unaff_x25;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar21 = *unaff_x24;
            }
            uVar9 = FUN_03557fec(uVar23,lVar13,*(long *)(lVar21 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar9;
            lVar13 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar13 == 0) goto LAB_03566068;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
          lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
          *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
        }
        if ((*unaff_x20 == 0) || (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        *(undefined8 *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
             *in_stack_00000028;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*unaff_x20 == 0) || (lVar21 = *(long *)(*unaff_x20 + 0x38), lVar21 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_035660f8;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
        *(uint *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
        lVar21 = *unaff_x24;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *unaff_x24;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
        }
        lVar13 = **(long **)(lVar21 + 0xb8);
        if (lVar13 == 0) goto LAB_03566068;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
        *(bool *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
        if (bVar4) {
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar13 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar13 == 0) goto LAB_03566068;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_035660f8;
          puVar16 = (undefined8 *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x48);
          *puVar16 = uVar25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,uVar25);
          *(undefined8 *)(unaff_x19 + 0x100) = uVar19;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (in_stack_00000028,uVar25);
          *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
        }
        uVar9 = *(uint *)(unaff_x19 + 0x490);
      }
LAB_0356571c:
      *(uint *)(unaff_x19 + 0x490) = uVar9 + 1;
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    in_OV = SBORROW4(unaff_w22,in_w8);
    in_NG = (int)(unaff_w22 - in_w8) < 0;
  }
  if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
    *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
LAB_03565748:
    return *(undefined4 *)(unaff_x19 + 0x490);
  }
  lVar21 = *unaff_x20;
  if (lVar21 != 0) {
    *(int *)(lVar21 + 0x1c) = in_stack_00000020._4_4_;
    lVar13 = *unaff_x24;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *unaff_x24;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
    if (lVar13 != 0) {
      uVar9 = FUN_0219b384(lVar13,*(undefined8 *)PTR_DAT_03ceb270);
      *(uint *)(lVar21 + 0x34) = uVar9;
      if (*unaff_x20 != 0) {
        plVar22 = (long *)(*unaff_x20 + 0x60);
        lVar21 = *plVar22;
        if (lVar21 != 0) {
          uVar20 = (ulong)uVar9;
          if (*(int *)(lVar21 + 0x18) < (int)uVar9) {
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar22,uVar20,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
          }
          if (*(long *)(unaff_x19 + 0x708) != 0) {
            plVar22 = (long *)(unaff_x19 + 0x708);
            if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
              uVar10 = FUN_036c1d60(uVar9 + 1,0);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*unaff_x27);
              }
              FUN_01ff025c(plVar22,uVar10,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
            }
            if (*(char *)(unaff_x19 + 0x321) != '\0') {
              if (*unaff_x20 == 0) goto LAB_03566068;
              plVar24 = (long *)(*unaff_x20 + 0x38);
              lVar21 = *plVar24;
              if (lVar21 == 0) goto LAB_03566068;
              iVar11 = *(int *)(unaff_x19 + 0x490);
              if (0x100 < *(int *)(lVar21 + 0x18) - iVar11) {
                iVar12 = 0x100;
                if (0x100 < iVar11 + 1) {
                  iVar12 = iVar11 + 1;
                }
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff02b8(plVar24,iVar12,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
            }
            fVar5 = DAT_00d38798;
            if (0 < (int)uVar9) {
              lVar21 = 0;
              uVar27 = 0;
              lVar13 = 0x54;
              lVar29 = 0x20;
              do {
                fVar33 = (float)param_2;
                if (uVar27 != 0) {
                  lVar17 = *plVar22;
                  if (lVar17 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                  uVar25 = *(undefined8 *)(lVar17 + uVar27 * 8 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_036d35a8(uVar25,0,0);
                  if ((uVar14 & 1) != 0) {
                    lVar17 = *unaff_x24;
                    plVar24 = (long *)*plVar22;
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar17 = *unaff_x24;
                    }
                    lVar17 = **(long **)(lVar17 + 0xb8);
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar17 = lVar17 + lVar13;
                    in_stack_00000160 = *(undefined8 *)(lVar17 + -4);
                    in_stack_00000158 = *(undefined8 *)(lVar17 + -0xc);
                    in_stack_00000150 = *(undefined8 *)(lVar17 + -0x14);
                    in_stack_00000148 = *(undefined8 *)(lVar17 + -0x1c);
                    uVar25 = *(undefined8 *)(lVar17 + -0x24);
                    in_stack_00000138 = *(undefined8 *)(lVar17 + -0x2c);
                    in_stack_00000130 = *(undefined8 *)(lVar17 + -0x34);
                    in_stack_00000140 = uVar25;
                    lVar17 = FUN_0359e964();
                    fVar33 = (float)uVar25;
                    if (plVar24 == (long *)0x0) goto LAB_03566068;
                    if ((lVar17 != 0) &&
                       (lVar15 = thunk_FUN_01a89d6c(lVar17,*(undefined8 *)(*plVar24 + 0x40)),
                       lVar15 == 0)) {
LAB_035660fc:
                      uVar25 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6b14(uVar25,0);
                    }
                    if (*(uint *)(plVar24 + 3) <= uVar27) goto LAB_035660f8;
                    plVar24[uVar27 + 4] = lVar17;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((long)plVar24 + lVar29,lVar17);
                    unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
                    goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    puVar16 = (undefined8 *)(lVar17 + lVar21 + 0x30);
                    *puVar16 = 0;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,0);
                  }
                  if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
                  fVar30 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
                  lVar17 = *plVar22;
                  if (lVar17 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                  lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                  if ((lVar17 == 0) ||
                     (fVar32 = fVar33, lVar17 = FUN_037b4844(lVar17,0), lVar17 == 0))
                  goto LAB_03566068;
                  fVar31 = (float)FUN_036dba50(lVar17,0);
                  fVar33 = (fVar33 - fVar32) * (fVar33 - fVar32);
                  param_2 = (ulong)(uint)fVar33;
                  if (fVar5 <= (fVar30 - fVar31) * (fVar30 - fVar31) + fVar33) {
                    lVar17 = *plVar22;
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                    if (lVar17 == 0) goto LAB_03566068;
                    lVar17 = FUN_037b4844(lVar17,0);
                    if ((*(long *)(unaff_x19 + 0x380) == 0) ||
                       (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar17 == 0))
                    goto LAB_03566068;
                    FUN_036dbae0(lVar17,0);
                  }
                  lVar17 = *plVar22;
                  if (lVar17 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                  lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                  if (lVar17 == 0) goto LAB_03566068;
                  uVar25 = *(undefined8 *)(lVar17 + 0xf0);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_036d35a8(uVar25,0,0);
                  if ((uVar14 & 1) == 0) {
                    lVar17 = *plVar22;
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                    if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0xf0), lVar17 == 0))
                    goto LAB_03566068;
                    iVar11 = FUN_036d3364(lVar17,0);
                    lVar17 = *unaff_x24;
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(lVar17);
                      lVar17 = *unaff_x24;
                    }
                    lVar17 = **(long **)(lVar17 + 0xb8);
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar17 = *(long *)(lVar17 + lVar13 + -0x1c);
                    if (lVar17 == 0) goto LAB_03566068;
                    iVar12 = FUN_036d3364(lVar17,0);
                    if (iVar11 != iVar12) goto LAB_03565b98;
                  }
                  else {
LAB_03565b98:
                    lVar17 = *plVar22;
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar15 = *unaff_x24;
                    lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                    if (*(int *)(lVar15 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar15 = *unaff_x24;
                    }
                    lVar15 = **(long **)(lVar15 + 0xb8);
                    if (lVar15 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                    if (lVar17 == 0) goto LAB_03566068;
                    thunk_FUN_0359e5ac(lVar17,*(undefined8 *)(lVar15 + lVar13 + -0x1c),0);
                    lVar17 = *plVar22;
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar15 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar15 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                    if (lVar17 == 0) goto LAB_03566068;
                    *(undefined8 *)(lVar17 + 0xd8) = *(undefined8 *)(lVar15 + lVar13 + -0x2c);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    lVar17 = *plVar22;
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar15 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar15 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                    if (lVar17 == 0) goto LAB_03566068;
                    *(undefined8 *)(lVar17 + 0xe0) = *(undefined8 *)(lVar15 + lVar13 + -0x24);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  }
                  lVar17 = *unaff_x24;
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar17 = *unaff_x24;
                  }
                  lVar15 = **(long **)(lVar17 + 0xb8);
                  if (lVar15 == 0) goto LAB_03566068;
                  if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                  if (*(char *)(lVar15 + lVar13 + -0x13) != '\0') {
                    lVar18 = *plVar22;
                    if (lVar18 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar15 = **(long **)(*unaff_x24 + 0xb8);
                      if (lVar15 == 0) goto LAB_03566068;
                    }
                    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                    if (lVar18 == 0) goto LAB_03566068;
                    FUN_0359e608(lVar18,*(undefined8 *)(lVar15 + lVar13 + -0x1c),0);
                    lVar17 = *plVar22;
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar15 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar15 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                    if (lVar17 == 0) goto LAB_03566068;
                    *(undefined8 *)(lVar17 + 0x100) = *(undefined8 *)(lVar15 + lVar13 + -0xc);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (lVar17 + 0x100);
                  }
                }
                lVar17 = *unaff_x24;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar17 = *unaff_x24;
                }
                lVar17 = **(long **)(lVar17 + 0xb8);
                if (lVar17 == 0) goto LAB_03566068;
                if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
                goto LAB_03566068;
                if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                lVar18 = *(long *)(lVar15 + lVar21 + 0x30);
                iVar11 = *(int *)(lVar17 + lVar13);
                if (lVar18 == 0) {
                  if (uVar27 == 0) {
                    in_stack_00000118 = 0;
                    in_stack_00000110 = 0;
                    in_stack_00000128 = 0;
                    in_stack_00000120 = 0;
                    in_stack_000000f8 = 0;
                    in_stack_000000f0 = 0;
                    in_stack_00000108 = 0;
                    in_stack_00000100 = 0;
                    in_stack_000000e8 = 0;
                    in_stack_000000e0 = 0;
                    FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar11 + 1,0);
                    memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                    if (*(int *)(lVar15 + 0x18) == 0) goto LAB_035660f8;
                    memcpy((void *)(lVar15 + lVar21 + 0x20),&stack0x00000090,0x50);
                    __dest = (void *)(lVar15 + 0x20);
                  }
                  else {
                    lVar17 = *plVar22;
                    if (lVar17 == 0) goto LAB_03566068;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_035660f8;
                    lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
                    if (lVar17 == 0) goto LAB_03566068;
                    uVar25 = UnityEngine_Material__GetColorArray(lVar17,0);
                    in_stack_00000118 = 0;
                    in_stack_00000110 = 0;
                    in_stack_00000128 = 0;
                    in_stack_00000120 = 0;
                    in_stack_000000f8 = 0;
                    in_stack_000000f0 = 0;
                    in_stack_00000108 = 0;
                    in_stack_00000100 = 0;
                    in_stack_000000e8 = 0;
                    in_stack_000000e0 = 0;
                    FUN_03595600(&stack0x000000e0,uVar25,iVar11 + 1,0);
                    memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_035660f8;
                    __dest = (void *)(lVar15 + lVar21 + 0x20);
                    memcpy(__dest,&stack0x00000040,0x50);
                  }
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                }
                else {
                  iVar12 = *(int *)(lVar18 + 0x18);
                  if (iVar12 < iVar11 * 4) {
LAB_03565e08:
                    if (iVar11 < 0x401) {
                      iVar11 = FUN_036c1d60(iVar11 + 1,0);
                    }
                    else {
                      iVar11 = iVar11 + 0x100;
                    }
                    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_03595b9c(lVar15 + lVar21 + 0x20,iVar11,0);
                  }
                  else if ((0 < iVar11) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                    iVar1 = iVar12 + 3;
                    if (-1 < iVar12) {
                      iVar1 = iVar12;
                    }
                    if (0x100 < (iVar1 >> 2) - iVar11) goto LAB_03565e08;
                  }
                }
                unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
                goto LAB_03566068;
                lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar15 = *unaff_x24;
                }
                lVar15 = **(long **)(lVar15 + 0xb8);
                if (lVar15 == 0) goto LAB_03566068;
                if ((*(uint *)(lVar15 + 0x18) <= uVar27) || (*(uint *)(lVar17 + 0x18) <= uVar27))
                goto LAB_035660f8;
                *(undefined8 *)(lVar17 + lVar21 + 0x68) = *(undefined8 *)(lVar15 + lVar13 + -0x1c);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                uVar27 = uVar27 + 1;
                lVar21 = lVar21 + 0x50;
                lVar13 = lVar13 + 0x38;
                lVar29 = lVar29 + 8;
              } while (uVar9 != uVar27);
            }
            lVar21 = *plVar22;
            if (lVar21 != 0) {
              lVar13 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3) + 0x20;
              do {
                uVar9 = (uint)uVar20;
                if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar9) goto LAB_03565748;
                if (*(uint *)(lVar21 + 0x18) <= uVar9) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                uVar25 = *(undefined8 *)(lVar21 + lVar13);
                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar20 = FUN_036cee6c(uVar25,0,0);
                if ((uVar20 & 1) == 0) goto LAB_03565748;
                if ((*unaff_x20 == 0) || (lVar21 = *(long *)(*unaff_x20 + 0x60), lVar21 == 0))
                break;
                if ((int)uVar9 < *(int *)(lVar21 + 0x18)) {
                  lVar21 = *plVar22;
                  if (lVar21 == 0) break;
                  if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_035660f8;
                  if ((*(long *)(lVar21 + lVar13) == 0) ||
                     (lVar21 = FUN_037b514c(*(long *)(lVar21 + lVar13),0), lVar21 == 0)) break;
                  FUN_0390f3a4(lVar21,0,0);
                }
                lVar21 = *plVar22;
                uVar20 = (ulong)(uVar9 + 1);
                lVar13 = lVar13 + 8;
              } while (lVar21 != 0);
            }
          }
        }
      }
    }
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


