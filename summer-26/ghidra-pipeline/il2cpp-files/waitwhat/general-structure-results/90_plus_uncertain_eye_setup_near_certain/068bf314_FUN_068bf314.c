/*
FUNCTION_NAME: FUN_068bf314
ENTRY_POINT: 068bf314
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_068bf314(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  
  if ((DAT_075591bd & 1) == 0) {
    FUN_03188a78(Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_LayoutResult_TypeInfo);
    FUN_03188a78(Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_TrackerNodeComparer_TypeInfo);
    FUN_03188a78(
                Oculus_Skinning_GpuSkinning_OvrGpuMorphTargetsCombiner_ArrayGrowthEventHandler_TypeInfo
                );
    FUN_03188a78(UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                );
    FUN_03188a78(Oculus_Skinning_GpuSkinning_OvrGpuSkinner_<>c__DisplayClass4_0_TypeInfo);
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo)
    ;
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo)
    ;
    FUN_03188a78(Oculus_Skinning_GpuSkinning_OvrGpuSkinnerJointsOnly_<>c__DisplayClass4_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2d40);
    FUN_03188a78(Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo
                );
    DAT_075591bd = 1;
  }
  iVar6 = UnityEngine_Color__RGBToHSVHelper(param_1);
  plVar16 = (long *)
            Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo;
  lVar11 = *(long *)(param_1 + 0x1d0);
  if (lVar11 == 0) {
LAB_068bf8c8:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar15 = *(int *)(lVar11 + 0x18);
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (0 < iVar15) {
    FUN_0595236c(*(undefined8 *)(lVar11 + 0x10),0,iVar15,0);
  }
  lVar11 = *plVar16;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar11 = *plVar16;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar11 == 0) goto LAB_068bf8c8;
  FUN_0524b3ec(lVar11,*(undefined8 *)
                       Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_TrackerNodeComparer_TypeInfo
              );
  puVar5 = Oculus_Skinning_GpuSkinning_OvrGpuSkinnerJointsOnly_<>c__DisplayClass4_0_TypeInfo;
  puVar4 = Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo;
  puVar3 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
  puVar2 = UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo;
  if (0 < iVar6) {
    if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_068bf8c8;
    iVar6 = *(int *)(*(long *)(param_1 + 0x1c0) + 0x18);
    if (0 < iVar6) {
      iVar15 = 0;
      do {
        if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_068bf8c8;
        uVar7 = FUN_044d6f44(*(long *)(param_1 + 0x1c0),iVar15,*(undefined8 *)puVar5);
        if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_068bf8c8;
        uVar8 = FUN_042e4df8(*(long *)(param_1 + 0x1d0),uVar7,*(undefined8 *)puVar4);
        if ((((uVar8 & 1) == 0) &&
            (lVar11 = thunk_FUN_031c3cac(uVar7,*(undefined8 *)puVar3), lVar11 != 0)) &&
           (plVar9 = (long *)thunk_FUN_031c3cac(lVar11,*(undefined8 *)puVar2), plVar9 != (long *)0x0
           )) {
          lVar12 = *plVar9;
          lVar11 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                goto LAB_068bf564;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_031c0d08(plVar9,lVar11,6);
LAB_068bf564:
          uVar8 = (*(code *)*puVar10)(plVar9,param_1,puVar10[1]);
          if ((uVar8 & 1) != 0) {
            if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_068bf8c8;
            lVar11 = *(long *)(param_1 + 0x1d0);
            uVar7 = FUN_044d6f44(*(long *)(param_1 + 0x1c0),iVar15,*(undefined8 *)puVar5);
            if (lVar11 == 0) goto LAB_068bf8c8;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_068bf8c8;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
            }
            else {
              FUN_042e4a64(lVar11,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *plVar16;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar11 = *plVar16;
            }
            if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_068bf8c8;
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
            uVar7 = FUN_044d6f44(*(long *)(param_1 + 0x1c0),iVar15,*(undefined8 *)puVar5);
            if ((*(long *)(param_1 + 0x1c0) == 0) ||
               (FUN_044d6f44(*(long *)(param_1 + 0x1c0),iVar15,*(undefined8 *)puVar5), lVar11 == 0))
            goto LAB_068bf8c8;
            FUN_0524b264(lVar11,uVar7,extraout_x1,
                         *(undefined8 *)
                          Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_LayoutResult_TypeInfo
                        );
            plVar16 = (long *)
                      Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo
            ;
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != iVar6);
    }
    puVar2 = PTR_DAT_070f2d40;
    lVar11 = *(long *)(param_1 + 0x1d0);
    if (lVar11 == 0) goto LAB_068bf8c8;
    if (1 < *(int *)(lVar11 + 0x18)) {
      lVar12 = *(long *)PTR_DAT_070f2d40;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar12 = *(long *)puVar2;
      }
      FUN_0686ba98(param_1,lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
    }
    plVar9 = (long *)FUN_068b3948(param_1);
    puVar2 = OVRPlugin_OVRP_1_19_0_TypeInfo;
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_068bf724;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068bf724:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        lVar11 = *plVar16;
        uVar7 = *(undefined8 *)(param_1 + 0x1d0);
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar11 = *plVar16;
        }
        lVar12 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        uVar17 = **(undefined8 **)(lVar11 + 0xb8);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_068bf7a4;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar2,3);
LAB_068bf7a4:
        (*(code *)*puVar10)(plVar9,param_1,uVar7,uVar17,puVar10[1]);
        lVar11 = *(long *)(param_1 + 0x1d0);
        if (lVar11 == 0) goto LAB_068bf8c8;
        iVar6 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        plVar16 = (long *)
                  Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo
        ;
        if (0 < iVar6) {
          FUN_0595236c(*(undefined8 *)(lVar11 + 0x10),0,iVar6,0);
          lVar11 = *(long *)(param_1 + 0x1d0);
          if (lVar11 == 0) goto LAB_068bf8c8;
        }
        FUN_042e4c6c(lVar11,**(undefined8 **)(*plVar16 + 0xb8),
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
      }
    }
    lVar11 = *(long *)(param_1 + 0x1d0);
    if (lVar11 == 0) goto LAB_068bf8c8;
    if (*(int *)(lVar11 + 0x18) != 0) {
      lVar12 = FUN_042e47a4(lVar11,0,*(undefined8 *)
                                      Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                           );
      lVar11 = 0;
      if (lVar12 != 0) {
        uVar7 = *(undefined8 *)
                 System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
        lVar11 = thunk_FUN_031c3cac(lVar12,uVar7);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(lVar12,uVar7);
        }
      }
      *param_2 = lVar11;
      lVar11 = *plVar16;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar11 = *plVar16;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_068bf8c8;
      uVar7 = FUN_0524b1e4(lVar11,*param_2,
                           *(undefined8 *)
                            Oculus_Skinning_GpuSkinning_OvrGpuMorphTargetsCombiner_ArrayGrowthEventHandler_TypeInfo
                          );
      uVar17 = 1;
      goto LAB_068bf8a8;
    }
  }
  uVar17 = 0;
  uVar7 = 0;
  *param_2 = 0;
LAB_068bf8a8:
  *param_3 = uVar7;
  return uVar17;
}


