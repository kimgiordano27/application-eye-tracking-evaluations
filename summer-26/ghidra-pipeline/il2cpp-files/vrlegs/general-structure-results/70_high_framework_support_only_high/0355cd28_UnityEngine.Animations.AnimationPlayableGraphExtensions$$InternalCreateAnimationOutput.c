/*
FUNCTION_NAME: UnityEngine.Animations.AnimationPlayableGraphExtensions$$InternalCreateAnimationOutput
ENTRY_POINT: 0355cd28
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
UnityEngine_Animations_AnimationPlayableGraphExtensions__InternalCreateAnimationOutput(void)

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
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  void *__dest;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar24;
  long *unaff_x22;
  long *plVar25;
  undefined8 uVar26;
  long *plVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  uint *puVar32;
  long lVar33;
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
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  uint uStack00000000000001a8;
  undefined1 uStack00000000000001ac;
  
  uStack00000000000001a8 = 0;
  *(undefined4 *)(unaff_x19 + 0x490) = 0;
  *(undefined1 *)(unaff_x19 + 0x26a) = 0;
  *(undefined2 *)(unaff_x19 + 0x430) = 0;
  *(undefined4 *)(unaff_x19 + 0x25c) = *(undefined4 *)(unaff_x19 + 600);
  FUN_035a0500(unaff_x19 + 0x260,0);
  if ((*(byte *)(unaff_x19 + 0x25c) & 1) == 0) {
    uVar12 = *(undefined4 *)(unaff_x19 + 0x210);
  }
  else {
    uVar12 = 700;
  }
  *(undefined4 *)(unaff_x19 + 0x214) = uVar12;
  puVar6 = OVRPlugin_OVRP_1_18_0_TypeInfo;
  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar12);
  FUN_0209aa94(unaff_x19 + 0x218,&stack0x000000e0,*unaff_x20);
  plVar25 = (long *)(unaff_x19 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0xf8);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar25);
  plVar27 = (long *)(unaff_x19 + 0x118);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0x110);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27);
  *(undefined4 *)(unaff_x19 + 0x120) = 0;
  uVar12 = 0;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x22,0);
    uVar12 = *(undefined4 *)(unaff_x19 + 0x120);
  }
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  FUN_03557f30(*(undefined4 *)(unaff_x19 + 0x618),&stack0x000000e0,uVar12,
               *(undefined8 *)(unaff_x19 + 0x100),0,*(undefined8 *)(unaff_x19 + 0x118));
  in_stack_00000178 = in_stack_000000e8;
  in_stack_00000170 = in_stack_000000e0;
  in_stack_00000188 = in_stack_000000f8;
  in_stack_00000180 = in_stack_000000f0;
  in_stack_00000198 = in_stack_00000108;
  in_stack_00000190 = in_stack_00000100;
  in_stack_000001a0 = in_stack_00000110;
  FUN_0209aa94(*(long *)(*unaff_x22 + 0xb8) + 0x10,&stack0x00000170,*(undefined8 *)puVar6);
  plVar17 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  lVar13 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  if (lVar13 == 0) goto LAB_0355e9f0;
  FUN_0219c0c4(lVar13,*(undefined8 *)PTR_DAT_03cd6f90);
  FUN_03557fec(*(undefined8 *)(unaff_x19 + 0x118),*(undefined8 *)(unaff_x19 + 0x100),
               *(long *)(*unaff_x22 + 0xb8),*(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8));
  plVar1 = (long *)(unaff_x19 + 0x368);
  if (*(long *)(unaff_x19 + 0x368) == 0) {
    uVar12 = *(undefined4 *)(unaff_x19 + 0x480);
    uVar26 = thunk_FUN_01a89e68(*plVar17);
    FUN_0359fc54(uVar26,uVar12,0);
    *(undefined8 *)(unaff_x19 + 0x368) = uVar26;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,uVar26);
  }
  else {
    plVar28 = (long *)(*(long *)(unaff_x19 + 0x368) + 0x38);
    lVar13 = *plVar28;
    if (lVar13 == 0) goto LAB_0355e9f0;
    iVar7 = *(int *)(unaff_x19 + 0x480);
    if (*(int *)(lVar13 + 0x18) < iVar7) {
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar28,iVar7,0,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
    }
  }
  iVar7 = *(int *)(unaff_x19 + 0x2e0);
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (iVar7 == 1) {
    FUN_03591508();
    if (*(long *)(unaff_x19 + 0x650) == 0) {
      *(undefined4 *)(unaff_x19 + 0x2e0) = 3;
      uVar14 = FUN_03597634(0);
      if ((uVar14 & 1) == 0) {
        if (*plVar25 == 0) goto LAB_0355e9f0;
        uVar26 = FUN_036d3824(*plVar25,0);
        uVar26 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar26,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar26);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
      iVar7 = FUN_036d3364(*(long *)(unaff_x19 + 0x658),0);
      if (*plVar25 == 0) goto LAB_0355e9f0;
      iVar8 = FUN_036d3364(*plVar25,0);
      if (iVar7 != iVar8) {
        uVar14 = FUN_0359778c(0);
        if ((uVar14 & 1) == 0) {
LAB_0355cf8c:
          if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
          *(undefined8 *)(unaff_x19 + 0x660) = *(undefined8 *)(*(long *)(unaff_x19 + 0x658) + 0x20);
        }
        else {
          if (*plVar27 == 0) goto LAB_0355e9f0;
          iVar7 = FUN_036d3364(*plVar27,0);
          if ((*(long *)(unaff_x19 + 0x658) == 0) ||
             (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x658) + 0x20), lVar13 == 0))
          goto LAB_0355e9f0;
          iVar8 = FUN_036d3364(lVar13,0);
          if (iVar7 == iVar8) goto LAB_0355cf8c;
          if (*(long *)(unaff_x19 + 0x658) == 0) goto LAB_0355e9f0;
          uVar26 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar29 = *(undefined8 *)(*(long *)(unaff_x19 + 0x658) + 0x20);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_03594e9c(uVar26,uVar29,0);
          *(undefined8 *)(unaff_x19 + 0x660) = uVar26;
          plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x660);
        lVar13 = *plVar28;
        uVar26 = *(undefined8 *)(unaff_x19 + 0x660);
        uVar29 = *(undefined8 *)(unaff_x19 + 0x658);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar28;
        }
        uVar9 = FUN_03557fec(uVar26,uVar29,*(long *)(lVar13 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x668) = uVar9;
        lVar13 = **(long **)(*plVar28 + 0xb8);
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
    uVar26 = *(undefined8 *)(unaff_x19 + 0x2e8);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_036cee6c(uVar26,0,0);
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
      uVar24 = 0;
      iStack0000000000000024 = 0;
      do {
        if (uVar9 <= uVar24) goto LAB_0355e9f4;
        puVar32 = (uint *)(unaff_x21 + (long)(int)uVar24 * 0xc + 0x20);
        if (*puVar32 == 0) break;
        if (*plVar1 == 0) goto LAB_0355e9f0;
        plVar28 = (long *)(*plVar1 + 0x38);
        lVar13 = *plVar28;
        iVar7 = *(int *)(unaff_x19 + 0x490);
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar7)) {
          if (*(int *)(*plVar17 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar28,iVar7 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar9 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar9 <= uVar24) goto LAB_0355e9f4;
        uVar9 = *puVar32;
        if ((uVar9 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
          uVar12 = *(undefined4 *)(unaff_x19 + 0x120);
          uVar14 = FUN_03586568();
          uVar10 = uStack00000000000001a8;
          if ((uVar14 & 1) == 0) goto LAB_0355d414;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_0355e9f4;
          iVar7 = *(int *)(unaff_x21 + (long)(int)uVar24 * 0xc + 0x24);
          if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x26a) = 1;
          }
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar24 = uStack00000000000001a8;
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
                    *(long *)(lVar13 + 0x38) = *plVar25;
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
                                      plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      uVar24 = uVar10;
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
          uVar29 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar26 = *(undefined8 *)(unaff_x19 + 0x118);
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
            if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_0355e9f4;
            if (iVar7 == 0) {
              uVar10 = 0x25a1;
            }
            else {
              uVar10 = FUN_035975f8(0);
            }
            *puVar32 = uVar10;
            uVar30 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar13 = FUN_03570fc4(uVar10,uVar30,1,uVar11,uVar3,(long)&stack0x000001a8 + 4,0);
            if (lVar13 == 0) {
              lVar13 = FUN_03597770();
              if (lVar13 != 0) {
                lVar13 = FUN_03597770(0);
                if (lVar13 == 0) goto LAB_0355e9f0;
                if (0 < *(int *)(lVar13 + 0x18)) {
                  uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar30 = FUN_03597770(0);
                  uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar13 = FUN_035714e4(uVar10,uVar21,uVar30,1,uVar11,uVar3,
                                        (long)&stack0x000001a8 + 4,0);
                  if (lVar13 != 0) goto LAB_0355d59c;
                }
              }
              uVar30 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar14 = FUN_036cee6c(uVar30,0,0);
              if ((uVar14 & 1) != 0) {
                uVar30 = FUN_03597650(0);
                uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar13 = FUN_03570fc4(uVar10,uVar30,1,uVar11,uVar3,(long)&stack0x000001a8 + 4,0);
                if (lVar13 != 0) goto LAB_0355d59c;
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_0355e9f4;
              *puVar32 = 0x20;
              uVar30 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = 0x20;
              lVar13 = FUN_03570fc4(0x20,uVar30,1,uVar11,uVar3,(long)&stack0x000001a8 + 4,0);
              if (lVar13 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_0355e9f4;
                *puVar32 = 3;
                uVar30 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar11 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar3 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar10 = 3;
                lVar13 = FUN_03570fc4(3,uVar30,1,uVar11,uVar3,(long)&stack0x000001a8 + 4,0);
              }
            }
LAB_0355d59c:
            uVar14 = FUN_03597634(0);
            if ((uVar14 & 1) == 0) {
              plVar17 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
              if ((int)uVar9 < 0x10000) {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar17 == (long *)0x0) goto LAB_0355e9f0;
                if ((lVar16 != 0) &&
                   (lVar33 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar33 == 0)) goto LAB_0355e9f8;
                if ((int)plVar17[3] == 0) goto LAB_0355e9f4;
                plVar17[4] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 4,lVar16);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_0355e9f0;
                lVar16 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar16 != 0) &&
                   (lVar33 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar33 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar17 + 3) < 2) goto LAB_0355e9f4;
                plVar17[5] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 5,lVar16);
                if (lVar13 == 0) goto LAB_0355e9f0;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar16 != 0) &&
                   (lVar33 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar33 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar17 + 3) < 3) goto LAB_0355e9f4;
                plVar17[6] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 6,lVar16);
                lVar16 = FUN_036d3824();
                if ((lVar16 != 0) &&
                   (lVar33 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar33 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar17 + 3) < 4) goto LAB_0355e9f4;
                plVar17[7] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 7,lVar16);
                puVar20 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
              }
              else {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
                if (plVar17 == (long *)0x0) goto LAB_0355e9f0;
                if ((lVar16 != 0) &&
                   (lVar33 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar33 == 0)) goto LAB_0355e9f8;
                if ((int)plVar17[3] == 0) goto LAB_0355e9f4;
                plVar17[4] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 4,lVar16);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_0355e9f0;
                lVar16 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar16 != 0) &&
                   (lVar33 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar33 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar17 + 3) < 2) goto LAB_0355e9f4;
                plVar17[5] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 5,lVar16);
                if (lVar13 == 0) goto LAB_0355e9f0;
                in_stack_00000168._4_4_ = *(undefined4 *)(lVar13 + 0x14);
                lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,
                                            (long)&stack0x00000168 + 4);
                if ((lVar16 != 0) &&
                   (lVar33 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar33 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar17 + 3) < 3) goto LAB_0355e9f4;
                plVar17[6] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 6,lVar16);
                lVar16 = FUN_036d3824();
                if ((lVar16 != 0) &&
                   (lVar33 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar33 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar17 + 3) < 4) goto LAB_0355e9f4;
                plVar17[7] = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar17 + 7,lVar16);
                puVar20 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
              }
              uVar30 = FUN_025be8f4(*puVar20,plVar17,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367b470(uVar30);
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
            lVar16 = *plVar25;
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
              plVar17 = *(long **)(lVar13 + 0x18);
              if (plVar17 == (long *)0x0) {
                plVar17 = (long *)0x0;
                *plVar25 = 0;
              }
              else {
                lVar16 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar4 = *(byte *)(lVar16 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar4) {
                  plVar28 = (long *)0x0;
                }
                else {
                  plVar28 = plVar17;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) != lVar16) {
                    plVar28 = (long *)0x0;
                  }
                }
                *plVar25 = (long)plVar28;
                if (*(byte *)(*plVar17 + 0x130) < bVar4) {
                  plVar17 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) != lVar16) {
                  plVar17 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar25,plVar17);
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
          plVar17 = (long *)(lVar16 + 0x30);
          *plVar17 = lVar13;
          *(undefined4 *)(lVar16 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar13);
          if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
          goto LAB_0355e9f0;
          uVar10 = *(uint *)(unaff_x19 + 0x490);
          if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_0355e9f4;
          lVar33 = lVar16 + (long)(int)uVar10 * 0x178;
          *(short *)(lVar33 + 0x20) = (short)uVar9;
          *(undefined1 *)(lVar33 + 0x5c) = uStack00000000000001ac;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_0355e9f4;
          lVar16 = lVar16 + (long)(int)uVar10 * 0x178;
          *(undefined8 *)(lVar16 + 0x24) =
               *(undefined8 *)(unaff_x21 + (long)(int)uVar24 * 0xc + 0x24);
          *(long *)(lVar16 + 0x38) = *plVar25;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(lVar13 + 0x10) == '\x02') {
            plVar17 = *(long **)(lVar13 + 0x18);
            if (plVar17 == (long *)0x0) goto LAB_0355e9f0;
            bVar4 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_0355e9f0;
            lVar33 = plVar17[4];
            lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar16 = *plVar28;
            }
            uVar9 = FUN_03558224(lVar33,plVar17,*(long *)(lVar16 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar9;
            lVar16 = **(long **)(*plVar28 + 0xb8);
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
            *(undefined8 *)(lVar16 + 0x40) = plVar17;
            *(undefined4 *)(lVar16 + 0x58) = uVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar16 + 0x40),plVar17);
            plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
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
            plVar17 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar5) {
              lVar16 = *plVar25;
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
                  if (*plVar25 == 0) goto LAB_0355e9f0;
                  lVar16 = *(long *)(*plVar25 + 0x20);
                }
                else {
                  if (*plVar25 == 0) goto LAB_0355e9f0;
                  uVar30 = *(undefined8 *)(*plVar25 + 0x20);
                  lVar16 = *plVar27;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar16 = FUN_03594e9c(lVar16,uVar30,0);
                }
                *plVar27 = lVar16;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27);
                lVar16 = *plVar28;
                lVar33 = *plVar27;
                lVar22 = *plVar25;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar16 = *plVar28;
                }
                uVar11 = FUN_03557fec(lVar33,lVar22,*(long *)(lVar16 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
              }
            }
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_0355e9f0;
            iVar7 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
            if (0 < iVar7) {
              if (*(long *)(lVar13 + 0x20) == 0) goto LAB_0355e9f0;
              lVar16 = *plVar25;
              lVar33 = *plVar27;
              uVar11 = FUN_03776eb8(*(long *)(lVar13 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              lVar13 = FUN_03594928(lVar16,lVar33,uVar11,0);
              *plVar27 = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27,lVar13);
              lVar13 = *plVar28;
              lVar16 = *plVar27;
              lVar33 = *plVar25;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = *plVar28;
              }
              uVar11 = FUN_03557fec(lVar16,lVar33,*(long *)(lVar13 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b63d8(uVar9,0);
            plVar17 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar9 != 0x200b) && ((uVar14 & 1) == 0)) {
              lVar13 = *plVar28;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar13);
                lVar13 = *plVar28;
              }
              lVar16 = **(long **)(lVar13 + 0xb8);
              if (lVar16 == 0) goto LAB_0355e9f0;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
              if (*(int *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar13);
                  lVar16 = **(long **)(*plVar28 + 0xb8);
                  if (lVar16 == 0) goto LAB_0355e9f0;
                  uVar9 = *(uint *)(unaff_x19 + 0x120);
                }
              }
              else {
                lVar13 = *plVar27;
                uVar30 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar30,lVar13,0);
                lVar13 = *plVar28;
                lVar16 = *plVar25;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar13 = *plVar28;
                }
                uVar9 = FUN_03557fec(uVar30,lVar16,*(long *)(lVar13 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x120) = uVar9;
                lVar16 = **(long **)(*plVar28 + 0xb8);
                if (lVar16 == 0) goto LAB_0355e9f0;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
              lVar16 = lVar16 + (long)(int)uVar9 * 0x38;
              *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
            *(long *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) = *plVar27;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
            lVar13 = *plVar28;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar13 = *plVar28;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar16 = **(long **)(lVar13 + 0xb8);
            if (lVar16 == 0) goto LAB_0355e9f0;
            if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
            *(bool *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar16 = **(long **)(*plVar28 + 0xb8);
                if (lVar16 == 0) goto LAB_0355e9f0;
                uVar9 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_0355e9f4;
              puVar20 = (undefined8 *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x48);
              *puVar20 = uVar26;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar20,uVar26);
              *(undefined8 *)(unaff_x19 + 0x100) = uVar29;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar25);
              *(undefined8 *)(unaff_x19 + 0x118) = uVar26;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27,uVar26);
              *(undefined4 *)(unaff_x19 + 0x120) = uVar12;
            }
            uVar9 = *(uint *)(unaff_x19 + 0x490);
          }
LAB_0355e15c:
          *(uint *)(unaff_x19 + 0x490) = uVar9 + 1;
        }
        uVar9 = *(uint *)(unaff_x21 + 0x18);
        uVar24 = uVar24 + 1;
      } while ((int)uVar24 < (int)uVar9);
    }
    if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
LAB_0355e188:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    lVar13 = *plVar1;
    if (lVar13 != 0) {
      *(int *)(lVar13 + 0x1c) = iStack0000000000000024;
      lVar16 = *plVar28;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *plVar28;
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar16 != 0) {
        uVar9 = FUN_0219b384(lVar16,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar13 + 0x34) = uVar9;
        if (*plVar1 != 0) {
          plVar25 = (long *)(*plVar1 + 0x60);
          lVar13 = *plVar25;
          if (lVar13 != 0) {
            uVar14 = (ulong)uVar9;
            if (*(int *)(lVar13 + 0x18) < (int)uVar9) {
              if (*(int *)(*plVar17 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar25,uVar14,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
            }
            if (*(long *)(unaff_x19 + 0x708) != 0) {
              plVar25 = (long *)(unaff_x19 + 0x708);
              if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
                uVar12 = FUN_036c1d60(uVar9 + 1,0);
                if (*(int *)(*plVar17 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*plVar17);
                }
                FUN_01ff025c(plVar25,uVar12,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
              }
              if (*(char *)(unaff_x19 + 0x321) != '\0') {
                if (*plVar1 == 0) goto LAB_0355e9f0;
                plVar27 = (long *)(*plVar1 + 0x38);
                lVar13 = *plVar27;
                if (lVar13 == 0) goto LAB_0355e9f0;
                iVar7 = *(int *)(unaff_x19 + 0x490);
                if (0x100 < *(int *)(lVar13 + 0x18) - iVar7) {
                  iVar8 = 0x100;
                  if (0x100 < iVar7 + 1) {
                    iVar8 = iVar7 + 1;
                  }
                  if (*(int *)(*plVar17 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar27,iVar8,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
              }
              if (0 < (int)uVar9) {
                lVar13 = 0;
                uVar31 = 0;
                lVar16 = 0x54;
                lVar33 = 0x20;
                do {
                  if (uVar31 != 0) {
                    lVar22 = *plVar25;
                    if (lVar22 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                    uVar26 = *(undefined8 *)(lVar22 + uVar31 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar18 = FUN_036d35a8(uVar26,0,0);
                    if ((uVar18 & 1) != 0) {
                      lVar22 = *plVar28;
                      plVar27 = (long *)*plVar25;
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar22 = *plVar28;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar22 = lVar22 + lVar16;
                      in_stack_00000160 = *(undefined8 *)(lVar22 + -4);
                      in_stack_00000158 = *(undefined8 *)(lVar22 + -0xc);
                      in_stack_00000150 = *(undefined8 *)(lVar22 + -0x14);
                      in_stack_00000148 = *(undefined8 *)(lVar22 + -0x1c);
                      in_stack_00000140 = *(undefined8 *)(lVar22 + -0x24);
                      in_stack_00000138 = *(undefined8 *)(lVar22 + -0x2c);
                      in_stack_00000130 = *(undefined8 *)(lVar22 + -0x34);
                      lVar22 = FUN_0359d71c();
                      if (plVar27 == (long *)0x0) goto LAB_0355e9f0;
                      if ((lVar22 != 0) &&
                         (lVar19 = thunk_FUN_01a89d6c(lVar22,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar19 == 0)) {
LAB_0355e9f8:
                        uVar26 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar26,0);
                      }
                      if (*(uint *)(plVar27 + 3) <= uVar31) goto LAB_0355e9f4;
                      plVar27[uVar31 + 4] = lVar22;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long)plVar27 + lVar33,lVar22);
                      plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x60), lVar22 == 0))
                      goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      puVar20 = (undefined8 *)(lVar22 + lVar13 + 0x30);
                      *puVar20 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar20,0);
                    }
                    lVar22 = *plVar25;
                    if (lVar22 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                    lVar22 = *(long *)(lVar22 + uVar31 * 8 + 0x20);
                    if (lVar22 == 0) goto LAB_0355e9f0;
                    uVar26 = *(undefined8 *)(lVar22 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar18 = FUN_036d35a8(uVar26,0,0);
                    if ((uVar18 & 1) == 0) {
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar22 = *(long *)(lVar22 + uVar31 * 8 + 0x20);
                      if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x38), lVar22 == 0))
                      goto LAB_0355e9f0;
                      iVar7 = FUN_036d3364(lVar22,0);
                      lVar22 = *plVar28;
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar22);
                        lVar22 = *plVar28;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar22 = *(long *)(lVar22 + lVar16 + -0x1c);
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      iVar8 = FUN_036d3364(lVar22,0);
                      if (iVar7 != iVar8) goto LAB_0355e510;
                    }
                    else {
LAB_0355e510:
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar19 = *plVar28;
                      lVar22 = *(long *)(lVar22 + uVar31 * 8 + 0x20);
                      if (*(int *)(lVar19 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar19 = *plVar28;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      thunk_FUN_0359d22c(lVar22,*(undefined8 *)(lVar19 + lVar16 + -0x1c),0);
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar19 = **(long **)(*plVar28 + 0xb8);
                      if (lVar19 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar22 = *(long *)(lVar22 + uVar31 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar19 + lVar16 + -0x2c);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar19 = **(long **)(*plVar28 + 0xb8);
                      if (lVar19 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar22 = *(long *)(lVar22 + uVar31 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(lVar19 + lVar16 + -0x24);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                    lVar22 = *plVar28;
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar22 = *plVar28;
                    }
                    lVar19 = **(long **)(lVar22 + 0xb8);
                    if (lVar19 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0355e9f4;
                    if (*(char *)(lVar19 + lVar16 + -0x13) != '\0') {
                      lVar23 = *plVar25;
                      if (lVar23 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar23 = *(long *)(lVar23 + uVar31 * 8 + 0x20);
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar19 = **(long **)(*plVar28 + 0xb8);
                        if (lVar19 == 0) goto LAB_0355e9f0;
                      }
                      if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      if (lVar23 == 0) goto LAB_0355e9f0;
                      FUN_0359d25c(lVar23,*(undefined8 *)(lVar19 + lVar16 + -0x1c),0);
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar19 = **(long **)(*plVar28 + 0xb8);
                      if (lVar19 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar22 = *(long *)(lVar22 + uVar31 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar22 + 0x48) = *(undefined8 *)(lVar19 + lVar16 + -0xc);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                  }
                  lVar22 = *plVar28;
                  if (*(int *)(lVar22 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar22 = *plVar28;
                  }
                  lVar22 = **(long **)(lVar22 + 0xb8);
                  if (lVar22 == 0) goto LAB_0355e9f0;
                  if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x60), lVar19 == 0))
                  goto LAB_0355e9f0;
                  if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0355e9f4;
                  lVar23 = *(long *)(lVar19 + lVar13 + 0x30);
                  iVar7 = *(int *)(lVar22 + lVar16);
                  if (lVar23 == 0) {
                    if (uVar31 == 0) {
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
                      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0355e9f4;
                      memcpy((void *)(lVar19 + lVar13 + 0x20),&stack0x00000090,0x50);
                      __dest = (void *)(lVar19 + 0x20);
                    }
                    else {
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar22 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      lVar22 = *(long *)(lVar22 + uVar31 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_0355e9f0;
                      uVar26 = FUN_0359d5ac(lVar22,0);
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
                      FUN_03595600(&stack0x000000e0,uVar26,iVar7 + 1,0);
                      memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                      if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0355e9f4;
                      __dest = (void *)(lVar19 + lVar13 + 0x20);
                      memcpy(__dest,&stack0x00000040,0x50);
                    }
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                  }
                  else {
                    iVar8 = *(int *)(lVar23 + 0x18);
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
                      FUN_03595b9c(lVar19 + lVar13 + 0x20,iVar7,0);
                    }
                    else if ((0 < iVar7) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                      iVar2 = iVar8 + 3;
                      if (-1 < iVar8) {
                        iVar2 = iVar8;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar7) goto LAB_0355e77c;
                    }
                  }
                  plVar28 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x60), lVar22 == 0))
                  goto LAB_0355e9f0;
                  lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar19 = *plVar28;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 == 0) goto LAB_0355e9f0;
                  if ((*(uint *)(lVar19 + 0x18) <= uVar31) || (*(uint *)(lVar22 + 0x18) <= uVar31))
                  goto LAB_0355e9f4;
                  *(undefined8 *)(lVar22 + lVar13 + 0x68) = *(undefined8 *)(lVar19 + lVar16 + -0x1c)
                  ;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar31 = uVar31 + 1;
                  lVar13 = lVar13 + 0x50;
                  lVar16 = lVar16 + 0x38;
                  lVar33 = lVar33 + 8;
                } while (uVar9 != uVar31);
              }
              puVar6 = OVRPlugin_Media_TypeInfo;
              lVar13 = *plVar25;
              if (lVar13 != 0) {
                lVar16 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 0x20;
                lVar33 = (long)(int)uVar9 * 0x50 + 0x20;
                do {
                  uVar9 = (uint)uVar14;
                  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar9) goto LAB_0355e188;
                  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_0355e9f4;
                  uVar26 = *(undefined8 *)(lVar13 + lVar16);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_036cee6c(uVar26,0,0);
                  if ((uVar14 & 1) == 0) goto LAB_0355e188;
                  if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x60), lVar13 == 0)) break;
                  uVar24 = *(uint *)(lVar13 + 0x18);
                  if ((int)uVar9 < (int)uVar24) {
                    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      uVar24 = *(uint *)(lVar13 + 0x18);
                    }
                    if (uVar24 <= uVar9) goto LAB_0355e9f4;
                    FUN_03596a5c(lVar13 + lVar33,0,1,0);
                  }
                  lVar13 = *plVar25;
                  uVar14 = (ulong)(uVar9 + 1);
                  lVar33 = lVar33 + 0x50;
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


