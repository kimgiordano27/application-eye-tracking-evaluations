/*
FUNCTION_NAME: FUN_06acbc40
ENTRY_POINT: 06acbc40
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_16;strong_file_logging_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06acbc40(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  puVar4 = 
  Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateValueFromText__;
  puVar3 = Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_AcceptCharacter__
  ;
  puVar2 = PTR_DAT_07282770;
  puVar1 = PTR_DAT_07282768;
  if ((DAT_076e31d1 & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<string,_string>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<string,_string>_AddListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<string,_string>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<string,_string>_RemoveListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_AddListener__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_AcceptCharacter__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateTextFromValue__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateValueFromText__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_RemoveListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_string>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_string>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData>_AddListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData>_Invoke__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData>_RemoveListener__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitResponseNode,_string>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_RemoveListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<string,_int,_int>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSClipData,_string,_string>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<TTSClipData,_string,_string>_AddListener__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSClipData,_string,_string>_Invoke__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<TTSClipData,_string,_string>_RemoveListener__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData,_string>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData,_string>_AddListener__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData,_string>_Invoke__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData,_string>_RemoveListener__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_UnmanagedArray<RewindableAllocator_MemoryBlock>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_UnmanagedArray<RewindableAllocator_MemoryBlock>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_UnmanagedArray<RewindableAllocator_MemoryBlock>_get_Item__
                      );
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_Dispose__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_Dispose__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_Resize__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_SetCapacity__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_get_Capacity__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_get_IsCreated__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_get_Length__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_set_Item__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<int>_Destroy__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Add__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddNoResize__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__);
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRangeNoResize__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07282770);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Clear__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Dispose__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<Color>__ctor__);
    thunk_FUN_032e1da0(Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__);
    thunk_FUN_032e1da0(Method_System_Tuple<TextWriter,_char>_get_Item1__);
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnitConnection<IUnitOutputPort,_IUnitInputPort>_get_sourceKey__
                      );
    thunk_FUN_032e1da0(Method_System_Tuple<TextWriter,_char[],_int,_int>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Dispose__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<CollectionVirtualizationMethod>_set_defaultValue__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07282768);
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_Task<PartnerAsset[]>_GetAwaiter__);
    thunk_FUN_032e1da0(Method_System_Tuple<TextWriter,_char>__ctor__);
    thunk_FUN_032e1da0(Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item2__);
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_InsertRangeWithBeginEnd__
                      );
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveAt__);
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveAtSwapBack__
                      );
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRange__);
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRangeSwapBack__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRangeSwapBackWithBeginEnd__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetSingleLine__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_text__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRangeWithBeginEnd__
                      );
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Resize__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_SetCapacity__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_TrimExcess__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_get_Capacity__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_get_Length__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_set_Capacity__);
    thunk_FUN_032e1da0(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_set_Length__);
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_UnwrapPromise<VoidTaskResult>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlertSemantic>__ctor__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Align>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Align>_TryGetValueFromBag__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
                      );
    DAT_076e31d1 = 1;
  }
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x60),uVar10);
  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  FUN_05565d24(lVar11,*(undefined8 *)puVar3);
  puVar4 = 
  Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateTextFromValue__;
  puVar3 = Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>__ctor__;
  if (lVar11 != 0) {
    FUN_049a4e68(lVar11,0,*(undefined8 *)
                           Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetSingleLine__
                );
    *(long *)(param_1 + 0x68) = lVar11;
    thunk_FUN_0333a630((long *)(param_1 + 0x68),lVar11);
    uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar10,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x70) = uVar10;
    thunk_FUN_0333a630((undefined8 *)(param_1 + 0x70),uVar10);
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
    FUN_05565d24(lVar11,*(undefined8 *)puVar3);
    puVar9 = 
    Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__;
    puVar8 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRangeSwapBack__;
    puVar7 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRange__;
    puVar6 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveAt__;
    puVar5 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_InsertRangeWithBeginEnd__;
    puVar4 = Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>__ctor__;
    puVar3 = Method_UnityEngine_Events_UnityEvent<string,_string>_RemoveListener__;
    puVar2 = Method_UnityEngine_Events_UnityEvent<string,_string>_Invoke__;
    puVar1 = Method_UnityEngine_Events_UnityEvent<string,_string>_AddListener__;
    if (lVar11 != 0) {
      FUN_049a4e68(lVar11,0,*(undefined8 *)
                             Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_text__
                  );
      *(long *)(param_1 + 0x78) = lVar11;
      thunk_FUN_0333a630((long *)(param_1 + 0x78),lVar11);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
      FUN_050f8160(uVar10,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x88) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x88),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_050f8160(uVar10,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x90),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar7);
      FUN_0497e1fc(uVar10,*(undefined8 *)puVar6);
      *(undefined8 *)(param_1 + 0x98) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x98),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
      FUN_0497e1fc(uVar10,*(undefined8 *)puVar5);
      *(undefined8 *)(param_1 + 0xa0) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xa0),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRangeSwapBackWithBeginEnd__
                                 );
      FUN_0497e1fc(uVar10,*(undefined8 *)
                           Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveAtSwapBack__
                  );
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xa8),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item2__
                                 );
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (uVar10,*(undefined8 *)
                         Method_Unity_VisualScripting_UnitConnection<IUnitOutputPort,_IUnitInputPort>_get_sourceKey__
                );
      *(undefined8 *)(param_1 + 0xb0) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xb0),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Tuple<TextWriter,_char>__ctor__);
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (uVar10,*(undefined8 *)Method_System_Tuple<TextWriter,_char>_get_Item1__);
      *(undefined8 *)(param_1 + 0xb8) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xb8),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_AddListener__
                                 );
      FUN_050f8160(uVar10,*(undefined8 *)
                           Method_UnityEngine_Events_UnityEvent<string,_string>__ctor__);
      *(undefined8 *)(param_1 + 0xc0) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xc0),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<CollectionVirtualizationMethod>_set_defaultValue__
                                 );
      puVar1 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<Color>__ctor__;
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (uVar10,*(undefined8 *)
                         Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<Color>__ctor__)
      ;
      *(undefined8 *)(param_1 + 200) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 200),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<TTSClipData,_string,_string>_AddListener__
                                 );
      FUN_03d0a380(uVar10,*(undefined8 *)
                           Method_UnityEngine_Events_UnityEvent<string,_int,_int>__ctor__);
      *(undefined8 *)(param_1 + 0xd0) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xd0),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<TTSClipData,_string,_string>_Invoke__
                                 );
      FUN_03d0a380(uVar10,*(undefined8 *)
                           Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__);
      *(undefined8 *)(param_1 + 0xd8) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xd8),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<TTSClipData,_string,_string>__ctor__
                                 );
      FUN_03d0a380(uVar10,*(undefined8 *)
                           Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_RemoveListener__);
      *(undefined8 *)(param_1 + 0xe0) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xe0),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Tuple<TextWriter,_char[],_int,_int>__ctor__);
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (uVar10,*(undefined8 *)Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__);
      *(undefined8 *)(param_1 + 0xe8) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xe8),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Threading_Tasks_Task<PartnerAsset[]>_GetAwaiter__);
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (uVar10,*(undefined8 *)
                         Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Dispose__);
      *(undefined8 *)(param_1 + 0xf0) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xf0),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Dispose__
                                 );
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                (uVar10,*(undefined8 *)
                         Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Clear__);
      *(undefined8 *)(param_1 + 0xf8) = uVar10;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0xf8),uVar10);
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<CollectionVirtualizationMethod>_set_defaultValue__
                                 );
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar10,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x100) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x100,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>__ctor__;
      puVar1 = Method_UnityEngine_Events_UnityEvent<TTSClipData,_string,_string>_RemoveListener__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>__ctor__)
        ;
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_RemoveRangeWithBeginEnd__
                     ,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x108) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x108,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_set_Item__;
      puVar1 = Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData,_string>__ctor__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData>_RemoveListener__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_TrimExcess__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x110) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x110,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_get_Length__;
      puVar1 = Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData,_string>_Invoke__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_string>_Invoke__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_get_Capacity__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x118) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x118,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_get_Capacity__;
      puVar1 = 
      Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData,_string>_RemoveListener__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_Invoke__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_get_Length__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x20);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x120) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x120,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddNoResize__;
      puVar1 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_Dispose__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<WitResponseNode,_string>__ctor__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_set_Capacity__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x128) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x128,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__;
      puVar1 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_Dispose__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x30);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_string>__ctor__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_set_Length__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x30);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x130) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x130,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_get_IsCreated__;
      puVar1 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_Resize__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x38);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_System_Threading_Tasks_UnwrapPromise<VoidTaskResult>__ctor__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x38);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x138) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x138,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Add__;
      puVar1 = Method_Unity_Collections_UnmanagedArray<RewindableAllocator_MemoryBlock>_get_Item__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x40);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData>_AddListener__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlertSemantic>__ctor__
                     ,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x40);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x140) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x140,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>_SetCapacity__;
      puVar1 = Method_Unity_Collections_UnmanagedArray<RewindableAllocator_MemoryBlock>_Dispose__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x48);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData>_Invoke__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Align>__ctor__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x48);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x148) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x148,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRangeNoResize__;
      puVar1 = Method_Unity_Collections_UnmanagedArray<RewindableAllocator_MemoryBlock>__ctor__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x50);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<TTSClipData,_string>_RemoveListener__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<Align>_TryGetValueFromBag__
                     ,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x50);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x150) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x150,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__;
      puVar1 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<byte>__ctor__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x58);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData>__ctor__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_Resize__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x58);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x158) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x158,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<int>_Destroy__;
      puVar1 = Method_UnityEngine_Events_UnityEvent<TTSSpeaker,_TTSClipData,_string>_AddListener__;
      lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
      if (lVar13 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar9;
        }
        uVar10 = **(undefined8 **)(lVar11 + 0xb8);
        lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_Invoke__
                                   );
        FUN_055c629c(lVar13,uVar10,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_SetCapacity__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x60);
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
      }
      uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_03fdae14(uVar10,lVar13,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x160) = uVar10;
      thunk_FUN_0333a630(param_1 + 0x160,uVar10);
      thunk_FUN_06be6094(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


