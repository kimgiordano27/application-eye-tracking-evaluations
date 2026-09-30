/*
FUNCTION_NAME: FUN_0355cb8c
ENTRY_POINT: 0355cb8c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined4 FUN_0355cb8c(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  void *__dest;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong uVar33;
  uint *puVar34;
  long lVar35;
  int local_1ec;
  undefined1 auStack_1d0 [80];
  undefined1 auStack_180 [80];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64 [4];
  
                    /* catch() { ... } // from try @ 0355cad8 with catch @ 0355cba0 */
  if ((DAT_0412df5c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03cd6f90);
    FUN_01ab69ac(PTR_DAT_03ceb270);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cc45a0);
    FUN_01ab69ac(OVRPlugin_HandStatus_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbea58);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Sizei_TypeInfo);
    FUN_01ab69ac(OVRPlugin_SkeletonType_TypeInfo);
    FUN_01ab69ac(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_01ab69ac(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4ad8);
    FUN_01ab69ac(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_01ab69ac(OVRPlugin_TrackedKeyboardFlags_TypeInfo);
    FUN_01ab69ac(OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo);
    FUN_01ab69ac(OVRPlugin_TrackingConfidence_TypeInfo);
    DAT_0412df5c = 1;
  }
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_28_0_TypeInfo;
  local_64[0] = 0;
  local_68 = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined1 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 600);
  FUN_035a0500(param_1 + 0x260,0);
  if ((*(byte *)(param_1 + 0x25c) & 1) == 0) {
    uVar14 = *(undefined4 *)(param_1 + 0x210);
  }
  else {
    uVar14 = 700;
  }
  *(undefined4 *)(param_1 + 0x214) = uVar14;
  puVar7 = OVRPlugin_OVRP_1_18_0_TypeInfo;
  local_130 = CONCAT44(local_130._4_4_,uVar14);
  FUN_0209aa94(param_1 + 0x218,&local_130,*(undefined8 *)puVar6);
  plVar27 = (long *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27);
  plVar29 = (long *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar29);
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar14 = 0;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar8,0);
    uVar14 = *(undefined4 *)(param_1 + 0x120);
  }
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  FUN_03557f30(*(undefined4 *)(param_1 + 0x618),&local_130,uVar14,*(undefined8 *)(param_1 + 0x100),0
               ,*(undefined8 *)(param_1 + 0x118));
  uStack_98 = uStack_128;
  local_a0 = local_130;
  uStack_88 = uStack_118;
  uStack_90 = local_120;
  uStack_78 = uStack_108;
  local_80 = local_110;
  local_70 = local_100;
  FUN_0209aa94(*(long *)(*(long *)puVar8 + 0xb8) + 0x10,&local_a0,*(undefined8 *)puVar7);
  plVar19 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_0355e9f0;
  FUN_0219c0c4(lVar15,*(undefined8 *)PTR_DAT_03cd6f90);
  FUN_03557fec(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x100),
               *(long *)(*(long *)puVar8 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 8));
  plVar1 = (long *)(param_1 + 0x368);
  if (*(long *)(param_1 + 0x368) == 0) {
    uVar14 = *(undefined4 *)(param_1 + 0x480);
    uVar28 = thunk_FUN_01a89e68(*plVar19);
    FUN_0359fc54(uVar28,uVar14,0);
    *(undefined8 *)(param_1 + 0x368) = uVar28;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,uVar28);
  }
  else {
    plVar30 = (long *)(*(long *)(param_1 + 0x368) + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto LAB_0355e9f0;
    iVar9 = *(int *)(param_1 + 0x480);
    if (*(int *)(lVar15 + 0x18) < iVar9) {
      if (*(int *)(*plVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar30,iVar9,0,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
    }
  }
  iVar9 = *(int *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x644) = 0;
  plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (iVar9 == 1) {
    FUN_03591508(param_1,*(undefined8 *)(param_1 + 0x100),0);
    if (*(long *)(param_1 + 0x650) == 0) {
      *(undefined4 *)(param_1 + 0x2e0) = 3;
      uVar16 = FUN_03597634(0);
      if ((uVar16 & 1) == 0) {
        if (*plVar27 == 0) goto LAB_0355e9f0;
        uVar28 = FUN_036d3824(*plVar27,0);
        uVar28 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar28,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar28,param_1,0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x658) == 0) goto LAB_0355e9f0;
      iVar9 = FUN_036d3364(*(long *)(param_1 + 0x658),0);
      if (*plVar27 == 0) goto LAB_0355e9f0;
      iVar10 = FUN_036d3364(*plVar27,0);
      if (iVar9 != iVar10) {
        uVar16 = FUN_0359778c(0);
        if ((uVar16 & 1) == 0) {
LAB_0355cf8c:
          if (*(long *)(param_1 + 0x658) == 0) goto LAB_0355e9f0;
          *(undefined8 *)(param_1 + 0x660) = *(undefined8 *)(*(long *)(param_1 + 0x658) + 0x20);
        }
        else {
          if (*plVar29 == 0) goto LAB_0355e9f0;
          iVar9 = FUN_036d3364(*plVar29,0);
          if ((*(long *)(param_1 + 0x658) == 0) ||
             (lVar15 = *(long *)(*(long *)(param_1 + 0x658) + 0x20), lVar15 == 0))
          goto LAB_0355e9f0;
          iVar10 = FUN_036d3364(lVar15,0);
          if (iVar9 == iVar10) goto LAB_0355cf8c;
          if (*(long *)(param_1 + 0x658) == 0) goto LAB_0355e9f0;
          uVar28 = *(undefined8 *)(param_1 + 0x118);
          uVar31 = *(undefined8 *)(*(long *)(param_1 + 0x658) + 0x20);
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar28 = FUN_03594e9c(uVar28,uVar31,0);
          *(undefined8 *)(param_1 + 0x660) = uVar28;
          plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x660);
        lVar15 = *plVar30;
        uVar28 = *(undefined8 *)(param_1 + 0x660);
        uVar31 = *(undefined8 *)(param_1 + 0x658);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *plVar30;
        }
        uVar11 = FUN_03557fec(uVar28,uVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        *(uint *)(param_1 + 0x668) = uVar11;
        lVar15 = **(long **)(*plVar30 + 0xb8);
        if (lVar15 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar15 + 0x18) <= uVar11) {
LAB_0355e9f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x38 + 0x54) = 0;
      }
    }
    iVar9 = *(int *)(param_1 + 0x2e0);
  }
  if (iVar9 == 6) {
    uVar28 = *(undefined8 *)(param_1 + 0x2e8);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_036cee6c(uVar28,0,0);
    if (((uVar16 & 1) != 0) && (*(char *)(param_1 + 0x3f5) == '\0')) {
      plVar17 = *(long **)(param_1 + 0x2e8);
      if (plVar17 == (long *)0x0) goto LAB_0355e9f0;
      (**(code **)(*plVar17 + 0x528))
                (plVar17,**(undefined8 **)(*(long *)PTR_DAT_03cbebc0 + 0xb8),
                 *(undefined8 *)(*plVar17 + 0x530));
    }
  }
  if (param_2 != 0) {
    uVar11 = *(uint *)(param_2 + 0x18);
    if ((int)uVar11 < 1) {
      local_1ec = 0;
    }
    else {
      uVar26 = 0;
      local_1ec = 0;
      do {
        if (uVar11 <= uVar26) goto LAB_0355e9f4;
        puVar34 = (uint *)(param_2 + (long)(int)uVar26 * 0xc + 0x20);
        if (*puVar34 == 0) break;
        if (*plVar1 == 0) goto LAB_0355e9f0;
        plVar30 = (long *)(*plVar1 + 0x38);
        lVar15 = *plVar30;
        iVar9 = *(int *)(param_1 + 0x490);
        if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) <= iVar9)) {
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar30,iVar9 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          uVar11 = *(uint *)(param_2 + 0x18);
        }
        if (uVar11 <= uVar26) goto LAB_0355e9f4;
        uVar11 = *puVar34;
        if ((uVar11 == 0x3c) && (*(char *)(param_1 + 0x302) != '\0')) {
          uVar14 = *(undefined4 *)(param_1 + 0x120);
          uVar16 = FUN_03586568(param_1,param_2,uVar26 + 1,&local_68,0);
          uVar12 = local_68;
          if ((uVar16 & 1) == 0) goto LAB_0355d414;
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_0355e9f4;
          iVar9 = *(int *)(param_2 + (long)(int)uVar26 * 0xc + 0x24);
          if ((*(byte *)(param_1 + 0x25c) & 1) != 0) {
            *(undefined1 *)(param_1 + 0x26a) = 1;
          }
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar26 = local_68;
          if (*(int *)(param_1 + 0x644) == 1) {
            lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar15 = *(long *)puVar6;
            }
            lVar15 = **(long **)(lVar15 + 0xb8);
            if (lVar15 != 0) {
              if (*(uint *)(param_1 + 0x120) < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38;
                *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
                if ((*plVar1 != 0) && (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 != 0)) {
                  if (*(uint *)(param_1 + 0x490) < *(uint *)(lVar15 + 0x18)) {
                    uVar13 = *(undefined4 *)(param_1 + 0x6a4);
                    lVar15 = lVar15 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178;
                    *(short *)(lVar15 + 0x20) = (short)uVar13 + -0x2000;
                    *(undefined4 *)(lVar15 + 0x48) = uVar13;
                    *(long *)(lVar15 + 0x38) = *plVar27;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    if ((*plVar1 != 0) && (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 != 0)) {
                      if (*(uint *)(param_1 + 0x490) < *(uint *)(lVar15 + 0x18)) {
                        *(undefined8 *)
                         (lVar15 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178 + 0x40) =
                             *(undefined8 *)(param_1 + 0x698);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*plVar1 != 0) && (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 != 0)) {
                          uVar11 = *(uint *)(param_1 + 0x490);
                          if (uVar11 < *(uint *)(lVar15 + 0x18)) {
                            *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x178 + 0x58) =
                                 *(undefined4 *)(param_1 + 0x120);
                            if ((*(long *)(param_1 + 0x698) != 0) &&
                               (lVar18 = UnityEngine_Material__DisableKeyword
                                                   (*(long *)(param_1 + 0x698),0), lVar18 != 0)) {
                              FUN_02215a88(lVar18,*(undefined4 *)(param_1 + 0x6a4),&local_130,
                                           *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                              if (uVar11 < *(uint *)(lVar15 + 0x18)) {
                                *(undefined8 *)(lVar15 + (long)(int)uVar11 * 0x178 + 0x30) =
                                     local_130;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                if ((*plVar1 != 0) &&
                                   (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 != 0)) {
                                  uVar11 = *(uint *)(param_1 + 0x490);
                                  if (uVar11 < *(uint *)(lVar15 + 0x18)) {
                                    uVar13 = *(undefined4 *)(param_1 + 0x644);
                                    lVar18 = lVar15 + (long)(int)uVar11 * 0x178;
                                    *(int *)(lVar18 + 0x24) = iVar9;
                                    *(undefined4 *)(lVar18 + 0x2c) = uVar13;
                                    if (uVar12 < *(uint *)(param_2 + 0x18)) {
                                      *(int *)(lVar15 + (long)(int)uVar11 * 0x178 + 0x28) =
                                           (*(int *)(param_2 + (long)(int)uVar12 * 0xc + 0x24) -
                                           iVar9) + 1;
                                      *(undefined4 *)(param_1 + 0x644) = 0;
                                      *(undefined4 *)(param_1 + 0x120) = uVar14;
                                      local_1ec = local_1ec + 1;
                                      plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      uVar26 = uVar12;
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
          uVar31 = *(undefined8 *)(param_1 + 0x100);
          uVar28 = *(undefined8 *)(param_1 + 0x118);
          uVar14 = *(undefined4 *)(param_1 + 0x120);
          if (*(int *)(param_1 + 0x644) != 0) goto LAB_0355d4ec;
          uVar12 = *(uint *)(param_1 + 0x25c);
          if ((uVar12 >> 4 & 1) == 0) {
            if ((uVar12 >> 3 & 1) == 0) {
              if ((uVar12 >> 5 & 1) != 0) goto LAB_0355d440;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar16 = FUN_026b8070(uVar11,0);
              if ((uVar16 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b8594(uVar11,0);
                goto LAB_0355d4e8;
              }
            }
          }
          else {
LAB_0355d440:
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b812c(uVar11,0);
            if ((uVar16 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b8410(uVar11,0);
LAB_0355d4e8:
              uVar11 = uVar11 & 0xffff;
            }
          }
LAB_0355d4ec:
          lVar15 = FUN_03591848(param_1,uVar11,*(undefined8 *)(param_1 + 0x100),
                                *(undefined4 *)(param_1 + 0x25c),*(undefined4 *)(param_1 + 0x214),
                                local_64,0);
          if (lVar15 == 0) {
            iVar9 = FUN_035975f8();
            if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_0355e9f4;
            if (iVar9 == 0) {
              uVar12 = 0x25a1;
            }
            else {
              uVar12 = FUN_035975f8(0);
            }
            *puVar34 = uVar12;
            uVar32 = *(undefined8 *)(param_1 + 0x100);
            uVar13 = *(undefined4 *)(param_1 + 0x25c);
            uVar3 = *(undefined4 *)(param_1 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar15 = FUN_03570fc4(uVar12,uVar32,1,uVar13,uVar3,local_64,0);
            if (lVar15 == 0) {
              lVar15 = FUN_03597770();
              if (lVar15 != 0) {
                lVar15 = FUN_03597770(0);
                if (lVar15 == 0) goto LAB_0355e9f0;
                if (0 < *(int *)(lVar15 + 0x18)) {
                  uVar23 = *(undefined8 *)(param_1 + 0x100);
                  uVar32 = FUN_03597770(0);
                  uVar13 = *(undefined4 *)(param_1 + 0x25c);
                  uVar3 = *(undefined4 *)(param_1 + 0x214);
                  if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                  }
                  lVar15 = FUN_035714e4(uVar12,uVar23,uVar32,1,uVar13,uVar3,local_64,0);
                  if (lVar15 != 0) goto LAB_0355d59c;
                }
              }
              uVar32 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar16 = FUN_036cee6c(uVar32,0,0);
              if ((uVar16 & 1) != 0) {
                uVar32 = FUN_03597650(0);
                uVar13 = *(undefined4 *)(param_1 + 0x25c);
                uVar3 = *(undefined4 *)(param_1 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                lVar15 = FUN_03570fc4(uVar12,uVar32,1,uVar13,uVar3,local_64,0);
                if (lVar15 != 0) goto LAB_0355d59c;
              }
              if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_0355e9f4;
              *puVar34 = 0x20;
              uVar32 = *(undefined8 *)(param_1 + 0x100);
              uVar13 = *(undefined4 *)(param_1 + 0x25c);
              uVar3 = *(undefined4 *)(param_1 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = 0x20;
              lVar15 = FUN_03570fc4(0x20,uVar32,1,uVar13,uVar3,local_64,0);
              if (lVar15 == 0) {
                if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_0355e9f4;
                *puVar34 = 3;
                uVar32 = *(undefined8 *)(param_1 + 0x100);
                uVar13 = *(undefined4 *)(param_1 + 0x25c);
                uVar3 = *(undefined4 *)(param_1 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar12 = 3;
                lVar15 = FUN_03570fc4(3,uVar32,1,uVar13,uVar3,local_64,0);
              }
            }
LAB_0355d59c:
            uVar16 = FUN_03597634(0);
            if ((uVar16 & 1) == 0) {
              plVar19 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
              if ((int)uVar11 < 0x10000) {
                local_130 = CONCAT44(local_130._4_4_,uVar11);
                lVar18 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_130);
                if (plVar19 == (long *)0x0) goto LAB_0355e9f0;
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_0355e9f8;
                if ((int)plVar19[3] == 0) goto LAB_0355e9f4;
                plVar19[4] = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar19 + 4,lVar18);
                if (*(long *)(param_1 + 0xf8) == 0) goto LAB_0355e9f0;
                lVar18 = FUN_036d3824(*(long *)(param_1 + 0xf8),0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar19 + 3) < 2) goto LAB_0355e9f4;
                plVar19[5] = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar19 + 5,lVar18);
                if (lVar15 == 0) goto LAB_0355e9f0;
                local_a4 = *(undefined4 *)(lVar15 + 0x14);
                lVar18 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&local_a4);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar19 + 3) < 3) goto LAB_0355e9f4;
                plVar19[6] = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar19 + 6,lVar18);
                lVar18 = FUN_036d3824(param_1,0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar19 + 3) < 4) goto LAB_0355e9f4;
                plVar19[7] = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar19 + 7,lVar18);
                puVar22 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
              }
              else {
                local_130 = CONCAT44(local_130._4_4_,uVar11);
                lVar18 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_130);
                if (plVar19 == (long *)0x0) goto LAB_0355e9f0;
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_0355e9f8;
                if ((int)plVar19[3] == 0) goto LAB_0355e9f4;
                plVar19[4] = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar19 + 4,lVar18);
                if (*(long *)(param_1 + 0xf8) == 0) goto LAB_0355e9f0;
                lVar18 = FUN_036d3824(*(long *)(param_1 + 0xf8),0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar19 + 3) < 2) goto LAB_0355e9f4;
                plVar19[5] = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar19 + 5,lVar18);
                if (lVar15 == 0) goto LAB_0355e9f0;
                local_a4 = *(undefined4 *)(lVar15 + 0x14);
                lVar18 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&local_a4);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar19 + 3) < 3) goto LAB_0355e9f4;
                plVar19[6] = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar19 + 6,lVar18);
                lVar18 = FUN_036d3824(param_1,0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_0355e9f8;
                if (*(uint *)(plVar19 + 3) < 4) goto LAB_0355e9f4;
                plVar19[7] = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar19 + 7,lVar18);
                puVar22 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
              }
              uVar32 = FUN_025be8f4(*puVar22,plVar19,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367b470(uVar32,param_1,0);
              uVar11 = uVar12;
            }
            else {
              uVar11 = uVar12;
              if (lVar15 == 0) goto LAB_0355e9f0;
            }
          }
          if (*(char *)(lVar15 + 0x10) == '\x01') {
            lVar18 = *(long *)(lVar15 + 0x18);
            if (lVar18 == 0) goto LAB_0355e9f0;
            iVar9 = *(int *)(lVar18 + 0x18);
            if (iVar9 == 0) {
              iVar9 = FUN_036d3364(lVar18,0);
              *(int *)(lVar18 + 0x18) = iVar9;
            }
            lVar18 = *plVar27;
            if (lVar18 == 0) goto LAB_0355e9f0;
            iVar10 = *(int *)(lVar18 + 0x18);
            if (iVar10 == 0) {
              iVar10 = FUN_036d3364(lVar18,0);
              *(int *)(lVar18 + 0x18) = iVar10;
            }
            if (iVar9 == iVar10) {
              bVar5 = false;
            }
            else {
              plVar19 = *(long **)(lVar15 + 0x18);
              if (plVar19 == (long *)0x0) {
                plVar19 = (long *)0x0;
                *plVar27 = 0;
              }
              else {
                lVar18 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
                bVar4 = *(byte *)(lVar18 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar4) {
                  plVar30 = (long *)0x0;
                }
                else {
                  plVar30 = plVar19;
                  if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) != lVar18) {
                    plVar30 = (long *)0x0;
                  }
                }
                *plVar27 = (long)plVar30;
                if (*(byte *)(*plVar19 + 0x130) < bVar4) {
                  plVar19 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) != lVar18) {
                  plVar19 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27,plVar19);
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
          }
          if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
          goto LAB_0355e9f0;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_0355e9f4;
          lVar18 = lVar18 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178;
          plVar19 = (long *)(lVar18 + 0x30);
          *plVar19 = lVar15;
          *(undefined4 *)(lVar18 + 0x2c) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar15);
          if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
          goto LAB_0355e9f0;
          uVar12 = *(uint *)(param_1 + 0x490);
          if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0355e9f4;
          lVar35 = lVar18 + (long)(int)uVar12 * 0x178;
          *(short *)(lVar35 + 0x20) = (short)uVar11;
          *(undefined1 *)(lVar35 + 0x5c) = local_64[0];
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_0355e9f4;
          lVar18 = lVar18 + (long)(int)uVar12 * 0x178;
          *(undefined8 *)(lVar18 + 0x24) = *(undefined8 *)(param_2 + (long)(int)uVar26 * 0xc + 0x24)
          ;
          *(long *)(lVar18 + 0x38) = *plVar27;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(char *)(lVar15 + 0x10) == '\x02') {
            plVar19 = *(long **)(lVar15 + 0x18);
            if (plVar19 == (long *)0x0) goto LAB_0355e9f0;
            bVar4 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_0355e9f0;
            lVar35 = plVar19[4];
            lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar18 = *plVar30;
            }
            uVar11 = FUN_03558224(lVar35,plVar19,*(long *)(lVar18 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
            *(uint *)(param_1 + 0x120) = uVar11;
            lVar18 = **(long **)(*plVar30 + 0xb8);
            if (lVar18 == 0) goto LAB_0355e9f0;
            if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0355e9f4;
            lVar18 = lVar18 + (long)(int)uVar11 * 0x38;
            *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
            if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_0355e9f4;
            lVar18 = lVar18 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178;
            *(undefined4 *)(lVar18 + 0x2c) = 1;
            uVar13 = *(undefined4 *)(param_1 + 0x120);
            *(undefined8 *)(lVar18 + 0x40) = plVar19;
            *(undefined4 *)(lVar18 + 0x58) = uVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar18 + 0x40),plVar19);
            plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if ((*(long *)(param_1 + 0x368) == 0) ||
               (lVar18 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar18 == 0))
            goto LAB_0355e9f0;
            uVar11 = *(uint *)(param_1 + 0x490);
            if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0355e9f4;
            *(undefined4 *)(lVar18 + (long)(int)uVar11 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar15 + 0x28);
            *(undefined4 *)(param_1 + 0x644) = 0;
            *(undefined4 *)(param_1 + 0x120) = uVar14;
            local_1ec = local_1ec + 1;
            plVar19 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
          }
          else {
            if (bVar5) {
              lVar18 = *plVar27;
              if (lVar18 == 0) goto LAB_0355e9f0;
              iVar9 = *(int *)(lVar18 + 0x18);
              if (iVar9 == 0) {
                iVar9 = FUN_036d3364(lVar18,0);
                *(int *)(lVar18 + 0x18) = iVar9;
              }
              lVar18 = *(long *)(param_1 + 0xf8);
              if (lVar18 == 0) goto LAB_0355e9f0;
              iVar10 = *(int *)(lVar18 + 0x18);
              if (iVar10 == 0) {
                iVar10 = FUN_036d3364(lVar18,0);
                *(int *)(lVar18 + 0x18) = iVar10;
              }
              if (iVar9 != iVar10) {
                uVar16 = FUN_0359778c(0);
                if ((uVar16 & 1) == 0) {
                  if (*plVar27 == 0) goto LAB_0355e9f0;
                  lVar18 = *(long *)(*plVar27 + 0x20);
                }
                else {
                  if (*plVar27 == 0) goto LAB_0355e9f0;
                  uVar32 = *(undefined8 *)(*plVar27 + 0x20);
                  lVar18 = *plVar29;
                  if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar18 = FUN_03594e9c(lVar18,uVar32,0);
                }
                *plVar29 = lVar18;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar29);
                lVar18 = *plVar30;
                lVar35 = *plVar29;
                lVar24 = *plVar27;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar18 = *plVar30;
                }
                uVar13 = FUN_03557fec(lVar35,lVar24,*(long *)(lVar18 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
                *(undefined4 *)(param_1 + 0x120) = uVar13;
              }
            }
            if (*(long *)(lVar15 + 0x20) == 0) goto LAB_0355e9f0;
            iVar9 = FUN_03776eb8(*(long *)(lVar15 + 0x20),0);
            if (0 < iVar9) {
              if (*(long *)(lVar15 + 0x20) == 0) goto LAB_0355e9f0;
              lVar18 = *plVar27;
              lVar35 = *plVar29;
              uVar13 = FUN_03776eb8(*(long *)(lVar15 + 0x20),0);
              if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
              }
              lVar15 = FUN_03594928(lVar18,lVar35,uVar13,0);
              *plVar29 = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar29,lVar15);
              lVar15 = *plVar30;
              lVar18 = *plVar29;
              lVar35 = *plVar27;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar15 = *plVar30;
              }
              uVar13 = FUN_03557fec(lVar18,lVar35,*(long *)(lVar15 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(param_1 + 0x120) = uVar13;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_026b63d8(uVar11,0);
            plVar19 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
            if ((uVar11 != 0x200b) && ((uVar16 & 1) == 0)) {
              lVar15 = *plVar30;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar15);
                lVar15 = *plVar30;
              }
              lVar18 = **(long **)(lVar15 + 0xb8);
              if (lVar18 == 0) goto LAB_0355e9f0;
              uVar11 = *(uint *)(param_1 + 0x120);
              if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0355e9f4;
              if (*(int *)(lVar18 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar15);
                  lVar18 = **(long **)(*plVar30 + 0xb8);
                  if (lVar18 == 0) goto LAB_0355e9f0;
                  uVar11 = *(uint *)(param_1 + 0x120);
                }
              }
              else {
                lVar15 = *plVar29;
                uVar32 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
                FUN_0369922c(uVar32,lVar15,0);
                lVar15 = *plVar30;
                lVar18 = *plVar27;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar15 = *plVar30;
                }
                uVar11 = FUN_03557fec(uVar32,lVar18,*(long *)(lVar15 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
                *(uint *)(param_1 + 0x120) = uVar11;
                lVar18 = **(long **)(*plVar30 + 0xb8);
                if (lVar18 == 0) goto LAB_0355e9f0;
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0355e9f4;
              lVar18 = lVar18 + (long)(int)uVar11 * 0x38;
              *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_0355e9f4;
            *(long *)(lVar15 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178 + 0x50) = *plVar29;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0))
            goto LAB_0355e9f0;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_0355e9f4;
            uVar11 = *(uint *)(param_1 + 0x120);
            *(uint *)(lVar15 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178 + 0x58) = uVar11;
            lVar15 = *plVar30;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar15 = *plVar30;
              uVar11 = *(uint *)(param_1 + 0x120);
            }
            lVar18 = **(long **)(lVar15 + 0xb8);
            if (lVar18 == 0) goto LAB_0355e9f0;
            if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0355e9f4;
            *(bool *)(lVar18 + (long)(int)uVar11 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar18 = **(long **)(*plVar30 + 0xb8);
                if (lVar18 == 0) goto LAB_0355e9f0;
                uVar11 = *(uint *)(param_1 + 0x120);
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0355e9f4;
              puVar22 = (undefined8 *)(lVar18 + (long)(int)uVar11 * 0x38 + 0x48);
              *puVar22 = uVar28;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar22,uVar28);
              *(undefined8 *)(param_1 + 0x100) = uVar31;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27);
              *(undefined8 *)(param_1 + 0x118) = uVar28;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar29,uVar28);
              *(undefined4 *)(param_1 + 0x120) = uVar14;
            }
            uVar11 = *(uint *)(param_1 + 0x490);
          }
LAB_0355e15c:
          *(uint *)(param_1 + 0x490) = uVar11 + 1;
        }
        uVar11 = *(uint *)(param_2 + 0x18);
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < (int)uVar11);
    }
    if (*(char *)(param_1 + 0x3f5) != '\0') {
      *(undefined1 *)(param_1 + 0x3f5) = 0;
LAB_0355e188:
      return *(undefined4 *)(param_1 + 0x490);
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      *(int *)(lVar15 + 0x1c) = local_1ec;
      lVar18 = *plVar30;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *plVar30;
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
      if (lVar18 != 0) {
        uVar11 = FUN_0219b384(lVar18,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar15 + 0x34) = uVar11;
        if (*plVar1 != 0) {
          plVar27 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar27;
          if (lVar15 != 0) {
            uVar16 = (ulong)uVar11;
            if (*(int *)(lVar15 + 0x18) < (int)uVar11) {
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff02b8(plVar27,uVar16,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
            }
            if (*(long *)(param_1 + 0x708) != 0) {
              plVar27 = (long *)(param_1 + 0x708);
              if (*(int *)(*(long *)(param_1 + 0x708) + 0x18) < (int)uVar11) {
                uVar14 = FUN_036c1d60(uVar11 + 1,0);
                if (*(int *)(*plVar19 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*plVar19);
                }
                FUN_01ff025c(plVar27,uVar14,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
              }
              if (*(char *)(param_1 + 0x321) != '\0') {
                if (*plVar1 == 0) goto LAB_0355e9f0;
                plVar29 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar29;
                if (lVar15 == 0) goto LAB_0355e9f0;
                iVar9 = *(int *)(param_1 + 0x490);
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar9) {
                  iVar10 = 0x100;
                  if (0x100 < iVar9 + 1) {
                    iVar10 = iVar9 + 1;
                  }
                  if (*(int *)(*plVar19 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff02b8(plVar29,iVar10,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
                  plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
              }
              if (0 < (int)uVar11) {
                lVar15 = 0;
                uVar33 = 0;
                lVar18 = 0x54;
                lVar35 = 0x20;
                do {
                  if (uVar33 != 0) {
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                    uVar28 = *(undefined8 *)(lVar24 + uVar33 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar20 = FUN_036d35a8(uVar28,0,0);
                    if ((uVar20 & 1) != 0) {
                      lVar24 = *plVar30;
                      plVar29 = (long *)*plVar27;
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar24 = *plVar30;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar24 = lVar24 + lVar18;
                      local_b0 = *(undefined8 *)(lVar24 + -4);
                      uStack_b8 = *(undefined8 *)(lVar24 + -0xc);
                      uStack_c0 = *(undefined8 *)(lVar24 + -0x14);
                      uStack_c8 = *(undefined8 *)(lVar24 + -0x1c);
                      local_d0 = *(undefined8 *)(lVar24 + -0x24);
                      uStack_d8 = *(undefined8 *)(lVar24 + -0x2c);
                      local_e0 = *(undefined8 *)(lVar24 + -0x34);
                      lVar24 = FUN_0359d71c(param_1,&local_e0,0);
                      if (plVar29 == (long *)0x0) goto LAB_0355e9f0;
                      if ((lVar24 != 0) &&
                         (lVar21 = thunk_FUN_01a89d6c(lVar24,*(undefined8 *)(*plVar29 + 0x40)),
                         lVar21 == 0)) {
LAB_0355e9f8:
                        uVar28 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar28,0);
                      }
                      if (*(uint *)(plVar29 + 3) <= uVar33) goto LAB_0355e9f4;
                      plVar29[uVar33 + 4] = lVar24;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long)plVar29 + lVar35,lVar24);
                      plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                      goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      puVar22 = (undefined8 *)(lVar24 + lVar15 + 0x30);
                      *puVar22 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar22,0);
                    }
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                    lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                    if (lVar24 == 0) goto LAB_0355e9f0;
                    uVar28 = *(undefined8 *)(lVar24 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar20 = FUN_036d35a8(uVar28,0,0);
                    if ((uVar20 & 1) == 0) {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0))
                      goto LAB_0355e9f0;
                      iVar9 = FUN_036d3364(lVar24,0);
                      lVar24 = *plVar30;
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(lVar24);
                        lVar24 = *plVar30;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar24 = *(long *)(lVar24 + lVar18 + -0x1c);
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      iVar10 = FUN_036d3364(lVar24,0);
                      if (iVar9 != iVar10) goto LAB_0355e510;
                    }
                    else {
LAB_0355e510:
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar21 = *plVar30;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar21 = *plVar30;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      thunk_FUN_0359d22c(lVar24,*(undefined8 *)(lVar21 + lVar18 + -0x1c),0);
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar24 + 0x20) = *(undefined8 *)(lVar21 + lVar18 + -0x2c);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar24 + 0x28) = *(undefined8 *)(lVar21 + lVar18 + -0x24);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                    lVar24 = *plVar30;
                    if (*(int *)(lVar24 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar24 = *plVar30;
                    }
                    lVar21 = **(long **)(lVar24 + 0xb8);
                    if (lVar21 == 0) goto LAB_0355e9f0;
                    if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_0355e9f4;
                    if (*(char *)(lVar21 + lVar18 + -0x13) != '\0') {
                      lVar25 = *plVar27;
                      if (lVar25 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar25 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar25 = *(long *)(lVar25 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar21 = **(long **)(*plVar30 + 0xb8);
                        if (lVar21 == 0) goto LAB_0355e9f0;
                      }
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      if (lVar25 == 0) goto LAB_0355e9f0;
                      FUN_0359d25c(lVar25,*(undefined8 *)(lVar21 + lVar18 + -0x1c),0);
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      *(undefined8 *)(lVar24 + 0x48) = *(undefined8 *)(lVar21 + lVar18 + -0xc);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    }
                  }
                  lVar24 = *plVar30;
                  if (*(int *)(lVar24 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar24 = *plVar30;
                  }
                  lVar24 = **(long **)(lVar24 + 0xb8);
                  if (lVar24 == 0) goto LAB_0355e9f0;
                  if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                  goto LAB_0355e9f0;
                  if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_0355e9f4;
                  lVar25 = *(long *)(lVar21 + lVar15 + 0x30);
                  iVar9 = *(int *)(lVar24 + lVar18);
                  if (lVar25 == 0) {
                    if (uVar33 == 0) {
                      uStack_f8 = 0;
                      local_100 = 0;
                      uStack_e8 = 0;
                      uStack_f0 = 0;
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      local_110 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      FUN_03595600(&local_130,*(undefined8 *)(param_1 + 0x3a0),iVar9 + 1,0);
                      memcpy(auStack_180,&local_130,0x50);
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0355e9f4;
                      memcpy((void *)(lVar21 + lVar15 + 0x20),auStack_180,0x50);
                      __dest = (void *)(lVar21 + 0x20);
                    }
                    else {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_0355e9f0;
                      uVar28 = FUN_0359d5ac(lVar24,0);
                      uStack_f8 = 0;
                      local_100 = 0;
                      uStack_e8 = 0;
                      uStack_f0 = 0;
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      local_110 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      FUN_03595600(&local_130,uVar28,iVar9 + 1,0);
                      memcpy(auStack_1d0,&local_130,0x50);
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_0355e9f4;
                      __dest = (void *)(lVar21 + lVar15 + 0x20);
                      memcpy(__dest,auStack_1d0,0x50);
                    }
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
                  }
                  else {
                    iVar10 = *(int *)(lVar25 + 0x18);
                    if (iVar10 < iVar9 * 4) {
LAB_0355e77c:
                      if (iVar9 < 0x401) {
                        iVar9 = FUN_036c1d60(iVar9 + 1,0);
                      }
                      else {
                        iVar9 = iVar9 + 0x100;
                      }
                      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_03595b9c(lVar21 + lVar15 + 0x20,iVar9,0);
                    }
                    else if ((0 < iVar9) && (*(char *)(param_1 + 0x321) != '\0')) {
                      iVar2 = iVar10 + 3;
                      if (-1 < iVar10) {
                        iVar2 = iVar10;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar9) goto LAB_0355e77c;
                    }
                  }
                  plVar30 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                  goto LAB_0355e9f0;
                  lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar21 = *plVar30;
                  }
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto LAB_0355e9f0;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar33) || (*(uint *)(lVar24 + 0x18) <= uVar33))
                  goto LAB_0355e9f4;
                  *(undefined8 *)(lVar24 + lVar15 + 0x68) = *(undefined8 *)(lVar21 + lVar18 + -0x1c)
                  ;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar33 = uVar33 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar18 = lVar18 + 0x38;
                  lVar35 = lVar35 + 8;
                } while (uVar11 != uVar33);
              }
              puVar6 = OVRPlugin_Media_TypeInfo;
              lVar15 = *plVar27;
              if (lVar15 != 0) {
                lVar18 = (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
                lVar35 = (long)(int)uVar11 * 0x50 + 0x20;
                do {
                  uVar11 = (uint)uVar16;
                  if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar11) goto LAB_0355e188;
                  if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_0355e9f4;
                  uVar28 = *(undefined8 *)(lVar15 + lVar18);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar16 = FUN_036cee6c(uVar28,0,0);
                  if ((uVar16 & 1) == 0) goto LAB_0355e188;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  uVar26 = *(uint *)(lVar15 + 0x18);
                  if ((int)uVar11 < (int)uVar26) {
                    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      uVar26 = *(uint *)(lVar15 + 0x18);
                    }
                    if (uVar26 <= uVar11) goto LAB_0355e9f4;
                    FUN_03596a5c(lVar15 + lVar35,0,1,0);
                  }
                  lVar15 = *plVar27;
                  uVar16 = (ulong)(uVar11 + 1);
                  lVar35 = lVar35 + 0x50;
                  lVar18 = lVar18 + 8;
                } while (lVar15 != 0);
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


