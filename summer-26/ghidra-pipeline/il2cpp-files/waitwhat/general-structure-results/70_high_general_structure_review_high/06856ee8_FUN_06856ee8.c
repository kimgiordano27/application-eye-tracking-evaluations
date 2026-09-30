/*
FUNCTION_NAME: FUN_06856ee8
ENTRY_POINT: 06856ee8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06856ee8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  
  if ((DAT_07558da2 & 1) == 0) {
    FUN_03188a78(Oculus_Interaction_Locomotion_FirstPersonLocomotor_<>c_TypeInfo);
    FUN_03188a78(
                Oculus_Interaction_Locomotion_FirstPersonLocomotor_<EndOfFrameCoroutine>d__137_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(
                System_Text_Json_Serialization_Metadata_FSharpCoreReflectionProxy_SourceConstructFlags_TypeInfo
                );
    FUN_03188a78(Newtonsoft_Json_Utilities_FSharpUtils_<>c__DisplayClass52_0_TypeInfo);
    FUN_03188a78(System_Xml_Schema_FacetsChecker_FacetsCompiler_TypeInfo);
    FUN_03188a78(
                Best_HTTP_Shared_TLS_Crypto_Impl_FastGcmBlockCipherHelper_DecryptBlock_Impl_000007CA_BurstDirectCall_TypeInfo
                );
    FUN_03188a78(
                Best_HTTP_Shared_TLS_Crypto_Impl_FastGcmBlockCipherHelper_DecryptBlock_Impl_000007CA_PostfixBurstDelegate_TypeInfo
                );
    FUN_03188a78(FeedbackCollectionController_<Start>d__17_TypeInfo);
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_FixedPointCallback_TypeInfo
                );
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c__DisplayClass21_0_TypeInfo
                );
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_FloatField_FloatInput_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass3_0_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_FloatField_UxmlFactory_TypeInfo);
    FUN_03188a78(TMPro_FloatTween_FloatTweenCallback_TypeInfo);
    FUN_03188a78(UnityEngine_UI_CoroutineTween_FloatTween_FloatTweenCallback_TypeInfo);
    DAT_07558da2 = 1;
  }
  plVar4 = (long *)param_1[0x14];
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_88._8_8_ = 0;
  local_78 = 0;
  local_88._0_8_ = 0;
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x180));
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)System_IO_Enumeration_FileSystemEnumerableFactory_<>c_TypeInfo) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_0685707c;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_031c0d08(param_2,*(long *)
                                     System_IO_Enumeration_FileSystemEnumerableFactory_<>c_TypeInfo,
                            9);
LAB_0685707c:
      (*(code *)*puVar6)(param_2,puVar6[1]);
      if (param_1[0x14] != 0) {
        iVar3 = FUN_04a57f24(param_1[0x14],
                             *(undefined8 *)
                              Oculus_Interaction_Locomotion_FirstPersonLocomotor_<EndOfFrameCoroutine>d__137_TypeInfo
                            );
        if (iVar3 < 1) {
LAB_06857204:
          if (param_1[0x13] != 0) {
            iVar3 = FUN_04a57f24(param_1[0x13],
                                 *(undefined8 *)
                                  Oculus_Interaction_Locomotion_FirstPersonLocomotor_<>c_TypeInfo);
            if (iVar3 < 1) {
LAB_06857388:
              plVar4 = (long *)param_1[0x14];
              if (plVar4 != (long *)0x0) {
                uVar5 = (**(code **)(*plVar4 + 0x1a8))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x1b0));
                if ((uVar5 & 1) == 0) {
                  return;
                }
                if (param_1[0x1c] != 0) {
                  FUN_03eb5d04(param_1[0x1c],param_2,
                               *(undefined8 *)
                                Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_FixedPointCallback_TypeInfo
                              );
                  if (param_1[0x26] != 0) {
                    local_88 = FUN_0414d318(param_1[0x26],&local_78,
                                            *(undefined8 *)
                                             UnityEngine_UIElements_FloatField_FloatInput_TypeInfo);
                    puStack_98 = (undefined8 *)local_88;
                    local_a0 = 0;
                    if (local_78 != 0) {
                      *(long **)(local_78 + 0x10) = param_1;
                      *(long **)(local_78 + 0x18) = param_2;
                      (**(code **)(*param_1 + 0x288))
                                (param_1,local_78,*(undefined8 *)(*param_1 + 0x290));
                      FUN_047abab0(local_88,*(undefined8 *)
                                             UnityEngine_UIElements_FloatField_UxmlFactory_TypeInfo)
                      ;
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                }
              }
            }
            else {
              plVar4 = (long *)param_1[0x13];
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x1c8))
                          (plVar4,param_1[0x1e],*(undefined8 *)(*plVar4 + 0x1d0));
                if (param_1[0x1e] != 0) {
                  FUN_042e54fc(&local_a0,param_1[0x1e],
                               *(undefined8 *)
                                System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                              );
                  puVar2 = 
                  Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c__DisplayClass21_0_TypeInfo
                  ;
                  puVar1 = System_Xml_Schema_FacetsChecker_FacetsCompiler_TypeInfo;
                  puStack_68 = puStack_98;
                  local_70 = local_a0;
                  local_60 = local_90;
                  local_a0 = 0;
                  puStack_98 = &local_70;
                  do {
                    do {
                      uVar5 = FUN_054518b4(&local_70,*(undefined8 *)puVar1);
                      if ((uVar5 & 1) == 0) {
                        FUN_054518b0(&local_70,
                                     *(undefined8 *)
                                      System_Text_Json_Serialization_Metadata_FSharpCoreReflectionProxy_SourceConstructFlags_TypeInfo
                                    );
                        goto LAB_06857388;
                      }
                      plVar4 = (long *)thunk_FUN_031c3cac(local_60,*(undefined8 *)puVar2);
                    } while (plVar4 == (long *)0x0);
                    lVar9 = *plVar4;
                    lVar8 = *(long *)puVar2;
                    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar5 != 0) {
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == lVar8) {
                          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                          goto 
                          UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController__set_deviceRotation
                          ;
                        }
                        uVar5 = uVar5 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_031c0d08(plVar4,lVar8,0);

                    UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController__set_deviceRotation
                    :
                    plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
                  } while (plVar4 != param_2);
                  uVar7 = FUN_057b5e54(*(undefined8 *)
                                        UnityEngine_UI_CoroutineTween_FloatTween_FloatTweenCallback_TypeInfo
                                       ,param_2,0);
                  uVar7 = FUN_057b27f0(uVar7,*(undefined8 *)
                                              TMPro_FloatTween_FloatTweenCallback_TypeInfo,0);
                  if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  FUN_0698f1f0(uVar7,param_1,0);
                  puVar6 = &local_70;
                  puVar10 = (undefined8 *)
                            System_Text_Json_Serialization_Metadata_FSharpCoreReflectionProxy_SourceConstructFlags_TypeInfo
                  ;
                  goto LAB_06857368;
                }
              }
            }
          }
        }
        else {
          plVar4 = (long *)param_1[0x14];
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x1c8))(plVar4,param_1[0x1d],*(undefined8 *)(*plVar4 + 0x1d0));
            if (param_1[0x1d] != 0) {
              FUN_042e54fc(&local_a0,param_1[0x1d],
                           *(undefined8 *)
                            System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass3_0_TypeInfo
                          );
              puVar2 = 
              Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c__DisplayClass21_0_TypeInfo
              ;
              puVar1 = 
              Best_HTTP_Shared_TLS_Crypto_Impl_FastGcmBlockCipherHelper_DecryptBlock_Impl_000007CA_BurstDirectCall_TypeInfo
              ;
              puStack_48 = puStack_98;
              local_50 = local_a0;
              local_40 = local_90;
              local_a0 = 0;
              puStack_98 = &local_50;
              do {
                do {
                  uVar5 = FUN_054518b4(&local_50,*(undefined8 *)puVar1);
                  if ((uVar5 & 1) == 0) {
                    FUN_054518b0(&local_50,
                                 *(undefined8 *)
                                  Newtonsoft_Json_Utilities_FSharpUtils_<>c__DisplayClass52_0_TypeInfo
                                );
                    goto LAB_06857204;
                  }
                  plVar4 = (long *)thunk_FUN_031c3cac(local_40,*(undefined8 *)puVar2);
                } while (plVar4 == (long *)0x0);
                lVar9 = *plVar4;
                lVar8 = *(long *)puVar2;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_06857174;
                    }
                    uVar5 = uVar5 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)FUN_031c0d08(plVar4,lVar8,0);
LAB_06857174:
                plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
              } while (plVar4 != param_2);
              uVar7 = FUN_057b5e54(*(undefined8 *)
                                    UnityEngine_UI_CoroutineTween_FloatTween_FloatTweenCallback_TypeInfo
                                   ,param_2,0);
              uVar7 = FUN_057b27f0(uVar7,*(undefined8 *)TMPro_FloatTween_FloatTweenCallback_TypeInfo
                                   ,0);
              if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_0698f1f0(uVar7,param_1,0);
              puVar6 = &local_50;
              puVar10 = (undefined8 *)
                        Newtonsoft_Json_Utilities_FSharpUtils_<>c__DisplayClass52_0_TypeInfo;
LAB_06857368:
              FUN_054518b0(puVar6,*puVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


