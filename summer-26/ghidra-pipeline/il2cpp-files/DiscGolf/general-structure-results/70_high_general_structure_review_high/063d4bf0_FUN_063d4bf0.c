/*
FUNCTION_NAME: FUN_063d4bf0
ENTRY_POINT: 063d4bf0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_063d4bf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_DAT_06a0d208;
  if ((DAT_06dcc46f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0edf8);
    FUN_02d965b8(PTR_DAT_06a0d208);
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRDisplaySubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XREnvironmentProbeSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRFaceSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRImageTrackingSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRInputSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XROcclusionSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRPlaneSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRPointCloudSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRRaycastSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRSessionSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__
                );
    FUN_02d965b8(Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRInputSubsystem>__)
    ;
    FUN_02d965b8(Method_UnityEngine_XR_Management_XRLoaderHelper_StopSubsystem<XRDisplaySubsystem>__
                );
    FUN_02d965b8(Method_UnityEngine_XR_Management_XRLoaderHelper_StopSubsystem<XRInputSubsystem>__);
    FUN_02d965b8(Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Register__);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_XROrigin_OnBeforeRender__);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_XROrigin_OnInputSubsystemTrackingOriginUpdated__);
    FUN_02d965b8(Method_UnityEngine_Experimental_Rendering_XRPass_AddView__);
    FUN_02d965b8(Method_UnityEngine_Experimental_Rendering_XRPass_AssignView__);
    FUN_02d965b8(Method_UnityEngine_Experimental_Rendering_XRPass_StartSinglePass__);
    FUN_02d965b8(Method_UnityEngine_XR_ARSubsystems_XRPlaneSubsystem_GetBoundary__);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverEntered__);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverExited__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance_OnPokeStateDataUpdated__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnKeyboardXTranslateAction__
                );
    DAT_06dcc46f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnKeyboardXTranslateAction__
  ;
  puVar1 = PTR_DAT_069fb9c0;
  lVar8 = *(long *)(PTR_DAT_069fb9c0 + 0x50);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_06a0edf8;
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x4a];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__
                               );
    FUN_04903eac(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_StopSubsystem<XRDisplaySubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x250) = lVar10;
    LeanTween__value(lVar8 + 0x250,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x4b];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRImageTrackingSubsystem>__
                               );
    FUN_04903a14(lVar10,uVar11,*(undefined8 *)Method_Unity_XR_CoreUtils_XROrigin_OnBeforeRender__,0)
    ;
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 600) = lVar10;
    LeanTween__value(lVar8 + 600,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x4c];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XREnvironmentProbeSubsystem>__
                               );
    FUN_0490388c(lVar10,uVar11,
                 *(undefined8 *)
                  Method_Unity_XR_CoreUtils_XROrigin_OnInputSubsystemTrackingOriginUpdated__,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x260) = lVar10;
    LeanTween__value(lVar8 + 0x260,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x4d];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRSessionSubsystem>__
                               );
    FUN_04903b9c(lVar10,uVar11,
                 *(undefined8 *)Method_UnityEngine_Experimental_Rendering_XRPass_AddView__,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x268) = lVar10;
    LeanTween__value(lVar8 + 0x268,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x4e];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRFaceSubsystem>__
                               );
    FUN_04903c60(lVar10,uVar11,
                 *(undefined8 *)Method_UnityEngine_Experimental_Rendering_XRPass_AssignView__,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x270) = lVar10;
    LeanTween__value(lVar8 + 0x270,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x4f];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRDisplaySubsystem>__
                               );
    FUN_04903d24(lVar10,uVar11,
                 *(undefined8 *)Method_UnityEngine_Experimental_Rendering_XRPass_StartSinglePass__,0
                );
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x278) = lVar10;
    LeanTween__value(lVar8 + 0x278,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x50];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRInputSubsystem>__
                               );
    FUN_04903950(lVar10,uVar11,
                 *(undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRPlaneSubsystem_GetBoundary__,0)
    ;
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x280) = lVar10;
    LeanTween__value(lVar8 + 0x280,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x51];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRRaycastSubsystem>__
                               );
    FUN_04904034(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverEntered__,
                 0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x288) = lVar10;
    LeanTween__value(lVar8 + 0x288,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x52];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRInputSubsystem>__
                               );
    FUN_049040f8(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverExited__,0
                );
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x290) = lVar10;
    LeanTween__value(lVar8 + 0x290,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x53];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRPlaneSubsystem>__
                               );
    FUN_04903f70(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance_OnPokeStateDataUpdated__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x298) = lVar10;
    LeanTween__value(lVar8 + 0x298,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x54];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRPointCloudSubsystem>__
                               );
    FUN_04903ad8(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_StopSubsystem<XRInputSubsystem>__,
                 0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x2a0) = lVar10;
    LeanTween__value(lVar8 + 0x2a0,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x50);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x55];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XROcclusionSubsystem>__
                               );
    FUN_04903de8(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Register__,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x2a8) = lVar10;
    LeanTween__value(lVar8 + 0x2a8,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  return;
}


