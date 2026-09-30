/*
FUNCTION_NAME: FUN_0283dbf8
ENTRY_POINT: 0283dbf8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 194
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_0283dbf8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 local_b0 [4];
  undefined8 local_a0;
  undefined8 local_98;
  uint local_84;
  
  if ((DAT_03788ced & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__);
    thunk_FUN_00d48444(OVRPlugin_HandStatus_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_VertexPositioning_TranslateVerticesInWorldSpace__
                      );
    thunk_FUN_00d48444(bool____TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0e58);
    thunk_FUN_00d48444(PTR_DAT_033f36a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_Add__);
    thunk_FUN_00d48444(StringLiteral_92);
    thunk_FUN_00d48444(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                      );
    thunk_FUN_00d48444(StringLiteral_6564);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
    thunk_FUN_00d48444(Method_System_Numerics_BigInteger_op_Explicit__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    thunk_FUN_00d48444(System_Runtime_InteropServices_DllImportAttribute_var);
    thunk_FUN_00d48444(UnityEngine_UIElements_RepeatButton_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<string,_InternedString>__
                      );
    thunk_FUN_00d48444(Method_System_ThrowHelper_ThrowArgumentOutOfRangeException__);
    thunk_FUN_00d48444(TMPro_TMP_Text_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Reflection_Missing_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_get_Count__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Camera_RemoveCommandBuffer__);
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass107_0_<DecodeFile>b__0__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<Property>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4820);
    thunk_FUN_00d48444(StringLiteral_3628);
    thunk_FUN_00d48444(Method_System_Net_Configuration_HttpWebRequestElement_get_Properties__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_4968);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<float>_AsReadOnly__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<MB3_MeshCombinerSingle_MB_DynamicGameObject>___TypeInfo
                      );
    DAT_03788ced = 1;
  }
  puVar10 = StringLiteral_4968;
  puVar9 = StringLiteral_4820;
  puVar8 = StringLiteral_92;
  puVar7 = Method_UnityEngine_Camera_RemoveCommandBuffer__;
  puVar6 = Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_Add__;
  puVar5 = Method_System_Collections_Generic_List<float>_AsReadOnly__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_get_Count__;
  puVar3 = System_Collections_Generic_List<MB3_MeshCombinerSingle_MB_DynamicGameObject>___TypeInfo;
  puVar2 = System_Collections_Generic_ICollection<Property>_TypeInfo;
  local_a0 = 0;
  local_98 = 0;
  local_b0[0] = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_84 = 0;
  lVar13 = *(long *)(param_1 + 0x130);
  FUN_0268834c(0x41f00000,0x42700000,0x447a0000,0x42c80000,&local_a0,0);
  uVar1 = 0x43be0000;
  if (lVar13 == 0) {
    uVar1 = 0x43800000;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_0268834c(0x41a00000,0x42200000,0x43480000,uVar1,&local_f8,0);
  if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026cc0a4(local_f8 & 0xffffffff,local_f8._4_4_,uStack_f0 & 0xffffffff,uStack_f0._4_4_,
               *(undefined8 *)puVar7,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0x88,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)puVar8,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0x8c,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)puVar5,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xd8,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)puVar10,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xd4,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)puVar4,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0x90,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)puVar9,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0x94,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)puVar2,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xa4,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)puVar3,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xa8,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)puVar6,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0x9c,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)StringLiteral_3628,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xa0,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>_TypeInfo
                        ,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 200,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)
                         Method_System_Reflection_Missing_System_Runtime_Serialization_ISerializable_GetObjectData__
                        ,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xcc,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)
                         Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                        ,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xc4,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)UnityEngine_UIElements_RepeatButton_TypeInfo,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xd0,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)bool____TypeInfo,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xb4,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)StringLiteral_6564,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xb8,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)Method_UnityEngine_UIElements_ObjectListPool<string>_Get__,
                        uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xbc,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var,uVar12,
                        0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xc0,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)PTR_DAT_033f0e58,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xdc,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)
                         Method_UnityEngine_ProBuilder_VertexPositioning_TranslateVerticesInWorldSpace__
                        ,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  uVar15 = local_a0 & 0xffffffff;
  uVar1 = local_a0._4_4_;
  uVar16 = local_98 & 0xffffffff;
  uVar11 = local_98._4_4_;
  uVar12 = FUN_0178e9b8(param_1 + 0xe4,0);
  uVar12 = FUN_015f5b28(*(undefined8 *)Method_System_Numerics_BigInteger_op_Explicit__,uVar12,0);
  FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
  fVar14 = (float)FUN_026883a0(&local_a0,0);
  FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  if (lVar13 != 0) {
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    puVar10 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass107_0_<DecodeFile>b__0__;
    puVar9 = Method_System_ThrowHelper_ThrowArgumentOutOfRangeException__;
    puVar8 = Method_System_Net_Configuration_HttpWebRequestElement_get_Properties__;
    puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<string,_InternedString>__;
    puVar6 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
    puVar5 = OVRPlugin_HandStatus_TypeInfo;
    puVar4 = TMPro_TMP_Text_TypeInfo;
    puVar3 = System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_TypeInfo;
    puVar2 = PTR_DAT_033f36a0;
    if (*(long *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0277d254(&local_f8,*(long *)(param_1 + 0x130),0);
    uVar16 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar15 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    uStack_c8 = uStack_f0;
    local_d0 = local_f8;
    uStack_b8 = uStack_e0;
    uStack_c0 = local_e8;
    local_b0[0] = local_d8;
    uVar12 = FUN_0176eb1c(&local_d0,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar10,uVar12,0);
    if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__);
    }
    FUN_026cbc44(uVar16,uVar1,uVar15,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    uVar15 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    uVar12 = FUN_0178e9b8((ulong)&local_d0 | 8,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar4,uVar12,0);
    FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    uVar15 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    uVar12 = FUN_0178e9b8((ulong)&local_d0 | 0xc,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar8,uVar12,0);
    FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    uVar15 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    uVar12 = FUN_0178e9b8((long)&uStack_c0 + 4,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar5,uVar12,0);
    FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    uVar15 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    uVar12 = FUN_0178e9b8(&uStack_b8,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar7,uVar12,0);
    FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    uVar15 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    uVar12 = FUN_0178e9b8(&uStack_c0,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar2,uVar12,0);
    FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    uVar15 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    uVar12 = FUN_0178e9b8(local_b0,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar6,uVar12,0);
    FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    uVar15 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    uVar12 = FUN_0178e9b8((long)&uStack_b8 + 4,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar9,uVar12,0);
    FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
    uVar15 = local_a0 & 0xffffffff;
    uVar1 = local_a0._4_4_;
    uVar16 = local_98 & 0xffffffff;
    uVar11 = local_98._4_4_;
    local_84 = local_d0._4_4_ / 3;
    uVar12 = FUN_0178e9b8(&local_84,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)puVar3,uVar12,0);
    FUN_026cbc44(uVar15,uVar1,uVar16,uVar11,uVar12,0);
    fVar14 = (float)FUN_026883a0(&local_a0,0);
    FUN_026883a8(fVar14 + 12.0,&local_a0,0);
  }
  return;
}


