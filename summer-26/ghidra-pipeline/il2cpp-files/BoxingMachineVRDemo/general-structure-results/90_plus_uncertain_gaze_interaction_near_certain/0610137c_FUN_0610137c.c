/*
FUNCTION_NAME: FUN_0610137c
ENTRY_POINT: 0610137c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 164
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void FUN_0610137c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_06767580;
  if ((DAT_06b8a6d9 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769028);
    FUN_02d6084c(PTR_DAT_06767580);
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Matrix4x4>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<MetadataValue>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<byte>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRAnchor>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XREraseAnchorResult>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRLoadAnchorResult>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRSaveAnchorResult>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRShareAnchorResult>__
                );
    FUN_02d6084c(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnFocusChanged__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnShutdown__);
    FUN_02d6084c(Method_Unity_Collections_NativeListExtensions_Contains<int,_int>__);
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<NativePassData>__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<ResourceHandle>__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<SubPassDescriptor>__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassData>__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassFragmentData>__
                );
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassInputData>__
                );
    FUN_02d6084c(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    DAT_06b8a6d9 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar4 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
  puVar1 = PTR_DAT_0675e258;
  lVar7 = *(long *)(PTR_DAT_0675e258 + 0x78);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_06769028;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x310);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<MetadataValue>__
                              );
    FUN_0439ce50(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRShareAnchorResult>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x310) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x310,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x318);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XREraseAnchorResult>__
                              );
    FUN_0439c9b8(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnFocusChanged__,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x318) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x318,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 800);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                              );
    System_Collections_Generic_Dictionary_ValueCollection<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__CopyTo
              (lVar9,uVar10,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnShutdown__,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 800) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 800,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x328);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Matrix4x4>__
                              );
    FUN_0439cb40(lVar9,uVar10,
                 *(undefined8 *)Method_Unity_Collections_NativeListExtensions_Contains<int,_int>__,0
                );
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x328) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x328,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x330);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                              );
    FUN_0439cc04(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<NativePassData>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x330) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x330,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x338);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRLoadAnchorResult>__
                              );
    FUN_0439ccc8(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<ResourceHandle>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x338) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x338,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x340);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                              );
    FUN_0439c8f4(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<SubPassDescriptor>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x340) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x340,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x348);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                              );
    FUN_0439d0ac(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassData>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x348) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x348,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x350);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                              );
    FUN_0439d170(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassFragmentData>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x350) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x350,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x358);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<byte>__
                              );
    FUN_0439d234(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassInputData>__
                 ,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x358) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x358,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x360);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRAnchor>__
                              );
    FUN_0439ca7c(lVar9,uVar10,
                 *(undefined8 *)Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x360) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x360,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar7 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar7 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x368);
  uVar8 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar4;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRSaveAnchorResult>__
                              );
    FUN_0439cd8c(lVar9,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__,0);
    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar7 + 0x368) = lVar9;
    thunk_FUN_02dd37b4(lVar7 + 0x368,lVar9);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar8,uVar5,uVar6,lVar9);
  return;
}


