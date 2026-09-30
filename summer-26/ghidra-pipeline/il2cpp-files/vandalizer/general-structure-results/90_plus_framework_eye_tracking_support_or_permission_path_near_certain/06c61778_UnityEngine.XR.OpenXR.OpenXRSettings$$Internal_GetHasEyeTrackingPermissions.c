/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_GetHasEyeTrackingPermissions
ENTRY_POINT: 06c61778
PROGRAM: vandalizer-libil2cpp.so
SCORE: 106
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_3;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_GetHasEyeTrackingPermissions(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
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
  
  FUN_031f20f4(Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>_TypeInfo);
  FUN_031f20f4(
              Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionStrengthInteractable>_TypeInfo
              );
  FUN_031f20f4(PTR_DAT_07624a18);
  FUN_031f20f4(PTR_DAT_075dbcf0);
  FUN_031f20f4(Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractable>_TypeInfo);
  FUN_031f20f4(PTR_DAT_07623688);
  FUN_031f20f4(Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractor>_TypeInfo);
  FUN_031f20f4(
              UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARPointCloudManager,_XRPointCloudSubsystem,_XRPointCloudSubsystemDescriptor,_XRPointCloudSubsystem_Provider,_XRPointCloud,_ARPointCloud>_TypeInfo
              );
  FUN_031f20f4(Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo);
  *(undefined1 *)(unaff_x27 + 0x5c9) = 1;
  uVar8 = thunk_FUN_0322f148(*unaff_x21);
  FUN_06809374(uVar8,*unaff_x20,0,0,0,0,*unaff_x26,0);
  in_stack_00000188 = 0;
  in_stack_00000190 = 0;
  in_stack_00000198 = 0;
  FUN_0681e814(&stack0x00000188,uVar8,0);
  *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_00000198;
  *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000190;
  *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_00000188;
  thunk_FUN_0329bf60(unaff_x19 + 0xb8,0);
  uVar8 = thunk_FUN_0322f148(*unaff_x21);
  FUN_06809374(uVar8,*unaff_x23,0,0,0,0,*unaff_x24,0);
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  in_stack_00000180 = 0;
  FUN_0681e814(&stack0x00000170,uVar8,0);
  uVar10 = unaff_x25[0x19];
  uVar8 = unaff_x25[0x18];
  *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000180;
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar10;
  *(undefined8 *)(unaff_x19 + 200) = uVar8;
  thunk_FUN_0329bf60(unaff_x19 + 0xd0,0);
  lVar9 = thunk_FUN_0322f148(*unaff_x21);
  FUN_06809374(lVar9,*unaff_x22,1,0,0,0,0,0);
  puVar7 = Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo;
  puVar6 = Unity_XR_CoreUtils_Collections_HashSetList<IAsyncAffordanceStateReceiver>_TypeInfo;
  puVar5 = 
  UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARTrackedObjectManager,_XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider,_XRTrackedObject,_ARTrackedObject>_TypeInfo
  ;
  puVar4 = PTR_DAT_07626038;
  puVar3 = PTR_DAT_07624a18;
  puVar2 = PTR_DAT_07623688;
  puVar1 = PTR_DAT_075dbcf0;
  if (lVar9 != 0) {
    FUN_06809310(lVar9,1,0);
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000168 = 0;
    FUN_0681e814(&stack0x00000158,lVar9,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_00000168;
    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_00000160;
    *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000158;
    thunk_FUN_0329bf60(unaff_x19 + 0xe8,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)puVar4,0,0,0,0,*(undefined8 *)puVar1,0);
    in_stack_00000140 = 0;
    in_stack_00000148 = 0;
    in_stack_00000150 = 0;
    FUN_0681e814(&stack0x00000140,uVar8,0);
    uVar10 = unaff_x25[0x13];
    uVar8 = unaff_x25[0x12];
    *(undefined8 *)(unaff_x19 + 0x108) = in_stack_00000150;
    *(undefined8 *)(unaff_x19 + 0x100) = uVar10;
    *(undefined8 *)(unaff_x19 + 0xf8) = uVar8;
    thunk_FUN_0329bf60(unaff_x19 + 0x100,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)puVar5,1,0,0,0,0,0);
    in_stack_00000128 = 0;
    in_stack_00000130 = 0;
    in_stack_00000138 = 0;
    FUN_0681e814(&stack0x00000128,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x120) = in_stack_00000138;
    *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000130;
    *(undefined8 *)(unaff_x19 + 0x110) = in_stack_00000128;
    thunk_FUN_0329bf60(unaff_x19 + 0x118,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)puVar6,0,0,0,0,*(undefined8 *)puVar2,0);
    in_stack_00000110 = 0;
    in_stack_00000118 = 0;
    in_stack_00000120 = 0;
    FUN_0681e814(&stack0x00000110,uVar8,0);
    uVar10 = unaff_x25[0xd];
    uVar8 = unaff_x25[0xc];
    *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000120;
    *(undefined8 *)(unaff_x19 + 0x130) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x128) = uVar8;
    thunk_FUN_0329bf60(unaff_x19 + 0x130,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)puVar7,1,0,0,0,0,0);
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    FUN_0681e814(&stack0x000000f8,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000108;
    *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000100;
    *(undefined8 *)(unaff_x19 + 0x140) = in_stack_000000f8;
    thunk_FUN_0329bf60(unaff_x19 + 0x148,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)
                        Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractable>_TypeInfo,0
                 ,0,0,0,*(undefined8 *)puVar2,0);
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f0 = 0;
    FUN_0681e814(&stack0x000000e0,uVar8,0);
    uVar10 = unaff_x25[7];
    uVar8 = unaff_x25[6];
    *(undefined8 *)(unaff_x19 + 0x168) = in_stack_000000f0;
    *(undefined8 *)(unaff_x19 + 0x160) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x158) = uVar8;
    thunk_FUN_0329bf60(unaff_x19 + 0x160,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)
                        Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractor>_TypeInfo,1,0
                 ,0,0,0,0);
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    FUN_0681e814(&stack0x000000c8,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x180) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0x178) = in_stack_000000d0;
    *(undefined8 *)(unaff_x19 + 0x170) = in_stack_000000c8;
    thunk_FUN_0329bf60(unaff_x19 + 0x178,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)
                        Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionStrengthInteractable>_TypeInfo
                 ,0,0,0,0,*(undefined8 *)puVar2,0);
    in_stack_000000b0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000c0 = 0;
    FUN_0681e814(&stack0x000000b0,uVar8,0);
    uVar10 = unaff_x25[1];
    uVar8 = *unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x198) = in_stack_000000c0;
    *(undefined8 *)(unaff_x19 + 400) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x188) = uVar8;
    thunk_FUN_0329bf60(unaff_x19 + 400,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)RenderGraphCompilationCache_HashEntry<object>_TypeInfo,0,0,0,0
                 ,*(undefined8 *)puVar3,0);
    in_stack_00000098 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
    FUN_0681e814(&stack0x00000098,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_000000a8;
    *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_000000a0;
    *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000098;
    thunk_FUN_0329bf60(unaff_x19 + 0x1a8,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)
                        Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo,2,0,0,0,0,0
                );
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    in_stack_00000090 = 0;
    FUN_0681e814(&stack0x00000080,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x1c8) = in_stack_00000090;
    *(undefined8 *)(unaff_x19 + 0x1c0) = in_stack_00000088;
    *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000080;
    thunk_FUN_0329bf60(unaff_x19 + 0x1c0,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo,0,
                 0,0,0,*(undefined8 *)puVar3,0);
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    FUN_0681e814(&stack0x00000068,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x1e0) = in_stack_00000078;
    *(undefined8 *)(unaff_x19 + 0x1d8) = in_stack_00000070;
    *(undefined8 *)(unaff_x19 + 0x1d0) = in_stack_00000068;
    thunk_FUN_0329bf60(unaff_x19 + 0x1d8,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)
                        Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                 ,0,0,0,0,*(undefined8 *)puVar3,0);
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    in_stack_00000060 = 0;
    FUN_0681e814(&stack0x00000050,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x1f8) = in_stack_00000060;
    *(undefined8 *)(unaff_x19 + 0x1f0) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x1e8) = in_stack_00000050;
    thunk_FUN_0329bf60(unaff_x19 + 0x1f0,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)
                        Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>_TypeInfo,0,0
                 ,0,0,*(undefined8 *)puVar3,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_0681e814(&stack0x00000038,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x210) = in_stack_00000048;
    *(undefined8 *)(unaff_x19 + 0x208) = in_stack_00000040;
    *(undefined8 *)(unaff_x19 + 0x200) = in_stack_00000038;
    thunk_FUN_0329bf60(unaff_x19 + 0x208,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)
                        Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_TypeInfo,1,0,
                 0,0,0,0);
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_0681e814(&stack0x00000020,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x228) = in_stack_00000030;
    *(undefined8 *)(unaff_x19 + 0x220) = in_stack_00000028;
    *(undefined8 *)(unaff_x19 + 0x218) = in_stack_00000020;
    thunk_FUN_0329bf60(unaff_x19 + 0x220,0);
    uVar8 = thunk_FUN_0322f148(*unaff_x21);
    FUN_06809374(uVar8,*(undefined8 *)
                        UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARTrackedImageManager,_XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
                 ,0,0,0,0,*(undefined8 *)puVar3,0);
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_0681e814(&stack0x00000008,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x240) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x238) = in_stack_00000010;
    *(undefined8 *)(unaff_x19 + 0x230) = in_stack_00000008;
    thunk_FUN_0329bf60(unaff_x19 + 0x238,0);
    uVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARRaycastManager,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                              );
    FUN_06d2f024(uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x250) = uVar8;
    thunk_FUN_0329bf60(unaff_x19 + 0x250,uVar8);
    *(undefined1 *)(unaff_x19 + 0x88) = 1;
    *(undefined2 *)(unaff_x19 + 0x24) = 0x101;
    *(undefined1 *)(unaff_x19 + 0x99) = 1;
    thunk_FUN_06e54964();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


