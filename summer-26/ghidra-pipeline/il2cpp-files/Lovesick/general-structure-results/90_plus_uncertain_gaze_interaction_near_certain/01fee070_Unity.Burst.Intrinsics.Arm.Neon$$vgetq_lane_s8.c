/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vgetq_lane_s8
ENTRY_POINT: 01fee070
PROGRAM: Lovesick-libil2cpp.so
SCORE: 254
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_3
*/


undefined8 Unity_Burst_Intrinsics_Arm_Neon__vgetq_lane_s8(void)

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
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x19;
  undefined8 uVar13;
  long *unaff_x21;
  
  thunk_FUN_00d48444(StringLiteral_6839);
  thunk_FUN_00d48444(PTR_DAT_033ed430);
  thunk_FUN_00d48444(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ushort>__);
  thunk_FUN_00d48444(StringLiteral_3349);
  thunk_FUN_00d48444(PTR_DAT_033f1220);
  thunk_FUN_00d48444(Newtonsoft_Json_Converters_UnixDateTimeConverter_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControlList<InputDevice>_Contains__);
  thunk_FUN_00d48444(StringLiteral_5228);
  thunk_FUN_00d48444(PTR_DAT_033f2db0);
  thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
  thunk_FUN_00d48444(StringLiteral_9876);
  thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
  thunk_FUN_00d48444(
                    Method_TuneTargetSteppedGeometry_<FlickeringCoroutine>d__10_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_00d48444(PTR_DAT_033ede90);
  thunk_FUN_00d48444(StringLiteral_3919);
  thunk_FUN_00d48444(Method_UnityEngine_Microphone_Start__);
  thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
  thunk_FUN_00d48444(StringLiteral_12216);
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiParticleGroup>_GetEnumerator__);
  thunk_FUN_00d48444(
                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                    );
  thunk_FUN_00d48444(PTR_DAT_033f46c0);
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                    );
  thunk_FUN_00d48444(StringLiteral_10100);
  thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_930);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(Method_System_Nullable<uint>_GetValueOrDefault__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
  thunk_FUN_00d48444(Method_System_Net_WebConnectionStream_set_ReadTimeout__);
  thunk_FUN_00d48444(StringLiteral_6673);
  thunk_FUN_00d48444(StringLiteral_7044);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                    );
  thunk_FUN_00d48444(Method_System_DateTime_AddYears__);
  *(undefined1 *)(unaff_x19 + 0x808) = 1;
  lVar10 = *unaff_x21;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *unaff_x21;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  thunk_FUN_00d8e500();
  if (lVar10 == 0) {
    plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1220);
    puVar9 = StringLiteral_12216;
    puVar8 = StringLiteral_144;
    puVar7 = Method_UnityEngine_Rendering_DebugUI_Panel_<>c_<_ctor>b__29_0__;
    puVar6 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
    puVar5 = Method_Mono_Security_X509_X509Extension__ctor__;
    puVar4 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
    puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
    puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01747a0c(plVar11,0);
    uVar13 = *(undefined8 *)puVar6;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar2 = 
    Method_TuneTargetSteppedGeometry_<FlickeringCoroutine>d__10_System_Collections_IEnumerator_Reset__
    ;
    uVar13 = FUN_01780344(uVar13,0);
    uVar12 = FUN_01780344(*(undefined8 *)puVar7,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar12 = FUN_01780344(*(undefined8 *)puVar8,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)puVar1,0);
    uVar12 = FUN_01780344(*(undefined8 *)puVar9,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
    uVar12 = FUN_01780344(*(undefined8 *)puVar5,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
    uVar12 = FUN_01780344(*(undefined8 *)
                           System_Security_Cryptography_X509Certificates_X509ChainPolicy_TypeInfo,0)
    ;
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)
                           Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                          ,0);
    uVar12 = FUN_01780344(*(undefined8 *)PTR_DAT_033f46c0,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)
                           Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,
                          0);
    uVar12 = FUN_01780344(*(undefined8 *)PTR_DAT_033f2db0,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
    uVar12 = FUN_01780344(*(undefined8 *)
                           Method_UnityEngine_InputSystem_InputControlList<InputDevice>_Contains__,0
                         );
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
    uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_9876,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)
                           System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                          ,0);
    uVar12 = FUN_01780344(*(undefined8 *)
                           Method_System_Collections_Generic_List<ObiParticleGroup>_GetEnumerator__,
                          0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
    uVar12 = FUN_01780344(*(undefined8 *)Method_System_Nullable<uint>_GetValueOrDefault__,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
    uVar12 = FUN_01780344(*(undefined8 *)Method_System_Net_WebConnectionStream_set_ReadTimeout__,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)
                           Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                          ,0);
    uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_7044,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Method_SoccerBlocker_HideCrowd__,0);
    puVar1 = StringLiteral_930;
    uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_930,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Method_System_DateTime_AddYears__,0);
    uVar12 = FUN_01780344(*(undefined8 *)puVar1,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)
                           Method_System_Collections_Generic_HashSet<Shader>_GetEnumerator__,0);
    uVar12 = FUN_01780344(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                          ,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Method_System_Collections_Generic_List<RendererList>_Add__,
                          0);
    uVar12 = FUN_01780344(*(undefined8 *)Method_System_Data_DataCommonEventSource_Trace<int>__,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)PTR_DAT_033f3f28,0);
    uVar12 = FUN_01780344(*(undefined8 *)
                           System_Collections_Generic_List<DynamicBone_ParticleTree>_TypeInfo,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
    uVar12 = FUN_01780344(*(undefined8 *)
                           Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_1__,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)
                           System_Security_Principal_WindowsImpersonationContext_TypeInfo,0);
    uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_10100,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_3349,0);
    uVar12 = FUN_01780344(*(undefined8 *)
                           Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ushort>__,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Method_UnityEngine_Microphone_Start__,0);
    uVar12 = FUN_01780344(*(undefined8 *)
                           Method_System_Linq_Enumerable_ToDictionary<STMMaterialData,_string,_STMMaterialData>__
                          ,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)Newtonsoft_Json_Converters_UnixDateTimeConverter_TypeInfo,0
                         );
    uVar12 = FUN_01780344(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<char,_Nullable<EntryType>>__ctor__
                          ,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    uVar13 = FUN_01780344(*(undefined8 *)PTR_DAT_033ed430,0);
    uVar12 = FUN_01780344(*(undefined8 *)StringLiteral_6839,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar13,uVar12,*(undefined8 *)(*plVar11 + 800));
    lVar10 = *unaff_x21;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *unaff_x21;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
    uVar13 = FUN_01780344(*(undefined8 *)PTR_DAT_033ede90,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar12,uVar13,*(undefined8 *)(*plVar11 + 800));
    uVar12 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
    uVar13 = FUN_01780344(*(undefined8 *)puVar2,0);
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar12,uVar13,*(undefined8 *)(*plVar11 + 800));
    thunk_FUN_00d8e500();
    lVar10 = *unaff_x21;
    *(long **)(*(long *)(lVar10 + 0xb8) + 0x10) = plVar11;
  }
  else {
    lVar10 = *unaff_x21;
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *unaff_x21;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
  thunk_FUN_00d8e500();
  return uVar13;
}


