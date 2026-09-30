/*
FUNCTION_NAME: UnityEngine.UIElements.InlineStyleAccess$$SetInlineCursor
ENTRY_POINT: 062381ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_UIElements_InlineStyleAccess__SetInlineCursor
               (long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  
  puVar1 = Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_TryAddEnvironmentProbe__;
  if ((DAT_06b8b72f & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767df8);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_set_automaticPlacementRequested__
                );
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Register__
                );
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<int>__);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector2>__);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector3>__);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_GetFaceMesh__);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_set_requestedMaximumFaceCount__)
    ;
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeCondition_CheckCondition__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurl__);
    FUN_02d6084c(Method_UnityEngine_XR_XRDisplaySubsystem_GetCullingParameters__);
    FUN_02d6084c(PTR_DAT_0675ee10);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurlThumb__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateFullCurl__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculatePinch__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateTipCurl__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween__);
    FUN_02d6084c(Method_System_Net_Sockets_SafeSocketHandle_ReleaseHandle__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_SetFingerShapeConfiguration__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnContactAdded__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_OnBeforeRender__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_OnSelectExited__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_TryAddEnvironmentProbe__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_CreateDeactivateEventArgs__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale__
                );
    DAT_06b8b72f = 1;
  }
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar13 = *(long *)puVar1;
  }
  puVar6 = Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateSpread__;
  puVar3 = Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculatePinch__;
  lVar17 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
  if (lVar17 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = *(long *)puVar1;
    }
    uVar19 = **(undefined8 **)(lVar13 + 0xb8);
    lVar17 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeCondition_CheckCondition__
                               );
    FUN_04d566c0(lVar17,uVar19,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition__
                 ,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar14 = lVar17;
    thunk_FUN_02dd37b4(plVar14,lVar17);
  }
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_03955984(uVar19,lVar17,0,10000,*(undefined8 *)puVar3);
  if (param_1 == 0) goto LAB_06238af4;
  *(undefined8 *)(param_1 + 0x48) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x48),uVar19);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar13 = *(long *)puVar1;
  }
  puVar6 = Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector3>__;
  puVar3 = Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Register__;
  puVar1 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
  ;
  lVar17 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar17 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = *(long *)
                Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_TryAddEnvironmentProbe__
      ;
    }
    puVar2 = Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_TryAddEnvironmentProbe__
    ;
    uVar19 = **(undefined8 **)(lVar13 + 0xb8);
    lVar17 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurl__
                               );
    FUN_04d566c0(lVar17,uVar19,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale__
                 ,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar14 = lVar17;
    thunk_FUN_02dd37b4(plVar14,lVar17);
  }
  puVar9 = Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo__;
  puVar8 = Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateFullCurl__;
  puVar7 = Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_GetFaceMesh__;
  puVar5 = Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector2>__;
  puVar4 = Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<int>__;
  puVar2 = 
  Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_set_automaticPlacementRequested__;
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)
                               Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateTipCurl__
                             );
  FUN_03955984(uVar19,lVar17,0,10000,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x50) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x50),uVar19);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_04218598(uVar19,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x58),uVar19);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_042186f4(uVar19,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x60) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x60),uVar19);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
  FUN_04894d4c(uVar19,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x68) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x68),uVar19);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_062304ec();
  *(undefined8 *)(param_1 + 0x70) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x70),uVar19);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b8ae52 == '\0') {
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PaniniProjectionPassData>__
                );
    DAT_06b8ae52 = '\x01';
  }
  puVar6 = Method_UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_OnBeforeRender__;
  puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnContactAdded__
  ;
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar13 = *(long *)puVar1;
  }
  puVar8 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst__
  ;
  puVar7 = Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween__;
  puVar5 = Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurlThumb__;
  puVar4 = Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_set_requestedMaximumFaceCount__;
  puVar2 = Method_System_Net_Sockets_SafeSocketHandle_ReleaseHandle__;
  puVar1 = PTR_DAT_0675ee10;
  *(undefined8 *)(param_1 + 0xe8) = **(undefined8 **)(lVar13 + 0xb8);
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xe8));
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_06237e58();
  *(undefined8 *)(param_1 + 0x128) = uVar19;
  thunk_FUN_02dd37b4(param_1 + 0x128,uVar19);
  lVar13 = *(long *)puVar6;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar13 = *(long *)puVar6;
  }
  uVar18 = **(undefined8 **)(lVar13 + 0xb8);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_0622dc3c(uVar19,uVar18,0);
  *(undefined8 *)(param_1 + 0x130) = uVar19;
  thunk_FUN_02dd37b4(param_1 + 0x130,uVar19);
  FUN_0504920c(param_1,0);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03aabcd0(uVar19,8,*(undefined8 *)puVar7);
  puVar20 = (undefined8 *)(param_1 + 0x18);
  *puVar20 = uVar19;
  thunk_FUN_02dd37b4(puVar20,uVar19);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03aabcd0(uVar19,8,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x20) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x20),uVar19);
  uVar19 = FUN_02d60934(*(undefined8 *)puVar1,5);
  *(undefined8 *)(param_1 + 0x28) = uVar19;
  thunk_FUN_02dd37b4();
  uVar19 = FUN_02d60934(*(undefined8 *)puVar1,5);
  *(undefined8 *)(param_1 + 0x30) = uVar19;
  thunk_FUN_02dd37b4();
  FUN_06238b00(puVar20);
  *(long **)(param_1 + 0x100) = param_2;
  thunk_FUN_02dd37b4(param_1 + 0x100,param_2);
  *(long *)(param_1 + 0x108) = param_3;
  thunk_FUN_02dd37b4(param_1 + 0x108,param_3);
  *(undefined8 *)(param_1 + 0x110) = param_4;
  thunk_FUN_02dd37b4(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = param_5;
  thunk_FUN_02dd37b4(param_1 + 0x118);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_06243e54(uVar19,0);
  *(undefined8 *)(param_1 + 0x120) = uVar19;
  thunk_FUN_02dd37b4(param_1 + 0x120,uVar19);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_0622f9bc(uVar19,0);
  *(undefined8 *)(param_1 + 0x140) = uVar19;
  thunk_FUN_02dd37b4(param_1 + 0x140,uVar19);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_GetAssistedVelocityInternal__
                             );
  FUN_06237c98();
  *(undefined8 *)(param_1 + 0xf0) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xf0),uVar19);
  uVar18 = *(undefined8 *)(param_1 + 0x130);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)
                               Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_SetFingerShapeConfiguration__
                             );
  FUN_0632a824(uVar19,uVar18,0);
  *(undefined8 *)(param_1 + 0x138) = uVar19;
  thunk_FUN_02dd37b4(param_1 + 0x138,uVar19);
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale__
                             );
  FUN_06238b78(uVar19,param_1);
  *(undefined8 *)(param_1 + 0x40) = uVar19;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x40),uVar19);
  iVar11 = FUN_06030c10(0);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_OnSelectExited__;
  if (param_2 == (long *)0x0) goto LAB_06238af4;
  iVar12 = (**(code **)(*param_2 + 0x418))(param_2,*(undefined8 *)(*param_2 + 0x420));
  if (iVar12 == 0) {
    bVar10 = *(byte *)(*(long *)PTR_DAT_06767df8 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar10) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar10 * 8 + -8) != *(long *)PTR_DAT_06767df8))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(param_2);
    }
    bVar10 = FUN_062ffc60(param_2,0);
    *(byte *)(param_1 + 0x151) = bVar10 & 1;
    if (param_3 == 0) goto LAB_06238af4;
    *(byte *)(param_3 + 0xc2) = bVar10 & 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if ((bVar10 & 1) != 0) {
      uVar19 = FUN_06243a78();
      goto LAB_062389d0;
    }
    uVar19 = FUN_0624389c(0);
    *(undefined8 *)(param_1 + 0x78) = uVar19;
    thunk_FUN_02dd37b4();
    if (iVar11 == 1) {
      plVar14 = (long *)param_2[0xf];
      if (plVar14 == (long *)0x0) goto LAB_06238af4;
      lVar13 = *plVar14;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_UnityEngine_XR_XRDisplaySubsystem_GetCullingParameters__) {
            puVar20 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06238adc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar20 = (undefined8 *)
                FUN_02d9a5d4(plVar14,*(long *)
                                      Method_UnityEngine_XR_XRDisplaySubsystem_GetCullingParameters__
                             ,0);
LAB_06238adc:
      bVar10 = (*(code *)*puVar20)(plVar14,puVar20[1]);
      *(byte *)(param_1 + 0x153) = bVar10 & 1;
    }
  }
  else {
    if (iVar11 == 1) {
      *(undefined1 *)(param_1 + 0x153) = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar19 = FUN_06243ad4(0);
LAB_062389d0:
    *(undefined8 *)(param_1 + 0x78) = uVar19;
    thunk_FUN_02dd37b4();
  }
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_CreateDeactivateEventArgs__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_06243b30(0);
  if (*(char *)(param_1 + 0x153) != '\0') {
    iVar11 = 0;
  }
  uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_0624736c(uVar19,iVar11,0);
  *(undefined8 *)(param_1 + 0x148) = uVar19;
  thunk_FUN_02dd37b4(param_1 + 0x148,uVar19);
  lVar13 = param_2[0x18];
  *(char *)(param_1 + 0x152) = (char)lVar13;
  if (param_3 != 0) {
    *(char *)(param_3 + 0xc1) = (char)lVar13;
    return;
  }
LAB_06238af4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


