/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextSelection.set_cursorIndex
ENTRY_POINT: 06101434
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_6
*/


void UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_set_cursorIndex(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x24;
  
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
  *(undefined1 *)(unaff_x19 + 0x6d9) = 1;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar3 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
  puVar1 = PTR_DAT_0675e258;
  lVar6 = *(long *)(PTR_DAT_0675e258 + 0x78);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_06769028;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x310);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<MetadataValue>__
                              );
    FUN_0439ce50(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRShareAnchorResult>__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x310) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x310,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x318);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XREraseAnchorResult>__
                              );
    FUN_0439c9b8(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnFocusChanged__,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x318) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x318,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 800);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                              );
    System_Collections_Generic_Dictionary_ValueCollection<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__CopyTo
              (lVar8,uVar9,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnShutdown__,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 800) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 800,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x328);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Matrix4x4>__
                              );
    FUN_0439cb40(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeListExtensions_Contains<int,_int>__,0
                );
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x328) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x328,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x330);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                              );
    FUN_0439cc04(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<NativePassData>__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x330) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x330,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x338);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRLoadAnchorResult>__
                              );
    FUN_0439ccc8(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<ResourceHandle>__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x338) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x338,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x340);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                              );
    FUN_0439c8f4(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<SubPassDescriptor>__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x340) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x340,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x348);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                              );
    FUN_0439d0ac(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassData>__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x348) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x348,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x350);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                              );
    FUN_0439d170(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassFragmentData>__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x350) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x350,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x358);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<byte>__
                              );
    FUN_0439d234(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassInputData>__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x358) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x358,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x360);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRAnchor>__
                              );
    FUN_0439ca7c(lVar8,uVar9,
                 *(undefined8 *)Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x360) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x360,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(puVar1 + 0x78);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05015c2c(lVar6 + 0x20,0);
  uVar5 = FUN_05015c2c(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x368);
  uVar7 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRSaveAnchorResult>__
                              );
    FUN_0439cd8c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__,0);
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    *(long *)(lVar6 + 0x368) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x368,lVar8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar7,uVar4,uVar5,lVar8);
  return;
}


