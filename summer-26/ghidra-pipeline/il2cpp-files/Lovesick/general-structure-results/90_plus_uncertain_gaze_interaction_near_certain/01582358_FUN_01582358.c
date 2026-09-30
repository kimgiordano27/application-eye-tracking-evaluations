/*
FUNCTION_NAME: FUN_01582358
ENTRY_POINT: 01582358
PROGRAM: Lovesick-libil2cpp.so
SCORE: 297
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_16;functionality_data_collection_or_telemetry_hits_4
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

void FUN_01582358(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
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
  undefined8 uStack_570;
  undefined8 uStack_568;
  int iStack_560;
  undefined4 uStack_55c;
  undefined1 auStack_558 [72];
  undefined8 local_510;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 local_4f0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  float fStack_498;
  float fStack_494;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined8 uStack_484;
  undefined8 uStack_47c;
  undefined4 uStack_474;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined8 uStack_45c;
  undefined4 uStack_454;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined1 local_370 [16];
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  long local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  int local_2f4;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
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
  local_d8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  local_110._8_8_ = 0;
  local_110._0_8_ = 0;
  local_120._8_8_ = 0;
  local_120._0_8_ = 0;
  auVar34 = ZEXT816(0);
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1d0 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_230._8_8_ = 0;
  local_230._0_8_ = 0;
  local_240._8_8_ = 0;
  local_240._0_8_ = 0;
  local_250 = 0;
  uStack_258 = 0;
  local_260 = 0;
  local_268 = 0;
  uStack_278 = 0;
  local_280 = 0;
  local_270 = 0;
  local_2a0 = 0;
  local_290 = 0;
  uStack_28c = 0;
  local_298 = 0;
  uStack_294 = 0;
  local_288 = 0;
  local_2b8 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2e0 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  local_2f4 = 0;
  local_300 = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  local_370._8_8_ = 0;
  local_370._0_8_ = 0;
  local_388 = 0;
  local_390 = 0;
  local_380 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_348 = 0;
  local_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_358 = 0;
  local_360 = 0;
  local_398 = 0;
  iVar25 = *param_5;
  lVar22 = *(long *)(param_5 + 10);
  if (iVar25 == 0) {
    local_110 = *(undefined1 (*) [16])(param_5 + 0x12);
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
    local_120 = FUN_01581fa4();
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__
                        );
    }
    local_110 = FUN_01353c78(local_120,
                             *(undefined8 *)System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    uVar13 = FUN_011cf2a4(local_110,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__);
    auVar34 = local_120;
    if ((uVar13 & 1) == 0) {
      *param_5 = 0;
      *(undefined1 (*) [16])(param_5 + 0x12) = local_110;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098c58(param_5 + 2,local_110,param_5,
                   *(undefined8 *)Method_MainStagePortrait_<SetSpeed>b__34_0__);
      goto LAB_01582b04;
    }
  }
  local_120 = auVar34;
  FUN_011cf420(local_110,&local_510,
               *(undefined8 *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__);
  uStack_f8 = CONCAT44(uStack_504,uStack_508);
  local_f0 = CONCAT44(uStack_4fc,local_500);
  local_100 = local_510;
  FUN_0134cc4c(&local_100,&local_510,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_DB047CC748613CCCB120DE7385E37D542A79C3BF8F0E64FE6DAD349B4D26E5D7
              );
  puVar3 = System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo;
  param_5[0xc] = (int)local_510;
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
  FUN_01323390(lVar12,&local_3d0,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  uStack_508 = (undefined4)uStack_3c8;
  uStack_504 = (undefined4)((ulong)uStack_3c8 >> 0x20);
  local_510 = local_3d0;
  uStack_4f8 = (undefined4)uStack_3b8;
  uStack_4f4 = (undefined4)((ulong)uStack_3b8 >> 0x20);
  local_500 = (undefined4)uStack_3c0;
  uStack_4fc = (undefined4)((ulong)uStack_3c0 >> 0x20);
  local_4f0 = local_3b0;
  *(undefined8 *)(param_5 + 0x1e) = local_3b0;
  *(undefined8 *)(param_5 + 0x1c) = uStack_3b8;
  *(undefined8 *)(param_5 + 0x1a) = uStack_3c0;
  *(undefined8 *)(param_5 + 0x18) = uStack_3c8;
  *(undefined8 *)(param_5 + 0x16) = local_3d0;
  auVar10 = local_120;
  auVar34 = local_110;
LAB_01582a60:
  local_120 = auVar10;
  if (iVar25 == 1) {
    local_110 = *(undefined1 (*) [16])(param_5 + 0x12);
    iVar25 = -1;
    param_5[0x12] = 0;
    param_5[0x13] = 0;
    param_5[0x14] = 0;
    param_5[0x15] = 0;
    *param_5 = -1;
    goto LAB_01583c48;
  }
  local_110 = auVar34;
  if (iVar25 != 2) goto LAB_01583f00;
  local_230 = *(undefined1 (*) [16])(param_5 + 0x36);
  iVar25 = -1;
  param_5[0x36] = 0;
  param_5[0x37] = 0;
  param_5[0x38] = 0;
  param_5[0x39] = 0;
  *param_5 = -1;
LAB_01582b44:
  FUN_011cf420(local_230,&local_3d0,*(undefined8 *)StringLiteral_14201);
  if (*(long *)(param_5 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(param_5 + 0x34),&local_510,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  puVar6 = StringLiteral_13019;
  puVar5 = 
  Method_UnityEngine_ProBuilder_MeshOperations_ConnectElements_<>c_<ConnectEdgesInFace>b__5_1__;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_get_Count__;
  fVar2 = DAT_028aa158;
  uStack_1e8 = CONCAT44(uStack_504,uStack_508);
  uStack_1d8 = CONCAT44(uStack_4f4,uStack_4f8);
  uVar20 = CONCAT44(uStack_4fc,local_500);
  local_1f0 = local_510;
  local_1d0 = local_4f0;
  local_1e0 = uVar20;
  while( true ) {
    uVar13 = FUN_012b894c(&local_1f0,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                         );
    if ((uVar13 & 1) == 0) break;
    FUN_00bc9230(&local_510,&local_1f0,*(undefined8 *)StringLiteral_6439);
    uStack_258 = CONCAT44(uStack_504,uStack_508);
    local_250 = CONCAT44(uStack_4fc,local_500);
    local_260 = local_510;
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
    uVar13 = FUN_011285d4(&local_260,&local_268,
                          *(undefined8 *)System_Collections_Generic_List<GSTU_Cell>_TypeInfo);
    uVar11 = (undefined4)uVar20;
    uVar32 = (undefined4)param_3;
    uVar30 = (undefined4)param_4;
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01aa408c(&local_268,0);
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
        FUN_01aa45d4(&local_268,uVar23,0);
        if (*(long *)(lVar22 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(*(long *)(lVar22 + 0xb8),&local_510,
                     *(undefined8 *)
                      Method_Obi_ObiRopeBlueprint_<CreateBendingConstraints>d__4_System_Collections_IEnumerator_Reset__
                    );
        uStack_2e8 = CONCAT44(uStack_504,uStack_508);
        local_2e0 = CONCAT44(uStack_4fc,local_500);
        local_2f0 = local_510;
        while( true ) {
          uVar13 = FUN_012b894c(&local_2f0,*(undefined8 *)puVar3);
          uVar11 = (undefined4)uVar20;
          uVar32 = (undefined4)param_3;
          uVar30 = (undefined4)param_4;
          if ((uVar13 & 1) == 0) break;
          uVar11 = FUN_00bd1e88(&local_2f0,*(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar23 = FUN_01aa5550(uVar11,0);
          FUN_00ac1158(lVar12,uVar23,*(undefined8 *)puVar4);
        }
        if (iVar25 < 0) {
          FUN_012b8948(&local_2f0,
                       *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_GetElementType__);
        }
      }
    }
    uVar9 = local_250;
    uVar23 = uStack_258;
    uVar20 = local_260;
    uStack_278 = 0;
    local_280 = 0;
    local_270 = 0;
    local_2a0 = 0;
    local_290 = 0;
    uStack_28c = 0;
    local_298 = 0;
    uStack_294 = 0;
    local_288 = 0;
    local_2a8 = 0;
    local_2b0 = 0;
    local_2b8 = 0;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_011285d4(&local_260,&local_2c0,*(undefined8 *)StringLiteral_6020);
    if ((uVar13 & 1) == 0) {
LAB_01582f9c:
      lVar17 = 0;
    }
    else {
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01aa2fa8(&local_2c0,0);
      if ((uVar13 & 1) == 0) goto LAB_01582f9c;
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar26 = FUN_01aa3400(&local_2c0,0);
      local_308 = CONCAT44(uVar11,uVar26);
      local_300 = CONCAT44(uVar30,uVar32);
      uVar27 = FUN_026883f4(&local_308,0);
      uVar26 = uVar11;
      uVar28 = FUN_01aa3400(&local_2c0,0);
      local_308 = CONCAT44(uVar26,uVar28);
      local_300 = CONCAT44(uVar30,uVar32);
      local_a8 = FUN_02688460(&local_308,0);
      local_510 = 0;
      uStack_508 = 0;
      uStack_504 = 0;
      local_500 = 0;
      local_b0 = uVar27;
      local_ac = uVar11;
      local_a4 = uVar26;
      FUN_01347274(&local_510,&local_b0,
                   *(undefined8 *)Method_System_Collections_Generic_List<Ray>__ctor__);
      uStack_278 = CONCAT44(uStack_504,uStack_508);
      local_280 = local_510;
      local_270 = local_500;
      uVar13 = FUN_01aa3560(&local_2c0,&local_2f4,0);
      if ((uVar13 & 1) == 0) goto LAB_01582f9c;
      FUN_013421d4(&local_318,local_2f4,2,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                  );
      uVar19 = local_310;
      lVar17 = local_318;
      if (*(int *)(*(long *)OVRSimpleJSON_JSONObject_<get_Children>d__27_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01aa35f0(&local_2c0,lVar17,uVar19,0);
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
        if (0 < local_2f4) {
          lVar18 = 0;
          lVar24 = 0;
          do {
            FUN_00bbed00(*(undefined4 *)(local_318 + lVar18),((undefined4 *)(local_318 + lVar18))[1]
                         ,lVar17,*(undefined8 *)
                                  Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
            lVar24 = lVar24 + 1;
            lVar18 = lVar18 + 8;
          } while (lVar24 < local_2f4);
        }
      }
      if (iVar25 < 0) {
        FUN_01342a94(&local_318,*(undefined8 *)StringLiteral_13233);
      }
    }
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_011285d4(&local_260,&local_2c8,*(undefined8 *)Obi_ObiHeightFieldHandle_TypeInfo);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<ProBuilderMesh>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01aa3904(&local_2c8,0);
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
    uVar13 = FUN_011285d4(&local_260,&local_2d0,*(undefined8 *)StringLiteral_5356);
    if ((uVar13 & 1) == 0) {
LAB_015832d4:
      if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      local_510 = uVar23;
      uStack_508 = (undefined4)uVar9;
      uStack_504 = (undefined4)((ulong)uVar9 >> 0x20);
      uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                  ,&local_510);
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
      uVar13 = FUN_01a9e784(&local_2d0,0);
      if ((uVar13 & 1) == 0) goto LAB_015832d4;
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01a9ede0(&local_2d0,&local_360,0);
      if ((uVar13 & 1) == 0) goto LAB_015832d4;
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      auVar34 = FUN_01aa0ec0(&local_360,*(undefined8 *)(*(long *)(lVar22 + 0x88) + 0x18),0);
      local_370 = auVar34;
      if (*(long *)(lVar22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01aa1068(&local_510,&local_360,*(undefined8 *)(*(long *)(lVar22 + 0x88) + 0x18),0);
      local_388 = CONCAT44(uStack_504,uStack_508);
      local_390 = local_510;
      local_380 = local_500;
      lVar24 = *(long *)(*(long *)System_Xml_Serialization_XmlElementEventArgs_TypeInfo + 0x20);
      if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
        lVar24 = FUN_00d5941c();
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
      if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
        lVar24 = FUN_00d5941c();
      }
      pcVar14 = (char *)thunk_FUN_00d32ed4(local_370,*(undefined8 *)(lVar24 + 0x80));
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
      pcVar14 = (char *)thunk_FUN_00d32ed4(&local_390,*(undefined8 *)(lVar24 + 0x80));
      if (*pcVar14 == '\0') goto LAB_015832d4;
      FUN_01347408(local_370,&uStack_c0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Clear__);
      uVar32 = uStack_b8;
      uVar15 = uStack_c0;
      FUN_01347408(&local_390,&uStack_d0,*(undefined8 *)PTR_DAT_033ede88);
      fVar31 = fStack_cc;
      fVar33 = fStack_c8;
      fVar29 = (float)FUN_02698c04(uStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
      fVar31 = fVar31 * fVar2;
      fVar33 = fVar33 * fVar2;
      uVar30 = FUN_026992c0(fVar29 * fVar2,0);
    }
    uStack_428 = uStack_278;
    uStack_430 = local_280;
    uStack_420 = local_270;
    uStack_508 = local_298;
    local_510 = local_2a0;
    uStack_4fc = uStack_28c;
    uStack_4f8 = local_288;
    uStack_504 = uStack_294;
    local_500 = local_290;
    uStack_3c8 = local_2b0;
    local_3d0 = local_2b8;
    uStack_3c0 = local_2a8;
    if (*(long *)(param_5 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uStack_4b8 = uVar9;
    uStack_4c8 = uVar20;
    uStack_4c0 = uVar23;
    uStack_45c = CONCAT44(local_288,uStack_28c);
    param_3 = CONCAT44(local_290,uStack_294);
    uStack_474 = local_270;
    uStack_47c = uStack_278;
    uStack_484 = local_280;
    uStack_460 = local_290;
    uStack_468 = local_298;
    uStack_464 = uStack_294;
    uStack_470 = local_2a0;
    uStack_454 = 0;
    uStack_438 = local_2a8;
    uStack_440 = local_2b0;
    uStack_448 = local_2b8;
    uVar20 = local_2a0;
    param_4 = local_2b8;
    lStack_4b0 = lVar12;
    uStack_4a8 = uVar15;
    uStack_4a0 = uVar32;
    uStack_49c = uVar30;
    fStack_498 = fVar31;
    fStack_494 = fVar33;
    uStack_490 = uVar19;
    uStack_488 = uVar11;
    lStack_450 = lVar17;
    FUN_00bd1020(*(long *)(param_5 + 0x30),&uStack_4c8,
                 *(undefined8 *)
                  Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_112>__
                );
  }
  if (iVar25 < 0) {
    FUN_012b8948(&local_1f0,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
  }
  lVar12 = *(long *)(param_5 + 0x10);
  __src = param_5 + 0x20;
  memcpy(&local_510,__src,0x48);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  memcpy(auStack_558,&local_510,0x48);
  FUN_00bd1f90(lVar12,auStack_558,*(undefined8 *)PTR_DAT_033f22e0);
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
        local_d8 = *(undefined8 *)(param_5 + 0x10);
        local_510 = *(undefined8 *)(param_5 + 0xe);
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
        uStack_508 = (undefined4)local_d8;
        uStack_504 = (undefined4)((ulong)local_d8 >> 0x20);
        local_e0 = local_510;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uStack_568 = CONCAT44(uStack_504,uStack_508);
        uStack_570 = local_510;
        uStack_55c = 0;
        iStack_560 = iVar25;
        FUN_011ccb9c(param_5 + 2,&uStack_570,*(undefined8 *)puVar3);
        goto LAB_01582b04;
      }
      FUN_00bc9230(&local_510,param_5 + 0x16,*(undefined8 *)StringLiteral_6439);
      uStack_178 = CONCAT44(uStack_504,uStack_508);
      local_170 = CONCAT44(uStack_4fc,local_500);
      local_140 = local_510;
      uStack_148 = 0;
      local_160 = 0;
      uStack_168 = 0;
      local_150 = 0;
      uStack_158 = 0;
      local_180 = local_510;
      local_138 = uStack_178;
      local_130 = local_170;
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01320e50(lVar12,*(undefined8 *)puVar7);
      uStack_148 = 0;
      local_160 = 0;
      uStack_168 = 0;
      local_150 = 0;
      uStack_158 = 0;
      param_5[0x2a] = 0;
      param_5[0x2b] = 0;
      param_5[0x28] = 0;
      param_5[0x29] = 0;
      param_5[0x2e] = 0;
      param_5[0x2f] = 0;
      param_5[0x2c] = 0;
      param_5[0x2d] = 0;
      *(undefined8 *)(param_5 + 0x22) = uStack_178;
      *(undefined8 *)(param_5 + 0x20) = local_180;
      param_5[0x26] = 0;
      param_5[0x27] = 0;
      *(undefined8 *)(param_5 + 0x24) = local_170;
      *(long *)(param_5 + 0x30) = lVar12;
      if (*(long *)(param_5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar20 = *(undefined8 *)(*(long *)(param_5 + 8) + 0x18);
      uVar23 = *(undefined8 *)Method_System_Net_Security_SslStream_SetAndVerifyValidationCallback__;
      param_3 = local_180;
      param_4 = local_170;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar23 = FUN_01780344(uVar23,0);
      uVar13 = FUN_01789ac0(uVar20,uVar23,0);
      if ((uVar13 & 1) == 0) goto LAB_01583b18;
      if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_011285d4(&local_140,&local_188,*(undefined8 *)puVar6);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = OVRRayTransformer___ctor(&local_188,&local_198,&local_1a8,&local_1b0,0);
      if ((uVar13 & 1) != 0) break;
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)puVar5,0);
    }
    *(undefined8 *)(param_5 + 0x28) = local_1a0;
    *(undefined8 *)(param_5 + 0x26) = local_1a8;
    *(undefined8 *)(param_5 + 0x2c) = local_190;
    *(undefined8 *)(param_5 + 0x2a) = local_198;
    if (local_1b0 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(local_1b0 + 0x18);
    }
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Linq_Expressions_Expression_NewArrayInit__);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320ebc(lVar12,uVar11,
                 *(undefined8 *)Method_System_Collections_Generic_Queue<LocomotionEvent>_Clear__);
    lVar17 = local_1b0;
    *(long *)(param_5 + 0x2e) = lVar12;
    if (local_1b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(local_1b0 + 0x18)) {
      uVar13 = 0;
      uVar16 = *(ulong *)(local_1b0 + 0x18) & 0xffffffff;
      puVar21 = (undefined8 *)(local_1b0 + 0x28);
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
    FUN_01128200(&local_140,&local_3d0,*(undefined8 *)PTR_DAT_033eaba0);
    *(undefined8 *)(param_5 + 0x32) = local_3d0;
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
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_1b8 = 0;
    local_1c0 = 0;
    if (*(int *)(*(long *)Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uStack_3e8 = FUN_01aa6d78(param_5 + 0x32,0);
    uStack_3f8 = local_98;
    uStack_400 = local_a0;
    uStack_3f0 = local_90;
    uStack_3d8 = local_1b8;
    uStack_3e0 = local_1c0;
    auVar34 = FUN_01a92b9c(lVar12,&uStack_400,0,0);
    local_120 = auVar34;
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__
                        );
    }
    auVar34 = FUN_01353c78(local_120,
                           *(undefined8 *)System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    local_110 = auVar34;
    uVar13 = FUN_011cf2a4(local_110,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__);
    if ((uVar13 & 1) == 0) {
      *param_5 = 1;
      *(undefined1 (*) [16])(param_5 + 0x12) = local_110;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098c58(param_5 + 2,local_110,param_5,
                   *(undefined8 *)Method_MainStagePortrait_<SetSpeed>b__34_0__);
      goto LAB_01582b04;
    }
LAB_01583c48:
    FUN_011cf420(local_110,&local_510,
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
    local_510 = CONCAT44(local_510._4_4_,(int)*(undefined8 *)(lVar12 + 0x18));
    uVar20 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,&local_510);
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
  FUN_01323390(*(long *)(param_5 + 0x34),&local_510,
               *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_TypeInfo);
  puVar8 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_1__;
  puVar7 = Method_EnableTeleportsOnTuneTargetComplete_OnTuneTargetComplete__;
  puVar6 = Method_System_Collections_Generic_List<string>_Find__;
  puVar5 = 
  Method_System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>__ctor__
  ;
  puVar4 = Method_UnityEngine_UIElements_BaseSlider<float>__ctor__;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_IXRInteractionOverrideGroup_TypeInfo;
  uStack_1e8 = CONCAT44(uStack_504,uStack_508);
  uStack_1d8 = CONCAT44(uStack_4f4,uStack_4f8);
  local_1e0 = CONCAT44(uStack_4fc,local_500);
  local_1f0 = local_510;
  local_1d0 = local_4f0;
  while( true ) {
    uVar13 = FUN_012b894c(&local_1f0,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Clear__
                         );
    if ((uVar13 & 1) == 0) break;
    FUN_00bc9230(&local_510,&local_1f0,*(undefined8 *)StringLiteral_6439);
    local_208 = CONCAT44(uStack_504,uStack_508);
    local_200 = CONCAT44(uStack_4fc,local_500);
    local_210 = local_510;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_011285d4(&local_210,&local_218,*(undefined8 *)StringLiteral_5356);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar34 = FUN_01a9e870(0,&local_218,1,0);
      FUN_00bd1c8c(lVar12,auVar34._0_8_,auVar34._8_8_,*(undefined8 *)puVar4);
    }
  }
  if (iVar25 < 0) {
    FUN_012b8948(&local_1f0,*(undefined8 *)Method_System_IO_MemoryStream_set_Position__);
  }
  auVar34 = FUN_0112d3ac(lVar12,*(undefined8 *)puVar8);
  local_240 = auVar34;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  auVar34 = FUN_01353c78(local_240,*(undefined8 *)puVar5);
  local_230 = auVar34;
  uVar13 = FUN_011cf2a4(local_230,*(undefined8 *)puVar7);
  if ((uVar13 & 1) == 0) goto code_r0x01583e3c;
  goto LAB_01582b44;
code_r0x01583e3c:
  *param_5 = 2;
  *(undefined1 (*) [16])(param_5 + 0x36) = local_230;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01098c58(param_5 + 2,local_230,param_5,*(undefined8 *)puVar6);
LAB_01582b04:
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


