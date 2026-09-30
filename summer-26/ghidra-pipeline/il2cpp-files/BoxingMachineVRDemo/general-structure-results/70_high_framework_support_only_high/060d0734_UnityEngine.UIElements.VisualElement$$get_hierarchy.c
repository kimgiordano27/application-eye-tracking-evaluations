/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$get_hierarchy
ENTRY_POINT: 060d0734
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_UIElements_VisualElement__get_hierarchy(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined8 *puVar25;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000074;
  
  FUN_060d2498(*param_1);
  FUN_060d2498(*(undefined8 *)
                Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__,0x13)
  ;
  iVar2 = FUN_06073c60(0);
  puVar1 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<Vector2>__;
  if (iVar2 == 1) {
    uVar21 = 10;
    FUN_060d2498(*(undefined8 *)
                  Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate<LoadAllSharedAnchors_LoadAsyncDelegate>__
                 ,10);
    uVar20 = 0xb;
    FUN_060d2498(*(undefined8 *)puVar1,0xb);
    FUN_060d2498(*(undefined8 *)
                  Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate<SingleShareAnchor_SingleShareCompletedDelegate>__
                 ,0xc);
    FUN_060d2498(*(undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<Vector4>__,0xd)
    ;
    uStack0000000000000024 = 0;
    uStack0000000000000074 = 0x16;
    uStack0000000000000064 = 0x14;
    uVar24 = 0x15;
    uStack0000000000000054 = 5;
    uStack0000000000000044 = 4;
    uStack0000000000000034 = 1;
    uStack000000000000000c = 0x13;
    uVar9 = 0x12;
    uVar7 = 0x18;
    uVar8 = 0x17;
    uVar23 = 7;
    uVar22 = 6;
    uVar10 = 0xe;
    uVar4 = 0xf;
    puVar3 = (undefined8 *)
             Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
    ;
    puVar5 = (undefined8 *)
             Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate<SingleLoadAnchor_SingleLoadAsyncDelegate>__
    ;
    puVar6 = (undefined8 *)
             Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate<OSSpecificSynchronizationContext_InvocationEntryDelegate>__
    ;
    puVar11 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate__;
    puVar12 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<float4>__;
    puVar13 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<byte>__;
    puVar14 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRNetwork_FrameHeader>__;
    puVar15 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_SizeOf<GPUPrefixSum_LevelOffsets>__;
    puVar16 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__;
    puVar17 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_UnsafeAddrOfPinnedArrayElement<byte>__;
    puVar18 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__;
    puVar19 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<SHUpdatePacket>__;
    puVar25 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__;
  }
  else {
    uVar24 = 0x18;
    uStack0000000000000054 = 0x17;
    uStack0000000000000044 = 0x16;
    uStack0000000000000034 = 0x14;
    uStack0000000000000024 = 0x15;
    uVar7 = 0x10;
    uVar8 = 0x11;
    uVar23 = 0xe;
    uVar22 = 0xf;
    uVar20 = 0xd;
    uVar21 = 0xc;
    uVar10 = 0xb;
    uVar4 = 10;
    uVar9 = 0xf;
    uStack000000000000000c = 0xe;
    uStack0000000000000064 = 0x17;
    uStack0000000000000074 = 0x18;
    puVar3 = (undefined8 *)
             Method_System_Runtime_InteropServices_Marshal_SizeOf<IndirectInstanceInfo>__;
    puVar5 = (undefined8 *)
             Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate<LoadAllSharedAnchors_LoadAsyncDelegate>__
    ;
    puVar6 = (undefined8 *)
             Method_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer__;
    puVar11 = (undefined8 *)System_Xml_Schema_XdrBuilder_TypeInfo;
    puVar12 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_SecureStringGlobalAllocator__;
    puVar13 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate<SingleSaveAnchor_SingleSaveAsyncDelegate>__
    ;
    puVar14 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_GetCustomMarshalerInstance__;
    puVar15 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_SecureStringToGlobalAllocUnicode__;
    puVar16 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<float4>__;
    puVar17 = (undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate<SingleEraseAnchor_SingleEraseAsyncDelegate>__
    ;
    puVar18 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<IndirectDrawInfo>__
    ;
    puVar19 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_PtrToStructure<Vector2>__;
    puVar25 = (undefined8 *)Unity_VisualScripting_GreaterThanHandler_<>c_TypeInfo;
  }
  FUN_060d2498(*puVar11,uVar4);
  FUN_060d2498(*puVar25,uVar10);
  FUN_060d2498(*(undefined8 *)
                Method_System_Runtime_InteropServices_Marshal_StructureToPtr<OVRNetwork_FrameHeader>__
               ,uVar21);
  FUN_060d2498(*(undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__,uVar20);
  FUN_060d2498(*(undefined8 *)
                Method_System_Runtime_InteropServices_Marshal_SizeOf<TransformUpdatePacket>__,uVar22
              );
  FUN_060d2498(*(undefined8 *)Method_System_Runtime_InteropServices_Marshal_SecureStringToBSTR__,
               uVar23);
  FUN_060d2498(*puVar5,uVar8);
  FUN_060d2498(*puVar19,uVar7);
  FUN_060d2498(*puVar6,uVar9);
  FUN_060d2498(*puVar3,uStack000000000000000c);
  FUN_060d2498(*puVar18,uStack0000000000000024);
  FUN_060d2498(*puVar17,uStack0000000000000034);
  FUN_060d2498(*puVar16,uStack0000000000000044);
  FUN_060d2498(*puVar15,uStack0000000000000054);
  FUN_060d2498(*puVar14,uVar24);
  FUN_060d2498(*puVar13,uStack0000000000000064);
  FUN_060d2498(*puVar12,uStack0000000000000074);
  return;
}


