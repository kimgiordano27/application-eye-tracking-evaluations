/*
FUNCTION_NAME: FUN_05e73a24
ENTRY_POINT: 05e73a24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 248
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;telemetry_or_network_hits_12;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_12
*/


void FUN_05e73a24(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  int iVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 local_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  ulong local_260;
  long lStack_258;
  ulong local_250;
  undefined8 local_220;
  long lStack_218;
  ulong local_210;
  undefined8 local_200;
  long lStack_1f8;
  ulong local_1f0;
  undefined8 local_1e0;
  undefined8 *puStack_1d8;
  undefined8 local_1d0;
  long local_1c8;
  ulong local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long lStack_158;
  int local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  long local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  long lStack_f8;
  ulong local_f0;
  long lStack_e8;
  ulong local_e0;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  long lVar19;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar12 = param_1;
  if ((DAT_066dc747 & 1) == 0) {
    FUN_02b3c81c(
                Method_RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__);
    FUN_02b3c81c(Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_1__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_0__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_1__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_0__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector3>b__17_0__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector3>b__17_1__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector4>b__18_0__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector4>b__18_1__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_<GetGrabRigidbody>b__20_0__
                );
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_0__);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1__);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2__);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__);
    FUN_02b3c81c(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__33_0__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    lVar12 = FUN_02b3c81c(
                         Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__8__
                         );
    DAT_066dc747 = 1;
  }
  local_e0 = 0;
  uStack_78 = 0;
  uVar1 = *(int *)(param_1 + 0x68) + 1;
  lVar15 = *(long *)(param_1 + 0x50);
  local_80 = 0;
  local_70 = 0;
  lStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  local_150 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_140 = 0;
  uStack_13c = 0;
  uStack_128 = 0;
  local_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  local_120 = 0;
  puStack_108 = (undefined8 *)0x0;
  local_110 = 0;
  lStack_f8 = 0;
  local_100 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  puStack_1d8 = (undefined8 *)0x0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  *(uint *)(param_1 + 0x68) = uVar1;
  *(uint *)(param_1 + 0x70) = uVar1;
  if (lVar15 != 0) {
    uVar18 = (uint)*(undefined8 *)(lVar15 + 0x18);
    lVar19 = (long)(int)uVar18;
    lVar20 = 0;
    if (lVar19 != 0) {
      lVar20 = (long)(ulong)uVar1 / lVar19;
    }
    lVar20 = (ulong)uVar1 - lVar20 * lVar19;
    if (uVar18 <= (uint)lVar20) {
LAB_05e743f0:
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_05e74584;
    }
    FUN_05e814f0(lVar12,*(undefined4 *)(lVar15 + lVar20 * 4 + 0x20));
    lVar12 = *(long *)(param_1 + 0x50);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) <= (uint)lVar20) goto LAB_05e743f0;
      *(undefined4 *)(lVar12 + lVar20 * 4 + 0x20) = 0;
      lVar12 = *(long *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x6c) = 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        uVar18 = 0;
        if (uVar1 != 0) {
          uVar18 = *(uint *)(param_1 + 0x68) / uVar1;
        }
        lVar12 = FUN_037a6268(lVar12,*(uint *)(param_1 + 0x68) - uVar18 * uVar1,
                              *(undefined8 *)
                               Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_0__
                             );
        puVar8 = Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1__;
        puVar7 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector4>b__18_0__;
        puVar6 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_0__;
        puVar5 = Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_1__;
        if (lVar12 != 0) {
          FUN_0397db98(&local_280,lVar12,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector4>b__18_1__);
          local_110 = local_280;
          local_280 = 0;
          puStack_108 = puStack_278;
          lStack_f8 = lStack_268;
          local_100 = uStack_270;
          lStack_e8 = lStack_258;
          local_f0 = local_260;
          local_e0 = local_250;
          puStack_278 = &local_110;
          while (uVar13 = FUN_04771dfc(&local_110,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
            if ((local_e0 & 1) == 0) {
              if (lStack_e8 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e74584;
              }
              if (*(long *)(lStack_e8 + 0x20) == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e74584;
              }
              lVar15 = *(long *)(*(long *)(lStack_e8 + 0x20) + 0x40);
              if (lVar15 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e74584;
              }
              lStack_218 = lStack_f8;
              local_220 = local_100;
              local_210 = local_f0;
              UnityEngine_UI_MaskUtilities__IsDescendantOrSelf(lVar15,&local_220,0);
            }
            else {
              if (lStack_e8 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e74584;
              }
              if (*(long *)(lStack_e8 + 0x18) == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e74584;
              }
              lVar15 = *(long *)(*(long *)(lStack_e8 + 0x18) + 0x40);
              if (lVar15 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e74584;
              }
              lStack_1f8 = lStack_f8;
              local_200 = local_100;
              local_1f0 = local_f0;
              UnityEngine_UI_MaskUtilities__IsDescendantOrSelf(lVar15,&local_200,0);
            }
          }
          FUN_04771df8(&local_110,*(undefined8 *)puVar5);
          iVar2 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar2) {
            FUN_04d9e084(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
          }
          if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
            uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x18);
            uVar18 = 0;
            if (uVar1 != 0) {
              uVar18 = *(uint *)(param_1 + 0x68) / uVar1;
            }
            lVar15 = FUN_037a6268(*(long *)(param_1 + 0x40),
                                  *(uint *)(param_1 + 0x68) - uVar18 * uVar1,*(undefined8 *)puVar8);
            if (lVar15 != 0) {
              FUN_039809a0(&local_280,lVar15,*(undefined8 *)puVar7);
              memcpy(&local_170,&local_280,0x60);
              puVar22 = (undefined8 *)
                        Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_1__;
              while (uVar14 = FUN_0477203c(&local_170,*puVar22), uVar13 = uStack_118,
                    lVar19 = local_120, uVar9 = uStack_138, iVar2 = local_150, lVar20 = lStack_158,
                    (uVar14 & 1) != 0) {
                local_70 = uStack_13c;
                uStack_78 = CONCAT44(local_140,uStack_144);
                local_80 = CONCAT44(uStack_148,uStack_14c);
                uStack_98 = CONCAT44(uStack_128,uStack_12c);
                local_a0 = CONCAT44(uStack_130,uStack_134);
                local_90 = local_124;
                if (lStack_158 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  goto LAB_05e74584;
                }
                if ((*(int *)(lStack_158 + 0x5c) == (int)local_160) &&
                   (*(int *)(lStack_158 + 0x58) == local_160._4_4_)) {
                  plVar21 = (long *)(lStack_158 + 0x50);
                  if (*plVar21 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e74584;
                  }
                  lVar16 = *(long *)(*plVar21 + 0x18);
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e74584;
                  }
                  piVar24 = (int *)(lStack_158 + 0x18);
                  puVar25 = (undefined8 *)(lStack_158 + 0x1c);
                  FUN_03ac7494(&local_180,*(undefined8 *)(lVar16 + 0x20),
                               *(undefined8 *)(lVar16 + 0x28),*piVar24,*(undefined4 *)puVar25,
                               *(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2__
                              );
                  if (lVar19 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e74584;
                  }
                  lVar16 = *(long *)(lVar19 + 0x18);
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e74584;
                  }
                  FUN_03ac7494(&local_190,*(undefined8 *)(lVar16 + 0x20),
                               *(undefined8 *)(lVar16 + 0x28),iVar2,*(undefined4 *)puVar25,
                               *(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2__
                              );
                  FUN_03ac75a4(&local_190,local_180,uStack_178,
                               *(undefined8 *)
                                Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__
                              );
                  if (*(long *)(lVar19 + 0x18) == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e74584;
                  }
                  FUN_04331084(*(long *)(lVar19 + 0x18),iVar2,*(undefined4 *)puVar25,
                               *(undefined8 *)
                                Method_RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_System_Collections_IEnumerator_Reset__
                              );
                  if ((uVar13 & 1) != 0) {
                    if (*plVar21 == 0) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      goto LAB_05e74584;
                    }
                    lVar16 = *(long *)(*plVar21 + 0x20);
                    if (lVar16 == 0) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      goto LAB_05e74584;
                    }
                    FUN_03ac6f14(&local_1a0,*(undefined8 *)(lVar16 + 0x20),
                                 *(undefined8 *)(lVar16 + 0x28),*(undefined4 *)(lVar20 + 0x30),
                                 *(undefined4 *)(lVar20 + 0x34),
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__
                                );
                    lVar16 = *(long *)(lVar19 + 0x20);
                    if (lVar16 == 0) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      goto LAB_05e74584;
                    }
                    FUN_03ac6f14(&local_1b0,*(undefined8 *)(lVar16 + 0x20),
                                 *(undefined8 *)(lVar16 + 0x28),uVar9,*(undefined4 *)(lVar20 + 0x34)
                                 ,*(undefined8 *)
                                   Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__
                                );
                    iVar10 = FUN_03ac7100(&local_1b0,
                                          *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
                    if (0 < iVar10) {
                      iVar3 = *piVar24;
                      iVar23 = 0;
                      do {
                        iVar11 = FUN_03ac6f6c(&local_1a0,iVar23,
                                              *(undefined8 *)
                                               Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__33_0__
                                             );
                        FUN_03ac6fac(&local_1b0,iVar23,iVar11 + (iVar2 - iVar3),
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__8__
                                    );
                        iVar23 = iVar23 + 1;
                      } while (iVar10 != iVar23);
                    }
                    if (*(long *)(lVar19 + 0x20) == 0) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      goto LAB_05e74584;
                    }
                    FUN_04330908(*(long *)(lVar19 + 0x20),uVar9,*(undefined4 *)(lVar20 + 0x34),
                                 *(undefined8 *)
                                  Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__);
                    puVar22 = (undefined8 *)
                              Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_1__
                    ;
                  }
                  local_1c8 = 0;
                  local_1c0 = 0;
                  puStack_1d8 = *(undefined8 **)(lVar20 + 0x20);
                  local_1e0 = *(undefined8 *)piVar24;
                  local_1d0 = *(undefined8 *)(lVar20 + 0x28);
                  thunk_FUN_02bb0e9c((ulong)&local_1e0 | 8,0);
                  local_1c8 = *plVar21;
                  thunk_FUN_02bb0e9c(&local_1c8);
                  puVar5 = 
                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__;
                  local_1c0 = CONCAT71(local_1c0._1_7_,1);
                  lVar16 = *(long *)(lVar12 + 0x10);
                  puStack_c8 = puStack_1d8;
                  local_d0 = local_1e0;
                  lStack_b8 = local_1c8;
                  uStack_c0 = local_1d0;
                  local_b0 = local_1c0;
                  lVar17 = *(long *)
                            Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__
                  ;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e74584;
                  }
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)uVar1 * 0x28;
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 **)(lVar16 + 0x28) = puStack_1d8;
                    *(undefined8 *)(lVar16 + 0x20) = local_1e0;
                    *(long *)(lVar16 + 0x38) = local_1c8;
                    *(undefined8 *)(lVar16 + 0x30) = local_1d0;
                    *(ulong *)(lVar16 + 0x40) = local_1c0;
                    thunk_FUN_02bb0e9c(lVar16 + 0x28,0);
                  }
                  else {
                    puStack_278 = puStack_1d8;
                    local_280 = local_1e0;
                    lStack_268 = local_1c8;
                    uStack_270 = local_1d0;
                    local_260 = local_1c0;
                    FUN_0397cecc(lVar12,&local_280,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  puStack_1d8 = *(undefined8 **)(lVar20 + 0x38);
                  local_1e0 = *(undefined8 *)(lVar20 + 0x30);
                  local_1d0 = *(undefined8 *)(lVar20 + 0x40);
                  local_1c8 = 0;
                  local_1c0 = 0;
                  thunk_FUN_02bb0e9c((ulong)&local_1e0 | 8,0);
                  local_1c8 = *plVar21;
                  thunk_FUN_02bb0e9c(&local_1c8);
                  local_1c0 = local_1c0 & 0xffffffffffffff00;
                  lVar16 = *(long *)(lVar12 + 0x10);
                  local_b0 = local_1c0;
                  lVar17 = *(long *)puVar5;
                  puStack_c8 = puStack_1d8;
                  local_d0 = local_1e0;
                  lStack_b8 = local_1c8;
                  uStack_c0 = local_1d0;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e74584;
                  }
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)uVar1 * 0x28;
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 **)(lVar16 + 0x28) = puStack_1d8;
                    *(undefined8 *)(lVar16 + 0x20) = local_1e0;
                    *(long *)(lVar16 + 0x38) = local_1c8;
                    *(undefined8 *)(lVar16 + 0x30) = local_1d0;
                    *(ulong *)(lVar16 + 0x40) = local_1c0;
                    thunk_FUN_02bb0e9c(lVar16 + 0x28,0);
                  }
                  else {
                    puStack_278 = puStack_1d8;
                    local_280 = local_1e0;
                    lStack_268 = local_1c8;
                    uStack_270 = local_1d0;
                    local_260 = local_1c0;
                    FUN_0397cecc(lVar12,&local_280,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(int *)(lVar20 + 0x18) = iVar2;
                  *(undefined8 *)(lVar20 + 0x24) = uStack_78;
                  *puVar25 = local_80;
                  *(undefined4 *)(lVar20 + 0x2c) = local_70;
                  thunk_FUN_02bb0e9c(lVar20 + 0x20,0);
                  *(undefined4 *)(lVar20 + 0x30) = uVar9;
                  *(undefined8 *)(lVar20 + 0x3c) = uStack_98;
                  *(undefined8 *)(lVar20 + 0x34) = local_a0;
                  *(undefined4 *)(lVar20 + 0x44) = local_90;
                  thunk_FUN_02bb0e9c(lVar20 + 0x38,0);
                  *plVar21 = lVar19;
                  thunk_FUN_02bb0e9c(plVar21,lVar19);
                  *(undefined4 *)(lVar20 + 0x5c) = 0;
                }
              }
              FUN_04772038(&local_170,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreatePose>b__20_0__)
              ;
              iVar2 = *(int *)(lVar15 + 0x18);
              *(undefined4 *)(lVar15 + 0x18) = 0;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (0 < iVar2) {
                FUN_04d9e084(*(undefined8 *)(lVar15 + 0x10),0,iVar2,0);
              }
              FUN_05e81578(param_1);
              if (*(long *)(lVar4 + 0x28) == local_68) {
                return;
              }
              goto LAB_05e74584;
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e74584:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


