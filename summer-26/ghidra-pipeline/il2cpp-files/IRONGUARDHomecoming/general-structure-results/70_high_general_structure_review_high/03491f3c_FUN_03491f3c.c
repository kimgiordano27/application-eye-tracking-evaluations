/*
FUNCTION_NAME: FUN_03491f3c
ENTRY_POINT: 03491f3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03491f3c(void)

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
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar11 = Method_System_Text_StringBuilder_Append__;
  puVar10 = Method_System_String_CompareOrdinal__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04832b15 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_Append__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_Append__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_AppendCore__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_AppendFormat__);
    thunk_FUN_01efb3a4(Method_System_String_CompareOrdinal__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_AppendFormatHelper__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<float4>__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_CopyTo__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<uint>__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_ExpandByABlock__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Cache_Store__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_Append__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_FormatError__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_ToFourDigitYear__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_Insert__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_Insert__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_1__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_MakeRoom__);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_Remove__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                      );
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_Replace__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Text_StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_ThreadSafeCopy__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_ThreadSafeCopy__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__);
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_ToString__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                      );
    thunk_FUN_01efb3a4(Method_System_Text_StringBuilder_ToString__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_04832b15 = 1;
  }
  puVar12 = Method_System_Text_StringBuilder_AppendFormat__;
  puVar9 = Method_UnityEngine_GraphicsBuffer_SetData<uint>__;
  puVar8 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  puVar7 = Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
  puVar6 = Method_System_Globalization_Calendar_ToFourDigitYear__;
  puVar5 = Method_Unity_VisualScripting_Cache_Store__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
  puVar2 = Method_Oculus_Platform_CAPI_StringToNative__;
  **(undefined4 **)(*(long *)puVar10 + 0xb8) = 0x11;
  uVar16 = *(undefined8 *)puVar11;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar16 = FUN_03579868(uVar16,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x30);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar8,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x38);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar12,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x40);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar2,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x48);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar3,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x50);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar4,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x58);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar9,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x60);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar5,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x68);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar6,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x70);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)puVar7,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x78);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)
                         Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x80);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)
                         Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                        ,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x88);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)
                         Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                        ,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x90);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)
                         Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x98);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<float4>__,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xa0);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)
                         Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xa8);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)
                         Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                        ,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xb0);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__,
                        0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xb8);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)Method_System_Convert_ToUInt64__,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xc0);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_03579868(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 200);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  uVar16 = FUN_034ba468(*(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x38),0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xd0);
  *puVar14 = uVar16;
  thunk_FUN_01f51358(puVar14,uVar16);
  puVar9 = Method_System_Text_StringBuilder_ThreadSafeCopy__;
  puVar8 = Method_System_Text_StringBuilder_MakeRoom__;
  puVar7 = Method_System_Text_StringBuilder_Insert__;
  puVar6 = Method_System_Text_StringBuilder_FormatError__;
  puVar5 = Method_System_Text_StringBuilder_ExpandByABlock__;
  puVar4 = Method_System_Text_StringBuilder_CopyTo__;
  puVar3 = Method_System_Text_StringBuilder_AppendCore__;
  puVar2 = Method_System_Text_StringBuilder_Append__;
  puVar11 = Method_System_Text_StringBuilder_Append__;
  puVar1 = 
  Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__;
  plVar13 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 0xd0);
  if (plVar13 != (long *)0x0) {
    uVar16 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
    puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xd8);
    *puVar14 = uVar16;
    thunk_FUN_01f51358(puVar14,uVar16);
    uVar16 = FUN_03579868(*(undefined8 *)puVar9,0);
    puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe0);
    *puVar14 = uVar16;
    thunk_FUN_01f51358(puVar14,uVar16);
    uVar16 = FUN_03579868(*(undefined8 *)puVar8,0);
    puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe8);
    *puVar14 = uVar16;
    thunk_FUN_01f51358(puVar14,uVar16);
    uVar16 = FUN_03579868(*(undefined8 *)puVar1,0);
    puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xf0);
    *puVar14 = uVar16;
    thunk_FUN_01f51358(puVar14,uVar16);
    uVar16 = FUN_03579868(*(undefined8 *)puVar11,0);
    puVar14 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xf8);
    *puVar14 = uVar16;
    thunk_FUN_01f51358(puVar14,uVar16);
    uVar16 = FUN_03579868(*(undefined8 *)puVar2,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x100) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x100);
    uVar16 = FUN_03579868(*(undefined8 *)puVar3,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x108) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x108);
    uVar16 = FUN_03579868(*(undefined8 *)puVar4,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x110) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x110);
    uVar16 = FUN_03579868(*(undefined8 *)puVar5,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x118) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x118);
    uVar16 = FUN_03579868(*(undefined8 *)puVar6,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x120) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x120);
    uVar16 = FUN_03579868(*(undefined8 *)puVar7,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x128) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x128);
    uVar16 = FUN_03579868(*(undefined8 *)Method_System_Text_StringBuilder_Insert__,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x130) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x130);
    uVar16 = FUN_03579868(*(undefined8 *)Method_System_Text_StringBuilder_Remove__,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x138) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x138);
    uVar16 = FUN_03579868(*(undefined8 *)Method_System_Text_StringBuilder_Replace__,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x140) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x140);
    uVar16 = FUN_03579868(*(undefined8 *)
                           Method_System_Text_StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData__
                          ,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x148) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x148);
    uVar16 = FUN_03579868(*(undefined8 *)Method_System_Text_StringBuilder_AppendFormatHelper__,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x150) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x150);
    uVar16 = FUN_03579868(*(undefined8 *)Method_System_Text_StringBuilder_ThreadSafeCopy__,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x158) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x158);
    uVar16 = FUN_03579868(*(undefined8 *)Method_System_Text_StringBuilder_ToString__,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x160) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x160);
    uVar16 = FUN_03579868(*(undefined8 *)Method_System_Text_StringBuilder_ToString__,0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x168) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x168);
    uVar16 = FUN_03579868(*(undefined8 *)
                           Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_1__,
                          0);
    lVar15 = *(long *)(*(long *)puVar10 + 0xb8);
    *(undefined8 *)(lVar15 + 0x170) = uVar16;
    thunk_FUN_01f51358(lVar15 + 0x170);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


