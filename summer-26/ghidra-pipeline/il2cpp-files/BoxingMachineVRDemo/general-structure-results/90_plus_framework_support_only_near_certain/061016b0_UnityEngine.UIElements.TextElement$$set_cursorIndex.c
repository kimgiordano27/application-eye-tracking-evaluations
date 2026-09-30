/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$set_cursorIndex
ENTRY_POINT: 061016b0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 152
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void UnityEngine_UIElements_TextElement__set_cursorIndex(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  FUN_0439c9b8();
  lVar3 = *(long *)(*unaff_x25 + 0xb8);
  *(undefined8 *)(lVar3 + 0x318) = param_1;
  thunk_FUN_02dd37b4(lVar3 + 0x318,param_1);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x28) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 800);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                              );
    System_Collections_Generic_Dictionary_ValueCollection<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__CopyTo
              (lVar5,uVar6,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnShutdown__,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 800) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 800,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x38) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x328);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Matrix4x4>__
                              );
    FUN_0439cb40(lVar5,uVar6,
                 *(undefined8 *)Method_Unity_Collections_NativeListExtensions_Contains<int,_int>__,0
                );
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x328) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x328,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x48) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x330);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                              );
    FUN_0439cc04(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<NativePassData>__
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x330) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x330,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x338);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRLoadAnchorResult>__
                              );
    FUN_0439ccc8(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<ResourceHandle>__
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x338) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x338,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x340);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                              );
    FUN_0439c8f4(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_LastIndex<SubPassDescriptor>__
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x340) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x340,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x348);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                              );
    FUN_0439d0ac(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassData>__
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x348) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x348,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x350);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                              );
    FUN_0439d170(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassFragmentData>__
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x350) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x350,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x358);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<byte>__
                              );
    FUN_0439d234(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativeListExtensions_MakeReadOnlySpan<PassInputData>__
                 ,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x358) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x358,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x360);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRAnchor>__
                              );
    FUN_0439ca7c(lVar5,uVar6,
                 *(undefined8 *)Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x360) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x360,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(unaff_x27 + 0x78);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_05015c2c(lVar3 + 0x20,0);
  uVar2 = FUN_05015c2c(*(long *)(unaff_x27 + 0x10) + 0x20,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x368);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRSaveAnchorResult>__
                              );
    FUN_0439cd8c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x368) = lVar5;
    thunk_FUN_02dd37b4(lVar3 + 0x368,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar4,uVar1,uVar2,lVar5);
  return;
}


