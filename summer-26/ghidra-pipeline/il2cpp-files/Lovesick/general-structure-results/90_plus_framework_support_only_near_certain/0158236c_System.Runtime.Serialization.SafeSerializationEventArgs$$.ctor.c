/*
FUNCTION_NAME: System.Runtime.Serialization.SafeSerializationEventArgs$$.ctor
ENTRY_POINT: 0158236c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 217
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_16;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01583fd4) */
/* WARNING: Removing unreachable block (ram,0x01583de4) */
/* WARNING: Removing unreachable block (ram,0x01583f90) */
/* WARNING: Removing unreachable block (ram,0x01582d70) */
/* WARNING: Removing unreachable block (ram,0x015835f0) */
/* WARNING: Removing unreachable block (ram,0x01583fb0) */
/* WARNING: Removing unreachable block (ram,0x015835dc) */
/* WARNING: Removing unreachable block (ram,0x01583450) */
/* WARNING: Removing unreachable block (ram,0x01583454) */
/* WARNING: Removing unreachable block (ram,0x015835f8) */
/* WARNING: Removing unreachable block (ram,0x01583508) */
/* WARNING: Removing unreachable block (ram,0x01583f94) */
/* WARNING: Removing unreachable block (ram,0x01583f9c) */
/* WARNING: Removing unreachable block (ram,0x015839e8) */

void System_Runtime_Serialization_SafeSerializationEventArgs___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4,int *param_5)

{
  int *__src;
  long lVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  undefined1 auStack_4d8 [72];
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined8 uStack_470;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  float fStack_418;
  float fStack_414;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_404;
  undefined8 uStack_3fc;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined8 uStack_3dc;
  undefined4 uStack_3d4;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  int iStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if ((DAT_03777cb1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<string>_Find__);
    thunk_FUN_00d48444(Method_MainStagePortrait_<SetSpeed>b__34_0__);
    thunk_FUN_00d48444(StringLiteral_12299);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__);
    thunk_FUN_00d48444(StringLiteral_14201);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__);
    thunk_FUN_00d48444(Method_EnableTeleportsOnTuneTargetComplete_OnTuneTargetComplete__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_IO_MemoryStream_set_Position__);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_TypeBuilder_GetElementType__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_6439);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_ConnectElements_<>c_<ConnectEdgesInFace>b__5_1__
                      );
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(PTR_DAT_033f22e0);
    thunk_FUN_00d48444(StringLiteral_4610);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_112>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseSlider<float>__ctor__);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Obi_ObiRopeBlueprint_<CreateBendingConstraints>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_4328);
    thunk_FUN_00d48444(PTR_DAT_033ef7b8);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_GameObject>_get_Key__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__)
    ;
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_RemoveAt__
                      );
    thunk_FUN_00d48444(StringLiteral_11365);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Queue<LocomotionEvent>_Clear__);
    thunk_FUN_00d48444(StringLiteral_8940);
    thunk_FUN_00d48444(System_Collections_Generic_HashSet<PlayableDirector>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5400);
    thunk_FUN_00d48444(System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_NewArrayInit__);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_DebugMaterialValidationMode_var);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_13233);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_3839);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Ray>__ctor__);
    thunk_FUN_00d48444(System_Xml_Serialization_XmlElementEventArgs_TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_InputActionRebindingExtensions_DeferBindingResolutionWrapper_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033ede88);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__);
    thunk_FUN_00d48444(PTR_DAT_033eaba0);
    thunk_FUN_00d48444(StringLiteral_6020);
    thunk_FUN_00d48444(Obi_ObiHeightFieldHandle_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5356);
    thunk_FUN_00d48444(OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GSTU_Cell>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_ValueTask<int>_AsTask__);
    thunk_FUN_00d48444(OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ProBuilderMesh>_GetEnumerator__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                      );
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_DB047CC748613CCCB120DE7385E37D542A79C3BF8F0E64FE6DAD349B4D26E5D7
                      );
    thunk_FUN_00d48444(Method_System_Net_Security_SslStream_SetAndVerifyValidationCallback__);
    thunk_FUN_00d48444(PTR_DAT_033f1268);
    thunk_FUN_00d48444(StringLiteral_13019);
    thunk_FUN_00d48444(System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_IXRInteractionOverrideGroup_TypeInfo);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_1__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_7213);
    thunk_FUN_00d48444(Unity_Collections_NativeSlice<Vector4>_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Models_DeserializableList<Leaderboard>_get_NextUrl__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<VoiceServiceRequestOptions_QueryParam>_Add__
                      );
    DAT_03777cb1 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_90._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auVar34 = ZEXT816(0);
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  uStack_20 = 0;
  uStack_10 = 0;
  uStack_18 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_150 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  auStack_1b0._8_8_ = 0;
  auStack_1b0._0_8_ = 0;
  auStack_1c0._8_8_ = 0;
  auStack_1c0._0_8_ = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1f0 = 0;
  uStack_220 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_208 = 0;
  uStack_238 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  iStack_274 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  auStack_2f0._8_8_ = 0;
  auStack_2f0._0_8_ = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_300 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_318 = 0;
  iVar25 = *param_5;
  lVar22 = *(long *)(param_5 + 10);
  if (iVar25 == 0) {
    auStack_90 = *(undefined1 (*) [16])(param_5 + 0x12);
    iVar25 = -1;
    param_5[0x12] = 0;
    param_5[0x13] = 0;
    param_5[0x14] = 0;
    param_5[0x15] = 0;
    *param_5 = -1;
  }
  else {
    auVar10 = ZEXT816(0);
    auVar34 = ZEXT816(0);
    if (iVar25 - 1U < 2) goto LAB_01582a60;
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_7213);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar12,0);
    *(long *)(param_5 + 8) = lVar12;
    uVar20 = *(undefined8 *)Method_System_Net_Security_SslStream_SetAndVerifyValidationCallback__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_01780344(uVar20,0);
    *(undefined8 *)(lVar12 + 0x18) = uVar20;
    lVar17 = *(long *)(param_5 + 8);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                 System_Collections_Generic_HashSet<PlayableDirector>_TypeInfo);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar12,*(undefined8 *)
                         Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__
                );
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(lVar17 + 0x10) = lVar12;
    if (*(long *)(param_5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auStack_a0 = FUN_01581fa4();
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__
                        );
    }
    auStack_90 = FUN_01353c78(auStack_a0,
                              *(undefined8 *)System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    uVar13 = FUN_011cf2a4(auStack_90,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__);
    auVar34 = auStack_a0;
    if ((uVar13 & 1) == 0) {
      *param_5 = 0;
      *(undefined1 (*) [16])(param_5 + 0x12) = auStack_90;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098c58(param_5 + 2,auStack_90,param_5,
                   *(undefined8 *)Method_MainStagePortrait_<SetSpeed>b__34_0__);
      goto LAB_01582b04;
    }
  }
  auStack_a0 = auVar34;
  FUN_011cf420(auStack_90,&uStack_490,
               *(undefined8 *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__);
  uStack_78 = CONCAT44(uStack_484,uStack_488);
  uStack_70 = CONCAT44(uStack_47c,uStack_480);
  uStack_80 = uStack_490;
  FUN_0134cc4c(&uStack_80,&uStack_490,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_DB047CC748613CCCB120DE7385E37D542A79C3BF8F0E64FE6DAD349B4D26E5D7
              );
  puVar3 = System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo;
  param_5[0xc] = (int)uStack_490;
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar12,*(undefined8 *)
                       Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_GameObject>_get_Key__
              );
  param_5[0xe] = 0;
  param_5[0xf] = 0;
  *(long *)(param_5 + 0x10) = lVar12;
  if (*(long *)(param_5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar12 = *(long *)(*(long *)(param_5 + 8) + 0x10);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(lVar12,&uStack_350,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  uStack_488 = (undefined4)uStack_348;
  uStack_484 = (undefined4)((ulong)uStack_348 >> 0x20);
  uStack_490 = uStack_350;
  uStack_478 = (undefined4)uStack_338;
  uStack_474 = (undefined4)((ulong)uStack_338 >> 0x20);
  uStack_480 = (undefined4)uStack_340;
  uStack_47c = (undefined4)((ulong)uStack_340 >> 0x20);
  uStack_470 = uStack_330;
  *(undefined8 *)(param_5 + 0x1e) = uStack_330;
  *(undefined8 *)(param_5 + 0x1c) = uStack_338;
  *(undefined8 *)(param_5 + 0x1a) = uStack_340;
  *(undefined8 *)(param_5 + 0x18) = uStack_348;
  *(undefined8 *)(param_5 + 0x16) = uStack_350;
  auVar10 = auStack_a0;
  auVar34 = auStack_90;
LAB_01582a60:
  auStack_a0 = auVar10;
  if (iVar25 == 1) {
    auStack_90 = *(undefined1 (*) [16])(param_5 + 0x12);
    iVar25 = -1;
    param_5[0x12] = 0;
    param_5[0x13] = 0;
    param_5[0x14] = 0;
    param_5[0x15] = 0;
    *param_5 = -1;
    goto LAB_01583c48;
  }
  auStack_90 = auVar34;
  if (iVar25 != 2) goto LAB_01583f00;
  auStack_1b0 = *(undefined1 (*) [16])(param_5 + 0x36);
  iVar25 = -1;
  param_5[0x36] = 0;
  param_5[0x37] = 0;
  param_5[0x38] = 0;
  param_5[0x39] = 0;
  *param_5 = -1;
LAB_01582b44:
  FUN_011cf420(auStack_1b0,&uStack_350,*(undefined8 *)StringLiteral_14201);
  if (*(long *)(param_5 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(param_5 + 0x34),&uStack_490,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  puVar6 = StringLiteral_13019;
  puVar5 = 
  Method_UnityEngine_ProBuilder_MeshOperations_ConnectElements_<>c_<ConnectEdgesInFace>b__5_1__;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Count__;
  fVar2 = DAT_028aa158;
  uStack_168 = CONCAT44(uStack_484,uStack_488);
  uStack_158 = CONCAT44(uStack_474,uStack_478);
  uVar20 = CONCAT44(uStack_47c,uStack_480);
  uStack_170 = uStack_490;
  uStack_150 = uStack_470;
  uStack_160 = uVar20;
  while( true ) {
    uVar13 = FUN_012b894c(&uStack_170,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                         );
    if ((uVar13 & 1) == 0) break;
    FUN_00bc9230(&uStack_490,&uStack_170,*(undefined8 *)StringLiteral_6439);
    uStack_1d8 = CONCAT44(uStack_484,uStack_488);
    uStack_1d0 = CONCAT44(uStack_47c,uStack_480);
    uStack_1e0 = uStack_490;
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                               );
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320ebc(lVar12,1,*(undefined8 *)StringLiteral_4328);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_011285d4(&uStack_1e0,&uStack_1e8,
                          *(undefined8 *)System_Collections_Generic_List<GSTU_Cell>_TypeInfo);
    uVar11 = (undefined4)uVar20;
    uVar32 = (undefined4)param_3;
    uVar30 = (undefined4)param_4;
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01aa408c(&uStack_1e8,0);
      uVar11 = (undefined4)uVar20;
      uVar32 = (undefined4)param_3;
      uVar30 = (undefined4)param_4;
      if ((uVar13 & 1) != 0) {
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar23 = *(undefined8 *)(lVar22 + 0xb8);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01aa45d4(&uStack_1e8,uVar23,0);
        if (*(long *)(lVar22 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(*(long *)(lVar22 + 0xb8),&uStack_490,
                     *(undefined8 *)
                      Method_Obi_ObiRopeBlueprint_<CreateBendingConstraints>d__4_System_Collections_IEnumerator_Reset__
                    );
        uStack_268 = CONCAT44(uStack_484,uStack_488);
        uStack_260 = CONCAT44(uStack_47c,uStack_480);
        uStack_270 = uStack_490;
        while( true ) {
          uVar13 = FUN_012b894c(&uStack_270,*(undefined8 *)puVar3);
          uVar11 = (undefined4)uVar20;
          uVar32 = (undefined4)param_3;
          uVar30 = (undefined4)param_4;
          if ((uVar13 & 1) == 0) break;
          uVar11 = FUN_00bd1e88(&uStack_270,*(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar23 = FUN_01aa5550(uVar11,0);
          FUN_00ac1158(lVar12,uVar23,*(undefined8 *)puVar4);
        }
        if (iVar25 < 0) {
          FUN_012b8948(&uStack_270,
                       *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_GetElementType__);
        }
      }
    }
    uVar9 = uStack_1d0;
    uVar23 = uStack_1d8;
    uVar20 = uStack_1e0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1f0 = 0;
    uStack_220 = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    uStack_208 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_011285d4(&uStack_1e0,&uStack_240,*(undefined8 *)StringLiteral_6020);
    if ((uVar13 & 1) == 0) {
LAB_01582f9c:
      lVar17 = 0;
    }
    else {
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01aa2fa8(&uStack_240,0);
      if ((uVar13 & 1) == 0) goto LAB_01582f9c;
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar26 = FUN_01aa3400(&uStack_240,0);
      uStack_288 = CONCAT44(uVar11,uVar26);
      uStack_280 = CONCAT44(uVar30,uVar32);
      uVar27 = FUN_026883f4(&uStack_288,0);
      uVar26 = uVar11;
      uVar28 = FUN_01aa3400(&uStack_240,0);
      uStack_288 = CONCAT44(uVar26,uVar28);
      uStack_280 = CONCAT44(uVar30,uVar32);
      uStack_28 = FUN_02688460(&uStack_288,0);
      uStack_490 = 0;
      uStack_488 = 0;
      uStack_484 = 0;
      uStack_480 = 0;
      uStack_30 = uVar27;
      uStack_2c = uVar11;
      uStack_24 = uVar26;
      FUN_01347274(&uStack_490,&uStack_30,
                   *(undefined8 *)Method_System_Collections_Generic_List<Ray>__ctor__);
      uStack_1f8 = CONCAT44(uStack_484,uStack_488);
      uStack_200 = uStack_490;
      uStack_1f0 = uStack_480;
      uVar13 = FUN_01aa3560(&uStack_240,&iStack_274,0);
      if ((uVar13 & 1) == 0) goto LAB_01582f9c;
      FUN_013421d4(&lStack_298,iStack_274,2,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                  );
      uVar19 = uStack_290;
      lVar17 = lStack_298;
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01aa35f0(&uStack_240,lVar17,uVar19,0);
      if ((uVar13 & 1) == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                                   );
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar17,*(undefined8 *)StringLiteral_11365);
        if (0 < iStack_274) {
          lVar18 = 0;
          lVar24 = 0;
          do {
            FUN_00bbed00(*(undefined4 *)(lStack_298 + lVar18),
                         ((undefined4 *)(lStack_298 + lVar18))[1],lVar17,
                         *(undefined8 *)
                          Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
            lVar24 = lVar24 + 1;
            lVar18 = lVar18 + 8;
          } while (lVar24 < iStack_274);
        }
      }
      if (iVar25 < 0) {
        FUN_01342a94(&lStack_298,*(undefined8 *)StringLiteral_13233);
      }
    }
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_011285d4(&uStack_1e0,&uStack_248,*(undefined8 *)Obi_ObiHeightFieldHandle_TypeInfo);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<ProBuilderMesh>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01aa3904(&uStack_248,0);
      if ((uVar13 & 1) != 0) {
        FUN_0158f5ec(Method_System_Collections_Generic_List<ProBuilderMesh>_GetEnumerator__);
        return;
      }
    }
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    uVar19 = *(undefined8 *)
              (*(long *)(*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8) + 0xc);
    uVar11 = *(undefined4 *)
              (*(long *)(*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8) + 0x14);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_011285d4(&uStack_1e0,&uStack_250,*(undefined8 *)StringLiteral_5356);
    if ((uVar13 & 1) == 0) {
LAB_015832d4:
      if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uStack_490 = uVar23;
      uStack_488 = (undefined4)uVar9;
      uStack_484 = (undefined4)((ulong)uVar9 >> 0x20);
      uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                  ,&uStack_490);
      uVar15 = FUN_015f6780(*(undefined8 *)
                             Method_Oculus_Platform_Models_DeserializableList<Leaderboard>_get_NextUrl__
                            ,uVar15,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(uVar15,0);
      uVar15 = 0;
      fVar31 = 0.0;
      fVar33 = 0.0;
      uVar30 = 0;
      uVar32 = 0;
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01a9e784(&uStack_250,0);
      if ((uVar13 & 1) == 0) goto LAB_015832d4;
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01a9ede0(&uStack_250,&uStack_2e0,0);
      if ((uVar13 & 1) == 0) goto LAB_015832d4;
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      auVar34 = FUN_01aa0ec0(&uStack_2e0,*(undefined8 *)(*(long *)(lVar22 + 0x88) + 0x18),0);
      auStack_2f0 = auVar34;
      if (*(long *)(lVar22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01aa1068(&uStack_490,&uStack_2e0,*(undefined8 *)(*(long *)(lVar22 + 0x88) + 0x18),0);
      uStack_308 = CONCAT44(uStack_484,uStack_488);
      uStack_310 = uStack_490;
      uStack_300 = uStack_480;
      lVar24 = *(long *)(*(long *)System_Xml_Serialization_XmlElementEventArgs_TypeInfo + 0x20);
      if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
        lVar24 = FUN_00d5941c();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
      if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
        lVar24 = FUN_00d5941c();
      }
      pcVar14 = (char *)thunk_FUN_00d32ed4(auStack_2f0,*(undefined8 *)(lVar24 + 0x80));
      if (*pcVar14 == '\0') goto LAB_015832d4;
      lVar24 = *(long *)(*(long *)
                          UnityEngine_InputSystem_InputActionRebindingExtensions_DeferBindingResolutionWrapper_TypeInfo
                        + 0x20);
      if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
        lVar24 = FUN_00d5941c();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
      if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
        lVar24 = FUN_00d5941c();
      }
      pcVar14 = (char *)thunk_FUN_00d32ed4(&uStack_310,*(undefined8 *)(lVar24 + 0x80));
      if (*pcVar14 == '\0') goto LAB_015832d4;
      FUN_01347408(auStack_2f0,&uStack_40,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
      uVar32 = uStack_38;
      uVar15 = uStack_40;
      FUN_01347408(&uStack_310,&uStack_50,*(undefined8 *)PTR_DAT_033ede88);
      fVar31 = fStack_4c;
      fVar33 = fStack_48;
      fVar29 = (float)FUN_02698c04(uStack_50,fStack_4c,fStack_48,uStack_44,0);
      fVar31 = fVar31 * fVar2;
      fVar33 = fVar33 * fVar2;
      uVar30 = FUN_026992c0(fVar29 * fVar2,0);
    }
    uStack_3a8 = uStack_1f8;
    uStack_3b0 = uStack_200;
    uStack_3a0 = uStack_1f0;
    uStack_488 = uStack_218;
    uStack_490 = uStack_220;
    uStack_47c = uStack_20c;
    uStack_478 = uStack_208;
    uStack_484 = uStack_214;
    uStack_480 = uStack_210;
    uStack_348 = uStack_230;
    uStack_350 = uStack_238;
    uStack_340 = uStack_228;
    if (*(long *)(param_5 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uStack_438 = uVar9;
    uStack_448 = uVar20;
    uStack_440 = uVar23;
    uStack_3dc = CONCAT44(uStack_208,uStack_20c);
    param_3 = CONCAT44(uStack_210,uStack_214);
    uStack_3f4 = uStack_1f0;
    uStack_3fc = uStack_1f8;
    uStack_404 = uStack_200;
    uStack_3e0 = uStack_210;
    uStack_3e8 = uStack_218;
    uStack_3e4 = uStack_214;
    uStack_3f0 = uStack_220;
    uStack_3d4 = 0;
    uStack_3b8 = uStack_228;
    uStack_3c0 = uStack_230;
    uStack_3c8 = uStack_238;
    uVar20 = uStack_220;
    param_4 = uStack_238;
    lStack_430 = lVar12;
    uStack_428 = uVar15;
    uStack_420 = uVar32;
    uStack_41c = uVar30;
    fStack_418 = fVar31;
    fStack_414 = fVar33;
    uStack_410 = uVar19;
    uStack_408 = uVar11;
    lStack_3d0 = lVar17;
    FUN_00bd1020(*(long *)(param_5 + 0x30),&uStack_448,
                 *(undefined8 *)
                  Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_112>__
                );
  }
  if (iVar25 < 0) {
    FUN_012b8948(&uStack_170,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
  }
  lVar12 = *(long *)(param_5 + 0x10);
  __src = param_5 + 0x20;
  memcpy(&uStack_490,__src,0x48);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  memcpy(auStack_4d8,&uStack_490,0x48);
  FUN_00bd1f90(lVar12,auStack_4d8,*(undefined8 *)PTR_DAT_033f22e0);
  param_5[0x34] = 0;
  param_5[0x35] = 0;
  param_5[0x2e] = 0;
  param_5[0x2f] = 0;
  param_5[0x2c] = 0;
  param_5[0x2d] = 0;
  param_5[0x32] = 0;
  param_5[0x33] = 0;
  param_5[0x30] = 0;
  param_5[0x31] = 0;
  param_5[0x26] = 0;
  param_5[0x27] = 0;
  param_5[0x24] = 0;
  param_5[0x25] = 0;
  param_5[0x2a] = 0;
  param_5[0x2b] = 0;
  param_5[0x28] = 0;
  param_5[0x29] = 0;
  param_5[0x22] = 0;
  param_5[0x23] = 0;
  __src[0] = 0;
  __src[1] = 0;
LAB_01583f00:
  do {
    puVar8 = StringLiteral_4610;
    puVar7 = Method_System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_RemoveAt__;
    puVar6 = OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo;
    puVar5 = Unity_Collections_NativeSlice<Vector4>_TypeInfo;
    puVar4 = UnityEngine_Rendering_Universal_DebugMaterialValidationMode_var;
    puVar3 = PTR_DAT_033f1268;
    while( true ) {
      uVar13 = FUN_012b894c(param_5 + 0x16,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                           );
      if ((uVar13 & 1) == 0) {
        if (iVar25 < 0) {
          FUN_012b8948(param_5 + 0x16,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
        }
        param_5[0x1c] = 0;
        param_5[0x1d] = 0;
        param_5[0x1a] = 0;
        param_5[0x1b] = 0;
        param_5[0x18] = 0;
        param_5[0x19] = 0;
        param_5[0x16] = 0;
        param_5[0x17] = 0;
        uStack_58 = *(undefined8 *)(param_5 + 0x10);
        uStack_490 = *(undefined8 *)(param_5 + 0xe);
        param_5[0x1e] = 0;
        param_5[0x1f] = 0;
        iVar25 = param_5[0xc];
        *param_5 = -2;
        param_5[8] = 0;
        param_5[9] = 0;
        param_5[0xe] = 0;
        param_5[0xf] = 0;
        param_5[0x10] = 0;
        puVar3 = StringLiteral_12299;
        param_5[0x11] = 0;
        uStack_488 = (undefined4)uStack_58;
        uStack_484 = (undefined4)((ulong)uStack_58 >> 0x20);
        uStack_60 = uStack_490;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uStack_4e8 = CONCAT44(uStack_484,uStack_488);
        uStack_4f0 = uStack_490;
        uStack_4dc = 0;
        iStack_4e0 = iVar25;
        FUN_011ccb9c(param_5 + 2,&uStack_4f0,*(undefined8 *)puVar3);
        goto LAB_01582b04;
      }
      FUN_00bc9230(&uStack_490,param_5 + 0x16,*(undefined8 *)StringLiteral_6439);
      uStack_f8 = CONCAT44(uStack_484,uStack_488);
      uStack_f0 = CONCAT44(uStack_47c,uStack_480);
      uStack_c0 = uStack_490;
      uStack_c8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_100 = uStack_490;
      uStack_b8 = uStack_f8;
      uStack_b0 = uStack_f0;
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01320e50(lVar12,*(undefined8 *)puVar7);
      uStack_c8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      param_5[0x2a] = 0;
      param_5[0x2b] = 0;
      param_5[0x28] = 0;
      param_5[0x29] = 0;
      param_5[0x2e] = 0;
      param_5[0x2f] = 0;
      param_5[0x2c] = 0;
      param_5[0x2d] = 0;
      *(undefined8 *)(param_5 + 0x22) = uStack_f8;
      *(undefined8 *)(param_5 + 0x20) = uStack_100;
      param_5[0x26] = 0;
      param_5[0x27] = 0;
      *(undefined8 *)(param_5 + 0x24) = uStack_f0;
      *(long *)(param_5 + 0x30) = lVar12;
      if (*(long *)(param_5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar20 = *(undefined8 *)(*(long *)(param_5 + 8) + 0x18);
      uVar23 = *(undefined8 *)Method_System_Net_Security_SslStream_SetAndVerifyValidationCallback__;
      param_3 = uStack_100;
      param_4 = uStack_f0;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar23 = FUN_01780344(uVar23,0);
      uVar13 = FUN_01789ac0(uVar20,uVar23,0);
      if ((uVar13 & 1) == 0) goto LAB_01583b18;
      if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_011285d4(&uStack_c0,&uStack_108,*(undefined8 *)puVar6);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = OVRRayTransformer___ctor(&uStack_108,&uStack_118,&uStack_128,&lStack_130,0);
      if ((uVar13 & 1) != 0) break;
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)puVar5,0);
    }
    *(undefined8 *)(param_5 + 0x28) = uStack_120;
    *(undefined8 *)(param_5 + 0x26) = uStack_128;
    *(undefined8 *)(param_5 + 0x2c) = uStack_110;
    *(undefined8 *)(param_5 + 0x2a) = uStack_118;
    if (lStack_130 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(lStack_130 + 0x18);
    }
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Linq_Expressions_Expression_NewArrayInit__);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320ebc(lVar12,uVar11,
                 *(undefined8 *)Method_System_Collections_Generic_Queue<LocomotionEvent>_Clear__);
    lVar17 = lStack_130;
    *(long *)(param_5 + 0x2e) = lVar12;
    if (lStack_130 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(lStack_130 + 0x18)) {
      uVar13 = 0;
      uVar16 = *(ulong *)(lStack_130 + 0x18) & 0xffffffff;
      puVar21 = (undefined8 *)(lStack_130 + 0x28);
      do {
        if (uVar16 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (*(long *)(param_5 + 0x2e) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_00ae93e4(*(long *)(param_5 + 0x2e),puVar21[-1],*puVar21,*(undefined8 *)puVar8);
        uVar16 = (ulong)*(uint *)(lVar17 + 0x18);
        uVar13 = uVar13 + 1;
        puVar21 = puVar21 + 2;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar17 + 0x18));
    }
LAB_01583b18:
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01128200(&uStack_c0,&uStack_350,*(undefined8 *)PTR_DAT_033eaba0);
    *(undefined8 *)(param_5 + 0x32) = uStack_350;
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                 System_Collections_Generic_HashSet<PlayableDirector>_TypeInfo);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar12,*(undefined8 *)
                         Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__
                );
    *(long *)(param_5 + 0x34) = lVar12;
    uStack_10 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    if (*(int *)(*(long *)Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uStack_368 = FUN_01aa6d78(param_5 + 0x32,0);
    uStack_378 = uStack_18;
    uStack_380 = uStack_20;
    uStack_370 = uStack_10;
    uStack_358 = uStack_138;
    uStack_360 = uStack_140;
    auVar34 = FUN_01a92b9c(lVar12,&uStack_380,0,0);
    auStack_a0 = auVar34;
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__
                        );
    }
    auVar34 = FUN_01353c78(auStack_a0,
                           *(undefined8 *)System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    auStack_90 = auVar34;
    uVar13 = FUN_011cf2a4(auStack_90,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__);
    if ((uVar13 & 1) == 0) {
      *param_5 = 1;
      *(undefined1 (*) [16])(param_5 + 0x12) = auStack_90;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098c58(param_5 + 2,auStack_90,param_5,
                   *(undefined8 *)Method_MainStagePortrait_<SetSpeed>b__34_0__);
      goto LAB_01582b04;
    }
LAB_01583c48:
    FUN_011cf420(auStack_90,&uStack_490,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__)
    ;
    if (*(long *)(param_5 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(*(long *)(param_5 + 0x34) + 0x18) != 0) break;
    if (*(int *)(*(long *)Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar12 = FUN_01aa6d78(param_5 + 0x32,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uStack_490 = CONCAT44(uStack_490._4_4_,(int)*(undefined8 *)(lVar12 + 0x18));
    uVar20 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&uStack_490);
    uVar20 = FUN_015f6780(*(undefined8 *)
                           Method_System_Collections_Generic_List<VoiceServiceRequestOptions_QueryParam>_Add__
                          ,uVar20,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661754(uVar20,0);
  } while( true );
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5400);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar12,*(undefined8 *)PTR_DAT_033ef7b8);
  if (*(long *)(param_5 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(param_5 + 0x34),&uStack_490,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  puVar8 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_1__;
  puVar7 = Method_EnableTeleportsOnTuneTargetComplete_OnTuneTargetComplete__;
  puVar6 = Method_System_Collections_Generic_List<string>_Find__;
  puVar5 = 
  Method_System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>__ctor__
  ;
  puVar4 = Method_UnityEngine_UIElements_BaseSlider<float>__ctor__;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_IXRInteractionOverrideGroup_TypeInfo;
  uStack_168 = CONCAT44(uStack_484,uStack_488);
  uStack_158 = CONCAT44(uStack_474,uStack_478);
  uStack_160 = CONCAT44(uStack_47c,uStack_480);
  uStack_170 = uStack_490;
  uStack_150 = uStack_470;
  while( true ) {
    uVar13 = FUN_012b894c(&uStack_170,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                         );
    if ((uVar13 & 1) == 0) break;
    FUN_00bc9230(&uStack_490,&uStack_170,*(undefined8 *)StringLiteral_6439);
    uStack_188 = CONCAT44(uStack_484,uStack_488);
    uStack_180 = CONCAT44(uStack_47c,uStack_480);
    uStack_190 = uStack_490;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_011285d4(&uStack_190,&uStack_198,*(undefined8 *)StringLiteral_5356);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar34 = FUN_01a9e870(0,&uStack_198,1,0);
      FUN_00bd1c8c(lVar12,auVar34._0_8_,auVar34._8_8_,*(undefined8 *)puVar4);
    }
  }
  if (iVar25 < 0) {
    FUN_012b8948(&uStack_170,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
  }
  auVar34 = FUN_0112d3ac(lVar12,*(undefined8 *)puVar8);
  auStack_1c0 = auVar34;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  auVar34 = FUN_01353c78(auStack_1c0,*(undefined8 *)puVar5);
  auStack_1b0 = auVar34;
  uVar13 = FUN_011cf2a4(auStack_1b0,*(undefined8 *)puVar7);
  if ((uVar13 & 1) == 0) goto code_r0x01583e3c;
  goto LAB_01582b44;
code_r0x01583e3c:
  *param_5 = 2;
  *(undefined1 (*) [16])(param_5 + 0x36) = auStack_1b0;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01098c58(param_5 + 2,auStack_1b0,param_5,*(undefined8 *)puVar6);
LAB_01582b04:
  if (*(long *)(lVar1 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


