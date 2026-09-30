/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextSelection.get_selectIndex
ENTRY_POINT: 06101758
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 132
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_get_selectIndex
               (undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  thunk_FUN_02dbd7b4(param_1);
  lVar2 = *unaff_x25;
  uVar3 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                              );
    System_Collections_Generic_Dictionary_ValueCollection<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__CopyTo
              (uVar1,uVar5,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnShutdown__,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(undefined8 *)(lVar2 + 800) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 800,uVar1);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar3);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x38) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x328);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Matrix4x4>__
                              );
    FUN_0439cb40(lVar4,uVar6,
                 *(undefined8 *)Method_Unity_Collections_NativeListExtensions_Contains<int,_int>__,0
                );
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x328) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x328,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x48) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x330);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                              );
    FUN_0439cc04(lVar4,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<NativePassData>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x330) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x330,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x338);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRLoadAnchorResult>__
                              );
    FUN_0439ccc8(lVar4,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<ResourceHandle>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x338) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x338,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x340);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                              );
    FUN_0439c8f4(lVar4,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<SubPassDescriptor>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x340) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x340,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x348);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                              );
    FUN_0439d0ac(lVar4,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassData>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x348) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x348,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x350);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                              );
    FUN_0439d170(lVar4,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassFragmentData>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x350) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x350,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x358);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<byte>__
                              );
    FUN_0439d234(lVar4,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassInputData>__
                 ,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x358) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x358,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x360);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRAnchor>__
                              );
    FUN_0439ca7c(lVar4,uVar6,
                 *(undefined8 *)Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x360) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x360,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_05015c2c(lVar2 + 0x20,0);
  uVar1 = FUN_05015c2c(*(long *)(unaff_x27 + 0x10) + 0x20,0);
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x368);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRSaveAnchorResult>__
                              );
    FUN_0439cd8c(lVar4,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__,0);
    lVar2 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar2 + 0x368) = lVar4;
    thunk_FUN_02dd37b4(lVar2 + 0x368,lVar4);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar5,uVar3,uVar1,lVar4);
  return;
}


