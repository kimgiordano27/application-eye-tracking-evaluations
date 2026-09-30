/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable$$IsSelectableBy
ENTRY_POINT: 05ec1b58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__IsSelectableBy(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x538));
  FUN_02f08768(PTR_DAT_067c95a0);
  FUN_02f08768(PTR_DAT_067c95b0);
  FUN_02f08768(PTR_DAT_067c95c0);
  FUN_02f08768(PTR_DAT_067c95c8);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnContactRemoved__
              );
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnInteractableRegistered__
              );
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnInteractableUnregistered__
              );
  FUN_02f08768(Method_UnityEngine_XR_XRDisplaySubsystem_BeginRecordingIfLateLatched__);
  FUN_02f08768(Method_UnityEngine_XR_XRDisplaySubsystem_EndRecordingIfLateLatched__);
  FUN_02f08768(Method_UnityEngine_XR_XRDisplaySubsystem_GetCullingParameters__);
  FUN_02f08768(Method_UnityEngine_XR_XRDisplaySubsystem_GetRenderPass__);
  FUN_02f08768(
              Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_TryAddEnvironmentProbe__
              );
  FUN_02f08768(
              Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_set_automaticPlacementRequested__
              );
  FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Register__);
  FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<int>__);
  FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector2>__);
  FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector3>__);
  FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_GetFaceMesh__);
  FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_set_requestedMaximumFaceCount__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeCondition_CheckCondition__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurl__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurlThumb__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateFullCurl__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculatePinch__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateTipCurl__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo__);
  FUN_02f08768(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_SetFingerShapeConfiguration__)
  ;
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal__
              );
  FUN_02f08768(PTR_DAT_067d26d0);
  FUN_02f08768(Method_UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_OnBeforeRender__);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst__
              );
  *(undefined1 *)(unaff_x22 + 0x437) = 1;
  lVar4 = thunk_FUN_02f45270(*unaff_x23);
  FUN_03abf108(lVar4,*unaff_x21);
  puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnContactAdded__
  ;
  puVar2 = PTR_DAT_067c95a0;
  if (unaff_x20 == 0) {
    if (lVar4 == 0) {
LAB_05ec2200:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
LAB_05ec21b4:
    if (*(int *)(lVar4 + 0x18) < 1) {
      uVar5 = *(undefined8 *)
               Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_set_automaticPlacementRequested__
      ;
    }
    else {
      uVar5 = System_Globalization_CultureInfo__GetCultureInfo();
    }
    return uVar5;
  }
UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__IsSelected:
  uVar6 = unaff_x20 & -unaff_x20;
  if (uVar6 < 0x4001) {
    if (uVar6 < 0x81) {
      if (uVar6 < 0x11) {
        if (uVar6 - 1 < 4) {
          iVar8 = (int)(uVar6 - 1);
          if (1 < iVar8) {
            if (iVar8 != 2) {
              if (lVar4 != 0) {
                iVar8 = *(int *)(lVar4 + 0x1c);
                lVar7 = *(long *)(lVar4 + 0x10);
                puVar9 = (undefined8 *)
                         Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween__;
                goto LAB_05ec2154;
              }
              goto LAB_05ec2200;
            }
LAB_05ec2074:
            in_stack_00000008 = *(undefined8 *)puVar3;
            in_stack_00000010 = 0xffffffffffffffff;
            in_stack_00000018 = uVar6;
            uVar5 = FUN_0510aa48(&stack0x00000008,0);
            if (lVar4 == 0) goto LAB_05ec2200;
            lVar7 = *(long *)(lVar4 + 0x10);
            lVar10 = *(long *)puVar2;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            goto joined_r0x05ec20a4;
          }
          if (iVar8 == 0) {
            if (lVar4 != 0) {
              iVar8 = *(int *)(lVar4 + 0x1c);
              lVar7 = *(long *)(lVar4 + 0x10);
              puVar9 = (undefined8 *)
                       Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculatePinch__;
              goto LAB_05ec2154;
            }
            goto LAB_05ec2200;
          }
          if (lVar4 == 0) goto LAB_05ec2200;
          iVar8 = *(int *)(lVar4 + 0x1c);
          lVar7 = *(long *)(lVar4 + 0x10);
          puVar9 = (undefined8 *)
                   Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_SetFingerShapeConfiguration__
          ;
        }
        else {
          if (uVar6 == 8) {
            if (lVar4 != 0) {
              iVar8 = *(int *)(lVar4 + 0x1c);
              lVar7 = *(long *)(lVar4 + 0x10);
              puVar9 = (undefined8 *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnInteractableRegistered__
              ;
              goto LAB_05ec2154;
            }
            goto LAB_05ec2200;
          }
          if (uVar6 != 0x10) goto LAB_05ec2074;
          if (lVar4 == 0) goto LAB_05ec2200;
          iVar8 = *(int *)(lVar4 + 0x1c);
          lVar7 = *(long *)(lVar4 + 0x10);
          puVar9 = (undefined8 *)
                   Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateTipCurl__;
        }
      }
      else {
        uVar1 = (uint)uVar6 & 0xff;
        if (uVar1 == 0x20) {
          if (lVar4 == 0) goto LAB_05ec2200;
          iVar8 = *(int *)(lVar4 + 0x1c);
          lVar7 = *(long *)(lVar4 + 0x10);
          puVar9 = (undefined8 *)Method_UnityEngine_XR_XRDisplaySubsystem_GetCullingParameters__;
        }
        else {
          if (uVar1 != 0x40) {
            if (uVar1 != 0x80) goto LAB_05ec2074;
            if (lVar4 != 0) {
              iVar8 = *(int *)(lVar4 + 0x1c);
              lVar7 = *(long *)(lVar4 + 0x10);
              puVar9 = (undefined8 *)
                       Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateFullCurl__;
              goto LAB_05ec2154;
            }
            goto LAB_05ec2200;
          }
          if (lVar4 == 0) goto LAB_05ec2200;
          iVar8 = *(int *)(lVar4 + 0x1c);
          lVar7 = *(long *)(lVar4 + 0x10);
          puVar9 = (undefined8 *)
                   Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnInteractableUnregistered__
          ;
        }
      }
    }
    else if (uVar6 < 0x401) {
      if (uVar6 == 0x100) {
        if (lVar4 != 0) {
          uVar5 = FUN_063fb9f4(*(undefined8 *)(lVar4 + 0x10));
          return uVar5;
        }
        goto LAB_05ec2200;
      }
      if (uVar6 != 0x200) {
        if (uVar6 != 0x400) goto LAB_05ec2074;
        if (lVar4 != 0) {
          iVar8 = *(int *)(lVar4 + 0x1c);
          lVar7 = *(long *)(lVar4 + 0x10);
          puVar9 = (undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector2>__;
          goto LAB_05ec2154;
        }
        goto LAB_05ec2200;
      }
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)
               Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurlThumb__;
    }
    else if (uVar6 < 0x1001) {
      if (uVar6 == 0x800) {
        if (lVar4 == 0) goto LAB_05ec2200;
        iVar8 = *(int *)(lVar4 + 0x1c);
        lVar7 = *(long *)(lVar4 + 0x10);
        puVar9 = (undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_GetFaceMesh__;
      }
      else {
        if (uVar6 != 0x1000) goto LAB_05ec2074;
        if (lVar4 == 0) goto LAB_05ec2200;
        iVar8 = *(int *)(lVar4 + 0x1c);
        lVar7 = *(long *)(lVar4 + 0x10);
        puVar9 = (undefined8 *)
                 Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurl__;
      }
    }
    else if (uVar6 == 0x2000) {
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)
               Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeCondition_CheckCondition__;
    }
    else {
      if (uVar6 != 0x4000) goto LAB_05ec2074;
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst__
      ;
    }
  }
  else if (uVar6 < 0x100001) {
    if (uVar6 < 0x20001) {
      if (uVar6 == 0x8000) {
        if (lVar4 != 0) {
          uVar5 = FUN_063fbc7c(*(undefined8 *)(lVar4 + 0x10));
          return uVar5;
        }
        goto LAB_05ec2200;
      }
      if (uVar6 == 0x10000) {
        if (lVar4 == 0) goto LAB_05ec2200;
        iVar8 = *(int *)(lVar4 + 0x1c);
        lVar7 = *(long *)(lVar4 + 0x10);
        puVar9 = (undefined8 *)
                 Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_TryAddEnvironmentProbe__
        ;
      }
      else {
        if (uVar6 != 0x20000) goto LAB_05ec2074;
        if (lVar4 == 0) goto LAB_05ec2200;
        iVar8 = *(int *)(lVar4 + 0x1c);
        lVar7 = *(long *)(lVar4 + 0x10);
        puVar9 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnContactRemoved__
        ;
      }
    }
    else if (uVar6 == 0x40000) {
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector3>__;
    }
    else if (uVar6 == 0x80000) {
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)Method_UnityEngine_XR_XRDisplaySubsystem_EndRecordingIfLateLatched__;
    }
    else {
      if (uVar6 != 0x100000) goto LAB_05ec2074;
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)Method_UnityEngine_XR_XRDisplaySubsystem_BeginRecordingIfLateLatched__;
    }
  }
  else if (uVar6 < 0x800001) {
    if (uVar6 == 0x200000) {
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)PTR_DAT_067d26d0;
    }
    else if (uVar6 == 0x400000) {
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)
               Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_set_requestedMaximumFaceCount__;
    }
    else {
      if (uVar6 != 0x800000) goto LAB_05ec2074;
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<int>__;
    }
  }
  else if (uVar6 < 0x2000001) {
    if (uVar6 == 0x1000000) {
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)
               Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Register__;
    }
    else {
      if (uVar6 != 0x2000000) goto LAB_05ec2074;
      if (lVar4 == 0) goto LAB_05ec2200;
      iVar8 = *(int *)(lVar4 + 0x1c);
      lVar7 = *(long *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_OnBeforeRender__;
    }
  }
  else if (uVar6 == 0x4000000) {
    if (lVar4 == 0) goto LAB_05ec2200;
    iVar8 = *(int *)(lVar4 + 0x1c);
    lVar7 = *(long *)(lVar4 + 0x10);
    puVar9 = (undefined8 *)Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo__;
  }
  else {
    if (uVar6 != 0x8000000) goto LAB_05ec2074;
    if (lVar4 == 0) goto LAB_05ec2200;
    iVar8 = *(int *)(lVar4 + 0x1c);
    lVar7 = *(long *)(lVar4 + 0x10);
    puVar9 = (undefined8 *)Method_UnityEngine_XR_XRDisplaySubsystem_GetRenderPass__;
  }
LAB_05ec2154:
  uVar5 = *puVar9;
  lVar10 = *(long *)puVar2;
  *(int *)(lVar4 + 0x1c) = iVar8 + 1;
joined_r0x05ec20a4:
  if (lVar7 == 0) goto LAB_05ec2200;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
  }
  else {
    FUN_03abf904(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  unaff_x20 = unaff_x20 - 1 & unaff_x20;
  if (unaff_x20 == 0) goto LAB_05ec21b4;
  goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__IsSelected;
}


