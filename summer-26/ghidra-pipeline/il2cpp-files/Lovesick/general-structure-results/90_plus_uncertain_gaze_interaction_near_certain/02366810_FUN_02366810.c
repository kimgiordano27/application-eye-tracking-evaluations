/*
FUNCTION_NAME: FUN_02366810
ENTRY_POINT: 02366810
PROGRAM: Lovesick-libil2cpp.so
SCORE: 285
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02367f94) */
/* WARNING: Removing unreachable block (ram,0x02367f98) */
/* WARNING: Removing unreachable block (ram,0x02368330) */
/* WARNING: Removing unreachable block (ram,0x02367544) */
/* WARNING: Removing unreachable block (ram,0x02367fe0) */
/* WARNING: Removing unreachable block (ram,0x02367900) */
/* WARNING: Removing unreachable block (ram,0x0236834c) */

undefined8 FUN_02366810(float param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  float *pfVar26;
  undefined4 uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  int local_47c;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  ulong local_430;
  undefined8 uStack_428;
  ulong uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  ulong local_2b0;
  undefined8 uStack_2a8;
  ulong local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  int local_258;
  int iStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  ulong local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  int local_178;
  undefined4 local_174;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144 [3];
  undefined4 local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  undefined4 local_120;
  int local_11c;
  undefined4 local_118;
  int local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  
  if ((DAT_03781d7b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10932);
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(StringLiteral_6798);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance_OnTransformTweenableVariableUpdated__
                      );
    thunk_FUN_00d48444(StringLiteral_7364);
    thunk_FUN_00d48444(PTR_DAT_033eae38);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_s8__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<string,_Texture2D>_Invoke__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_Core_DOTweenComponent_<WaitForKill>d__19_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_F603F94B1D517D5138CDEAE0C125779455D596B548A58E5CB4D941F97A1A242A
                      );
    thunk_FUN_00d48444(
                      System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(System_Threading_Tasks_Task<int>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2313);
    thunk_FUN_00d48444(System_Text_DecoderNLS_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UQueryBuilder<VisualElement>_Name__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<EdgeLookup,_Face>_get_Current__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<ARSessionOrigin>__);
    thunk_FUN_00d48444(Oculus_Platform_MessageWithUserProof_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_GetCoincidentVertices__);
    thunk_FUN_00d48444(StringLiteral_4029);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<DialogueButton>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<InternedString,_string>_Dispose__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ecec8);
    thunk_FUN_00d48444(System_Runtime_Remoting_TypeEntry_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2036);
    thunk_FUN_00d48444(StringLiteral_5096);
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlBoolean_CompareTo__);
    thunk_FUN_00d48444(Meta_WitAi_WitRequest_<>c__DisplayClass99_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<DateParseHandling>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ecab8);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(Method_System_Activator_CreateInstance__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(System_Action<string,_ulong>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem_Provider>_get_descriptor__
                      );
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<object>_Pop__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaPatternFacet_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Schema_AllElementsContentValidator_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_List<Type>>_get_Item__);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vector2>_Equals__);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(StringLiteral_10196);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionAsset_FindAction__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MedleyBossProjectileSpawnPoint>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_6171);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmulh_laneq_s32__);
    thunk_FUN_00d48444(System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12923);
    thunk_FUN_00d48444(UnityEngine_Texture2D_var);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d7b = 1;
  }
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  local_240 = 0;
  uStack_248 = 0;
  local_250 = 0;
  local_258 = 0;
  iStack_254 = 0;
  local_260 = 0;
  uStack_268 = 0;
  local_270 = 0;
  local_2e0 = 0;
  uStack_338 = 0;
  local_330 = 0;
  local_340 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_358 = 0;
  local_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  local_368 = 0;
  if ((param_3 == 0) ||
     (uVar11 = FUN_010d7a34(param_3,*(undefined8 *)System_Threading_Tasks_Task<int>_TypeInfo),
     puVar6 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo, (uVar11 & 1) == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    uVar12 = FUN_0230bd48(param_2,0,0);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar13 != 0) {
      FUN_01320f6c(lVar13,uVar12,*(undefined8 *)StringLiteral_9754);
      puVar6 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo;
      if (*(long *)(param_2 + 0x28) != 0) {
        iVar42 = *(int *)(*(long *)(param_2 + 0x28) + 0x18);
        lVar14 = FUN_0230fea8(param_2,0);
        lVar15 = FUN_0230ffd0(param_2,0);
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        puVar6 = PTR_DAT_033f5aa8;
        if (lVar16 != 0) {
          FUN_01320e50(lVar16,*(undefined8 *)
                               Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__
                      );
          lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
          puVar9 = Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__;
          if (lVar17 != 0) {
            FUN_01298da0(lVar17,*(undefined8 *)
                                 Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                        );
            lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
            if (lVar18 != 0) {
              FUN_01298da0(lVar18,*(undefined8 *)puVar9);
              lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
              puVar6 = 
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
              ;
              if (lVar19 != 0) {
                FUN_01298da0(lVar19,*(undefined8 *)puVar9);
                lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                puVar6 = Method_System_Decimal_DecCalc_VarDecFromR4__;
                if (lVar20 != 0) {
                  FUN_01298da0(lVar20,*(undefined8 *)
                                       Method_DG_Tweening_Core_DOTweenComponent_<WaitForKill>d__19_System_Collections_IEnumerator_Reset__
                              );
                  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_0233e5f4(param_2,param_3,1,0);
                  lVar21 = FUN_0236a0f0();
                  puVar29 = (undefined8 *)StringLiteral_6171;
                  if (lVar21 != 0) {
                    FUN_01323390(lVar21,&local_450,
                                 *(undefined8 *)System_Xml_Schema_XmlSchemaPatternFacet_TypeInfo);
                    local_47c = 0;
                    uStack_1f8 = uStack_448;
                    local_200 = local_450;
                    local_1f0 = local_440;
                    do {
                      uVar11 = FUN_012b894c(&local_200,
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary_Enumerator<InternedString,_string>_Dispose__
                                           );
                      if ((uVar11 & 1) == 0) {
                        FUN_012b8948(&local_200,
                                     *(undefined8 *)
                                      Method_UnityEngine_Component_GetComponent<ARSessionOrigin>__);
                        puVar29 = (undefined8 *)
                                  Field_<PrivateImplementationDetails>_8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
                        ;
                        FUN_0129b5d0(lVar20,&local_450,
                                     *(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance_OnTransformTweenableVariableUpdated__
                                    );
                        puVar9 = 
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        ;
                        puVar6 = System_Threading_Timer_TimerComparer_TypeInfo;
                        fVar43 = DAT_028aa5c8;
                        fVar38 = DAT_028aa158;
                        fVar34 = DAT_028aa044;
                        fVar30 = DAT_028aa038;
                        uStack_2b8 = uStack_438;
                        local_2c0 = local_440;
                        uStack_2a8 = uStack_428;
                        local_2b0 = local_430;
                        uStack_2c8 = uStack_448;
                        local_2d0 = local_450;
                        uStack_298 = uStack_418;
                        local_2a0 = uStack_420;
                        uVar11 = uStack_420;
                        while( true ) {
                          fVar40 = (float)uVar11;
                          uVar11 = FUN_012bf140(&local_2d0,*(undefined8 *)StringLiteral_4029);
                          if ((uVar11 & 1) == 0) {
                            uVar12 = FUN_0237cafc(Method_UnityEngine_UIElements_UQueryBuilder<VisualElement>_Name__
                                                  ,&local_2d0);
                            return uVar12;
                          }
                          FUN_00ca499c(&local_450,&local_2d0,*(undefined8 *)StringLiteral_5096);
                          uStack_2f8 = uStack_448;
                          local_300 = local_450;
                          uStack_2e8 = uStack_438;
                          uStack_2f0 = local_440;
                          local_2e0 = local_430;
                          FUN_00ca4a9c(&local_450,&local_300,*puVar29);
                          uStack_318 = uStack_448;
                          local_320 = local_450;
                          uStack_308 = uStack_438;
                          uStack_310 = local_440;
                          uVar12 = local_440;
                          fVar31 = (float)FUN_00ca464c(&local_320,*(undefined8 *)StringLiteral_6171)
                          ;
                          FUN_00ca4a9c(&local_450,&local_300,*puVar29);
                          uStack_318 = uStack_448;
                          local_320 = local_450;
                          uStack_308 = uStack_438;
                          uStack_310 = local_440;
                          lVar14 = FUN_00ca4894(&local_320,
                                                *(undefined8 *)
                                                 System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo
                                               );
                          if (lVar14 == 0) break;
                          iVar42 = *(int *)(lVar14 + 0x18);
                          if (DAT_0377518c == '\0') {
                            thunk_FUN_00d48444(puVar6);
                            DAT_0377518c = '\x01';
                          }
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          fVar39 = (float)iVar42;
                          fVar31 = fVar31 / fVar39;
                          fVar35 = (float)uVar12 / fVar39;
                          fVar40 = fVar40 / fVar39;
                          uVar11 = (ulong)(uint)fVar40;
                          fVar39 = SQRT(fVar40 * fVar40 + fVar31 * fVar31 + fVar35 * fVar35);
                          if (fVar39 <= fVar30) {
                            if (DAT_03774d76 == '\0') {
                              thunk_FUN_00d48444(puVar9);
                              DAT_03774d76 = '\x01';
                            }
                            pfVar26 = *(float **)(*(long *)puVar9 + 0xb8);
                            fVar31 = *pfVar26;
                            fVar35 = pfVar26[1];
                            fVar40 = pfVar26[2];
                          }
                          else {
                            fVar31 = fVar31 / fVar39;
                            fVar35 = fVar35 / fVar39;
                            fVar40 = fVar40 / fVar39;
                          }
                          fVar41 = (float)uVar11;
                          fVar39 = 1.0;
                          if ((param_4 & 1) != 0) {
                            FUN_00ca4a9c(&local_450,&local_300,*puVar29);
                            uStack_318 = uStack_448;
                            local_320 = local_450;
                            uStack_308 = uStack_438;
                            uStack_310 = local_440;
                            uVar12 = local_440;
                            fVar39 = (float)FUN_00ca4b9c(&local_320,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmulh_laneq_s32__
                                                  );
                            if (DAT_03775508 == '\0') {
                              thunk_FUN_00d48444(puVar6);
                              DAT_03775508 = '\x01';
                            }
                            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            fVar44 = (float)uVar12;
                            uVar11 = (ulong)(uint)(fVar40 * fVar40);
                            fVar32 = SQRT((fVar40 * fVar40 + fVar31 * fVar31 + fVar35 * fVar35) *
                                          (fVar41 * fVar41 + fVar39 * fVar39 + fVar44 * fVar44));
                            fVar36 = 0.0;
                            if (fVar43 <= fVar32) {
                              fVar32 = (fVar40 * fVar41 + fVar31 * fVar39 + fVar35 * fVar44) /
                                       fVar32;
                              uVar11 = 0xbf800000;
                              fVar39 = fVar32;
                              if (1.0 < fVar32) {
                                fVar39 = 1.0;
                              }
                              if (fVar32 < -1.0) {
                                fVar39 = -1.0;
                              }
                              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              dVar33 = acos((double)fVar39);
                              fVar36 = (float)dVar33 * fVar38;
                            }
                            fVar39 = (float)FUN_02302334(fVar36 * fVar34,0);
                          }
                          FUN_00ca4a9c(&local_450,&local_300,*puVar29);
                          uStack_318 = uStack_448;
                          local_320 = local_450;
                          uStack_308 = uStack_438;
                          uStack_310 = local_440;
                          lVar14 = FUN_00ca4894(&local_320,
                                                *(undefined8 *)
                                                 System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo
                                               );
                          puVar8 = Method_System_Data_SqlTypes_SqlBoolean_CompareTo__;
                          puVar7 = 
                          Method_UnityEngine_ProBuilder_ProBuilderMesh_GetCoincidentVertices__;
                          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01323390(lVar14,&local_450,
                                       *(undefined8 *)
                                        System_Xml_Schema_AllElementsContentValidator_TypeInfo);
                          fVar39 = fVar39 * param_1;
                          uStack_338 = uStack_448;
                          local_340 = local_450;
                          local_330 = local_440;
                          while (uVar23 = FUN_012b894c(&local_340,*(undefined8 *)puVar7),
                                (uVar23 & 1) != 0) {
                            uVar10 = FUN_00ad838c(&local_340,*(undefined8 *)puVar8);
                            FUN_0132138c(lVar13,uVar10,&local_390,
                                         *(undefined8 *)
                                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                        );
                            if (local_390 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            uVar11 = (ulong)(uint)(fVar40 * fVar39 + *(float *)(local_390 + 0x18));
                            FUN_02338f44(fVar31 * fVar39 + *(float *)(local_390 + 0x10),
                                         fVar35 * fVar39 + *(float *)(local_390 + 0x14),local_390,0)
                            ;
                          }
                          FUN_012b8948(&local_340,*(undefined8 *)StringLiteral_2313);
                          puVar29 = (undefined8 *)
                                    Field_<PrivateImplementationDetails>_8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
                          ;
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      lVar21 = FUN_00ca4130(&local_200,
                                            *(undefined8 *)
                                             Meta_WitAi_WitRequest_<>c__DisplayClass99_0_TypeInfo);
                      lVar22 = FUN_0236a514(lVar21,lVar14);
                      puVar6 = StringLiteral_6798;
                      FUN_0129a9f4(lVar18,*(undefined8 *)StringLiteral_6798);
                      FUN_0129a9f4(lVar17,*(undefined8 *)puVar6);
                      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_0129b5d0(lVar22,&local_450,*(undefined8 *)StringLiteral_7364);
                      uStack_228 = uStack_448;
                      local_230 = local_450;
                      uStack_218 = uStack_438;
                      local_220 = local_440;
                      uStack_208 = uStack_428;
                      local_210 = local_430;
                      uVar12 = local_450;
                      uVar11 = local_430;
                      while (uVar23 = FUN_012bf140(&local_230,*(undefined8 *)PTR_DAT_033ecec8),
                            (uVar23 & 1) != 0) {
                        FUN_00ca4238(&local_450,&local_230,
                                     *(undefined8 *)System_Runtime_Remoting_TypeEntry_TypeInfo);
                        uStack_248 = uStack_448;
                        local_250 = local_450;
                        local_240 = local_440;
                        uVar11 = FUN_00ca4338(&local_250,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                                             );
                        lVar22 = FUN_00ca443c(&local_250,
                                              *(undefined8 *)
                                               Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem_Provider>_get_descriptor__
                                             );
                        iVar4 = *(int *)(lVar13 + 0x18);
                        uVar10 = (undefined4)uVar11;
                        local_1e8 = uVar10;
                        uVar23 = FUN_0129aa60(lVar17,&local_1e8,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                             );
                        if ((uVar23 & 1) == 0) {
                          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          local_1e0 = uVar10;
                          FUN_01299bc0(lVar14,&local_1e0,&local_1e4,
                                       *(undefined8 *)
                                        Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                          local_1dc = local_1e4;
                          local_1d8 = uVar10;
                          FUN_0129a054(lVar17,&local_1d8,&local_1dc,
                                       *(undefined8 *)
                                        Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                          iStack_254 = -1;
                          local_1d0 = uVar10;
                          FUN_01299bc0(lVar14,&local_1d0,&local_1d4,
                                       *(undefined8 *)
                                        Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                          local_1cc = local_1d4;
                          uVar23 = FUN_0129eff4(lVar18,&local_1cc,&iStack_254,
                                                *(undefined8 *)
                                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                          if ((uVar23 & 1) == 0) {
                            iStack_254 = local_47c + iVar42;
                            local_1bc = uVar10;
                            FUN_01299bc0(lVar14,&local_1bc,&local_1c0,
                                         *(undefined8 *)
                                          Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                            local_1b4 = local_1c0;
                            local_1b8 = iStack_254;
                            FUN_0129a054(lVar18,&local_1b4,&local_1b8,
                                         *(undefined8 *)
                                          Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                            local_1b0 = iStack_254;
                            local_1ac = uVar10;
                            FUN_01299e64(lVar14,&local_1ac,&local_1b0,
                                         *(undefined8 *)
                                          System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                        );
                            local_47c = local_47c + 1;
                          }
                          else {
                            local_1c8 = iStack_254;
                            local_1c4 = uVar10;
                            FUN_01299e64(lVar14,&local_1c4,&local_1c8,
                                         *(undefined8 *)
                                          System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                        );
                          }
                        }
                        uVar27 = (undefined4)(uVar11 >> 0x20);
                        local_1a8 = uVar27;
                        uVar23 = FUN_0129aa60(lVar17,&local_1a8,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                             );
                        if ((uVar23 & 1) == 0) {
                          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          local_1a0 = uVar27;
                          FUN_01299bc0(lVar14,&local_1a0,&local_1a4,
                                       *(undefined8 *)
                                        Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                          local_19c = local_1a4;
                          local_198 = uVar27;
                          FUN_0129a054(lVar17,&local_198,&local_19c,
                                       *(undefined8 *)
                                        Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                          local_258 = -1;
                          local_190 = uVar27;
                          FUN_01299bc0(lVar14,&local_190,&local_194,
                                       *(undefined8 *)
                                        Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                          local_18c = local_194;
                          uVar23 = FUN_0129eff4(lVar18,&local_18c,&local_258,
                                                *(undefined8 *)
                                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                          if ((uVar23 & 1) == 0) {
                            local_258 = local_47c + iVar42;
                            local_17c = uVar27;
                            FUN_01299bc0(lVar14,&local_17c,&local_180,
                                         *(undefined8 *)
                                          Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                            local_174 = local_180;
                            local_178 = local_258;
                            FUN_0129a054(lVar18,&local_174,&local_178,
                                         *(undefined8 *)
                                          Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                            local_170 = local_258;
                            local_16c = uVar27;
                            FUN_01299e64(lVar14,&local_16c,&local_170,
                                         *(undefined8 *)
                                          System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                        );
                            local_47c = local_47c + 1;
                          }
                          else {
                            local_188 = local_258;
                            local_184 = uVar27;
                            FUN_01299e64(lVar14,&local_184,&local_188,
                                         *(undefined8 *)
                                          System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                        );
                          }
                        }
                        local_164 = uVar10;
                        FUN_01299bc0(lVar17,&local_164,&local_168,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        local_160 = local_168;
                        local_15c = iVar4;
                        FUN_0129a054(lVar14,&local_15c,&local_160,
                                     *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__
                                    );
                        local_154 = uVar27;
                        FUN_01299bc0(lVar17,&local_154,&local_158,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        iVar1 = iVar4 + 1;
                        local_150 = local_158;
                        local_14c = iVar1;
                        FUN_0129a054(lVar14,&local_14c,&local_150,
                                     *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__
                                    );
                        local_144[0] = uVar10;
                        FUN_01299bc0(lVar14,local_144,&local_148,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        iVar2 = iVar4 + 2;
                        local_138 = local_148;
                        local_134 = iVar2;
                        FUN_0129a054(lVar14,&local_134,&local_138,
                                     *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__
                                    );
                        puVar6 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                        local_12c = uVar27;
                        FUN_01299bc0(lVar14,&local_12c,&local_130,
                                     *(undefined8 *)
                                      Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                        iVar3 = iVar4 + 3;
                        local_128 = local_130;
                        local_124 = iVar3;
                        FUN_0129a054(lVar14,&local_124,&local_128,*(undefined8 *)puVar6);
                        local_120 = uVar10;
                        local_11c = iVar2;
                        FUN_0129a054(lVar19,&local_11c,&local_120,*(undefined8 *)puVar6);
                        local_118 = uVar27;
                        local_114 = iVar3;
                        FUN_0129a054(lVar19,&local_114,&local_118,*(undefined8 *)puVar6);
                        FUN_0132138c(lVar13,uVar11 & 0xffffffff,&local_110,
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                    );
                        uVar12 = local_110;
                        lVar24 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Texture2D_var);
                        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_02339644(lVar24,uVar12,0);
                        FUN_00ca0af8(lVar13,lVar24,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                        FUN_0132138c(lVar13,uVar11 >> 0x20,&local_108,
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                    );
                        uVar12 = local_108;
                        lVar24 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Texture2D_var);
                        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_02339644(lVar24,uVar12,0);
                        FUN_00ca0af8(lVar13,lVar24,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                        puVar6 = OVRManager_XrApi_TypeInfo;
                        FUN_00ca0af8(lVar13,0,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                        FUN_00ca0af8(lVar13,0,*(undefined8 *)puVar6);
                        lVar24 = FUN_00da4fb8(*(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                              6);
                        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar5 = *(uint *)(lVar24 + 0x18);
                        if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        *(int *)(lVar24 + 0x20) = iVar4;
                        if (uVar5 == 1) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        *(int *)(lVar24 + 0x24) = iVar1;
                        puVar29 = (undefined8 *)StringLiteral_6171;
                        if (uVar5 < 3) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        *(int *)(lVar24 + 0x28) = iVar2;
                        if (uVar5 == 3) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        *(int *)(lVar24 + 0x2c) = iVar1;
                        if (uVar5 < 5) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        *(int *)(lVar24 + 0x30) = iVar3;
                        if (uVar5 == 5) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        *(int *)(lVar24 + 0x34) = iVar2;
                        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar10 = *(undefined4 *)(lVar22 + 0x48);
                        uStack_438 = *(undefined8 *)(lVar22 + 0x34);
                        local_440 = *(undefined8 *)(lVar22 + 0x2c);
                        uStack_448 = *(undefined8 *)(lVar22 + 0x24);
                        local_450 = *(undefined8 *)(lVar22 + 0x1c);
                        uVar11 = 0;
                        uStack_388 = 0;
                        local_390 = 0;
                        uStack_378 = 0;
                        uStack_380 = 0;
                        local_3b0 = local_450;
                        uStack_3a8 = uStack_448;
                        uStack_3a0 = local_440;
                        uStack_398 = uStack_438;
                        FUN_022eff30(&local_390,&local_3b0,0);
                        lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                                  );
                        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uStack_3c8 = uStack_388;
                        local_3d0 = local_390;
                        uStack_3b8 = uStack_378;
                        uStack_3c0 = uStack_380;
                        uVar12 = uStack_380;
                        FUN_022f986c(lVar22,lVar24,uVar10,&local_3d0,0,0xffffffff,0xffffffff,0,0);
                        FUN_00c9e4d8(lVar16,lVar22,
                                     *(undefined8 *)
                                      Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__)
                        ;
                      }
                      FUN_012bf83c(&local_230,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
                                  );
                      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_012de890(lVar21,&local_450,
                                   *(undefined8 *)Method_System_Activator_CreateInstance__);
                      uStack_268 = uStack_448;
                      local_270 = local_450;
                      local_260 = local_440;
                      while (uVar23 = uVar11, uVar37 = uVar12,
                            uVar11 = FUN_012b69b4(&local_270,
                                                  *(undefined8 *)
                                                   Oculus_Platform_MessageWithUserProof_TypeInfo),
                            (uVar11 & 1) != 0) {
                        lVar21 = FUN_00ca4544(&local_270,*(undefined8 *)StringLiteral_2036);
                        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        *(undefined4 *)(lVar21 + 0x54) = 0xffffffff;
                        fVar30 = (float)FUN_02302c7c(param_2,lVar21,0);
                        lVar22 = 8;
                        uVar12 = uVar37;
                        uVar11 = uVar23;
                        while( true ) {
                          lVar24 = FUN_022f8990(lVar21,0);
                          fVar34 = (float)uVar12;
                          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          uVar28 = lVar22 - 8;
                          if ((long)*(int *)(lVar24 + 0x18) <= (long)uVar28) break;
                          lVar24 = FUN_022f8990(lVar21,0);
                          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (*(uint *)(lVar24 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          uVar10 = *(undefined4 *)(lVar24 + lVar22 * 4);
                          local_100 = uVar10;
                          uVar25 = FUN_0129aa60(lVar17,&local_100,
                                                *(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                               );
                          if ((uVar25 & 1) == 0) {
                            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            local_f8 = uVar10;
                            FUN_01299bc0(lVar14,&local_f8,&local_fc,
                                         *(undefined8 *)
                                          Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                            local_f4 = local_fc;
                            uVar25 = FUN_0129aa60(lVar18,&local_f4,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                                 );
                            puVar6 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                            if ((uVar25 & 1) != 0) {
                              local_ec = uVar10;
                              FUN_01299bc0(lVar14,&local_ec,&local_f0,
                                           *(undefined8 *)
                                            Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                              local_e4 = local_f0;
                              FUN_01299bc0(lVar18,&local_e4,&local_e8,*(undefined8 *)puVar6);
                              local_e0 = local_e8;
                              local_dc = uVar10;
                              FUN_01299e64(lVar14,&local_dc,&local_e0,
                                           *(undefined8 *)
                                            System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                          );
                            }
                          }
                          else if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          local_d4 = uVar10;
                          FUN_01299bc0(lVar14,&local_d4,&local_d8,
                                       *(undefined8 *)
                                        Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                          uVar27 = local_d8;
                          if (lVar15 != 0) {
                            lVar24 = FUN_022f8990(lVar21,0);
                            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(uint *)(lVar24 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            local_d0 = *(undefined4 *)(lVar24 + lVar22 * 4);
                            uVar25 = FUN_0129aa60(lVar15,&local_d0,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                                 );
                            if ((uVar25 & 1) != 0) {
                              lVar24 = FUN_022f8990(lVar21,0);
                              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar24 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              local_cc = *(undefined4 *)(lVar24 + lVar22 * 4);
                              FUN_0129de0c(lVar15,&local_cc,
                                           *(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_s8__);
                            }
                          }
                          local_c8 = uVar27;
                          uVar28 = FUN_0129eff4(lVar20,&local_c8,&local_290,
                                                *(undefined8 *)
                                                 Method_UnityEngine_Events_UnityEvent<string,_Texture2D>_Invoke__
                                               );
                          fVar38 = (float)uVar11;
                          fVar43 = (float)uVar37;
                          fVar40 = (float)uVar23;
                          if ((uVar28 & 1) == 0) {
                            lVar24 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_01320e50(lVar24,*(undefined8 *)PTR_DAT_033f6e48);
                            FUN_00ac20f0(lVar24,uVar10,*(undefined8 *)StringLiteral_4747);
                            uStack_448 = 0;
                            local_450 = 0;
                            uStack_438 = 0;
                            local_440 = 0;
                            local_c0 = fVar30;
                            local_bc = fVar43;
                            local_b8 = fVar40;
                            local_b0 = fVar30;
                            local_ac = fVar43;
                            local_a8 = fVar40;
                            FUN_013a3088(&local_450,&local_b0,&local_c0,lVar24,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<MedleyBossProjectileSpawnPoint>_get_Item__
                                        );
                            local_a4 = uVar27;
                            uStack_408 = uStack_448;
                            local_410 = local_450;
                            uStack_3f8 = uStack_438;
                            uStack_400 = local_440;
                            uVar12 = local_440;
                            FUN_0129a054(lVar20,&local_a4,&local_410,
                                         *(undefined8 *)StringLiteral_10932);
                          }
                          else {
                            fVar31 = (float)FUN_00ca464c(&local_290,*puVar29);
                            uVar11 = (ulong)(uint)(fVar40 + fVar38);
                            FUN_00ca4754(fVar30 + fVar31,fVar43 + fVar34,&local_290,
                                         *(undefined8 *)StringLiteral_12923);
                            lVar24 = FUN_00ca4894(&local_290,
                                                  *(undefined8 *)
                                                                                                      
                                                  System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo
                                                 );
                            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_00ac20f0(lVar24,uVar10,*(undefined8 *)StringLiteral_4747);
                            local_c4 = uVar27;
                            uStack_3e8 = uStack_288;
                            local_3f0 = local_290;
                            uStack_3d8 = uStack_278;
                            uStack_3e0 = uStack_280;
                            uVar12 = uStack_280;
                            FUN_01299e64(lVar20,&local_c4,&local_3f0,
                                         *(undefined8 *)
                                          Field_<PrivateImplementationDetails>_F603F94B1D517D5138CDEAE0C125779455D596B548A58E5CB4D941F97A1A242A
                                        );
                          }
                          lVar22 = lVar22 + 1;
                        }
                      }
                      FUN_012b69b0(&local_270,*(undefined8 *)System_Text_DecoderNLS_TypeInfo);
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


