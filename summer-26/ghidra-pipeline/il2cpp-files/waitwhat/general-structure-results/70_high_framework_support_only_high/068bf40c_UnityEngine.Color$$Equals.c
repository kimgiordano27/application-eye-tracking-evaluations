/*
FUNCTION_NAME: UnityEngine.Color$$Equals
ENTRY_POINT: 068bf40c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 UnityEngine_Color__Equals(void)

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
  undefined8 uVar11;
  undefined8 extraout_x1;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x21;
  int iVar16;
  long *plVar17;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  iVar6 = UnityEngine_Color__RGBToHSVHelper();
  plVar17 = (long *)
            Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo;
  lVar12 = *(long *)(unaff_x21 + 0x1d0);
  if (lVar12 == 0) {
LAB_068bf8c8:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar16 = *(int *)(lVar12 + 0x18);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (0 < iVar16) {
    FUN_0595236c(*(undefined8 *)(lVar12 + 0x10),0,iVar16,0);
  }
  lVar12 = *plVar17;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar12 = *plVar17;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 == 0) goto LAB_068bf8c8;
  FUN_0524b3ec(lVar12,*(undefined8 *)
                       Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_TrackerNodeComparer_TypeInfo
              );
  puVar5 = Oculus_Skinning_GpuSkinning_OvrGpuSkinnerJointsOnly_<>c__DisplayClass4_0_TypeInfo;
  puVar4 = Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo;
  puVar3 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
  puVar2 = UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo;
  if (0 < iVar6) {
    if (*(long *)(unaff_x21 + 0x1c0) == 0) goto LAB_068bf8c8;
    iVar6 = *(int *)(*(long *)(unaff_x21 + 0x1c0) + 0x18);
    if (0 < iVar6) {
      iVar16 = 0;
      do {
        if (*(long *)(unaff_x21 + 0x1c0) == 0) goto LAB_068bf8c8;
        uVar7 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),iVar16,*(undefined8 *)puVar5);
        if (*(long *)(unaff_x21 + 0x1d0) == 0) goto LAB_068bf8c8;
        uVar8 = FUN_042e4df8(*(long *)(unaff_x21 + 0x1d0),uVar7,*(undefined8 *)puVar4);
        if ((((uVar8 & 1) == 0) &&
            (lVar12 = thunk_FUN_031c3cac(uVar7,*(undefined8 *)puVar3), lVar12 != 0)) &&
           (plVar9 = (long *)thunk_FUN_031c3cac(lVar12,*(undefined8 *)puVar2), plVar9 != (long *)0x0
           )) {
          lVar13 = *plVar9;
          lVar12 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                goto LAB_068bf564;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_031c0d08(plVar9,lVar12,6);
LAB_068bf564:
          uVar8 = (*(code *)*puVar10)(plVar9);
          if ((uVar8 & 1) != 0) {
            if (*(long *)(unaff_x21 + 0x1c0) == 0) goto LAB_068bf8c8;
            lVar12 = *(long *)(unaff_x21 + 0x1d0);
            uVar7 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),iVar16,*(undefined8 *)puVar5);
            if (lVar12 == 0) goto LAB_068bf8c8;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar14 = *(long *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_068bf8c8;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
            }
            else {
              FUN_042e4a64(lVar12,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *plVar17;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar12 = *plVar17;
            }
            if (*(long *)(unaff_x21 + 0x1c0) == 0) goto LAB_068bf8c8;
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            uVar7 = FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),iVar16,*(undefined8 *)puVar5);
            if ((*(long *)(unaff_x21 + 0x1c0) == 0) ||
               (FUN_044d6f44(*(long *)(unaff_x21 + 0x1c0),iVar16,*(undefined8 *)puVar5), lVar12 == 0
               )) goto LAB_068bf8c8;
            FUN_0524b264(lVar12,uVar7,extraout_x1,
                         *(undefined8 *)
                          Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_LayoutResult_TypeInfo
                        );
            plVar17 = (long *)
                      Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo
            ;
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != iVar6);
    }
    if (*(long *)(unaff_x21 + 0x1d0) == 0) goto LAB_068bf8c8;
    if (1 < *(int *)(*(long *)(unaff_x21 + 0x1d0) + 0x18)) {
      if (*(int *)(*(long *)PTR_DAT_070f2d40 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0686ba98();
    }
    plVar9 = (long *)FUN_068b3948();
    puVar2 = OVRPlugin_OVRP_1_19_0_TypeInfo;
    if (plVar9 != (long *)0x0) {
      lVar12 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_068bf724;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068bf724:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*plVar17 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar12 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_068bf7a4;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar2,3);
LAB_068bf7a4:
        (*(code *)*puVar10)(plVar9);
        lVar12 = *(long *)(unaff_x21 + 0x1d0);
        if (lVar12 == 0) goto LAB_068bf8c8;
        iVar6 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        plVar17 = (long *)
                  Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo
        ;
        if (0 < iVar6) {
          FUN_0595236c(*(undefined8 *)(lVar12 + 0x10),0,iVar6,0);
          lVar12 = *(long *)(unaff_x21 + 0x1d0);
          if (lVar12 == 0) goto LAB_068bf8c8;
        }
        FUN_042e4c6c(lVar12,**(undefined8 **)(*plVar17 + 0xb8),
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
      }
    }
    lVar12 = *(long *)(unaff_x21 + 0x1d0);
    if (lVar12 == 0) goto LAB_068bf8c8;
    if (*(int *)(lVar12 + 0x18) != 0) {
      lVar13 = FUN_042e47a4(lVar12,0,*(undefined8 *)
                                      Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                           );
      lVar12 = 0;
      if (lVar13 != 0) {
        uVar7 = *(undefined8 *)
                 System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo;
        lVar12 = thunk_FUN_031c3cac(lVar13,uVar7);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(lVar13,uVar7);
        }
      }
      *unaff_x25 = lVar12;
      lVar12 = *plVar17;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar12 = *plVar17;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_068bf8c8;
      uVar7 = FUN_0524b1e4(lVar12,*unaff_x25,
                           *(undefined8 *)
                            Oculus_Skinning_GpuSkinning_OvrGpuMorphTargetsCombiner_ArrayGrowthEventHandler_TypeInfo
                          );
      uVar11 = 1;
      goto LAB_068bf8a8;
    }
  }
  uVar11 = 0;
  uVar7 = 0;
  *unaff_x25 = 0;
LAB_068bf8a8:
  *unaff_x26 = uVar7;
  return uVar11;
}


