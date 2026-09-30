/*
FUNCTION_NAME: UnityEngine.Animations.AnimationPlayableOutput$$SetTarget
ENTRY_POINT: 0355cee8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


undefined4 UnityEngine_Animations_AnimationPlayableOutput__SetTarget(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__dest;
  int in_w8;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined8 uVar27;
  ulong uVar28;
  long *unaff_x27;
  uint *puVar29;
  long lVar30;
  int iStack0000000000000024;
  long *in_stack_00000028;
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
  uint uStack00000000000001a8;
  undefined1 uStack00000000000001ac;
  
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (in_w8 == 1) {
    FUN_03591508();
    if (*(long *)(unaff_x19 + 0x650) == 0) {
      *(undefined4 *)(unaff_x19 + 0x2e0) = 3;
      uVar12 = FUN_03597634(0);
      if ((uVar12 & 1) == 0) {
        if (*in_stack_00000038 == 0) goto LAB_0355e9f0;
        uVar23 = FUN_036d3824(*in_stack_00000038,0);
        uVar23 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar23,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar23);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
      iVar6 = FUN_036d3364(*(long *)(unaff_x19 + 0x658),0);
      if (*in_stack_00000038 == 0) goto LAB_0355e9f0;
      iVar7 = FUN_036d3364(*in_stack_00000038,0);
      if (iVar6 != iVar7) {
        uVar12 = FUN_0359778c(0);
        if ((uVar12 & 1) == 0) {
LAB_0355cf8c:
          if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
          *(undefined8 *)(unaff_x19 + 0x660) = *(undefined8 *)(*(long *)(unaff_x19 + 0x658) + 0x20);
        }
        else {
          if (*in_stack_00000028 == 0) goto LAB_0355e9f0;
          iVar6 = FUN_036d3364(*in_stack_00000028,0);
          if ((*(long *)(unaff_x19 + 0x658) == 0) ||
             (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x658) + 0x20), lVar13 == 0))
          goto LAB_0355e9f0;
          iVar7 = FUN_036d3364(lVar13,0);
          if (iVar6 == iVar7) goto LAB_0355cf8c;
          if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
          uVar23 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar25 = *(undefined8 *)(*(long *)(unaff_x19 + 0x658) + 0x20);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_03594e9c(uVar23,uVar25,0);
          *(undefined8 *)(unaff_x19 + 0x660) = uVar23;
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x660);
        lVar13 = *plVar26;
        uVar23 = *(undefined8 *)(unaff_x19 + 0x660);
        uVar25 = *(undefined8 *)(unaff_x19 + 0x658);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar26;
        }
        uVar8 = FUN_03557fec(uVar23,uVar25,*(long *)(lVar13 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x668) = uVar8;
        lVar13 = **(long **)(*plVar26 + 0xb8);
        if (lVar13 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar13 + 0x18) <= uVar8) {
LAB_0355e9f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar13 + (long)(int)uVar8 * 0x38 + 0x54) = 0;
      }
    }
    in_w8 = *(int *)(unaff_x19 + 0x2e0);
  }
  if (in_w8 == 6) {
    uVar23 = *(undefined8 *)(unaff_x19 + 0x2e8);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_036cee6c(uVar23,0,0);
    if (((uVar12 & 1) != 0) && (*(char *)(unaff_x19 + 0x3f5) == '\0')) {
      plVar14 = *(long **)(unaff_x19 + 0x2e8);
      if (plVar14 == (long *)0x0) goto LAB_0355e9f0;
      (**(code **)(*plVar14 + 0x528))
                (plVar14,**(undefined8 **)(*(long *)PTR_DAT_03cbebc0 + 0xb8),
                 *(undefined8 *)(*plVar14 + 0x530));
    }
  }
  if (unaff_x21 != 0) {
    uVar8 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar8 < 1) {
      iStack0000000000000024 = 0;
    }
    else {
      uVar22 = 0;
      iStack0000000000000024 = 0;
      do {
        if (uVar8 <= uVar22) goto LAB_0355e9f4;
        puVar29 = (uint *)(unaff_x21 + (long)(int)uVar22 * 0xc + 0x20);
        if (*puVar29 == 0) break;
        if (*unaff_x20 == 0) goto LAB_0355e9f0;
        plVar26 = (long *)(*unaff_x20 + 0x38);
        lVar13 = *plVar26;
        iVar6 = *(int *)(unaff_x19 + 0x490);
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar6)) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar26,iVar6 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar8 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar8 <= uVar22) goto LAB_0355e9f4;
        uVar8 = *puVar29;
        if ((uVar8 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
          uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
          uVar12 = FUN_03586568();
          uVar9 = uStack00000000000001a8;
          if ((uVar12 & 1) == 0) goto LAB_0355d414;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_0355e9f4;
          iVar6 = *(int *)(unaff_x21 + (long)(int)uVar22 * 0xc + 0x24);
          if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x26a) = 1;
          }
          puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar22 = uStack00000000000001a8;
          if (*(int *)(unaff_x19 + 0x644) == 1) {
            lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *(long *)puVar5;
            }
            lVar13 = **(long **)(lVar13 + 0xb8);
            if (lVar13 != 0) {
              if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
                *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
                if ((*unaff_x20 != 0) && (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
                    uVar10 = *(undefined4 *)(unaff_x19 + 0x6a4);
                    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                    *(short *)(lVar13 + 0x20) = (short)uVar10 + -0x2000;
                    *(undefined4 *)(lVar13 + 0x48) = uVar10;
                    *(long *)(lVar13 + 0x38) = *in_stack_00000038;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    if ((*unaff_x20 != 0) && (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 != 0)) {
                      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
                        *(undefined8 *)
                         (lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                             *(undefined8 *)(unaff_x19 + 0x698);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*unaff_x20 != 0) &&
                           (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 != 0)) {
                          uVar8 = *(uint *)(unaff_x19 + 0x490);
                          if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                            *(undefined4 *)(lVar13 + (long)(int)uVar8 * 0x178 + 0x58) =
                                 *(undefined4 *)(unaff_x19 + 0x120);
                            if ((*(long *)(unaff_x19 + 0x698) != 0) &&
                               (lVar15 = UnityEngine_Material__DisableKeyword
                                                   (*(long *)(unaff_x19 + 0x698),0), lVar15 != 0)) {
                              FUN_02215a88(lVar15,*(undefined4 *)(unaff_x19 + 0x6a4),
                                           &stack0x000000e0,
                                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                              if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                                *(undefined8 *)(lVar13 + (long)(int)uVar8 * 0x178 + 0x30) =
                                     in_stack_000000e0;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                if ((*unaff_x20 != 0) &&
                                   (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 != 0)) {
                                  uVar8 = *(uint *)(unaff_x19 + 0x490);
                                  if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                                    uVar10 = *(undefined4 *)(unaff_x19 + 0x644);
                                    lVar15 = lVar13 + (long)(int)uVar8 * 0x178;
                                    *(int *)(lVar15 + 0x24) = iVar6;
                                    *(undefined4 *)(lVar15 + 0x2c) = uVar10;
                                    if (uVar9 < *(uint *)(unaff_x21 + 0x18)) {
                                      *(int *)(lVar13 + (long)(int)uVar8 * 0x178 + 0x28) =
                                           (*(int *)(unaff_x21 + (long)(int)uVar9 * 0xc + 0x24) -
                                           iVar6) + 1;
                                      *(undefined4 *)(unaff_x19 + 0x644) = 0;
                                      *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
                                      iStack0000000000000024 = iStack0000000000000024 + 1;
                                      plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      uVar22 = uVar9;
                                      goto LAB_0355e15c;
                                    }
                                  }
                                  goto LAB_0355e9f4;
                                }
                                goto LAB_0355e9f0;
                              }
                              goto LAB_0355e9f4;
                            }
                            goto LAB_0355e9f0;
                          }
                          goto LAB_0355e9f4;
                        }
                        goto LAB_0355e9f0;
                      }
                      goto LAB_0355e9f4;
                    }
                    goto LAB_0355e9f0;
                  }
                  goto LAB_0355e9f4;
                }
                goto LAB_0355e9f0;
              }
              goto LAB_0355e9f4;
            }
            goto LAB_0355e9f0;
          }
        }
        else {
LAB_0355d414:
          uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar23 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
          if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_0355d4ec;
          uVar9 = *(uint *)(unaff_x19 + 0x25c);
          if ((uVar9 >> 4 & 1) == 0) {
            if ((uVar9 >> 3 & 1) == 0) {
              if ((uVar9 >> 5 & 1) != 0) goto LAB_0355d440;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b8070(uVar8,0);
              if ((uVar12 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b8594(uVar8,0);
                goto LAB_0355d4e8;
              }
            }
          }
          else {
LAB_0355d440:
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b812c(uVar8,0);
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b8410(uVar8,0);
LAB_0355d4e8:
              uVar8 = uVar8 & 0xffff;
            }
          }
LAB_0355d4ec:
          lVar13 = FUN_03591848();
          if (lVar13 == 0) {
            iVar6 = FUN_035975f8();
            if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_0355e9f4;
            if (iVar6 == 0) {
              uVar9 = 0x25a1;
            }
            else {
              uVar9 = FUN_035975f8(0);
            }
            *puVar29 = uVar9;
            uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar13 = FUN_03570fc4(uVar9,uVar27,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
            if (lVar13 == 0) {
              lVar13 = FUN_03597770();
              if (lVar13 != 0) {
                lVar13 = FUN_03597770(0);
                if (lVar13 == 0) goto LAB_0355e9f0;
                if (0 < *(int *)(lVar13 + 0x18)) {
                  uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar27 = FUN_03597770(0);
                  uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar13 = FUN_035714e4(uVar9,uVar19,uVar27,1,uVar10,uVar2,
                                        (long)&stack0x000001a8 + 4,0);
                  if (lVar13 != 0) goto LAB_0355d59c;
                }
              }
              uVar27 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar12 = FUN_036cee6c(uVar27,0,0);
              if ((uVar12 & 1) != 0) {
                uVar27 = FUN_03597650(0);
                uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar13 = FUN_03570fc4(uVar9,uVar27,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
                if (lVar13 != 0) goto LAB_0355d59c;
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_0355e9f4;
              *puVar29 = 0x20;
              uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = 0x20;
              lVar13 = FUN_03570fc4(0x20,uVar27,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
              if (lVar13 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_0355e9f4;
                *puVar29 = 3;
                uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar9 = 3;
                lVar13 = FUN_03570fc4(3,uVar27,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
              }
            }
LAB_0355d59c:
            uVar12 = FUN_03597634(0);
            if ((uVar12 & 1) == 0) {
              plVar26 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
              if ((int)uVar8 < 0x10000) {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
                lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar26 == (long *)0x0) goto LAB_0355e9f0;
                if ((lVar15 != 0) &&
                   (lVar30 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar30 == 0)) goto LAB_0355e9f8;
                if ((int)plVar26[3] == 0) goto LAB_0355e9f4;
                plVar26[4] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar26 + 4,lVar15);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_0355e9f0;
                lVar15 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar15 != 0) &&
                   (lVar30 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar30 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar26 + 3) < 2) goto LAB_0355e9f4;
                plVar26[5] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar26 + 5,lVar15);
                if (lVar13 == 0) goto LAB_0355e9f0;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
                lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar15 != 0) &&
                   (lVar30 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar30 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar26 + 3) < 3) goto LAB_0355e9f4;
                plVar26[6] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar26 + 6,lVar15);
                lVar15 = FUN_036d3824();
                if ((lVar15 != 0) &&
                   (lVar30 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar30 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar26 + 3) < 4) goto LAB_0355e9f4;
                plVar26[7] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar26 + 7,lVar15);
                puVar18 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
              }
              else {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
                lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar26 == (long *)0x0) goto LAB_0355e9f0;
                if ((lVar15 != 0) &&
                   (lVar30 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar30 == 0)) goto LAB_0355e9f8;
                if ((int)plVar26[3] == 0) goto LAB_0355e9f4;
                plVar26[4] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar26 + 4,lVar15);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_0355e9f0;
                lVar15 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar15 != 0) &&
                   (lVar30 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar30 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar26 + 3) < 2) goto LAB_0355e9f4;
                plVar26[5] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar26 + 5,lVar15);
                if (lVar13 == 0) goto LAB_0355e9f0;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
                lVar15 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar15 != 0) &&
                   (lVar30 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar30 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar26 + 3) < 3) goto LAB_0355e9f4;
                plVar26[6] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar26 + 6,lVar15);
                lVar15 = FUN_036d3824();
                if ((lVar15 != 0) &&
                   (lVar30 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar30 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar26 + 3) < 4) goto LAB_0355e9f4;
                plVar26[7] = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar26 + 7,lVar15);
                puVar18 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
              }
              uVar27 = FUN_025be8f4(*puVar18,plVar26,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367b470(uVar27);
              uVar8 = uVar9;
            }
            else {
              uVar8 = uVar9;
              if (lVar13 == 0) goto LAB_0355e9f0;
            }
          }
          if (*(char *)(lVar13 + 0x10) == '\x01') {
            lVar15 = *(long *)(lVar13 + 0x18);
            if (lVar15 == 0) goto LAB_0355e9f0;
            iVar6 = *(int *)(lVar15 + 0x18);
            if (iVar6 == 0) {
              iVar6 = FUN_036d3364(lVar15,0);
              *(int *)(lVar15 + 0x18) = iVar6;
            }
            lVar15 = *in_stack_00000038;
            if (lVar15 == 0) goto LAB_0355e9f0;
            iVar7 = *(int *)(lVar15 + 0x18);
            if (iVar7 == 0) {
              iVar7 = FUN_036d3364(lVar15,0);
              *(int *)(lVar15 + 0x18) = iVar7;
            }
            if (iVar6 == iVar7) {
              bVar4 = false;
            }
            else {
              plVar26 = *(long **)(lVar13 + 0x18);
              if (plVar26 == (long *)0x0) {
                plVar26 = (long *)0x0;
                *in_stack_00000038 = 0;
              }
              else {
                lVar15 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar3 = *(byte *)(lVar15 + 0x130);
                if (*(byte *)(*plVar26 + 0x130) < bVar3) {
                  plVar14 = (long *)0x0;
                }
                else {
                  plVar14 = plVar26;
                  if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8) != lVar15) {
                    plVar14 = (long *)0x0;
                  }
                }
                *in_stack_00000038 = (long)plVar14;
                if (*(byte *)(*plVar26 + 0x130) < bVar3) {
                  plVar26 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar3 * 8 + -8) != lVar15) {
                  plVar26 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000038,plVar26);
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
          if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
          goto LAB_0355e9f0;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
          lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
          plVar26 = (long *)(lVar15 + 0x30);
          *plVar26 = lVar13;
          *(undefined4 *)(lVar15 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar26,lVar13);
          if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
          goto LAB_0355e9f0;
          uVar9 = *(uint *)(unaff_x19 + 0x490);
          if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_0355e9f4;
          lVar30 = lVar15 + (long)(int)uVar9 * 0x178;
          *(short *)(lVar30 + 0x20) = (short)uVar8;
          *(undefined1 *)(lVar30 + 0x5c) = uStack00000000000001ac;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_0355e9f4;
          lVar15 = lVar15 + (long)(int)uVar9 * 0x178;
          *(undefined8 *)(lVar15 + 0x24) =
               *(undefined8 *)(unaff_x21 + (long)(int)uVar22 * 0xc + 0x24);
          *(long *)(lVar15 + 0x38) = *in_stack_00000038;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(lVar13 + 0x10) == '\x02') {
            plVar14 = *(long **)(lVar13 + 0x18);
            if (plVar14 == (long *)0x0) goto LAB_0355e9f0;
            bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_0355e9f0;
            lVar30 = plVar14[4];
            lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar15 = *plVar26;
            }
            uVar8 = FUN_03558224(lVar30,plVar14,*(long *)(lVar15 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar8;
            lVar15 = **(long **)(*plVar26 + 0xb8);
            if (lVar15 == 0) goto LAB_0355e9f0;
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0355e9f4;
            lVar15 = lVar15 + (long)(int)uVar8 * 0x38;
            *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
            if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
            lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
            *(undefined4 *)(lVar15 + 0x2c) = 1;
            uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
            *(undefined8 *)(lVar15 + 0x40) = plVar14;
            *(undefined4 *)(lVar15 + 0x58) = uVar10;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar15 + 0x40),plVar14);
            plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0))
            goto LAB_0355e9f0;
            uVar8 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0355e9f4;
            *(undefined4 *)(lVar15 + (long)(int)uVar8 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar13 + 0x28);
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar4) {
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_0355e9f0;
              iVar6 = *(int *)(lVar15 + 0x18);
              if (iVar6 == 0) {
                iVar6 = FUN_036d3364(lVar15,0);
                *(int *)(lVar15 + 0x18) = iVar6;
              }
              lVar15 = *(long *)(unaff_x19 + 0xf8);
              if (lVar15 == 0) goto LAB_0355e9f0;
              iVar7 = *(int *)(lVar15 + 0x18);
              if (iVar7 == 0) {
                iVar7 = FUN_036d3364(lVar15,0);
                *(int *)(lVar15 + 0x18) = iVar7;
              }
              if (iVar6 != iVar7) {
                uVar12 = FUN_0359778c(0);
                if ((uVar12 & 1) == 0) {
                  if (*in_stack_00000038 == 0) goto LAB_0355e9f0;
                  lVar15 = *(long *)(*in_stack_00000038 + 0x20);
                }
                else {
                  if (*in_stack_00000038 == 0) goto LAB_0355e9f0;
                  uVar27 = *(undefined8 *)(*in_stack_00000038 + 0x20);
                  lVar15 = *in_stack_00000028;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar15 = FUN_03594e9c(lVar15,uVar27,0);
                }
                *in_stack_00000028 = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028)
                ;
                lVar15 = *plVar26;
                lVar30 = *in_stack_00000028;
                lVar20 = *in_stack_00000038;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar15 = *plVar26;
                }
                uVar10 = FUN_03557fec(lVar30,lVar20,*(long *)(lVar15 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
              }
            }
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_0355e9f0;
            iVar6 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
            if (0 < iVar6) {
              if (*(long *)(lVar13 + 0x20) == 0) goto LAB_0355e9f0;
              lVar15 = *in_stack_00000038;
              lVar30 = *in_stack_00000028;
              uVar10 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              lVar13 = FUN_03594928(lVar15,lVar30,uVar10,0);
              *in_stack_00000028 = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000028,lVar13);
              lVar13 = *plVar26;
              lVar15 = *in_stack_00000028;
              lVar30 = *in_stack_00000038;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = *plVar26;
              }
              uVar10 = FUN_03557fec(lVar15,lVar30,*(long *)(lVar13 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
              bVar4 = true;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b63d8(uVar8,0);
            unaff_x27 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar8 != 0x200b) && ((uVar12 & 1) == 0)) {
              lVar13 = *plVar26;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar13);
                lVar13 = *plVar26;
              }
              lVar15 = **(long **)(lVar13 + 0xb8);
              if (lVar15 == 0) goto LAB_0355e9f0;
              uVar8 = *(uint *)(unaff_x19 + 0x120);
              if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0355e9f4;
              if (*(int *)(lVar15 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar13);
                  lVar15 = **(long **)(*plVar26 + 0xb8);
                  if (lVar15 == 0) goto LAB_0355e9f0;
                  uVar8 = *(uint *)(unaff_x19 + 0x120);
                }
              }
              else {
                lVar13 = *in_stack_00000028;
                uVar27 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar27,lVar13,0);
                lVar13 = *plVar26;
                lVar15 = *in_stack_00000038;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar13 = *plVar26;
                }
                uVar8 = FUN_03557fec(uVar27,lVar15,*(long *)(lVar13 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x120) = uVar8;
                lVar15 = **(long **)(*plVar26 + 0xb8);
                if (lVar15 == 0) goto LAB_0355e9f0;
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0355e9f4;
              lVar15 = lVar15 + (long)(int)uVar8 * 0x38;
              *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
            }
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
            *(long *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
                 *in_stack_00000028;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
            uVar8 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar8;
            lVar13 = *plVar26;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *plVar26;
              uVar8 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar15 = **(long **)(lVar13 + 0xb8);
            if (lVar15 == 0) goto LAB_0355e9f0;
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0355e9f4;
            *(bool *)(lVar15 + (long)(int)uVar8 * 0x38 + 0x41) = bVar4;
            if (bVar4) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar15 = **(long **)(*plVar26 + 0xb8);
                if (lVar15 == 0) goto LAB_0355e9f0;
                uVar8 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0355e9f4;
              puVar18 = (undefined8 *)(lVar15 + (long)(int)uVar8 * 0x38 + 0x48);
              *puVar18 = uVar23;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar18,uVar23);
              *(undefined8 *)(unaff_x19 + 0x100) = uVar25;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000038);
              *(undefined8 *)(unaff_x19 + 0x118) = uVar23;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000028,uVar23);
              *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
            }
            uVar8 = *(uint *)(unaff_x19 + 0x490);
          }
LAB_0355e15c:
          *(uint *)(unaff_x19 + 0x490) = uVar8 + 1;
        }
        uVar8 = *(uint *)(unaff_x21 + 0x18);
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)uVar8);
    }
    if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
LAB_0355e188:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    lVar13 = *unaff_x20;
    if (lVar13 != 0) {
      *(int *)(lVar13 + 0x1c) = iStack0000000000000024;
      lVar15 = *plVar26;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar15 = *plVar26;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar15 != 0) {
        uVar8 = FUN_0219b384(lVar15,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar13 + 0x34) = uVar8;
        if (*unaff_x20 != 0) {
          plVar14 = (long *)(*unaff_x20 + 0x60);
          lVar13 = *plVar14;
          if (lVar13 != 0) {
            uVar12 = (ulong)uVar8;
            if (*(int *)(lVar13 + 0x18) < (int)uVar8) {
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar14,uVar12,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
            }
            if (*(long *)(unaff_x19 + 0x708) != 0) {
              plVar14 = (long *)(unaff_x19 + 0x708);
              if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar8) {
                uVar11 = FUN_036c1d60(uVar8 + 1,0);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*unaff_x27);
                }
                FUN_01ff025c(plVar14,uVar11,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
              }
              if (*(char *)(unaff_x19 + 0x321) != '\0') {
                if (*unaff_x20 == 0) goto LAB_0355e9f0;
                plVar24 = (long *)(*unaff_x20 + 0x38);
                lVar13 = *plVar24;
                if (lVar13 == 0) goto LAB_0355e9f0;
                iVar6 = *(int *)(unaff_x19 + 0x490);
                if (0x100 < *(int *)(lVar13 + 0x18) - iVar6) {
                  iVar7 = 0x100;
                  if (0x100 < iVar6 + 1) {
                    iVar7 = iVar6 + 1;
                  }
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar24,iVar7,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
              }
              if (0 < (int)uVar8) {
                lVar13 = 0;
                uVar28 = 0;
                lVar15 = 0x54;
                lVar30 = 0x20;
                do {
                  if (uVar28 != 0) {
                    lVar20 = *plVar14;
                    if (lVar20 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                    uVar23 = *(undefined8 *)(lVar20 + uVar28 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar16 = FUN_036d35a8(uVar23,0,0);
                    if ((uVar16 & 1) != 0) {
                      lVar20 = *plVar26;
                      plVar24 = (long *)*plVar14;
                      if (*(int *)(lVar20 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar20 = *plVar26;
                      }
                      lVar20 = **(long **)(lVar20 + 0xb8);
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar20 = lVar20 + lVar15;
                      in_stack_00000160 = *(undefined8 *)(lVar20 + -4);
                      in_stack_00000158 = *(undefined8 *)(lVar20 + -0xc);
                      in_stack_00000150 = *(undefined8 *)(lVar20 + -0x14);
                      in_stack_00000148 = *(undefined8 *)(lVar20 + -0x1c);
                      in_stack_00000140 = *(undefined8 *)(lVar20 + -0x24);
                      in_stack_00000138 = *(undefined8 *)(lVar20 + -0x2c);
                      in_stack_00000130 = *(undefined8 *)(lVar20 + -0x34);
                      lVar20 = FUN_0359d71c();
                      if (plVar24 == (long *)0x0) goto LAB_0355e9f0;
                      if ((lVar20 != 0) &&
                         (lVar17 = thunk_FUN_01a89d6c(lVar20,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar17 == 0)) {
LAB_0355e9f8:
                        uVar23 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar23,0);
                      }
                      if (*(uint *)(plVar24 + 3) <= uVar28) goto LAB_0355e9f4;
                      plVar24[uVar28 + 4] = lVar20;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long)plVar24 + lVar30,lVar20);
                      plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
                      goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      puVar18 = (undefined8 *)(lVar20 + lVar13 + 0x30);
                      *puVar18 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar18,0);
                    }
                    lVar20 = *plVar14;
                    if (lVar20 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                    lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
                    if (lVar20 == 0) goto LAB_0355e9f0;
                    uVar23 = *(undefined8 *)(lVar20 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar16 = FUN_036d35a8(uVar23,0,0);
                    if ((uVar16 & 1) == 0) {
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
                      if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0))
                      goto LAB_0355e9f0;
                      iVar6 = FUN_036d3364(lVar20,0);
                      lVar20 = *plVar26;
                      if (*(int *)(lVar20 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar20);
                        lVar20 = *plVar26;
                      }
                      lVar20 = **(long **)(lVar20 + 0xb8);
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar20 = *(long *)(lVar20 + lVar15 + -0x1c);
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      iVar7 = FUN_036d3364(lVar20,0);
                      if (iVar6 != iVar7) goto LAB_0355e510;
                    }
                    else {
LAB_0355e510:
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar17 = *plVar26;
                      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
                      if (*(int *)(lVar17 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar17 = *plVar26;
                      }
                      lVar17 = **(long **)(lVar17 + 0xb8);
                      if (lVar17 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      thunk_FUN_0359d22c(lVar20,*(undefined8 *)(lVar17 + lVar15 + -0x1c),0);
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar17 = **(long **)(*plVar26 + 0xb8);
                      if (lVar17 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(lVar17 + lVar15 + -0x2c);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar17 = **(long **)(*plVar26 + 0xb8);
                      if (lVar17 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar17 + lVar15 + -0x24);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                    lVar20 = *plVar26;
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar20 = *plVar26;
                    }
                    lVar17 = **(long **)(lVar20 + 0xb8);
                    if (lVar17 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_0355e9f4;
                    if (*(char *)(lVar17 + lVar15 + -0x13) != '\0') {
                      lVar21 = *plVar14;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar21 = *(long *)(lVar21 + uVar28 * 8 + 0x20);
                      if (*(int *)(lVar20 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar17 = **(long **)(*plVar26 + 0xb8);
                        if (lVar17 == 0) goto LAB_0355e9f0;
                      }
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      FUN_0359d25c(lVar21,*(undefined8 *)(lVar17 + lVar15 + -0x1c),0);
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar17 = **(long **)(*plVar26 + 0xb8);
                      if (lVar17 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar20 + 0x48) = *(undefined8 *)(lVar17 + lVar15 + -0xc);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                  }
                  lVar20 = *plVar26;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar20 = *plVar26;
                  }
                  lVar20 = **(long **)(lVar20 + 0xb8);
                  if (lVar20 == 0) goto LAB_0355e9f0;
                  if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                  if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
                  goto LAB_0355e9f0;
                  if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_0355e9f4;
                  lVar21 = *(long *)(lVar17 + lVar13 + 0x30);
                  iVar6 = *(int *)(lVar20 + lVar15);
                  if (lVar21 == 0) {
                    if (uVar28 == 0) {
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
                      FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar6 + 1,0);
                      memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                      if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0355e9f4;
                      memcpy((void *)(lVar17 + lVar13 + 0x20),&stack0x00000090,0x50);
                      __dest = (void *)(lVar17 + 0x20);
                    }
                    else {
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
                      if (lVar20 == 0) goto LAB_0355e9f0;
                      uVar23 = FUN_0359d5ac(lVar20,0);
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
                      FUN_03595600(&stack0x000000e0,uVar23,iVar6 + 1,0);
                      memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_0355e9f4;
                      __dest = (void *)(lVar17 + lVar13 + 0x20);
                      memcpy(__dest,&stack0x00000040,0x50);
                    }
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                  }
                  else {
                    iVar7 = *(int *)(lVar21 + 0x18);
                    if (iVar7 < iVar6 * 4) {
LAB_0355e77c:
                      if (iVar6 < 0x401) {
                        iVar6 = FUN_036c1d60(iVar6 + 1,0);
                      }
                      else {
                        iVar6 = iVar6 + 0x100;
                      }
                      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_03595b9c(lVar17 + lVar13 + 0x20,iVar6,0);
                    }
                    else if ((0 < iVar6) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                      iVar1 = iVar7 + 3;
                      if (-1 < iVar7) {
                        iVar1 = iVar7;
                      }
                      if (0x100 < (iVar1 >> 2) - iVar6) goto LAB_0355e77c;
                    }
                  }
                  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
                  goto LAB_0355e9f0;
                  lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar17 = *plVar26;
                  }
                  lVar17 = **(long **)(lVar17 + 0xb8);
                  if (lVar17 == 0) goto LAB_0355e9f0;
                  if ((*(uint *)(lVar17 + 0x18) <= uVar28) || (*(uint *)(lVar20 + 0x18) <= uVar28))
                  goto LAB_0355e9f4;
                  *(undefined8 *)(lVar20 + lVar13 + 0x68) = *(undefined8 *)(lVar17 + lVar15 + -0x1c)
                  ;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar28 = uVar28 + 1;
                  lVar13 = lVar13 + 0x50;
                  lVar15 = lVar15 + 0x38;
                  lVar30 = lVar30 + 8;
                } while (uVar8 != uVar28);
              }
              puVar5 = OVRPlugin_Media_TypeInfo;
              lVar13 = *plVar14;
              if (lVar13 != 0) {
                lVar15 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) + 0x20;
                lVar30 = (long)(int)uVar8 * 0x50 + 0x20;
                do {
                  uVar8 = (uint)uVar12;
                  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar8) goto LAB_0355e188;
                  if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0355e9f4;
                  uVar23 = *(undefined8 *)(lVar13 + lVar15);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar12 = FUN_036cee6c(uVar23,0,0);
                  if ((uVar12 & 1) == 0) goto LAB_0355e188;
                  if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0))
                  break;
                  uVar22 = *(uint *)(lVar13 + 0x18);
                  if ((int)uVar8 < (int)uVar22) {
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      uVar22 = *(uint *)(lVar13 + 0x18);
                    }
                    if (uVar22 <= uVar8) goto LAB_0355e9f4;
                    FUN_03596a5c(lVar13 + lVar30,0,1,0);
                  }
                  lVar13 = *plVar14;
                  uVar12 = (ulong)(uVar8 + 1);
                  lVar30 = lVar30 + 0x50;
                  lVar15 = lVar15 + 8;
                } while (lVar13 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_0355e9f0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


