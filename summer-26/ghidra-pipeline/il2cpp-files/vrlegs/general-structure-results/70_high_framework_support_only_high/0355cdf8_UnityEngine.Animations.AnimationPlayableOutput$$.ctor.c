/*
FUNCTION_NAME: UnityEngine.Animations.AnimationPlayableOutput$$.ctor
ENTRY_POINT: 0355cdf8
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


undefined4
UnityEngine_Animations_AnimationPlayableOutput___ctor
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  void *__dest;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar23;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  long *unaff_x25;
  undefined8 uVar29;
  ulong uVar30;
  uint *puVar31;
  long lVar32;
  int iStack0000000000000024;
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
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000190;
  undefined8 uStack00000000000001a0;
  uint uStack00000000000001a8;
  undefined1 uStack00000000000001ac;
  
  uStack00000000000001a0 = in_stack_00000110;
  uStack0000000000000170 = param_2;
  uStack0000000000000180 = param_3;
  uStack0000000000000190 = param_4;
  FUN_0209aa94(*(long *)(param_1 + 0xb8) + 0x10,&stack0x00000170,*unaff_x20);
  plVar28 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  lVar13 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  if (lVar13 == 0) goto LAB_0355e9f0;
  FUN_0219c0c4(lVar13,*(undefined8 *)PTR_DAT_03cd6f90);
  FUN_03557fec(*(undefined8 *)(unaff_x19 + 0x118),*(undefined8 *)(unaff_x19 + 0x100),
               *(long *)(*unaff_x22 + 0xb8),*(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8));
  plVar1 = (long *)(unaff_x19 + 0x368);
  if (*(long *)(unaff_x19 + 0x368) == 0) {
    uVar12 = *(undefined4 *)(unaff_x19 + 0x480);
    uVar24 = thunk_FUN_01a89e68(*plVar28);
    FUN_0359fc54(uVar24,uVar12,0);
    *(undefined8 *)(unaff_x19 + 0x368) = uVar24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,uVar24);
  }
  else {
    plVar26 = (long *)(*(long *)(unaff_x19 + 0x368) + 0x38);
    lVar13 = *plVar26;
    if (lVar13 == 0) goto LAB_0355e9f0;
    iVar7 = *(int *)(unaff_x19 + 0x480);
    if (*(int *)(lVar13 + 0x18) < iVar7) {
      if (*(int *)(*plVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar26,iVar7,0,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
    }
  }
  iVar7 = *(int *)(unaff_x19 + 0x2e0);
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (iVar7 == 1) {
    FUN_03591508();
    if (*(long *)(unaff_x19 + 0x650) == 0) {
      *(undefined4 *)(unaff_x19 + 0x2e0) = 3;
      uVar14 = FUN_03597634(0);
      if ((uVar14 & 1) == 0) {
        if (*unaff_x23 == 0) goto LAB_0355e9f0;
        uVar24 = FUN_036d3824(*unaff_x23,0);
        uVar24 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar24,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar24);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
      iVar7 = FUN_036d3364(*(long *)(unaff_x19 + 0x658),0);
      if (*unaff_x23 == 0) goto LAB_0355e9f0;
      iVar8 = FUN_036d3364(*unaff_x23,0);
      if (iVar7 != iVar8) {
        uVar14 = FUN_0359778c(0);
        if ((uVar14 & 1) == 0) {
LAB_0355cf8c:
          if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
          *(undefined8 *)(unaff_x19 + 0x660) = *(undefined8 *)(*(long *)(unaff_x19 + 0x658) + 0x20);
        }
        else {
          if (*unaff_x25 == 0) goto LAB_0355e9f0;
          iVar7 = FUN_036d3364(*unaff_x25,0);
          if ((*(long *)(unaff_x19 + 0x658) == 0) ||
             (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x658) + 0x20), lVar13 == 0))
          goto LAB_0355e9f0;
          iVar8 = FUN_036d3364(lVar13,0);
          if (iVar7 == iVar8) goto LAB_0355cf8c;
          if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
          uVar24 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar27 = *(undefined8 *)(*(long *)(unaff_x19 + 0x658) + 0x20);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_03594e9c(uVar24,uVar27,0);
          *(undefined8 *)(unaff_x19 + 0x660) = uVar24;
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x660);
        lVar13 = *plVar26;
        uVar24 = *(undefined8 *)(unaff_x19 + 0x660);
        uVar27 = *(undefined8 *)(unaff_x19 + 0x658);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar26;
        }
        uVar9 = FUN_03557fec(uVar24,uVar27,*(long *)(lVar13 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x668) = uVar9;
        lVar13 = **(long **)(*plVar26 + 0xb8);
        if (lVar13 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) {
LAB_0355e9f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x54) = 0;
      }
    }
    iVar7 = *(int *)(unaff_x19 + 0x2e0);
  }
  if (iVar7 == 6) {
    uVar24 = *(undefined8 *)(unaff_x19 + 0x2e8);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_036cee6c(uVar24,0,0);
    if (((uVar14 & 1) != 0) && (*(char *)(unaff_x19 + 0x3f5) == '\0')) {
      plVar15 = *(long **)(unaff_x19 + 0x2e8);
      if (plVar15 == (long *)0x0) goto LAB_0355e9f0;
      (**(code **)(*plVar15 + 0x528))
                (plVar15,**(undefined8 **)(*(long *)PTR_DAT_03cbebc0 + 0xb8),
                 *(undefined8 *)(*plVar15 + 0x530));
    }
  }
  if (unaff_x21 != 0) {
    uVar9 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar9 < 1) {
      iStack0000000000000024 = 0;
    }
    else {
      uVar23 = 0;
      iStack0000000000000024 = 0;
      do {
        if (uVar9 <= uVar23) goto LAB_0355e9f4;
        puVar31 = (uint *)(unaff_x21 + (long)(int)uVar23 * 0xc + 0x20);
        if (*puVar31 == 0) break;
        if (*plVar1 == 0) goto LAB_0355e9f0;
        plVar26 = (long *)(*plVar1 + 0x38);
        lVar13 = *plVar26;
        iVar7 = *(int *)(unaff_x19 + 0x490);
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar7)) {
          if (*(int *)(*plVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar26,iVar7 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar9 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar9 <= uVar23) goto LAB_0355e9f4;
        uVar9 = *puVar31;
        if ((uVar9 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
          uVar12 = *(undefined4 *)(unaff_x19 + 0x120);
          uVar14 = FUN_03586568();
          uVar10 = uStack00000000000001a8;
          if ((uVar14 & 1) == 0) goto LAB_0355d414;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_0355e9f4;
          iVar7 = *(int *)(unaff_x21 + (long)(int)uVar23 * 0xc + 0x24);
          if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x26a) = 1;
          }
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar23 = uStack00000000000001a8;
          if (*(int *)(unaff_x19 + 0x644) == 1) {
            lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *(long *)puVar6;
            }
            lVar13 = **(long **)(lVar13 + 0xb8);
            if (lVar13 != 0) {
              if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
                *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
                if ((*plVar1 != 0) && (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
                    uVar11 = *(undefined4 *)(unaff_x19 + 0x6a4);
                    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                    *(short *)(lVar13 + 0x20) = (short)uVar11 + -0x2000;
                    *(undefined4 *)(lVar13 + 0x48) = uVar11;
                    *(long *)(lVar13 + 0x38) = *unaff_x23;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    if ((*plVar1 != 0) && (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 != 0)) {
                      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
                        *(undefined8 *)
                         (lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                             *(undefined8 *)(unaff_x19 + 0x698);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*plVar1 != 0) && (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 != 0)) {
                          uVar9 = *(uint *)(unaff_x19 + 0x490);
                          if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                            *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x58) =
                                 *(undefined4 *)(unaff_x19 + 0x120);
                            if ((*(long *)(unaff_x19 + 0x698) != 0) &&
                               (lVar16 = UnityEngine_Material__DisableKeyword
                                                   (*(long *)(unaff_x19 + 0x698),0), lVar16 != 0)) {
                              FUN_02215a88(lVar16,*(undefined4 *)(unaff_x19 + 0x6a4),
                                           &stack0x000000e0,
                                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                              if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                                *(undefined8 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x30) =
                                     in_stack_000000e0;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                if ((*plVar1 != 0) &&
                                   (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 != 0)) {
                                  uVar9 = *(uint *)(unaff_x19 + 0x490);
                                  if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                                    uVar11 = *(undefined4 *)(unaff_x19 + 0x644);
                                    lVar16 = lVar13 + (long)(int)uVar9 * 0x178;
                                    *(int *)(lVar16 + 0x24) = iVar7;
                                    *(undefined4 *)(lVar16 + 0x2c) = uVar11;
                                    if (uVar10 < *(uint *)(unaff_x21 + 0x18)) {
                                      *(int *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x28) =
                                           (*(int *)(unaff_x21 + (long)(int)uVar10 * 0xc + 0x24) -
                                           iVar7) + 1;
                                      *(undefined4 *)(unaff_x19 + 0x644) = 0;
                                      *(undefined4 *)(unaff_x19 + 0x120) = uVar12;
                                      iStack0000000000000024 = iStack0000000000000024 + 1;
                                      plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      uVar23 = uVar10;
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
          uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar24 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar12 = *(undefined4 *)(unaff_x19 + 0x120);
          if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_0355d4ec;
          uVar10 = *(uint *)(unaff_x19 + 0x25c);
          if ((uVar10 >> 4 & 1) == 0) {
            if ((uVar10 >> 3 & 1) == 0) {
              if ((uVar10 >> 5 & 1) != 0) goto LAB_0355d440;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b8070(uVar9,0);
              if ((uVar14 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar9 = FUN_026b8594(uVar9,0);
                goto LAB_0355d4e8;
              }
            }
          }
          else {
LAB_0355d440:
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b812c(uVar9,0);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = FUN_026b8410(uVar9,0);
LAB_0355d4e8:
              uVar9 = uVar9 & 0xffff;
            }
          }
LAB_0355d4ec:
          lVar13 = FUN_03591848();
          if (lVar13 == 0) {
            iVar7 = FUN_035975f8();
            if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_0355e9f4;
            if (iVar7 == 0) {
              uVar10 = 0x25a1;
            }
            else {
              uVar10 = FUN_035975f8(0);
            }
            *puVar31 = uVar10;
            uVar29 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar13 = FUN_03570fc4(uVar10,uVar29,1,uVar11,uVar3,(long)&stack0x000001a8 + 4,0);
            if (lVar13 == 0) {
              lVar13 = FUN_03597770();
              if (lVar13 != 0) {
                lVar13 = FUN_03597770(0);
                if (lVar13 == 0) goto LAB_0355e9f0;
                if (0 < *(int *)(lVar13 + 0x18)) {
                  uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar29 = FUN_03597770(0);
                  uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar13 = FUN_035714e4(uVar10,uVar20,uVar29,1,uVar11,uVar3,
                                        (long)&stack0x000001a8 + 4,0);
                  if (lVar13 != 0) goto LAB_0355d59c;
                }
              }
              uVar29 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar14 = FUN_036cee6c(uVar29,0,0);
              if ((uVar14 & 1) != 0) {
                uVar29 = FUN_03597650(0);
                uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar13 = FUN_03570fc4(uVar10,uVar29,1,uVar11,uVar3,(long)&stack0x000001a8 + 4,0);
                if (lVar13 != 0) goto LAB_0355d59c;
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_0355e9f4;
              *puVar31 = 0x20;
              uVar29 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = 0x20;
              lVar13 = FUN_03570fc4(0x20,uVar29,1,uVar11,uVar3,(long)&stack0x000001a8 + 4,0);
              if (lVar13 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_0355e9f4;
                *puVar31 = 3;
                uVar29 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar10 = 3;
                lVar13 = FUN_03570fc4(3,uVar29,1,uVar11,uVar3,(long)&stack0x000001a8 + 4,0);
              }
            }
LAB_0355d59c:
            uVar14 = FUN_03597634(0);
            if ((uVar14 & 1) == 0) {
              plVar28 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
              if ((int)uVar9 < 0x10000) {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar28 == (long *)0x0) goto LAB_0355e9f0;
                if ((lVar16 != 0) &&
                   (lVar32 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar32 == 0)) goto LAB_0355e9f8;
                if ((int)plVar28[3] == 0) goto LAB_0355e9f4;
                plVar28[4] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 4,lVar16);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_0355e9f0;
                lVar16 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar16 != 0) &&
                   (lVar32 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar32 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar28 + 3) < 2) goto LAB_0355e9f4;
                plVar28[5] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 5,lVar16);
                if (lVar13 == 0) goto LAB_0355e9f0;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar16 != 0) &&
                   (lVar32 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar32 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar28 + 3) < 3) goto LAB_0355e9f4;
                plVar28[6] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 6,lVar16);
                lVar16 = FUN_036d3824();
                if ((lVar16 != 0) &&
                   (lVar32 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar32 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar28 + 3) < 4) goto LAB_0355e9f4;
                plVar28[7] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 7,lVar16);
                puVar19 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
              }
              else {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar28 == (long *)0x0) goto LAB_0355e9f0;
                if ((lVar16 != 0) &&
                   (lVar32 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar32 == 0)) goto LAB_0355e9f8;
                if ((int)plVar28[3] == 0) goto LAB_0355e9f4;
                plVar28[4] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 4,lVar16);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_0355e9f0;
                lVar16 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar16 != 0) &&
                   (lVar32 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar32 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar28 + 3) < 2) goto LAB_0355e9f4;
                plVar28[5] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 5,lVar16);
                if (lVar13 == 0) goto LAB_0355e9f0;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar16 != 0) &&
                   (lVar32 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar32 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar28 + 3) < 3) goto LAB_0355e9f4;
                plVar28[6] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 6,lVar16);
                lVar16 = FUN_036d3824();
                if ((lVar16 != 0) &&
                   (lVar32 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar28 + 0x40)),
                   lVar32 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar28 + 3) < 4) goto LAB_0355e9f4;
                plVar28[7] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar28 + 7,lVar16);
                puVar19 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
              }
              uVar29 = FUN_025be8f4(*puVar19,plVar28,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367b470(uVar29);
              uVar9 = uVar10;
            }
            else {
              uVar9 = uVar10;
              if (lVar13 == 0) goto LAB_0355e9f0;
            }
          }
          if (*(char *)(lVar13 + 0x10) == '\x01') {
            lVar16 = *(long *)(lVar13 + 0x18);
            if (lVar16 == 0) goto LAB_0355e9f0;
            iVar7 = *(int *)(lVar16 + 0x18);
            if (iVar7 == 0) {
              iVar7 = FUN_036d3364(lVar16,0);
              *(int *)(lVar16 + 0x18) = iVar7;
            }
            lVar16 = *unaff_x23;
            if (lVar16 == 0) goto LAB_0355e9f0;
            iVar8 = *(int *)(lVar16 + 0x18);
            if (iVar8 == 0) {
              iVar8 = FUN_036d3364(lVar16,0);
              *(int *)(lVar16 + 0x18) = iVar8;
            }
            if (iVar7 == iVar8) {
              bVar5 = false;
            }
            else {
              plVar28 = *(long **)(lVar13 + 0x18);
              if (plVar28 == (long *)0x0) {
                plVar28 = (long *)0x0;
                *unaff_x23 = 0;
              }
              else {
                lVar16 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar4 = *(byte *)(lVar16 + 0x130);
                if (*(byte *)(*plVar28 + 0x130) < bVar4) {
                  plVar26 = (long *)0x0;
                }
                else {
                  plVar26 = plVar28;
                  if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar4 * 8 + -8) != lVar16) {
                    plVar26 = (long *)0x0;
                  }
                }
                *unaff_x23 = (long)plVar26;
                if (*(byte *)(*plVar28 + 0x130) < bVar4) {
                  plVar28 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar4 * 8 + -8) != lVar16) {
                  plVar28 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23,plVar28);
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
          }
          if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
          goto LAB_0355e9f0;
          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
          lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
          plVar28 = (long *)(lVar16 + 0x30);
          *plVar28 = lVar13;
          *(undefined4 *)(lVar16 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar28,lVar13);
          if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
          goto LAB_0355e9f0;
          uVar10 = *(uint *)(unaff_x19 + 0x490);
          if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_0355e9f4;
          lVar32 = lVar16 + (long)(int)uVar10 * 0x178;
          *(short *)(lVar32 + 0x20) = (short)uVar9;
          *(undefined1 *)(lVar32 + 0x5c) = uStack00000000000001ac;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar23) goto LAB_0355e9f4;
          lVar16 = lVar16 + (long)(int)uVar10 * 0x178;
          *(undefined8 *)(lVar16 + 0x24) =
               *(undefined8 *)(unaff_x21 + (long)(int)uVar23 * 0xc + 0x24);
          *(long *)(lVar16 + 0x38) = *unaff_x23;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(lVar13 + 0x10) == '\x02') {
            plVar28 = *(long **)(lVar13 + 0x18);
            if (plVar28 == (long *)0x0) goto LAB_0355e9f0;
            bVar4 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar28 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_0355e9f0;
            lVar32 = plVar28[4];
            lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar16 = *plVar26;
            }
            uVar9 = FUN_03558224(lVar32,plVar28,*(long *)(lVar16 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar9;
            lVar16 = **(long **)(*plVar26 + 0xb8);
            if (lVar16 == 0) goto LAB_0355e9f0;
            if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
            lVar16 = lVar16 + (long)(int)uVar9 * 0x38;
            *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
            if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
            lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
            *(undefined4 *)(lVar16 + 0x2c) = 1;
            uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
            *(undefined8 *)(lVar16 + 0x40) = plVar28;
            *(undefined4 *)(lVar16 + 0x58) = uVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar16 + 0x40),plVar28);
            plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0))
            goto LAB_0355e9f0;
            uVar9 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
            *(undefined4 *)(lVar16 + (long)(int)uVar9 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar13 + 0x28);
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = uVar12;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            plVar28 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar5) {
              lVar16 = *unaff_x23;
              if (lVar16 == 0) goto LAB_0355e9f0;
              iVar7 = *(int *)(lVar16 + 0x18);
              if (iVar7 == 0) {
                iVar7 = FUN_036d3364(lVar16,0);
                *(int *)(lVar16 + 0x18) = iVar7;
              }
              lVar16 = *(long *)(unaff_x19 + 0xf8);
              if (lVar16 == 0) goto LAB_0355e9f0;
              iVar8 = *(int *)(lVar16 + 0x18);
              if (iVar8 == 0) {
                iVar8 = FUN_036d3364(lVar16,0);
                *(int *)(lVar16 + 0x18) = iVar8;
              }
              if (iVar7 != iVar8) {
                uVar14 = FUN_0359778c(0);
                if ((uVar14 & 1) == 0) {
                  if (*unaff_x23 == 0) goto LAB_0355e9f0;
                  lVar16 = *(long *)(*unaff_x23 + 0x20);
                }
                else {
                  if (*unaff_x23 == 0) goto LAB_0355e9f0;
                  uVar29 = *(undefined8 *)(*unaff_x23 + 0x20);
                  lVar16 = *unaff_x25;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar16 = FUN_03594e9c(lVar16,uVar29,0);
                }
                *unaff_x25 = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
                lVar16 = *plVar26;
                lVar32 = *unaff_x25;
                lVar21 = *unaff_x23;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar16 = *plVar26;
                }
                uVar11 = FUN_03557fec(lVar32,lVar21,*(long *)(lVar16 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
              }
            }
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_0355e9f0;
            iVar7 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
            if (0 < iVar7) {
              if (*(long *)(lVar13 + 0x20) == 0) goto LAB_0355e9f0;
              lVar16 = *unaff_x23;
              lVar32 = *unaff_x25;
              uVar11 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              lVar13 = FUN_03594928(lVar16,lVar32,uVar11,0);
              *unaff_x25 = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,lVar13);
              lVar13 = *plVar26;
              lVar16 = *unaff_x25;
              lVar32 = *unaff_x23;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = *plVar26;
              }
              uVar11 = FUN_03557fec(lVar16,lVar32,*(long *)(lVar13 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b63d8(uVar9,0);
            plVar28 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar9 != 0x200b) && ((uVar14 & 1) == 0)) {
              lVar13 = *plVar26;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar13);
                lVar13 = *plVar26;
              }
              lVar16 = **(long **)(lVar13 + 0xb8);
              if (lVar16 == 0) goto LAB_0355e9f0;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
              if (*(int *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar13);
                  lVar16 = **(long **)(*plVar26 + 0xb8);
                  if (lVar16 == 0) goto LAB_0355e9f0;
                  uVar9 = *(uint *)(unaff_x19 + 0x120);
                }
              }
              else {
                lVar13 = *unaff_x25;
                uVar29 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar29,lVar13,0);
                lVar13 = *plVar26;
                lVar16 = *unaff_x23;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar13 = *plVar26;
                }
                uVar9 = FUN_03557fec(uVar29,lVar16,*(long *)(lVar13 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x120) = uVar9;
                lVar16 = **(long **)(*plVar26 + 0xb8);
                if (lVar16 == 0) goto LAB_0355e9f0;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
              lVar16 = lVar16 + (long)(int)uVar9 * 0x38;
              *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
            *(long *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) = *unaff_x25;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
            lVar13 = *plVar26;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *plVar26;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar16 = **(long **)(lVar13 + 0xb8);
            if (lVar16 == 0) goto LAB_0355e9f0;
            if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
            *(bool *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar16 = **(long **)(*plVar26 + 0xb8);
                if (lVar16 == 0) goto LAB_0355e9f0;
                uVar9 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
              puVar19 = (undefined8 *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x48);
              *puVar19 = uVar24;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar19,uVar24);
              *(undefined8 *)(unaff_x19 + 0x100) = uVar27;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23);
              *(undefined8 *)(unaff_x19 + 0x118) = uVar24;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,uVar24);
              *(undefined4 *)(unaff_x19 + 0x120) = uVar12;
            }
            uVar9 = *(uint *)(unaff_x19 + 0x490);
          }
LAB_0355e15c:
          *(uint *)(unaff_x19 + 0x490) = uVar9 + 1;
        }
        uVar9 = *(uint *)(unaff_x21 + 0x18);
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (int)uVar9);
    }
    if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
LAB_0355e188:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    lVar13 = *plVar1;
    if (lVar13 != 0) {
      *(int *)(lVar13 + 0x1c) = iStack0000000000000024;
      lVar16 = *plVar26;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *plVar26;
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar16 != 0) {
        uVar9 = FUN_0219b384(lVar16,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar13 + 0x34) = uVar9;
        if (*plVar1 != 0) {
          plVar15 = (long *)(*plVar1 + 0x60);
          lVar13 = *plVar15;
          if (lVar13 != 0) {
            uVar14 = (ulong)uVar9;
            if (*(int *)(lVar13 + 0x18) < (int)uVar9) {
              if (*(int *)(*plVar28 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar15,uVar14,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
            }
            if (*(long *)(unaff_x19 + 0x708) != 0) {
              plVar15 = (long *)(unaff_x19 + 0x708);
              if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
                uVar12 = FUN_036c1d60(uVar9 + 1,0);
                if (*(int *)(*plVar28 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*plVar28);
                }
                FUN_01ff025c(plVar15,uVar12,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
              }
              if (*(char *)(unaff_x19 + 0x321) != '\0') {
                if (*plVar1 == 0) goto LAB_0355e9f0;
                plVar25 = (long *)(*plVar1 + 0x38);
                lVar13 = *plVar25;
                if (lVar13 == 0) goto LAB_0355e9f0;
                iVar7 = *(int *)(unaff_x19 + 0x490);
                if (0x100 < *(int *)(lVar13 + 0x18) - iVar7) {
                  iVar8 = 0x100;
                  if (0x100 < iVar7 + 1) {
                    iVar8 = iVar7 + 1;
                  }
                  if (*(int *)(*plVar28 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar25,iVar8,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
              }
              if (0 < (int)uVar9) {
                lVar13 = 0;
                uVar30 = 0;
                lVar16 = 0x54;
                lVar32 = 0x20;
                do {
                  if (uVar30 != 0) {
                    lVar21 = *plVar15;
                    if (lVar21 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                    uVar24 = *(undefined8 *)(lVar21 + uVar30 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar17 = FUN_036d35a8(uVar24,0,0);
                    if ((uVar17 & 1) != 0) {
                      lVar21 = *plVar26;
                      plVar28 = (long *)*plVar15;
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar21 = *plVar26;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar21 = lVar21 + lVar16;
                      in_stack_00000160 = *(undefined8 *)(lVar21 + -4);
                      in_stack_00000158 = *(undefined8 *)(lVar21 + -0xc);
                      in_stack_00000150 = *(undefined8 *)(lVar21 + -0x14);
                      in_stack_00000148 = *(undefined8 *)(lVar21 + -0x1c);
                      in_stack_00000140 = *(undefined8 *)(lVar21 + -0x24);
                      in_stack_00000138 = *(undefined8 *)(lVar21 + -0x2c);
                      in_stack_00000130 = *(undefined8 *)(lVar21 + -0x34);
                      lVar21 = FUN_0359d71c();
                      if (plVar28 == (long *)0x0) goto LAB_0355e9f0;
                      if ((lVar21 != 0) &&
                         (lVar18 = thunk_FUN_01a89d6c(lVar21,*(undefined8 *)(*plVar28 + 0x40)),
                         lVar18 == 0)) {
LAB_0355e9f8:
                        uVar24 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar24,0);
                      }
                      if (*(uint *)(plVar28 + 3) <= uVar30) goto LAB_0355e9f4;
                      plVar28[uVar30 + 4] = lVar21;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long)plVar28 + lVar32,lVar21);
                      plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                      goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      puVar19 = (undefined8 *)(lVar21 + lVar13 + 0x30);
                      *puVar19 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar19,0);
                    }
                    lVar21 = *plVar15;
                    if (lVar21 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                    lVar21 = *(long *)(lVar21 + uVar30 * 8 + 0x20);
                    if (lVar21 == 0) goto LAB_0355e9f0;
                    uVar24 = *(undefined8 *)(lVar21 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar17 = FUN_036d35a8(uVar24,0,0);
                    if ((uVar17 & 1) == 0) {
                      lVar21 = *plVar15;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar21 = *(long *)(lVar21 + uVar30 * 8 + 0x20);
                      if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0))
                      goto LAB_0355e9f0;
                      iVar7 = FUN_036d3364(lVar21,0);
                      lVar21 = *plVar26;
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar21);
                        lVar21 = *plVar26;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar21 = *(long *)(lVar21 + lVar16 + -0x1c);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      iVar8 = FUN_036d3364(lVar21,0);
                      if (iVar7 != iVar8) goto LAB_0355e510;
                    }
                    else {
LAB_0355e510:
                      lVar21 = *plVar15;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar18 = *plVar26;
                      lVar21 = *(long *)(lVar21 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar18 = *plVar26;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      thunk_FUN_0359d22c(lVar21,*(undefined8 *)(lVar18 + lVar16 + -0x1c),0);
                      lVar21 = *plVar15;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar18 = **(long **)(*plVar26 + 0xb8);
                      if (lVar18 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar21 = *(long *)(lVar21 + uVar30 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar18 + lVar16 + -0x2c);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar21 = *plVar15;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar18 = **(long **)(*plVar26 + 0xb8);
                      if (lVar18 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar21 = *(long *)(lVar21 + uVar30 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar21 + 0x28) = *(undefined8 *)(lVar18 + lVar16 + -0x24);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                    lVar21 = *plVar26;
                    if (*(int *)(lVar21 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar21 = *plVar26;
                    }
                    lVar18 = **(long **)(lVar21 + 0xb8);
                    if (lVar18 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0355e9f4;
                    if (*(char *)(lVar18 + lVar16 + -0x13) != '\0') {
                      lVar22 = *plVar15;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar22 = *(long *)(lVar22 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar18 = **(long **)(*plVar26 + 0xb8);
                        if (lVar18 == 0) goto LAB_0355e9f0;
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      FUN_0359d25c(lVar22,*(undefined8 *)(lVar18 + lVar16 + -0x1c),0);
                      lVar21 = *plVar15;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar18 = **(long **)(*plVar26 + 0xb8);
                      if (lVar18 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar21 = *(long *)(lVar21 + uVar30 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar21 + 0x48) = *(undefined8 *)(lVar18 + lVar16 + -0xc);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                  }
                  lVar21 = *plVar26;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar21 = *plVar26;
                  }
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto LAB_0355e9f0;
                  if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x60), lVar18 == 0))
                  goto LAB_0355e9f0;
                  if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0355e9f4;
                  lVar22 = *(long *)(lVar18 + lVar13 + 0x30);
                  iVar7 = *(int *)(lVar21 + lVar16);
                  if (lVar22 == 0) {
                    if (uVar30 == 0) {
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
                      FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar7 + 1,0);
                      memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0355e9f4;
                      memcpy((void *)(lVar18 + lVar13 + 0x20),&stack0x00000090,0x50);
                      __dest = (void *)(lVar18 + 0x20);
                    }
                    else {
                      lVar21 = *plVar15;
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      lVar21 = *(long *)(lVar21 + uVar30 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      uVar24 = FUN_0359d5ac(lVar21,0);
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
                      FUN_03595600(&stack0x000000e0,uVar24,iVar7 + 1,0);
                      memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0355e9f4;
                      __dest = (void *)(lVar18 + lVar13 + 0x20);
                      memcpy(__dest,&stack0x00000040,0x50);
                    }
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                  }
                  else {
                    iVar8 = *(int *)(lVar22 + 0x18);
                    if (iVar8 < iVar7 * 4) {
LAB_0355e77c:
                      if (iVar7 < 0x401) {
                        iVar7 = FUN_036c1d60(iVar7 + 1,0);
                      }
                      else {
                        iVar7 = iVar7 + 0x100;
                      }
                      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_03595b9c(lVar18 + lVar13 + 0x20,iVar7,0);
                    }
                    else if ((0 < iVar7) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                      iVar2 = iVar8 + 3;
                      if (-1 < iVar8) {
                        iVar2 = iVar8;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar7) goto LAB_0355e77c;
                    }
                  }
                  plVar26 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                  goto LAB_0355e9f0;
                  lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar18 = *plVar26;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_0355e9f0;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar30) || (*(uint *)(lVar21 + 0x18) <= uVar30))
                  goto LAB_0355e9f4;
                  *(undefined8 *)(lVar21 + lVar13 + 0x68) = *(undefined8 *)(lVar18 + lVar16 + -0x1c)
                  ;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar30 = uVar30 + 1;
                  lVar13 = lVar13 + 0x50;
                  lVar16 = lVar16 + 0x38;
                  lVar32 = lVar32 + 8;
                } while (uVar9 != uVar30);
              }
              puVar6 = OVRPlugin_Media_TypeInfo;
              lVar13 = *plVar15;
              if (lVar13 != 0) {
                lVar16 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 0x20;
                lVar32 = (long)(int)uVar9 * 0x50 + 0x20;
                do {
                  uVar9 = (uint)uVar14;
                  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar9) goto LAB_0355e188;
                  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_0355e9f4;
                  uVar24 = *(undefined8 *)(lVar13 + lVar16);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_036cee6c(uVar24,0,0);
                  if ((uVar14 & 1) == 0) goto LAB_0355e188;
                  if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x60), lVar13 == 0)) break;
                  uVar23 = *(uint *)(lVar13 + 0x18);
                  if ((int)uVar9 < (int)uVar23) {
                    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      uVar23 = *(uint *)(lVar13 + 0x18);
                    }
                    if (uVar23 <= uVar9) goto LAB_0355e9f4;
                    FUN_03596a5c(lVar13 + lVar32,0,1,0);
                  }
                  lVar13 = *plVar15;
                  uVar14 = (ulong)(uVar9 + 1);
                  lVar32 = lVar32 + 0x50;
                  lVar16 = lVar16 + 8;
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


