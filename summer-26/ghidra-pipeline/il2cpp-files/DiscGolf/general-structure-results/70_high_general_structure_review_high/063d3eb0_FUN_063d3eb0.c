/*
FUNCTION_NAME: FUN_063d3eb0
ENTRY_POINT: 063d3eb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;ray_or_cast_sink_hits_6;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_063d3eb0(void)

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
  if ((DAT_06dcc46e & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0edf8);
    FUN_02d965b8(PTR_DAT_06a0d208);
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRFaceSubsystemDescriptor,_XRFaceSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XROcclusionSubsystemDescriptor,_XROcclusionSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRPlaneSubsystemDescriptor,_XRPlaneSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRPointCloudSubsystemDescriptor,_XRPointCloudSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRRaycastSubsystemDescriptor,_XRRaycastSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRSessionSubsystemDescriptor,_XRSessionSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRAnchorSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRCameraSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRDisplaySubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XREnvironmentProbeSubsystem>__
                );
    FUN_02d965b8(Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRFaceSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRImageTrackingSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRInputSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XROcclusionSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRPlaneSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRPointCloudSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRRaycastSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRSessionSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRAnchorSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRCameraSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRDepthSubsystem>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnKeyboardXTranslateAction__
                );
    DAT_06dcc46e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnKeyboardXTranslateAction__
  ;
  puVar1 = PTR_DAT_069fb9c0;
  lVar8 = *(long *)(PTR_DAT_069fb9c0 + 0x40);
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
  lVar10 = puVar7[0x3e];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem>__
                               );
    FUN_0490357c(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XREnvironmentProbeSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1f0) = lVar10;
    LeanTween__value(lVar8 + 0x1f0,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x3f];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRFaceSubsystemDescriptor,_XRFaceSubsystem>__
                               );
    FUN_049030e4(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRInputSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x1f8) = lVar10;
    LeanTween__value(lVar8 + 0x1f8,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x40];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XROcclusionSubsystemDescriptor,_XROcclusionSubsystem>__
                               );
    FUN_04902f5c(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XROcclusionSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x200) = lVar10;
    LeanTween__value(lVar8 + 0x200,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x41];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRRaycastSubsystemDescriptor,_XRRaycastSubsystem>__
                               );
    FUN_0490326c(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRPlaneSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x208) = lVar10;
    LeanTween__value(lVar8 + 0x208,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x42];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRSessionSubsystemDescriptor,_XRSessionSubsystem>__
                               );
    FUN_04903330(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRPointCloudSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x210) = lVar10;
    LeanTween__value(lVar8 + 0x210,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x43];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRDisplaySubsystem>__
                               );
    FUN_049033f4(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRRaycastSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x218) = lVar10;
    LeanTween__value(lVar8 + 0x218,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x44];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRPlaneSubsystemDescriptor,_XRPlaneSubsystem>__
                               );
    FUN_04903020(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRSessionSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x220) = lVar10;
    LeanTween__value(lVar8 + 0x220,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar8 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar7[0x45];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRAnchorSubsystem>__
                               );
    FUN_04903704(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRAnchorSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x228) = lVar10;
    LeanTween__value(lVar8 + 0x228,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x46];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                               );
    FUN_049037c8(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRCameraSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x230) = lVar10;
    LeanTween__value(lVar8 + 0x230,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x47];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRCameraSubsystem>__
                               );
    FUN_04903640(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_GetLoadedSubsystem<XRDepthSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x238) = lVar10;
    LeanTween__value(lVar8 + 0x238,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x48];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRPointCloudSubsystemDescriptor,_XRPointCloudSubsystem>__
                               );
    FUN_049031a8(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRFaceSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x240) = lVar10;
    LeanTween__value(lVar8 + 0x240,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar8 = *(long *)(puVar1 + 0x40);
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
  lVar10 = puVar7[0x49];
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar8);
      puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem>__
                               );
    FUN_049034b8(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRImageTrackingSubsystem>__
                 ,0);
    lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar8 + 0x248) = lVar10;
    LeanTween__value(lVar8 + 0x248,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar9,uVar5,uVar6,lVar10);
  return;
}


