/*
FUNCTION_NAME: System.ComponentModel.MarshalByValueComponent$$Dispose
ENTRY_POINT: 01edcdcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


void System_ComponentModel_MarshalByValueComponent__Dispose(long param_1)

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
  undefined *puVar10;
  long *unaff_x19;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x7b8));
  thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
  thunk_FUN_00d48444(StringLiteral_6673);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                    );
  thunk_FUN_00d48444(StringLiteral_6785);
  thunk_FUN_00d48444(Method_System_Net_Sockets_SafeSocketHandle_ReleaseHandle__);
  thunk_FUN_00d48444(StringLiteral_197);
  thunk_FUN_00d48444(Method_System_Reflection_Module_FilterTypeNameImpl__);
  thunk_FUN_00d48444(System_Collections_Generic_List<WingedEdge>_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_6597);
  thunk_FUN_00d48444(
                    Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                    );
  *(undefined1 *)(unaff_x20 + 0x6b) = 1;
  puVar10 = StringLiteral_6597;
  puVar9 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vfmsq_f64__;
  puVar7 = Method_System_Reflection_Module_FilterTypeNameImpl__;
  puVar6 = Method_System_Enum_ToObject__;
  puVar5 = Method_System_Data_DataSet_ReadXmlDiffgram__;
  puVar4 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  puVar2 = 
  DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline_TypeInfo
  ;
  puVar1 = System_IO_UnexceptionalStreamReader_TypeInfo;
  uVar11 = *unaff_x21;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_01780344(uVar11,0);
  **(undefined8 **)(*(long *)puVar10 + 0xb8) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar9,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)puVar3,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)System_Collections_Generic_List<WingedEdge>_TypeInfo,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)Method_SoccerBlocker_HideCrowd__,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)
                         Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x60) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x68) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x70) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x78) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x80) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                        ,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x88) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)Method_System_Net_Sockets_SafeSocketHandle_ReleaseHandle__,0)
  ;
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x90) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x98) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)
                         System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                        ,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xa0) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)Method_System_Collections_Generic_List<RendererList>_Add__,0)
  ;
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xa8) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)PTR_DAT_033f3f28,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xb0) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xb8) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_11159,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xc0) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)
                         Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                        ,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 200) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_6785,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xd0) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)
                         System_Security_Principal_WindowsImpersonationContext_TypeInfo,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xd8) = uVar11;
  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_197,0);
  *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe0) = uVar11;
  return;
}


