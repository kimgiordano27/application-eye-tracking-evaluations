/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$EnsureWriteBuffer
ENTRY_POINT: 0172ce40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 280
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_8;strong_file_logging_hits_8;telemetry_or_network_hits_13;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_12;functionality_data_collection_or_telemetry_hits_19
*/


void Newtonsoft_Json_JsonTextWriter__EnsureWriteBuffer(long param_1)

{
  uint uVar1;
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
  bool in_ZR;
  bool in_CY;
  int iVar13;
  long lVar14;
  uint in_w8;
  undefined8 uVar15;
  undefined8 *unaff_x27;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(param_1 + 0x1a0) =
         *(undefined8 *)
          Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<RayInteractor,_RayInteractable>_get_Current__
    ;
    *(undefined8 *)(param_1 + 0x1a8) = 0x51bc;
    if (in_w8 != 0x19) {
      *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)StringLiteral_9793;
      *(undefined8 *)(param_1 + 0x1b8) = 0x474;
      if (0x1a < in_w8) {
        *(undefined8 *)(param_1 + 0x1c0) =
             *(undefined8 *)DG_Tweening_Core_DOTweenExternalCommand_TypeInfo;
        *(undefined8 *)(param_1 + 0x1c8) = 0x475;
        if (in_w8 != 0x1b) {
          *(undefined8 *)(param_1 + 0x1d0) =
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_5CF7BD3F1944E22A14D44389108F5092C7A77217102E21BBDC75DE2C932E35A1
          ;
          *(undefined8 *)(param_1 + 0x1d8) = 0x476;
          if (0x1c < in_w8) {
            *(undefined8 *)(param_1 + 0x1e0) =
                 *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_string>__ctor__
            ;
            *(undefined8 *)(param_1 + 0x1e8) = 0x477;
            if (in_w8 != 0x1d) {
              *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)StringLiteral_10300;
              *(undefined8 *)(param_1 + 0x1f8) = 0x478;
              if (0x1e < in_w8) {
                uVar15 = *(undefined8 *)PTR_DAT_033f6308;
                *(undefined8 *)(param_1 + 0x208) = 0x479;
                *(undefined8 *)(param_1 + 0x200) = uVar15;
                if (in_w8 != 0x1f) {
                  uVar15 = *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_get_Task__
                  ;
                  *(undefined8 *)(param_1 + 0x218) = 0x47a;
                  *(undefined8 *)(param_1 + 0x210) = uVar15;
                  if (0x20 < in_w8) {
                    uVar15 = *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<PlacePoint>_Dispose__
                    ;
                    *(undefined8 *)(param_1 + 0x228) = 0x47b;
                    *(undefined8 *)(param_1 + 0x220) = uVar15;
                    if (in_w8 != 0x21) {
                      uVar15 = *(undefined8 *)StringLiteral_2147;
                      *(undefined8 *)(param_1 + 0x238) = 0x47c;
                      *(undefined8 *)(param_1 + 0x230) = uVar15;
                      if (0x22 < in_w8) {
                        uVar15 = *(undefined8 *)Method_System_Linq_Enumerable_Contains<int>__;
                        *(undefined8 *)(param_1 + 0x248) = 0x47d;
                        *(undefined8 *)(param_1 + 0x240) = uVar15;
                        if (in_w8 != 0x23) {
                          uVar15 = *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<char,_char>_Add__;
                          *(undefined8 *)(param_1 + 600) = 0x25;
                          *(undefined8 *)(param_1 + 0x250) = uVar15;
                          if (0x24 < in_w8) {
                            uVar15 = *(undefined8 *)System_Xml_Linq_XObject_TypeInfo;
                            *(undefined8 *)(param_1 + 0x268) = 0x5221;
                            *(undefined8 *)(param_1 + 0x260) = uVar15;
                            if (in_w8 != 0x25) {
                              uVar15 = *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary_Enumerator<XmlQualifiedName,_SchemaElementDecl>_Dispose__
                              ;
                              *(undefined8 *)(param_1 + 0x278) = 0x402;
                              *(undefined8 *)(param_1 + 0x270) = uVar15;
                              if (0x26 < in_w8) {
                                uVar15 = *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Add__
                                ;
                                *(undefined8 *)(param_1 + 0x288) = 0x4e8;
                                *(undefined8 *)(param_1 + 0x280) = uVar15;
                                if (in_w8 != 0x27) {
                                  uVar15 = *(undefined8 *)
                                            Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<FindHoles>b__26_0__
                                  ;
                                  *(undefined8 *)(param_1 + 0x298) = 0x4f31;
                                  *(undefined8 *)(param_1 + 0x290) = uVar15;
                                  if (0x28 < in_w8) {
                                    uVar15 = *(undefined8 *)PTR_DAT_033ef360;
                                    *(undefined8 *)(param_1 + 0x2a8) = 0x4f36;
                                    *(undefined8 *)(param_1 + 0x2a0) = uVar15;
                                    if (in_w8 != 0x29) {
                                      uVar15 = *(undefined8 *)PTR_DAT_033ee2a0;
                                      *(undefined8 *)(param_1 + 0x2b8) = 0x4f38;
                                      *(undefined8 *)(param_1 + 0x2b0) = uVar15;
                                      if (0x2a < in_w8) {
                                        uVar15 = *(undefined8 *)PTR_DAT_033f7378;
                                        *(undefined8 *)(param_1 + 0x2c8) = 0x4f3c;
                                        *(undefined8 *)(param_1 + 0x2c0) = uVar15;
                                        if (in_w8 != 0x2b) {
                                          uVar15 = *(undefined8 *)StringLiteral_6872;
                                          *(undefined8 *)(param_1 + 0x2d8) = 0x4f3d;
                                          *(undefined8 *)(param_1 + 0x2d0) = uVar15;
                                          if (0x2c < in_w8) {
                                            uVar15 = *(undefined8 *)
                                                                                                            
                                                  Method_TMPro_TMP_TextProcessingStack<HorizontalAlignmentOptions>_Add__
                                            ;
                                            *(undefined8 *)(param_1 + 0x2e8) = 0x4f42;
                                            *(undefined8 *)(param_1 + 0x2e0) = uVar15;
                                            if (in_w8 != 0x2d) {
                                              uVar15 = *(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_List<DecalCulledChunk>_Add__
                                              ;
                                              *(undefined8 *)(param_1 + 0x2f8) = 0x4f49;
                                              *(undefined8 *)(param_1 + 0x2f0) = uVar15;
                                              if (0x2e < in_w8) {
                                                uVar15 = *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_GetValueType__
                                                ;
                                                *(undefined8 *)(param_1 + 0x308) = 0x4e9f;
                                                *(undefined8 *)(param_1 + 0x300) = uVar15;
                                                if (in_w8 != 0x2f) {
                                                  uVar15 = *(undefined8 *)StringLiteral_11548;
                                                  *(undefined8 *)(param_1 + 0x318) = 0x4fc4;
                                                  *(undefined8 *)(param_1 + 0x310) = uVar15;
                                                  if (0x30 < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f6ee0;
                                                    *(undefined8 *)(param_1 + 0x328) = 0x4fc7;
                                                    *(undefined8 *)(param_1 + 800) = uVar15;
                                                    if (in_w8 != 0x31) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_OVRObjectPool_HashSetScope<Guid>__ctor__;
                                                  *(undefined8 *)(param_1 + 0x338) = 0x4fc8;
                                                  *(undefined8 *)(param_1 + 0x330) = uVar15;
                                                  if (0x32 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_4536;
                                                    *(undefined8 *)(param_1 + 0x348) = 0x1b5;
                                                    *(undefined8 *)(param_1 + 0x340) = uVar15;
                                                    if (in_w8 != 0x33) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033f03b8;
                                                      *(undefined8 *)(param_1 + 0x358) = 500;
                                                      *(undefined8 *)(param_1 + 0x350) = uVar15;
                                                      if (0x34 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                  Meta_WitAi_Lib_Mic_TypeInfo;
                                                        *(undefined8 *)(param_1 + 0x368) = 0xc433;
                                                        *(undefined8 *)(param_1 + 0x360) = uVar15;
                                                        if (in_w8 != 0x35) {
                                                          uVar15 = *(undefined8 *)StringLiteral_3124
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x378) = 0x6faf;
                                                          *(undefined8 *)(param_1 + 0x370) = uVar15;
                                                          if (0x36 < in_w8) {
                                                            uVar15 = *(undefined8 *)
                                                                                                                                            
                                                  System_Linq_Expressions_MethodCallExpression0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x388) = 0x352;
                                                  *(undefined8 *)(param_1 + 0x380) = uVar15;
                                                  if (in_w8 != 0x37) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARFoundation_ARTrackableManager<object,_object,_object,___Il2CppFullySharedGenericStructType,_object>_CanBeAddedToSubsystem__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x398) = 0x354;
                                                  *(undefined8 *)(param_1 + 0x390) = uVar15;
                                                  if (0x38 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_ICollection<JsonSchemaGenerator_TypeSchema>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x3a8) = 0x357;
                                                  *(undefined8 *)(param_1 + 0x3a0) = uVar15;
                                                  if (in_w8 != 0x39) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmulhs_laneq_s32__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x3b8) = 0x359;
                                                  *(undefined8 *)(param_1 + 0x3b0) = uVar15;
                                                  if (0x3a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_WitAi_EnumerableExtensions_Equivalent<WitEntityRoleInfo>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x3c8) = 0x35a;
                                                  *(undefined8 *)(param_1 + 0x3c0) = uVar15;
                                                  if (in_w8 != 0x3b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_AnimatorDisabler_<Disable>d__3_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x3d8) = 0x35c;
                                                  *(undefined8 *)(param_1 + 0x3d0) = uVar15;
                                                  if (0x3c < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_8590;
                                                    *(undefined8 *)(param_1 + 1000) = 0x35d;
                                                    *(undefined8 *)(param_1 + 0x3e0) = uVar15;
                                                    if (in_w8 != 0x3d) {
                                                      uVar15 = *(undefined8 *)StringLiteral_12994;
                                                      *(undefined8 *)(param_1 + 0x3f8) = 0x35e;
                                                      *(undefined8 *)(param_1 + 0x3f0) = uVar15;
                                                      if (0x3e < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Obi_VoxelPathFinder_<>c__DisplayClass7_0_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x408) = 0x35f;
                                                  *(undefined8 *)(param_1 + 0x400) = uVar15;
                                                  if (in_w8 != 0x3f) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<Pushable,_Hand>_Remove__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x418) = 0x360;
                                                  *(undefined8 *)(param_1 + 0x410) = uVar15;
                                                  if (0x40 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                              System_Data_ExpressionNode___TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x428) = 0x361;
                                                    *(undefined8 *)(param_1 + 0x420) = uVar15;
                                                    if (in_w8 != 0x41) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x438) = 0x362;
                                                  *(undefined8 *)(param_1 + 0x430) = uVar15;
                                                  if (0x42 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x448) = 0x365;
                                                  *(undefined8 *)(param_1 + 0x440) = uVar15;
                                                  if (in_w8 != 0x43) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<int,_TextStyle>_ContainsKey__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x458) = 0x366;
                                                  *(undefined8 *)(param_1 + 0x450) = uVar15;
                                                  if (0x44 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<RaycastHit>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x468) = 0x5187;
                                                  *(undefined8 *)(param_1 + 0x460) = uVar15;
                                                  if (in_w8 != 0x45) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Serialization_MemberHolder_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x478) = 0x36b;
                                                  *(undefined8 *)(param_1 + 0x470) = uVar15;
                                                  if (0x46 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_Item__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x488) = 0x5190;
                                                  *(undefined8 *)(param_1 + 0x480) = uVar15;
                                                  if (in_w8 != 0x47) {
                                                    uVar15 = *(undefined8 *)StringLiteral_1564;
                                                    *(undefined8 *)(param_1 + 0x498) = 0x51a9;
                                                    *(undefined8 *)(param_1 + 0x490) = uVar15;
                                                    if (0x48 < in_w8) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033f0460;
                                                      *(undefined8 *)(param_1 + 0x4a8) = 0x4e9f;
                                                      *(undefined8 *)(param_1 + 0x4a0) = uVar15;
                                                      if (in_w8 != 0x49) {
                                                        uVar15 = *(undefined8 *)StringLiteral_2359;
                                                        *(undefined8 *)(param_1 + 0x4b8) = 0x3b6;
                                                        *(undefined8 *)(param_1 + 0x4b0) = uVar15;
                                                        if (0x4a < in_w8) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_Object_FindObjectOfType<SongManager>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x4c8) = 0xcaed;
                                                  *(undefined8 *)(param_1 + 0x4c0) = uVar15;
                                                  if (in_w8 != 0x4b) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f0e68;
                                                    *(undefined8 *)(param_1 + 0x4d8) = 0xcadc;
                                                    *(undefined8 *)(param_1 + 0x4d0) = uVar15;
                                                    if (0x4c < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_Component_GetComponent<MaterialPropertyBlockEditor>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x4e8) = 0x3a8;
                                                  *(undefined8 *)(param_1 + 0x4e0) = uVar15;
                                                  if (in_w8 != 0x4d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vsha256hq_u32__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x4f8) = 0x3a8;
                                                  *(undefined8 *)(param_1 + 0x4f0) = uVar15;
                                                  if (0x4e < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<AchievementProgress>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x508) = 0x25;
                                                  *(undefined8 *)(param_1 + 0x500) = uVar15;
                                                  if (in_w8 != 0x4f) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_TextureCurveParameter_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x518) = 0x402;
                                                  *(undefined8 *)(param_1 + 0x510) = uVar15;
                                                  if (0x50 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_CommandEventBase<ExecuteCommandEvent>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x528) = 0x4f31;
                                                  *(undefined8 *)(param_1 + 0x520) = uVar15;
                                                  if (in_w8 != 0x51) {
                                                    uVar15 = *(undefined8 *)
                                                              System_Predicate<Camera>_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x538) = 0x4f35;
                                                    *(undefined8 *)(param_1 + 0x530) = uVar15;
                                                    if (0x52 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_TextCore_Text_MeshInfo___TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x548) = 0x4f36;
                                                  *(undefined8 *)(param_1 + 0x540) = uVar15;
                                                  if (in_w8 != 0x53) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UIPlacementManager_<>c__DisplayClass6_0_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x558) = 0x4f38;
                                                  *(undefined8 *)(param_1 + 0x550) = uVar15;
                                                  if (0x54 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer>d__40>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x568) = 0x4f3c;
                                                  *(undefined8 *)(param_1 + 0x560) = uVar15;
                                                  if (in_w8 != 0x55) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<PolyNode>_Add__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x578) = 0x4f3d;
                                                  *(undefined8 *)(param_1 + 0x570) = uVar15;
                                                  if (0x56 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                              UnityEngine_ReflectionProbe_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x588) = 0x4f42;
                                                    *(undefined8 *)(param_1 + 0x580) = uVar15;
                                                    if (in_w8 != 0x57) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Oculus_Interaction_PointableCanvasModule_<>c__DisplayClass32_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x598) = 0x4f49;
                                                  *(undefined8 *)(param_1 + 0x590) = uVar15;
                                                  if (0x58 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<DebugGizmoType>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x5a8) = 0x4fc4;
                                                  *(undefined8 *)(param_1 + 0x5a0) = uVar15;
                                                  if (in_w8 != 0x59) {
                                                    uVar15 = *(undefined8 *)
                                                              Method_System_Memory<byte>_Equals__;
                                                    *(undefined8 *)(param_1 + 0x5b8) = 0x4fc7;
                                                    *(undefined8 *)(param_1 + 0x5b0) = uVar15;
                                                    if (0x5a < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_10484;
                                                      *(undefined8 *)(param_1 + 0x5c8) = 0x4fc8;
                                                      *(undefined8 *)(param_1 + 0x5c0) = uVar15;
                                                      if (in_w8 != 0x5b) {
                                                        uVar15 = *(undefined8 *)StringLiteral_10591;
                                                        *(undefined8 *)(param_1 + 0x5d8) = 500;
                                                        *(undefined8 *)(param_1 + 0x5d0) = uVar15;
                                                        if (0x5c < in_w8) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_Unity_Collections_NativeArray<TrackableId>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x5e8) = 0x366;
                                                  *(undefined8 *)(param_1 + 0x5e0) = uVar15;
                                                  if (in_w8 != 0x5d) {
                                                    uVar15 = *(undefined8 *)StringLiteral_2;
                                                    *(undefined8 *)(param_1 + 0x5f8) = 0x5187;
                                                    *(undefined8 *)(param_1 + 0x5f0) = uVar15;
                                                    if (0x5e < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_Vector2Parameter_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x608) = 0x5190;
                                                  *(undefined8 *)(param_1 + 0x600) = uVar15;
                                                  if (in_w8 != 0x5f) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet<Assembly>_Add__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x618) = 0x51a9;
                                                  *(undefined8 *)(param_1 + 0x610) = uVar15;
                                                  if (0x60 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_QueueUserWorkItemCallback_WaitCallback_Context__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x628) = 0x5166;
                                                  *(undefined8 *)(param_1 + 0x620) = uVar15;
                                                  if (in_w8 != 0x61) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_OnContactRemoved__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x638) = 0xc42d;
                                                  *(undefined8 *)(param_1 + 0x630) = uVar15;
                                                  if (0x62 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_9059;
                                                    *(undefined8 *)(param_1 + 0x648) = 0xc431;
                                                    *(undefined8 *)(param_1 + 0x640) = uVar15;
                                                    if (in_w8 != 99) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_XR_ARSubsystems_XRDepthSubsystemDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x658) = 0x3a8;
                                                  *(undefined8 *)(param_1 + 0x650) = uVar15;
                                                  if (100 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_List<Renderer>>_get_Current__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x668) = 0x6faf;
                                                  *(undefined8 *)(param_1 + 0x660) = uVar15;
                                                  if (in_w8 != 0x65) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f49f0;
                                                    *(undefined8 *)(param_1 + 0x678) = 0x6fb0;
                                                    *(undefined8 *)(param_1 + 0x670) = uVar15;
                                                    if (0x66 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  *(undefined8 *)(param_1 + 0x688) = 0x6fb1;
                                                  *(undefined8 *)(param_1 + 0x680) = uVar15;
                                                  if (in_w8 != 0x67) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Platform_BuildingBlocks_EntitlementCheck_QuitAppOnFailure__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x698) = 0x6fb2;
                                                  *(undefined8 *)(param_1 + 0x690) = uVar15;
                                                  if (0x68 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<ConnectFaceRebuildData>_get_Count__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x6a8) = 0x6fb7;
                                                  *(undefined8 *)(param_1 + 0x6a0) = uVar15;
                                                  if (in_w8 != 0x69) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_ObjectModel_ReadOnlyCollection<ExceptionDispatchInfo>_get_Count__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x6b8) = 0x6fbd;
                                                  *(undefined8 *)(param_1 + 0x6b0) = uVar15;
                                                  if (0x6a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_Voice_Audio_Decoding_AudioDecoderPcm_DecodeSample_PcmU32__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x6c8) = 0x6fb4;
                                                  *(undefined8 *)(param_1 + 0x6c0) = uVar15;
                                                  if (in_w8 != 0x6b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_CancellationTokenSource_ExecuteCallbackHandlers__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x6d8) = 0x6fb3;
                                                  *(undefined8 *)(param_1 + 0x6d0) = uVar15;
                                                  if (0x6c < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Nullable<Configuration>__ctor__;
                                                  *(undefined8 *)(param_1 + 0x6e8) = 0x6fb5;
                                                  *(undefined8 *)(param_1 + 0x6e0) = uVar15;
                                                  if (in_w8 != 0x6d) {
                                                    uVar15 = *(undefined8 *)StringLiteral_5092;
                                                    *(undefined8 *)(param_1 + 0x6f8) = 0x6fb6;
                                                    *(undefined8 *)(param_1 + 0x6f0) = uVar15;
                                                    if (0x6e < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_8182;
                                                      *(undefined8 *)(param_1 + 0x708) = 0x5182;
                                                      *(undefined8 *)(param_1 + 0x700) = uVar15;
                                                      if (in_w8 != 0x6f) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vsubd_s64__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x718) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x710) = uVar15;
                                                  if (0x70 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_11040;
                                                    *(undefined8 *)(param_1 + 0x728) = 0x1b5;
                                                    *(undefined8 *)(param_1 + 0x720) = uVar15;
                                                    if (in_w8 != 0x71) {
                                                      uVar15 = *(undefined8 *)
                                                                OVRPlugin_OVRP_1_16_0_TypeInfo;
                                                      *(undefined8 *)(param_1 + 0x738) = 0x3a4;
                                                      *(undefined8 *)(param_1 + 0x730) = uVar15;
                                                      if (0x72 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<TimeNotificationBehaviour_NotificationEntry>_Add__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x748) = 65000;
                                                  *(undefined8 *)(param_1 + 0x740) = uVar15;
                                                  if (in_w8 != 0x73) {
                                                    uVar15 = *(undefined8 *)
                                                              Method_System_IO_BinaryReader__ctor__;
                                                    *(undefined8 *)(param_1 + 0x758) = 0x3a4;
                                                    *(undefined8 *)(param_1 + 0x750) = uVar15;
                                                    if (0x74 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Utilities_ConvertUtils_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x768) = 0x6fb3;
                                                  *(undefined8 *)(param_1 + 0x760) = uVar15;
                                                  if (in_w8 != 0x75) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<ReorderJob<LightMinMaxZ>>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x778) = 0x4e8a;
                                                  *(undefined8 *)(param_1 + 0x770) = uVar15;
                                                  if (0x76 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x788) = 0x2d0;
                                                  *(undefined8 *)(param_1 + 0x780) = uVar15;
                                                  puVar5 = Method_System_IO_StringReader__ctor__;
                                                  if (in_w8 != 0x77) {
                                                    uVar15 = *(undefined8 *)
                                                              Method_System_IO_StringReader__ctor__;
                                                    *(undefined8 *)(param_1 + 0x798) = 0x35e;
                                                    *(undefined8 *)(param_1 + 0x790) = uVar15;
                                                    if (0x78 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<CharacterManager>_GetEnumerator__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x7a8) = 0x36a;
                                                  *(undefined8 *)(param_1 + 0x7a0) = uVar15;
                                                  if (in_w8 != 0x79) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XsdBuilder_InitAttribute__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x7b8) = 0x4fc4;
                                                  *(undefined8 *)(param_1 + 0x7b0) = uVar15;
                                                  if (0x7a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x7c8) = 500;
                                                  *(undefined8 *)(param_1 + 0x7c0) = uVar15;
                                                  if (in_w8 != 0x7b) {
                                                    uVar15 = *(undefined8 *)StringLiteral_12345;
                                                    *(undefined8 *)(param_1 + 0x7d8) = 0x25;
                                                    *(undefined8 *)(param_1 + 2000) = uVar15;
                                                    if (0x7c < in_w8) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033f2e48;
                                                      *(undefined8 *)(param_1 + 0x7e8) = 500;
                                                      *(undefined8 *)(param_1 + 0x7e0) = uVar15;
                                                      if (in_w8 != 0x7d) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_set_Item__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x7f8) = 0x4f35;
                                                  *(undefined8 *)(param_1 + 0x7f0) = uVar15;
                                                  if (0x7e < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_3057;
                                                    *(undefined8 *)(param_1 + 0x808) = 0x4f3c;
                                                    *(undefined8 *)(param_1 + 0x800) = uVar15;
                                                    if (in_w8 != 0x7f) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Text_EncoderFallbackException__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x818) = 0x4f36;
                                                  *(undefined8 *)(param_1 + 0x810) = uVar15;
                                                  if (0x80 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Any<JToken>__;
                                                  *(undefined8 *)(param_1 + 0x828) = 0x4f49;
                                                  *(undefined8 *)(param_1 + 0x820) = uVar15;
                                                  if (in_w8 != 0x81) {
                                                    uVar15 = *(undefined8 *)StringLiteral_4675;
                                                    *(undefined8 *)(param_1 + 0x838) = 0x4f3d;
                                                    *(undefined8 *)(param_1 + 0x830) = uVar15;
                                                    if (0x82 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x848) = 0x4fc7;
                                                  *(undefined8 *)(param_1 + 0x840) = uVar15;
                                                  if (in_w8 != 0x83) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Oculus_Interaction_Body_PoseDetection_BodyPoseData_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x858) = 0x4fc8;
                                                  *(undefined8 *)(param_1 + 0x850) = uVar15;
                                                  if (0x84 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Oculus_Interaction_Locomotion_LocomotionTunneling_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x868) = 0x5187;
                                                  *(undefined8 *)(param_1 + 0x860) = uVar15;
                                                  if (in_w8 != 0x85) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Component_GetComponent<TextMeshPro>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x878) = 0x4f38;
                                                  *(undefined8 *)(param_1 + 0x870) = uVar15;
                                                  if (0x86 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_11691;
                                                    *(undefined8 *)(param_1 + 0x888) = 0x25;
                                                    *(undefined8 *)(param_1 + 0x880) = uVar15;
                                                    if (in_w8 != 0x87) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UI_ILayoutElement_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x898) = 0x4f35;
                                                  *(undefined8 *)(param_1 + 0x890) = uVar15;
                                                  if (0x88 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                              OVRPlugin_OVRP_1_19_0_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x8a8) = 0x366;
                                                    *(undefined8 *)(param_1 + 0x8a0) = uVar15;
                                                    if (in_w8 != 0x89) {
                                                      uVar15 = *(undefined8 *)StringLiteral_14128;
                                                      *(undefined8 *)(param_1 + 0x8b8) = 0x4f36;
                                                      *(undefined8 *)(param_1 + 0x8b0) = uVar15;
                                                      if (0x8a < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  OVR_OpenVR_IVROverlay__SetOverlayTransformAbsolute_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x8c8) = 0x51a9;
                                                  *(undefined8 *)(param_1 + 0x8c0) = uVar15;
                                                  if (in_w8 != 0x8b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Security_Cryptography_DESCryptoServiceProvider_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x8d8) = 0x25;
                                                  *(undefined8 *)(param_1 + 0x8d0) = uVar15;
                                                  if (0x8c < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_13418;
                                                    *(undefined8 *)(param_1 + 0x8e8) = 0x25;
                                                    *(undefined8 *)(param_1 + 0x8e0) = uVar15;
                                                    if (in_w8 != 0x8d) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_s64__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x8f8) = 0x366;
                                                  *(undefined8 *)(param_1 + 0x8f0) = uVar15;
                                                  if (0x8e < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_1596;
                                                    *(undefined8 *)(param_1 + 0x908) = 0x5190;
                                                    *(undefined8 *)(param_1 + 0x900) = uVar15;
                                                    if (in_w8 != 0x8f) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  OVR_OpenVR_IVROverlay__SetOverlayTextureColorSpace_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x918) = 0x475;
                                                  *(undefined8 *)(param_1 + 0x910) = uVar15;
                                                  if (0x90 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_n_u16__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x928) = 0x476;
                                                  *(undefined8 *)(param_1 + 0x920) = uVar15;
                                                  if (in_w8 != 0x91) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_20__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x938) = 0x479;
                                                  *(undefined8 *)(param_1 + 0x930) = uVar15;
                                                  if (0x92 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                              System_Xml_Schema_LeafNode_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x948) = 0x477;
                                                    *(undefined8 *)(param_1 + 0x940) = uVar15;
                                                    if (in_w8 != 0x93) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ulong>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x958) = 0x47b;
                                                  *(undefined8 *)(param_1 + 0x950) = uVar15;
                                                  if (0x94 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputBindingCompositeContext_<get_controls>d__2_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x968) = 0x47a;
                                                  *(undefined8 *)(param_1 + 0x960) = uVar15;
                                                  if (in_w8 != 0x95) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_Task<VRequestResponse<bool>>_GetAwaiter__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x978) = 0x47c;
                                                  *(undefined8 *)(param_1 + 0x970) = uVar15;
                                                  if (0x96 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_Dispose__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x988) = 0x47d;
                                                  *(undefined8 *)(param_1 + 0x980) = uVar15;
                                                  if (in_w8 != 0x97) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_Converters_IXmlDocument_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x998) = 0x478;
                                                  *(undefined8 *)(param_1 + 0x990) = uVar15;
                                                  if (0x98 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_Datums_Datum<Vector2AffordanceTheme>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x9a8) = 0x4f42;
                                                  *(undefined8 *)(param_1 + 0x9a0) = uVar15;
                                                  if (in_w8 != 0x99) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Management_XRLoader_GetLoadedSubsystem<XRSessionSubsystem>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x9b8) = 0x51bc;
                                                  *(undefined8 *)(param_1 + 0x9b0) = uVar15;
                                                  if (0x9a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Meta_WitAi_Data_Entities_WitDynamicEntity___TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x9c8) = 0x476;
                                                  *(undefined8 *)(param_1 + 0x9c0) = uVar15;
                                                  if (in_w8 != 0x9b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  OVRSpatialAnchor_<>c__DisplayClass65_0_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x9d8) = 0x477;
                                                  *(undefined8 *)(param_1 + 0x9d0) = uVar15;
                                                  if (0x9c < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<TreeView_TreeViewItemWrapper>_Clear__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x9e8) = 0x474;
                                                  *(undefined8 *)(param_1 + 0x9e0) = uVar15;
                                                  if (in_w8 != 0x9d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Sirenix_Serialization_Utilities_TypeExtensions_SetMemberValue__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x9f8) = 0x6fb4;
                                                  *(undefined8 *)(param_1 + 0x9f0) = uVar15;
                                                  if (0x9e < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f3278;
                                                    *(undefined8 *)(param_1 + 0xa08) = 0x6fb5;
                                                    *(undefined8 *)(param_1 + 0xa00) = uVar15;
                                                    if (in_w8 != 0x9f) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  MetaXRAudioNativeInterface_WwisePluginInterface_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xa18) = 0x6fb5;
                                                  *(undefined8 *)(param_1 + 0xa10) = uVar15;
                                                  if (0xa0 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XmlListConverter_ToArray<Uri>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xa28) = 0xcae0;
                                                  *(undefined8 *)(param_1 + 0xa20) = uVar15;
                                                  if (in_w8 != 0xa1) {
                                                    uVar15 = *(undefined8 *)StringLiteral_2965;
                                                    *(undefined8 *)(param_1 + 0xa38) = 0xcadc;
                                                    *(undefined8 *)(param_1 + 0xa30) = uVar15;
                                                    if (0xa2 < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_819;
                                                      *(undefined8 *)(param_1 + 0xa48) = 0xcaed;
                                                      *(undefined8 *)(param_1 + 0xa40) = uVar15;
                                                      if (in_w8 != 0xa3) {
                                                        uVar15 = *(undefined8 *)PTR_DAT_033f04e0;
                                                        *(undefined8 *)(param_1 + 0xa58) = 0xcadc;
                                                        *(undefined8 *)(param_1 + 0xa50) = uVar15;
                                                        if (0xa4 < in_w8) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_veorq_s8__;
                                                  *(undefined8 *)(param_1 + 0xa68) = 0xd698;
                                                  *(undefined8 *)(param_1 + 0xa60) = uVar15;
                                                  if (in_w8 != 0xa5) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Schema_XsdBuilder_InitComplexType__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xa78) = 0x3a8;
                                                  *(undefined8 *)(param_1 + 0xa70) = uVar15;
                                                  if (0xa6 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_0__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xa88) = 0x3a8;
                                                  *(undefined8 *)(param_1 + 0xa80) = uVar15;
                                                  if (in_w8 != 0xa7) {
                                                    uVar15 = *(undefined8 *)StringLiteral_4975;
                                                    *(undefined8 *)(param_1 + 0xa98) = 0x3a8;
                                                    *(undefined8 *)(param_1 + 0xa90) = uVar15;
                                                    if (0xa8 < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_11311;
                                                      *(undefined8 *)(param_1 + 0xaa8) = 0x3a8;
                                                      *(undefined8 *)(param_1 + 0xaa0) = uVar15;
                                                      if (in_w8 != 0xa9) {
                                                        uVar15 = *(undefined8 *)PTR_DAT_033eac48;
                                                        *(undefined8 *)(param_1 + 0xab8) = 0x3a8;
                                                        *(undefined8 *)(param_1 + 0xab0) = uVar15;
                                                        if (0xaa < in_w8) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_OVRBounded2D_TryGetBoundaryPoints__;
                                                  *(undefined8 *)(param_1 + 0xac8) = 0x4e8a;
                                                  *(undefined8 *)(param_1 + 0xac0) = uVar15;
                                                  if (in_w8 != 0xab) {
                                                    uVar15 = *(undefined8 *)StringLiteral_2041;
                                                    *(undefined8 *)(param_1 + 0xad8) = 0x6fb5;
                                                    *(undefined8 *)(param_1 + 0xad0) = uVar15;
                                                    if (0xac < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_11478;
                                                      *(undefined8 *)(param_1 + 0xae8) = 0x6fb5;
                                                      *(undefined8 *)(param_1 + 0xae0) = uVar15;
                                                      if (in_w8 != 0xad) {
                                                        uVar15 = *(undefined8 *)PTR_DAT_033ed0f8;
                                                        *(undefined8 *)(param_1 + 0xaf8) = 0x6fb6;
                                                        *(undefined8 *)(param_1 + 0xaf0) = uVar15;
                                                        if (0xae < in_w8) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Create__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xb08) = 0xcec8;
                                                  *(undefined8 *)(param_1 + 0xb00) = uVar15;
                                                  if (in_w8 != 0xaf) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_Add__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xb18) = 0x5166;
                                                  *(undefined8 *)(param_1 + 0xb10) = uVar15;
                                                  puVar4 = 
                                                  System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo
                                                  ;
                                                  if (0xb0 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xb28) = 0x35a;
                                                  *(undefined8 *)(param_1 + 0xb20) = uVar15;
                                                  if (in_w8 != 0xb1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Converters_ExpandoObjectConverter_ReadValue__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xb38) = 0x51bc;
                                                  *(undefined8 *)(param_1 + 0xb30) = uVar15;
                                                  if (0xb2 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_ProBuilder_SharedVertex_GetSharedVerticesWithPositions__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xb48) = 0x417;
                                                  *(undefined8 *)(param_1 + 0xb40) = uVar15;
                                                  if (in_w8 != 0xb3) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f3d00;
                                                    *(undefined8 *)(param_1 + 0xb58) = 0x474;
                                                    *(undefined8 *)(param_1 + 0xb50) = uVar15;
                                                    if (0xb4 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                System_EmptyArray<char>_TypeInfo;
                                                      *(undefined8 *)(param_1 + 0xb68) = 0x475;
                                                      *(undefined8 *)(param_1 + 0xb60) = uVar15;
                                                      if (in_w8 != 0xb5) {
                                                        uVar15 = *(undefined8 *)PTR_DAT_033f1ee0;
                                                        *(undefined8 *)(param_1 + 0xb78) = 0x476;
                                                        *(undefined8 *)(param_1 + 0xb70) = uVar15;
                                                        if (0xb6 < in_w8) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xb88) = 0x477;
                                                  *(undefined8 *)(param_1 + 0xb80) = uVar15;
                                                  if (in_w8 != 0xb7) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Char_GetUnicodeCategory__;
                                                  *(undefined8 *)(param_1 + 0xb98) = 0x478;
                                                  *(undefined8 *)(param_1 + 0xb90) = uVar15;
                                                  if (0xb8 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_ArcherPaintingPuzzle_DomsArrowHit__;
                                                  *(undefined8 *)(param_1 + 0xba8) = 0x479;
                                                  *(undefined8 *)(param_1 + 0xba0) = uVar15;
                                                  if (in_w8 != 0xb9) {
                                                    uVar15 = *(undefined8 *)StringLiteral_8629;
                                                    *(undefined8 *)(param_1 + 3000) = 0x47a;
                                                    *(undefined8 *)(param_1 + 0xbb0) = uVar15;
                                                    if (0xba < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  System_Runtime_CompilerServices_StrongBox<int>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xbc8) = 0x47b;
                                                  *(undefined8 *)(param_1 + 0xbc0) = uVar15;
                                                  if (in_w8 != 0xbb) {
                                                    uVar15 = *(undefined8 *)StringLiteral_5041;
                                                    *(undefined8 *)(param_1 + 0xbd8) = 0x47c;
                                                    *(undefined8 *)(param_1 + 0xbd0) = uVar15;
                                                    if (0xbc < in_w8) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033f1840;
                                                      *(undefined8 *)(param_1 + 0xbe8) = 0x47d;
                                                      *(undefined8 *)(param_1 + 0xbe0) = uVar15;
                                                      puVar8 = StringLiteral_3459;
                                                      if (in_w8 != 0xbd) {
                                                        uVar15 = *(undefined8 *)StringLiteral_3459;
                                                        *(undefined8 *)(param_1 + 0xbf8) = 0x25;
                                                        *(undefined8 *)(param_1 + 0xbf0) = uVar15;
                                                        if (0xbe < in_w8) {
                                                          uVar15 = *(undefined8 *)StringLiteral_1262
                                                          ;
                                                          *(undefined8 *)(param_1 + 0xc08) = 0x402;
                                                          *(undefined8 *)(param_1 + 0xc00) = uVar15;
                                                          if (in_w8 != 0xbf) {
                                                            uVar15 = *(undefined8 *)PTR_DAT_033efc58
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xc18) =
                                                                 0x4f31;
                                                            *(undefined8 *)(param_1 + 0xc10) =
                                                                 uVar15;
                                                            if (0xc0 < in_w8) {
                                                              uVar15 = *(undefined8 *)
                                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmuld_laneq_f64__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xc28) = 0x4f35;
                                                  *(undefined8 *)(param_1 + 0xc20) = uVar15;
                                                  if (in_w8 != 0xc1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_ParseNumericCharRefInline__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xc38) = 0x4f36;
                                                  *(undefined8 *)(param_1 + 0xc30) = uVar15;
                                                  if (0xc2 < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f5558;
                                                    *(undefined8 *)(param_1 + 0xc48) = 0x4f38;
                                                    *(undefined8 *)(param_1 + 0xc40) = uVar15;
                                                    if (in_w8 != 0xc3) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_STMTools_Links_LinkController_PreparseTags__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xc58) = 0x4f3c;
                                                  *(undefined8 *)(param_1 + 0xc50) = uVar15;
                                                  if (0xc4 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<IInteractorView,_List<IInteractorView>>_get_Item__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xc68) = 0x4f3d;
                                                  *(undefined8 *)(param_1 + 0xc60) = uVar15;
                                                  if (in_w8 != 0xc5) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_ScriptableObject_CreateInstance<ProbeReferenceVolumeProfile>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xc78) = 0x4f42;
                                                  *(undefined8 *)(param_1 + 0xc70) = uVar15;
                                                  if (0xc6 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Autohand_HandDistanceGrabber_<>c__DisplayClass62_1_<StartCatchAssist>b__4__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xc88) = 0x4f49;
                                                  *(undefined8 *)(param_1 + 0xc80) = uVar15;
                                                  if (in_w8 != 199) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f07d0;
                                                    *(undefined8 *)(param_1 + 0xc98) = 0x4e9f;
                                                    *(undefined8 *)(param_1 + 0xc90) = uVar15;
                                                    if (200 < in_w8) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033edd00;
                                                      *(undefined8 *)(param_1 + 0xca8) = 0x4fc4;
                                                      *(undefined8 *)(param_1 + 0xca0) = uVar15;
                                                      if (in_w8 != 0xc9) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass10_0_<DOLocalPath>b__0__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xcb8) = 0x4fc7;
                                                  *(undefined8 *)(param_1 + 0xcb0) = uVar15;
                                                  if (0xca < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_Voice_Logging_RingDictionaryBuffer<CorrelationID,_CorrelationID>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xcc8) = 0x4fc8;
                                                  *(undefined8 *)(param_1 + 0xcc0) = uVar15;
                                                  puVar3 = PTR_DAT_033f1d60;
                                                  if (in_w8 != 0xcb) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f1d60;
                                                    *(undefined8 *)(param_1 + 0xcd8) = 0x1b5;
                                                    *(undefined8 *)(param_1 + 0xcd0) = uVar15;
                                                    puVar10 = StringLiteral_3726;
                                                    if (0xcc < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_3726;
                                                      *(undefined8 *)(param_1 + 0xce8) = 500;
                                                      *(undefined8 *)(param_1 + 0xce0) = uVar15;
                                                      puVar9 = 
                                                  Method_System_Net_Sockets_NetworkStream__ctor__;
                                                  if (in_w8 != 0xcd) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Sockets_NetworkStream__ctor__;
                                                  *(undefined8 *)(param_1 + 0xcf8) = 0x2e1;
                                                  *(undefined8 *)(param_1 + 0xcf0) = uVar15;
                                                  puVar11 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (0xce < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  *(undefined8 *)(param_1 + 0xd08) = 0x307;
                                                  *(undefined8 *)(param_1 + 0xd00) = uVar15;
                                                  if (in_w8 != 0xcf) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xd18) = 0x6faf;
                                                  *(undefined8 *)(param_1 + 0xd10) = uVar15;
                                                  if (0xd0 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Field_<PrivateImplementationDetails>_F352EC09EA2A771F127ED6C5C17DEED5559EA0F490AB35C9D5CC4B7BFABDC02E
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xd28) = 0x352;
                                                  *(undefined8 *)(param_1 + 0xd20) = uVar15;
                                                  if (in_w8 != 0xd1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<float>_Clear__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xd38) = 0x354;
                                                  *(undefined8 *)(param_1 + 0xd30) = uVar15;
                                                  puVar6 = 
                                                  Newtonsoft_Json_Schema_JsonSchemaModel_TypeInfo;
                                                  if (0xd2 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_Schema_JsonSchemaModel_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0xd48) = 0x357;
                                                  *(undefined8 *)(param_1 + 0xd40) = uVar15;
                                                  if (in_w8 != 0xd3) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<__Il2CppFullySharedGenericStructType>_set_Item__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xd58) = 0x359;
                                                  *(undefined8 *)(param_1 + 0xd50) = uVar15;
                                                  puVar2 = PTR_DAT_033f05e0;
                                                  if (0xd4 < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f05e0;
                                                    *(undefined8 *)(param_1 + 0xd68) = 0x35c;
                                                    *(undefined8 *)(param_1 + 0xd60) = uVar15;
                                                    if (in_w8 != 0xd5) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_Component_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xd78) = 0x35d;
                                                  *(undefined8 *)(param_1 + 0xd70) = uVar15;
                                                  if (0xd6 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Linq_XDocument_ValidateNode__;
                                                  *(undefined8 *)(param_1 + 0xd88) = 0x35e;
                                                  *(undefined8 *)(param_1 + 0xd80) = uVar15;
                                                  if (in_w8 != 0xd7) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_ProBuilder_MeshOperations_AppendElements_<>c_<CreateShapeFromPolygon>b__8_0__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xd98) = 0x35f;
                                                  *(undefined8 *)(param_1 + 0xd90) = uVar15;
                                                  if (0xd8 < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f4bb0;
                                                    *(undefined8 *)(param_1 + 0xda8) = 0x360;
                                                    *(undefined8 *)(param_1 + 0xda0) = uVar15;
                                                    if (in_w8 != 0xd9) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033ea960;
                                                      *(undefined8 *)(param_1 + 0xdb8) = 0x361;
                                                      *(undefined8 *)(param_1 + 0xdb0) = uVar15;
                                                      if (0xda < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_Meta_XR_ImmersiveDebugger_Manager_WatchUtils_<>c_<_cctor>b__2_3__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xdc8) = 0x362;
                                                  *(undefined8 *)(param_1 + 0xdc0) = uVar15;
                                                  if (in_w8 != 0xdb) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_Task<CustomMatchmaking_RoomOperationResult>_GetAwaiter__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xdd8) = 0x365;
                                                  *(undefined8 *)(param_1 + 0xdd0) = uVar15;
                                                  if (0xdc < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryReader_readHeader<Type>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xde8) = 0x366;
                                                  *(undefined8 *)(param_1 + 0xde0) = uVar15;
                                                  if (in_w8 != 0xdd) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_IO_FileStream_InitBuffer__;
                                                  *(undefined8 *)(param_1 + 0xdf8) = 0x5187;
                                                  *(undefined8 *)(param_1 + 0xdf0) = uVar15;
                                                  if (0xde < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Action<DebugUIHandlerPanel>_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0xe08) = 0x5190;
                                                  *(undefined8 *)(param_1 + 0xe00) = uVar15;
                                                  if (in_w8 != 0xdf) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_4__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xe18) = 0x51a9;
                                                  *(undefined8 *)(param_1 + 0xe10) = uVar15;
                                                  if (0xe0 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_2224;
                                                    *(undefined8 *)(param_1 + 0xe28) = 0x4e89;
                                                    *(undefined8 *)(param_1 + 0xe20) = uVar15;
                                                    if (in_w8 != 0xe1) {
                                                      uVar15 = *(undefined8 *)StringLiteral_6470;
                                                      *(undefined8 *)(param_1 + 0xe38) = 0x4b0;
                                                      *(undefined8 *)(param_1 + 0xe30) = uVar15;
                                                      if (0xe2 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Mesh,_ObiTriangleMeshHandle>_MoveNext__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xe48) = 0xc42c;
                                                  *(undefined8 *)(param_1 + 0xe40) = uVar15;
                                                  if (in_w8 != 0xe3) {
                                                    uVar15 = *(undefined8 *)
                                                              Obi_ObiSolver_SolverCallback_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0xe58) = 0xcadc;
                                                    *(undefined8 *)(param_1 + 0xe50) = uVar15;
                                                    if (0xe4 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Oculus_Platform_CAPI_StringToNative__;
                                                  *(undefined8 *)(param_1 + 0xe68) = 0xc431;
                                                  *(undefined8 *)(param_1 + 0xe60) = uVar15;
                                                  if (in_w8 != 0xe5) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033ef9a8;
                                                    *(undefined8 *)(param_1 + 0xe78) = 0xc431;
                                                    *(undefined8 *)(param_1 + 0xe70) = uVar15;
                                                    if (0xe6 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_OVRPlayerController_UpdateTransform__;
                                                  *(undefined8 *)(param_1 + 0xe88) = 0xc431;
                                                  *(undefined8 *)(param_1 + 0xe80) = uVar15;
                                                  if (in_w8 != 0xe7) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_IntroCreditSceneManager_SkipButtonPressed__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xe98) = 0xcaed;
                                                  *(undefined8 *)(param_1 + 0xe90) = uVar15;
                                                  if (0xe8 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_WebRequest_EndGetResponse__;
                                                  *(undefined8 *)(param_1 + 0xea8) = 0xcaed;
                                                  *(undefined8 *)(param_1 + 0xea0) = uVar15;
                                                  if (in_w8 != 0xe9) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<int,_object>_Clear__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xeb8) = 0x6faf;
                                                  *(undefined8 *)(param_1 + 0xeb0) = uVar15;
                                                  if (0xea < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_Create__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xec8) = 0x36a;
                                                  *(undefined8 *)(param_1 + 0xec0) = uVar15;
                                                  if (in_w8 != 0xeb) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Sirenix_Serialization_ProperBitConverter_GetBytes__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xed8) = 0x6fbb;
                                                  *(undefined8 *)(param_1 + 0xed0) = uVar15;
                                                  if (0xec < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Stack_Enumerator<__Il2CppFullySharedGenericType>_MoveNext__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xee8) = 0x6fbd;
                                                  *(undefined8 *)(param_1 + 0xee0) = uVar15;
                                                  if (in_w8 != 0xed) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<KeyValuePair<string,_object>>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xef8) = 0x6fb0;
                                                  *(undefined8 *)(param_1 + 0xef0) = uVar15;
                                                  if (0xee < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Obi_ObiNativeList<Vector4>_Add__;
                                                  *(undefined8 *)(param_1 + 0xf08) = 0x6fb1;
                                                  *(undefined8 *)(param_1 + 0xf00) = uVar15;
                                                  if (in_w8 != 0xef) {
                                                    uVar15 = *(undefined8 *)StringLiteral_9634;
                                                    *(undefined8 *)(param_1 + 0xf18) = 0x6fb2;
                                                    *(undefined8 *)(param_1 + 0xf10) = uVar15;
                                                    if (0xf0 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<OVRSceneAnchor>_get_Count__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xf28) = 0x6fb3;
                                                  *(undefined8 *)(param_1 + 0xf20) = uVar15;
                                                  if (in_w8 != 0xf1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_SignatureType_get_CustomAttributes__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xf38) = 0x6fb4;
                                                  *(undefined8 *)(param_1 + 0xf30) = uVar15;
                                                  if (0xf2 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Pool_IObjectPool<HashSet<int>>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xf48) = 0x6fb5;
                                                  *(undefined8 *)(param_1 + 0xf40) = uVar15;
                                                  if (in_w8 != 0xf3) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_JsonContainerType_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0xf58) = 0x6fb6;
                                                  *(undefined8 *)(param_1 + 0xf50) = uVar15;
                                                  if (0xf4 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<CustomAttributeData>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xf68) = 0x6fb6;
                                                  *(undefined8 *)(param_1 + 0xf60) = uVar15;
                                                  if (in_w8 != 0xf5) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_Serialization_IValueProvider_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xf78) = 0x96c6;
                                                  *(undefined8 *)(param_1 + 0xf70) = uVar15;
                                                  if (0xf6 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_519;
                                                    *(undefined8 *)(param_1 + 0xf88) = 0x6fb7;
                                                    *(undefined8 *)(param_1 + 0xf80) = uVar15;
                                                    if (in_w8 != 0xf7) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  System_Collections_Hashtable_bucket___TypeInfo;
                                                  *(undefined8 *)(param_1 + 0xf98) = 0x6faf;
                                                  *(undefined8 *)(param_1 + 0xf90) = uVar15;
                                                  if (0xf8 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Xml_Schema_XsdBuilder_XsdBuildFunction_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xfa8) = 0x6fb0;
                                                  *(undefined8 *)(param_1 + 4000) = uVar15;
                                                  if (in_w8 != 0xf9) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_ParseNumbers_ThrowOverflowInt32Exception__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xfb8) = 0x6fb1;
                                                  *(undefined8 *)(param_1 + 0xfb0) = uVar15;
                                                  if (0xfa < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_7300;
                                                    *(undefined8 *)(param_1 + 0xfc8) = 0x6fb2;
                                                    *(undefined8 *)(param_1 + 0xfc0) = uVar15;
                                                    if (in_w8 != 0xfb) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033f03c0;
                                                      *(undefined8 *)(param_1 + 0xfd8) = 0x6fb5;
                                                      *(undefined8 *)(param_1 + 0xfd0) = uVar15;
                                                      if (0xfc < in_w8) {
                                                        uVar15 = *(undefined8 *)StringLiteral_11270;
                                                        *(undefined8 *)(param_1 + 0xfe8) = 0x6fb4;
                                                        *(undefined8 *)(param_1 + 0xfe0) = uVar15;
                                                        if (in_w8 != 0xfd) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<RuntimeElement>_get_Current__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0xff8) = 0x6fb6;
                                                  *(undefined8 *)(param_1 + 0xff0) = uVar15;
                                                  if (0xfe < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f5b40;
                                                    *(undefined8 *)(param_1 + 0x1008) = 0x6fb3;
                                                    *(undefined8 *)(param_1 + 0x1000) = uVar15;
                                                    if (in_w8 != 0xff) {
                                                      uVar15 = *(undefined8 *)StringLiteral_10683;
                                                      *(undefined8 *)(param_1 + 0x1018) = 0x6fb7;
                                                      *(undefined8 *)(param_1 + 0x1010) = uVar15;
                                                      if (0x100 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRTintInteractableVisual_OnFirstHoverEntered__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1028) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x1020) = uVar15;
                                                  if (in_w8 != 0x101) {
                                                    uVar15 = *(undefined8 *)StringLiteral_7712;
                                                    *(undefined8 *)(param_1 + 0x1038) = 0x3a8;
                                                    *(undefined8 *)(param_1 + 0x1030) = uVar15;
                                                    if (0x102 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Sirenix_OdinInspector_SelfValidationResultItemExtensions_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1048) = 0x4e9f;
                                                  *(undefined8 *)(param_1 + 0x1040) = uVar15;
                                                  if (in_w8 != 0x103) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1058) = 0x4e9f;
                                                  *(undefined8 *)(param_1 + 0x1050) = uVar15;
                                                  if (0x104 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                              Method_System_Linq_Enumerable_Sum__;
                                                    *(undefined8 *)(param_1 + 0x1068) = 0x6faf;
                                                    *(undefined8 *)(param_1 + 0x1060) = uVar15;
                                                    if (in_w8 != 0x105) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Nullable<char>_get_HasValue__;
                                                  *(undefined8 *)(param_1 + 0x1078) = 0x6fb0;
                                                  *(undefined8 *)(param_1 + 0x1070) = uVar15;
                                                  if (0x106 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_7242;
                                                    *(undefined8 *)(param_1 + 0x1088) = 0x4e9f;
                                                    *(undefined8 *)(param_1 + 0x1080) = uVar15;
                                                    if (in_w8 != 0x107) {
                                                      uVar15 = *(undefined8 *)StringLiteral_9268;
                                                      *(undefined8 *)(param_1 + 0x1098) = 0x6faf;
                                                      *(undefined8 *)(param_1 + 0x1090) = uVar15;
                                                      if (0x108 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__0__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x10a8) = 0x6fbd;
                                                  *(undefined8 *)(param_1 + 0x10a0) = uVar15;
                                                  if (in_w8 != 0x109) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Nullable<OVRInput_Controller>_get_HasValue__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x10b8) = 0x6faf;
                                                  *(undefined8 *)(param_1 + 0x10b0) = uVar15;
                                                  if (0x10a < in_w8) {
                                                    uVar15 = *(undefined8 *)char___var;
                                                    *(undefined8 *)(param_1 + 0x10c8) = 0x6fb0;
                                                    *(undefined8 *)(param_1 + 0x10c0) = uVar15;
                                                    if (in_w8 != 0x10b) {
                                                      uVar15 = *(undefined8 *)StringLiteral_5764;
                                                      *(undefined8 *)(param_1 + 0x10d8) = 0x6fb0;
                                                      *(undefined8 *)(param_1 + 0x10d0) = uVar15;
                                                      if (0x10c < in_w8) {
                                                        uVar15 = *(undefined8 *)StringLiteral_10252;
                                                        *(undefined8 *)(param_1 + 0x10e8) = 0x6fb1;
                                                        *(undefined8 *)(param_1 + 0x10e0) = uVar15;
                                                        if (in_w8 != 0x10d) {
                                                          uVar15 = *(undefined8 *)StringLiteral_5995
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x10f8) = 0x6fb1
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x10f0) = uVar15
                                                          ;
                                                          if (0x10e < in_w8) {
                                                            uVar15 = *(undefined8 *)
                                                                      StringLiteral_259;
                                                            *(undefined8 *)(param_1 + 0x1108) =
                                                                 0x6fb2;
                                                            *(undefined8 *)(param_1 + 0x1100) =
                                                                 uVar15;
                                                            if (in_w8 != 0x10f) {
                                                              uVar15 = *(undefined8 *)
                                                                        StringLiteral_3746;
                                                              *(undefined8 *)(param_1 + 0x1118) =
                                                                   0x6fb2;
                                                              *(undefined8 *)(param_1 + 0x1110) =
                                                                   uVar15;
                                                              if (0x110 < in_w8) {
                                                                uVar15 = *(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_ProBuilder_MeshOperations_AppendElements_InsertVertexInMesh__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1128) = 0x6fb3;
                                                  *(undefined8 *)(param_1 + 0x1120) = uVar15;
                                                  if (in_w8 != 0x111) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_HtmlEncodedRawTextWriter_WriteEntityRef__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1138) = 0x6fb3;
                                                  *(undefined8 *)(param_1 + 0x1130) = uVar15;
                                                  if (0x112 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_0000093F_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1148) = 0x6fb4;
                                                  *(undefined8 *)(param_1 + 0x1140) = uVar15;
                                                  if (in_w8 != 0x113) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<XmlEventCache_XmlEvent[]>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1158) = 0x6fb4;
                                                  *(undefined8 *)(param_1 + 0x1150) = uVar15;
                                                  if (0x114 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_ProBuilder_Poly2Tri_PointSet_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x1168) = 0x6fb5;
                                                  *(undefined8 *)(param_1 + 0x1160) = uVar15;
                                                  if (in_w8 != 0x115) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f6520;
                                                    *(undefined8 *)(param_1 + 0x1178) = 0x6fb5;
                                                    *(undefined8 *)(param_1 + 0x1170) = uVar15;
                                                    if (0x116 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  System_Func<Vector2,_TriangulationPoint>_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x1188) = 0x6fb6;
                                                  *(undefined8 *)(param_1 + 0x1180) = uVar15;
                                                  if (in_w8 != 0x117) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_InternalTreeView_<GetAllItems>d__64_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1198) = 0x6fb6;
                                                  *(undefined8 *)(param_1 + 0x1190) = uVar15;
                                                  if (0x118 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_6831;
                                                    *(undefined8 *)(param_1 + 0x11a8) = 0x6fb7;
                                                    *(undefined8 *)(param_1 + 0x11a0) = uVar15;
                                                    if (in_w8 != 0x119) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_lane_s32__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x11b8) = 0x6fb7;
                                                  *(undefined8 *)(param_1 + 0x11b0) = uVar15;
                                                  if (0x11a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x11c8) = 0x551;
                                                  *(undefined8 *)(param_1 + 0x11c0) = uVar15;
                                                  if (in_w8 != 0x11b) {
                                                    uVar15 = *(undefined8 *)StringLiteral_12676;
                                                    *(undefined8 *)(param_1 + 0x11d8) = 0x5182;
                                                    *(undefined8 *)(param_1 + 0x11d0) = uVar15;
                                                    if (0x11c < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_12018;
                                                      *(undefined8 *)(param_1 + 0x11e8) = 0x5182;
                                                      *(undefined8 *)(param_1 + 0x11e0) = uVar15;
                                                      if (in_w8 != 0x11d) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x11f8) = 0x5182;
                                                  *(undefined8 *)(param_1 + 0x11f0) = uVar15;
                                                  if (0x11e < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_Dictionary<string,_List<string>>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1208) = 0x556a;
                                                  *(undefined8 *)(param_1 + 0x1200) = uVar15;
                                                  if (in_w8 != 0x11f) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1218) = 0x556a;
                                                  *(undefined8 *)(param_1 + 0x1210) = uVar15;
                                                  if (0x120 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_ComponentModel_CultureInfoConverter_CultureComparer_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1228) = 0x5182;
                                                  *(undefined8 *)(param_1 + 0x1220) = uVar15;
                                                  if (in_w8 != 0x121) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_DG_Tweening_TweenSettingsExtensions_SetDelay<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1238) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x1230) = uVar15;
                                                  if (0x122 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<PlayableDirector>_get_Item__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1248) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x1240) = uVar15;
                                                  if (in_w8 != 0x123) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Mesh_SetNormals<__Il2CppFullySharedGenericStructType>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1258) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x1250) = uVar15;
                                                  if (0x124 < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f3808;
                                                    *(undefined8 *)(param_1 + 0x1268) = 0x3b5;
                                                    *(undefined8 *)(param_1 + 0x1260) = uVar15;
                                                    if (in_w8 != 0x125) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_Universal_DebugHandler_DebugRenderPassEnumerable_Enumerator_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1278) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x1270) = uVar15;
                                                  if (0x126 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_5300;
                                                    *(undefined8 *)(param_1 + 0x1288) = 0x3b5;
                                                    *(undefined8 *)(param_1 + 0x1280) = uVar15;
                                                    if (in_w8 != 0x127) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Newtonsoft_Json_Utilities_ReflectionDelegateFactory_CreateGet<object>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1298) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x1290) = uVar15;
                                                  if (0x128 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_12907;
                                                    *(undefined8 *)(param_1 + 0x12a8) = 0x3b5;
                                                    *(undefined8 *)(param_1 + 0x12a0) = uVar15;
                                                    if (in_w8 != 0x129) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s32__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x12b8) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x12b0) = uVar15;
                                                  if (0x12a < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_3883;
                                                    *(undefined8 *)(param_1 + 0x12c8) = 0x6faf;
                                                    *(undefined8 *)(param_1 + 0x12c0) = uVar15;
                                                    if (in_w8 != 299) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_Serialization_XmlCustomFormatter_FromEnum__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x12d8) = 0x6fb0;
                                                  *(undefined8 *)(param_1 + 0x12d0) = uVar15;
                                                  if (300 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_6005;
                                                    *(undefined8 *)(param_1 + 0x12e8) = 0x6fb1;
                                                    *(undefined8 *)(param_1 + 0x12e0) = uVar15;
                                                    if (in_w8 != 0x12d) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<RenderTextureFormat,_bool>_Add__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x12f8) = 0x6fb2;
                                                  *(undefined8 *)(param_1 + 0x12f0) = uVar15;
                                                  if (0x12e < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1308) = 0x6fb7;
                                                  *(undefined8 *)(param_1 + 0x1300) = uVar15;
                                                  if (in_w8 != 0x12f) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x1318) = 0x6fbd;
                                                  *(undefined8 *)(param_1 + 0x1310) = uVar15;
                                                  if (0x130 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_DigitalOpus_MB_Core_PriorityQueue<float,_MB3_AgglomerativeClustering_ClusterDistance>_Dequeue__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1328) = 0x6faf;
                                                  *(undefined8 *)(param_1 + 0x1320) = uVar15;
                                                  if (in_w8 != 0x131) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CheckForCircularReference__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1338) = 0x6fb0;
                                                  *(undefined8 *)(param_1 + 0x1330) = uVar15;
                                                  if (0x132 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>_GetEnumerator__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1348) = 0x6fb1;
                                                  *(undefined8 *)(param_1 + 0x1340) = uVar15;
                                                  if (in_w8 != 0x133) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_OVRPlugin_<>c_<_cctor>b__796_28__;
                                                  *(undefined8 *)(param_1 + 0x1358) = 0x6fb2;
                                                  *(undefined8 *)(param_1 + 0x1350) = uVar15;
                                                  if (0x134 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet<Transform>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1368) = 0x6fb7;
                                                  *(undefined8 *)(param_1 + 0x1360) = uVar15;
                                                  if (in_w8 != 0x135) {
                                                    uVar15 = *(undefined8 *)
                                                              System_NotSupportedException_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x1378) = 0x6fbd;
                                                    *(undefined8 *)(param_1 + 0x1370) = uVar15;
                                                    if (0x136 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<string,_Bounds>_GetEnumerator__
                                                  ;
                                                  *(undefined8 *)(param_1 + 5000) = 0x6fb6;
                                                  *(undefined8 *)(param_1 + 0x1380) = uVar15;
                                                  if (in_w8 != 0x137) {
                                                    uVar15 = *(undefined8 *)
                                                              TMPro_TMP_InputField_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x1398) = 10000;
                                                    *(undefined8 *)(param_1 + 0x1390) = uVar15;
                                                    if (0x138 < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_12604;
                                                      *(undefined8 *)(param_1 + 0x13a8) = 0x3a4;
                                                      *(undefined8 *)(param_1 + 0x13a0) = uVar15;
                                                      if (in_w8 != 0x139) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlals_lane_s32__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x13b8) = 0x4e8c;
                                                  *(undefined8 *)(param_1 + 0x13b0) = uVar15;
                                                  if (0x13a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<JsonWriter_State[]>_get_Count__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x13c8) = 0x4e8c;
                                                  *(undefined8 *)(param_1 + 0x13c0) = uVar15;
                                                  if (in_w8 != 0x13b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<string,_STMVoiceData>_ContainsKey__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x13d8) = 0x35a;
                                                  *(undefined8 *)(param_1 + 0x13d0) = uVar15;
                                                  if (0x13c < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_CollectionBase_RemoveAt__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x13e8) = 0x4e8b;
                                                  *(undefined8 *)(param_1 + 0x13e0) = uVar15;
                                                  if (in_w8 != 0x13d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<ValueTuple<string,_string,_LogType>>_Add__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x13f8) = 0x3a4;
                                                  *(undefined8 *)(param_1 + 0x13f0) = uVar15;
                                                  if (0x13e < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f1ac8;
                                                    *(undefined8 *)(param_1 + 0x1408) = 0x3a4;
                                                    *(undefined8 *)(param_1 + 0x1400) = uVar15;
                                                    if (in_w8 != 0x13f) {
                                                      uVar15 = *(undefined8 *)
                                                                TMPro_FastAction_TypeInfo;
                                                      *(undefined8 *)(param_1 + 0x1418) = 0x3a4;
                                                      *(undefined8 *)(param_1 + 0x1410) = uVar15;
                                                      if (0x140 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  MushroomEffectController_<>c_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x1428) = 0x4e8b;
                                                  *(undefined8 *)(param_1 + 0x1420) = uVar15;
                                                  if (in_w8 != 0x141) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033eab00;
                                                    *(undefined8 *)(param_1 + 0x1438) = 0x36a;
                                                    *(undefined8 *)(param_1 + 0x1430) = uVar15;
                                                    if (0x142 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_AtlasAllocator_<>c_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x1448) = 0x4b0;
                                                  *(undefined8 *)(param_1 + 0x1440) = uVar15;
                                                  if (in_w8 != 0x143) {
                                                    uVar15 = *(undefined8 *)StringLiteral_1074;
                                                    *(undefined8 *)(param_1 + 0x1458) = 0x4b0;
                                                    *(undefined8 *)(param_1 + 0x1450) = uVar15;
                                                    if (0x144 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                Unity_Mathematics_bool2x3_TypeInfo;
                                                      *(undefined8 *)(param_1 + 0x1468) = 65000;
                                                      *(undefined8 *)(param_1 + 0x1460) = uVar15;
                                                      if (in_w8 != 0x145) {
                                                        uVar15 = *(undefined8 *)StringLiteral_8458;
                                                        *(undefined8 *)(param_1 + 0x1478) = 0xfde9;
                                                        *(undefined8 *)(param_1 + 0x1470) = uVar15;
                                                        if (0x146 < in_w8) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_Newtonsoft_Json_Utilities_CollectionUtils_AddRange<Expression>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1488) = 65000;
                                                  *(undefined8 *)(param_1 + 0x1480) = uVar15;
                                                  if (in_w8 != 0x147) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputEventTrace_DeviceInfo>_op_Implicit__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1498) = 0xfde9;
                                                  *(undefined8 *)(param_1 + 0x1490) = uVar15;
                                                  if (0x148 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                              OVRTrackedKeyboardHands_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x14a8) = 0x4b1;
                                                    *(undefined8 *)(param_1 + 0x14a0) = uVar15;
                                                    if (in_w8 != 0x149) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRReferencePointSubsystem,_XRReferencePointSubsystemDescriptor,_XRReferencePointSubsystem_Provider>_get_subsystem__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x14b8) = 0x4e9f;
                                                  *(undefined8 *)(param_1 + 0x14b0) = uVar15;
                                                  if (0x14a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UI_Collections_IndexedSet<IClipper>_AddUnique__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x14c8) = 0x4e9f;
                                                  *(undefined8 *)(param_1 + 0x14c0) = uVar15;
                                                  if (in_w8 != 0x14b) {
                                                    uVar15 = *(undefined8 *)
                                                              Method_System_IO_MemoryStream__ctor__;
                                                    *(undefined8 *)(param_1 + 0x14d8) = 0x4b0;
                                                    *(undefined8 *)(param_1 + 0x14d0) = uVar15;
                                                    if (0x14c < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking_OnEnable__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x14e8) = 0x4b1;
                                                  *(undefined8 *)(param_1 + 0x14e0) = uVar15;
                                                  if (in_w8 != 0x14d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x14f8) = 0x4b0;
                                                  *(undefined8 *)(param_1 + 0x14f0) = uVar15;
                                                  if (0x14e < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1508) = 12000;
                                                  *(undefined8 *)(param_1 + 0x1500) = uVar15;
                                                  if (in_w8 != 0x14f) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1518) = 0x2ee1;
                                                  *(undefined8 *)(param_1 + 0x1510) = uVar15;
                                                  if (0x150 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  GoogleSheetsToUnity_GoogleSheetsToUnityConfig_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1528) = 12000;
                                                  *(undefined8 *)(param_1 + 0x1520) = uVar15;
                                                  if (in_w8 != 0x151) {
                                                    uVar15 = *(undefined8 *)
                                                              Unity_Mathematics_double2_TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x1538) = 65000;
                                                    *(undefined8 *)(param_1 + 0x1530) = uVar15;
                                                    if (0x152 < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_9520;
                                                      *(undefined8 *)(param_1 + 0x1548) = 0xfde9;
                                                      *(undefined8 *)(param_1 + 0x1540) = uVar15;
                                                      if (in_w8 != 0x153) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  System_Net_Sockets_NetworkStream_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x1558) = 0x6fb6;
                                                  *(undefined8 *)(param_1 + 0x1550) = uVar15;
                                                  if (0x154 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<GfxUpdateBufferRange>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1568) = 0x4e2;
                                                  *(undefined8 *)(param_1 + 0x1560) = uVar15;
                                                  if (in_w8 != 0x155) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Sirenix_Serialization_Serializer<UIntPtr>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1578) = 0x4e3;
                                                  *(undefined8 *)(param_1 + 0x1570) = uVar15;
                                                  if (0x156 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_11850;
                                                    *(undefined8 *)(param_1 + 0x1588) = 0x4e4;
                                                    *(undefined8 *)(param_1 + 0x1580) = uVar15;
                                                    if (in_w8 != 0x157) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033f0200;
                                                      *(undefined8 *)(param_1 + 0x1598) = 0x4e5;
                                                      *(undefined8 *)(param_1 + 0x1590) = uVar15;
                                                      if (0x158 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                  UnityEngine_MonoBehaviour_var;
                                                        *(undefined8 *)(param_1 + 0x15a8) = 0x4e6;
                                                        *(undefined8 *)(param_1 + 0x15a0) = uVar15;
                                                        if (in_w8 != 0x159) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_Events_UnityEvent<AudioClip>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x15b8) = 0x4e7;
                                                  *(undefined8 *)(param_1 + 0x15b0) = uVar15;
                                                  if (0x15a < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_12719;
                                                    *(undefined8 *)(param_1 + 0x15c8) = 0x4e8;
                                                    *(undefined8 *)(param_1 + 0x15c0) = uVar15;
                                                    if (in_w8 != 0x15b) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x15d8) = 0x4e9;
                                                  *(undefined8 *)(param_1 + 0x15d0) = uVar15;
                                                  if (0x15c < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_TextureRegistry_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x15e8) = 0x4ea;
                                                  *(undefined8 *)(param_1 + 0x15e0) = uVar15;
                                                  if (in_w8 != 0x15d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<string,_fsData>_TryGetValue__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x15f8) = 0x36a;
                                                  *(undefined8 *)(param_1 + 0x15f0) = uVar15;
                                                  if (0x15e < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Platform_Request<RejoinDialogResult>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1608) = 0x4e4;
                                                  *(undefined8 *)(param_1 + 0x1600) = uVar15;
                                                  if (in_w8 != 0x15f) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<AudioSource>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1618) = 20000;
                                                  *(undefined8 *)(param_1 + 0x1610) = uVar15;
                                                  if (0x160 < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033eec30;
                                                    *(undefined8 *)(param_1 + 0x1628) = 0x4e22;
                                                    *(undefined8 *)(param_1 + 0x1620) = uVar15;
                                                    if (in_w8 != 0x161) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033eead8;
                                                      *(undefined8 *)(param_1 + 0x1638) = 0x4e2;
                                                      *(undefined8 *)(param_1 + 0x1630) = uVar15;
                                                      if (0x162 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<string,_DtdParser_UndeclaredNotation>_get_Values__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1648) = 0x4e3;
                                                  *(undefined8 *)(param_1 + 0x1640) = uVar15;
                                                  if (in_w8 != 0x163) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f3208;
                                                    *(undefined8 *)(param_1 + 0x1658) = 0x4e21;
                                                    *(undefined8 *)(param_1 + 0x1650) = uVar15;
                                                    if (0x164 < in_w8) {
                                                      uVar15 = *(undefined8 *)StringLiteral_4317;
                                                      *(undefined8 *)(param_1 + 0x1668) = 0x4e23;
                                                      *(undefined8 *)(param_1 + 0x1660) = uVar15;
                                                      if (in_w8 != 0x165) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_Obi_ObiNativeList<QueryResult>_set_Item__;
                                                  *(undefined8 *)(param_1 + 0x1678) = 0x4e24;
                                                  *(undefined8 *)(param_1 + 0x1670) = uVar15;
                                                  if (0x166 < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033eadf8;
                                                    *(undefined8 *)(param_1 + 0x1688) = 0x4e25;
                                                    *(undefined8 *)(param_1 + 0x1680) = uVar15;
                                                    if (in_w8 != 0x167) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_ProBuilder_MeshOperations_ExtrudeElements_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1698) = 0x4f25;
                                                  *(undefined8 *)(param_1 + 0x1690) = uVar15;
                                                  if (0x168 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_298;
                                                    *(undefined8 *)(param_1 + 0x16a8) = 0x4f2d;
                                                    *(undefined8 *)(param_1 + 0x16a0) = uVar15;
                                                    if (in_w8 != 0x169) {
                                                      uVar15 = *(undefined8 *)
                                                                UnityEngine_XR_XRDevice_TypeInfo;
                                                      *(undefined8 *)(param_1 + 0x16b8) = 0x51c8;
                                                      *(undefined8 *)(param_1 + 0x16b0) = uVar15;
                                                      if (0x16a < in_w8) {
                                                        uVar15 = *(undefined8 *)PTR_DAT_033f4138;
                                                        *(undefined8 *)(param_1 + 0x16c8) = 0x51d5;
                                                        *(undefined8 *)(param_1 + 0x16c0) = uVar15;
                                                        if (in_w8 != 0x16b) {
                                                          uVar15 = *(undefined8 *)PTR_DAT_033ef550;
                                                          *(undefined8 *)(param_1 + 0x16d8) = 0xc433
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x16d0) = uVar15
                                                          ;
                                                          if (0x16c < in_w8) {
                                                            uVar15 = *(undefined8 *)
                                                                                                                                            
                                                  Method_System_Collections_Generic_List<DelaunayTriangle>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x16e8) = 0x5161;
                                                  *(undefined8 *)(param_1 + 0x16e0) = uVar15;
                                                  if (in_w8 != 0x16d) {
                                                    uVar15 = *(undefined8 *)StringLiteral_1396;
                                                    *(undefined8 *)(param_1 + 0x16f8) = 0xcadc;
                                                    *(undefined8 *)(param_1 + 0x16f0) = uVar15;
                                                    if (0x16e < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Timeline_InfiniteRuntimeClip_TypeInfo;
                                                  *(undefined8 *)(param_1 + 0x1708) = 0xcae0;
                                                  *(undefined8 *)(param_1 + 0x1700) = uVar15;
                                                  if (in_w8 != 0x16f) {
                                                    uVar15 = *(undefined8 *)StringLiteral_13386;
                                                    *(undefined8 *)(param_1 + 0x1718) = 0xcadc;
                                                    *(undefined8 *)(param_1 + 0x1710) = uVar15;
                                                    if (0x170 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_IO_BinaryWriter_Write__;
                                                  *(undefined8 *)(param_1 + 0x1728) = 0x7149;
                                                  *(undefined8 *)(param_1 + 0x1720) = uVar15;
                                                  if (in_w8 != 0x171) {
                                                    uVar15 = *(undefined8 *)StringLiteral_1041;
                                                    *(undefined8 *)(param_1 + 0x1738) = 0x4e89;
                                                    *(undefined8 *)(param_1 + 0x1730) = uVar15;
                                                    if (0x172 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<WitTTSVRequest_<SetupTts>d__26>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1748) = 0x4e8a;
                                                  *(undefined8 *)(param_1 + 0x1740) = uVar15;
                                                  if (in_w8 != 0x173) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminq_f32__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1758) = 0x4e8c;
                                                  *(undefined8 *)(param_1 + 0x1750) = uVar15;
                                                  if (0x174 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Oculus_Interaction_PokeInteractable_RecoilAssistConfig_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1768) = 0x4e8b;
                                                  *(undefined8 *)(param_1 + 0x1760) = uVar15;
                                                  if (in_w8 != 0x175) {
                                                    uVar15 = *(undefined8 *)StringLiteral_6317;
                                                    *(undefined8 *)(param_1 + 0x1778) = 0xdeae;
                                                    *(undefined8 *)(param_1 + 6000) = uVar15;
                                                    if (0x176 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                UnityEngine_Keyframe_var;
                                                      *(undefined8 *)(param_1 + 0x1788) = 0xdeab;
                                                      *(undefined8 *)(param_1 + 0x1780) = uVar15;
                                                      if (in_w8 != 0x177) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_Events_UnityEvent<Collider>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1798) = 0xdeaa;
                                                  *(undefined8 *)(param_1 + 0x1790) = uVar15;
                                                  if (0x178 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x17a8) = 0xdeb2;
                                                  *(undefined8 *)(param_1 + 0x17a0) = uVar15;
                                                  if (in_w8 != 0x179) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_WebHeaderCollection_Add__;
                                                  *(undefined8 *)(param_1 + 0x17b8) = 0xdeb0;
                                                  *(undefined8 *)(param_1 + 0x17b0) = uVar15;
                                                  if (0x17a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<MethodInfo>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x17c8) = 0xdeb1;
                                                  *(undefined8 *)(param_1 + 0x17c0) = uVar15;
                                                  if (in_w8 != 0x17b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlWellFormedWriter_WriteFullEndElement__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x17d8) = 0xdeaf;
                                                  *(undefined8 *)(param_1 + 0x17d0) = uVar15;
                                                  if (0x17c < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_set_Capacity__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x17e8) = 0xdeb3;
                                                  *(undefined8 *)(param_1 + 0x17e0) = uVar15;
                                                  if (in_w8 != 0x17d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<Character>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x17f8) = 0xdeac;
                                                  *(undefined8 *)(param_1 + 0x17f0) = uVar15;
                                                  if (0x17e < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_IEnumerator<ITreeViewItem>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1808) = 0xdead;
                                                  *(undefined8 *)(param_1 + 0x1800) = uVar15;
                                                  if (in_w8 != 0x17f) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033ece40;
                                                    *(undefined8 *)(param_1 + 0x1818) = 0x2714;
                                                    *(undefined8 *)(param_1 + 0x1810) = uVar15;
                                                    if (0x180 < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<OVRGrabbable,_int>_GetEnumerator__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1828) = 0x272d;
                                                  *(undefined8 *)(param_1 + 0x1820) = uVar15;
                                                  if (in_w8 != 0x181) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<Nullable<int>>_GetAwaiter__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1838) = 0x2718;
                                                  *(undefined8 *)(param_1 + 0x1830) = uVar15;
                                                  if (0x182 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                              Method_UnityEngine_Matrix4x4_GetRow__;
                                                    *(undefined8 *)(param_1 + 0x1848) = 0x2712;
                                                    *(undefined8 *)(param_1 + 0x1840) = uVar15;
                                                    if (in_w8 != 0x183) {
                                                      uVar15 = *(undefined8 *)StringLiteral_12588;
                                                      *(undefined8 *)(param_1 + 0x1858) = 0x2762;
                                                      *(undefined8 *)(param_1 + 0x1850) = uVar15;
                                                      if (0x184 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmulls_laneq_s32__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1868) = 0x2717;
                                                  *(undefined8 *)(param_1 + 0x1860) = uVar15;
                                                  if (in_w8 != 0x185) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1878) = 0x2716;
                                                  *(undefined8 *)(param_1 + 0x1870) = uVar15;
                                                  if (0x186 < in_w8) {
                                                    uVar15 = *(undefined8 *)sbyte___TypeInfo;
                                                    *(undefined8 *)(param_1 + 0x1888) = 0x2715;
                                                    *(undefined8 *)(param_1 + 0x1880) = uVar15;
                                                    if (in_w8 != 0x187) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Queue<Action>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1898) = 0x275f;
                                                  *(undefined8 *)(param_1 + 0x1890) = uVar15;
                                                  if (0x188 < in_w8) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f3d60;
                                                    *(undefined8 *)(param_1 + 0x18a8) = 0x2711;
                                                    *(undefined8 *)(param_1 + 0x18a0) = uVar15;
                                                    if (in_w8 != 0x189) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_InteropServices_Marshal_SecureStringGlobalAllocator__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x18b8) = 0x2713;
                                                  *(undefined8 *)(param_1 + 0x18b0) = uVar15;
                                                  if (0x18a < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<FocusExitEventArgs>__ctor__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x18c8) = 0x271a;
                                                  *(undefined8 *)(param_1 + 0x18c0) = uVar15;
                                                  if (in_w8 != 0x18b) {
                                                    uVar15 = *(undefined8 *)UnityEngine_Ray_var;
                                                    *(undefined8 *)(param_1 + 0x18d8) = 0x2725;
                                                    *(undefined8 *)(param_1 + 0x18d0) = uVar15;
                                                    if (0x18c < in_w8) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_BurstManaged__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x18e8) = 0x2761;
                                                  *(undefined8 *)(param_1 + 0x18e0) = uVar15;
                                                  if (in_w8 != 0x18d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_Add__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x18f8) = 0x2721;
                                                  *(undefined8 *)(param_1 + 0x18f0) = uVar15;
                                                  if (0x18e < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_1516;
                                                    *(undefined8 *)(param_1 + 0x1908) = 0x3a4;
                                                    *(undefined8 *)(param_1 + 0x1900) = uVar15;
                                                    if (in_w8 != 399) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033ef0e8;
                                                      *(undefined8 *)(param_1 + 0x1918) = 0x3a4;
                                                      *(undefined8 *)(param_1 + 0x1910) = uVar15;
                                                      if (400 < in_w8) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  DigitalOpus_MB_Core_MB3_TextureCombiner_<_CombineTexturesIntoAtlases>d__83_TypeInfo
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1928) = 65000;
                                                  *(undefined8 *)(param_1 + 0x1920) = uVar15;
                                                  if (in_w8 != 0x191) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Rendering_Universal_Internal_CopyDepthPass_OnCameraCleanup__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1938) = 0xfde9;
                                                  *(undefined8 *)(param_1 + 0x1930) = uVar15;
                                                  if (0x192 < in_w8) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<VA_MeshTree_Node>_Add__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1948) = 65000;
                                                  *(undefined8 *)(param_1 + 0x1940) = uVar15;
                                                  if (in_w8 != 0x193) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_AndroidJavaObject_Get<AndroidJavaObject>__
                                                  ;
                                                  *(undefined8 *)(param_1 + 0x1958) = 0xfde9;
                                                  *(undefined8 *)(param_1 + 0x1950) = uVar15;
                                                  puVar7 = 
                                                  System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt64_TypeInfo
                                                  ;
                                                  if (0x194 < in_w8) {
                                                    uVar15 = *(undefined8 *)StringLiteral_12687;
                                                    *(undefined8 *)(param_1 + 0x1968) = 0x3b6;
                                                    *(undefined8 *)(param_1 + 0x1960) = uVar15;
                                                    puVar12 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminvq_u32__
                                                  ;
                                                  **(long **)(*(long *)puVar7 + 0xb8) = param_1;
                                                  lVar14 = FUN_00da4fb8(*(undefined8 *)puVar12,0x62)
                                                  ;
                                                  if (lVar14 == 0) {
LAB_01730bf0:
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  uVar1 = *(uint *)(lVar14 + 0x18);
                                                  if (uVar1 != 0) {
                                                    uVar15 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar14 + 0x20) = 0x4e40025;
                                                    *(undefined8 *)(lVar14 + 0x28) = uVar15;
                                                    if (uVar1 != 1) {
                                                      uVar15 = *(undefined8 *)puVar3;
                                                      *(undefined8 *)(lVar14 + 0x30) = 0x4e401b5;
                                                      *(undefined8 *)(lVar14 + 0x38) = uVar15;
                                                      if (2 < uVar1) {
                                                        uVar15 = *(undefined8 *)puVar10;
                                                        *(undefined8 *)(lVar14 + 0x40) = 0x4e401f4;
                                                        *(undefined8 *)(lVar14 + 0x48) = uVar15;
                                                        if (uVar1 != 3) {
                                                          uVar15 = *unaff_x27;
                                                          *(undefined8 *)(lVar14 + 0x50) =
                                                               0x20204e802c4;
                                                          *(undefined8 *)(lVar14 + 0x58) = uVar15;
                                                          if (4 < uVar1) {
                                                            uVar15 = *(undefined8 *)puVar9;
                                                            *(undefined8 *)(lVar14 + 0x60) =
                                                                 0x4e502e1;
                                                            *(undefined8 *)(lVar14 + 0x68) = uVar15;
                                                            if (uVar1 != 5) {
                                                              uVar15 = *(undefined8 *)puVar11;
                                                              *(undefined8 *)(lVar14 + 0x70) =
                                                                   0x4e90307;
                                                              *(undefined8 *)(lVar14 + 0x78) =
                                                                   uVar15;
                                                              if (6 < uVar1) {
                                                                uVar15 = *(undefined8 *)
                                                                          StringLiteral_11892;
                                                                *(undefined8 *)(lVar14 + 0x80) =
                                                                     0x4e40352;
                                                                *(undefined8 *)(lVar14 + 0x88) =
                                                                     uVar15;
                                                                if (uVar1 != 7) {
                                                                  uVar15 = *(undefined8 *)
                                                                            PTR_DAT_033f3360;
                                                                  *(undefined8 *)(lVar14 + 0x90) =
                                                                       0x20204e20354;
                                                                  *(undefined8 *)(lVar14 + 0x98) =
                                                                       uVar15;
                                                                  if (8 < uVar1) {
                                                                    uVar15 = *(undefined8 *)puVar6;
                                                                    *(undefined8 *)(lVar14 + 0xa0) =
                                                                         0x4e40357;
                                                                    *(undefined8 *)(lVar14 + 0xa8) =
                                                                         uVar15;
                                                                    if (uVar1 != 9) {
                                                                      uVar15 = *(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidGamepadWithDpadButtons>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0xb0) = 0x4e60359;
                                                  *(undefined8 *)(lVar14 + 0xb8) = uVar15;
                                                  if (10 < uVar1) {
                                                    uVar15 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar14 + 0xc0) = 0x4e4035a;
                                                    *(undefined8 *)(lVar14 + 200) = uVar15;
                                                    if (uVar1 != 0xb) {
                                                      uVar15 = *(undefined8 *)puVar2;
                                                      *(undefined8 *)(lVar14 + 0xd0) = 0x4e4035c;
                                                      *(undefined8 *)(lVar14 + 0xd8) = uVar15;
                                                      if (0xc < uVar1) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_ThrowHelper_ThrowArgumentException__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0xe0) = 0x4e4035d;
                                                  *(undefined8 *)(lVar14 + 0xe8) = uVar15;
                                                  if (uVar1 != 0xd) {
                                                    uVar15 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar14 + 0xf0) = 0x20204e7035e;
                                                    *(undefined8 *)(lVar14 + 0xf8) = uVar15;
                                                    if (0xe < uVar1) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_ProBuilder_MeshOperations_AppendElements_<>c_<CreateShapeFromPolygon>b__8_0__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x100) = 0x4e4035f;
                                                  *(undefined8 *)(lVar14 + 0x108) = uVar15;
                                                  if (uVar1 != 0xf) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f4bb0;
                                                    *(undefined8 *)(lVar14 + 0x110) = 0x4e80360;
                                                    *(undefined8 *)(lVar14 + 0x118) = uVar15;
                                                    if (0x10 < uVar1) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033ea960;
                                                      *(undefined8 *)(lVar14 + 0x120) = 0x4e40361;
                                                      *(undefined8 *)(lVar14 + 0x128) = uVar15;
                                                      puVar11 = 
                                                  Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryReader_readHeader<Type>__
                                                  ;
                                                  puVar9 = 
                                                  Method_Newtonsoft_Json_Utilities_ReflectionDelegateFactory_CreateGet<object>__
                                                  ;
                                                  puVar10 = 
                                                  Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_UI_Collections_IndexedSet<IClipper>_AddUnique__
                                                  ;
                                                  puVar8 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__
                                                  ;
                                                  puVar4 = TMPro_TMP_InputField_TypeInfo;
                                                  puVar5 = 
                                                  UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs_TypeInfo
                                                  ;
                                                  if (uVar1 != 0x11) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x130) = 0x20204e30362;
                                                  *(undefined8 *)(lVar14 + 0x138) = uVar15;
                                                  if (0x12 < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputManager_GetUnsupportedDevices__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x140) = 0x4e50365;
                                                  *(undefined8 *)(lVar14 + 0x148) = uVar15;
                                                  if (uVar1 != 0x13) {
                                                    uVar15 = *(undefined8 *)puVar11;
                                                    *(undefined8 *)(lVar14 + 0x150) = 0x4e20366;
                                                    *(undefined8 *)(lVar14 + 0x158) = uVar15;
                                                    if (0x14 < uVar1) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<string,_fsData>_TryGetValue__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x160) = 0x303036a036a;
                                                  *(undefined8 *)(lVar14 + 0x168) = uVar15;
                                                  if (uVar1 != 0x15) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Serialization_MemberHolder_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x170) = 0x4e5036b;
                                                  *(undefined8 *)(lVar14 + 0x178) = uVar15;
                                                  if (0x16 < uVar1) {
                                                    uVar15 = *(undefined8 *)StringLiteral_8077;
                                                    *(undefined8 *)(lVar14 + 0x180) = 0x30303a403a4;
                                                    *(undefined8 *)(lVar14 + 0x188) = uVar15;
                                                    if (uVar1 != 0x17) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033f67a0;
                                                      *(undefined8 *)(lVar14 + 400) = 0x30303a803a8;
                                                      *(undefined8 *)(lVar14 + 0x198) = uVar15;
                                                      if (0x18 < uVar1) {
                                                        uVar15 = *(undefined8 *)puVar9;
                                                        *(undefined8 *)(lVar14 + 0x1a0) =
                                                             0x30303b503b5;
                                                        *(undefined8 *)(lVar14 + 0x1a8) = uVar15;
                                                        if (uVar1 != 0x19) {
                                                          uVar15 = *(undefined8 *)PTR_DAT_033f6700;
                                                          *(undefined8 *)(lVar14 + 0x1b0) =
                                                               0x30303b603b6;
                                                          *(undefined8 *)(lVar14 + 0x1b8) = uVar15;
                                                          if (0x1a < uVar1) {
                                                            uVar15 = *(undefined8 *)
                                                                      StringLiteral_1262;
                                                            *(undefined8 *)(lVar14 + 0x1c0) =
                                                                 0x4e60402;
                                                            *(undefined8 *)(lVar14 + 0x1c8) = uVar15
                                                            ;
                                                            if (uVar1 != 0x1b) {
                                                              uVar15 = *(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_ProBuilder_SharedVertex_GetSharedVerticesWithPositions__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x1d0) = 0x4e40417;
                                                  *(undefined8 *)(lVar14 + 0x1d8) = uVar15;
                                                  if (0x1c < uVar1) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f3d00;
                                                    *(undefined8 *)(lVar14 + 0x1e0) = 0x4e40474;
                                                    *(undefined8 *)(lVar14 + 0x1e8) = uVar15;
                                                    if (uVar1 != 0x1d) {
                                                      uVar15 = *(undefined8 *)
                                                                System_EmptyArray<char>_TypeInfo;
                                                      *(undefined8 *)(lVar14 + 0x1f0) = 0x4e40475;
                                                      *(undefined8 *)(lVar14 + 0x1f8) = uVar15;
                                                      if (0x1e < uVar1) {
                                                        uVar15 = *(undefined8 *)PTR_DAT_033f1ee0;
                                                        *(undefined8 *)(lVar14 + 0x200) = 0x4e40476;
                                                        *(undefined8 *)(lVar14 + 0x208) = uVar15;
                                                        if (uVar1 != 0x1f) {
                                                          uVar15 = *(undefined8 *)
                                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x210) = 0x4e40477;
                                                  *(undefined8 *)(lVar14 + 0x218) = uVar15;
                                                  if (0x20 < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Char_GetUnicodeCategory__;
                                                  *(undefined8 *)(lVar14 + 0x220) = 0x4e40478;
                                                  *(undefined8 *)(lVar14 + 0x228) = uVar15;
                                                  if (uVar1 != 0x21) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_ArcherPaintingPuzzle_DomsArrowHit__;
                                                  *(undefined8 *)(lVar14 + 0x230) = 0x4e40479;
                                                  *(undefined8 *)(lVar14 + 0x238) = uVar15;
                                                  puVar9 = 
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Mesh,_ObiTriangleMeshHandle>_MoveNext__
                                                  ;
                                                  if (0x22 < uVar1) {
                                                    uVar15 = *(undefined8 *)StringLiteral_8629;
                                                    *(undefined8 *)(lVar14 + 0x240) = 0x4e4047a;
                                                    *(undefined8 *)(lVar14 + 0x248) = uVar15;
                                                    if (uVar1 != 0x23) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  System_Runtime_CompilerServices_StrongBox<int>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x250) = 0x4e4047b;
                                                  *(undefined8 *)(lVar14 + 600) = uVar15;
                                                  if (0x24 < uVar1) {
                                                    uVar15 = *(undefined8 *)StringLiteral_5041;
                                                    *(undefined8 *)(lVar14 + 0x260) = 0x4e4047c;
                                                    *(undefined8 *)(lVar14 + 0x268) = uVar15;
                                                    if (uVar1 != 0x25) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033f1840;
                                                      *(undefined8 *)(lVar14 + 0x270) = 0x4e4047d;
                                                      *(undefined8 *)(lVar14 + 0x278) = uVar15;
                                                      if (0x26 < uVar1) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_IO_MemoryStream__ctor__;
                                                  *(undefined8 *)(lVar14 + 0x280) = 0x20004b004b0;
                                                  *(undefined8 *)(lVar14 + 0x288) = uVar15;
                                                  if (uVar1 != 0x27) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<Leaderboard>_Add__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x290) = 0x4b004b1;
                                                  *(undefined8 *)(lVar14 + 0x298) = uVar15;
                                                  if (0x28 < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x2a0) = 0x30304e204e2;
                                                  *(undefined8 *)(lVar14 + 0x2a8) = uVar15;
                                                  if (uVar1 != 0x29) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Meta_WitAi_Speech_VoiceAudioEvent_TypeInfo;
                                                  *(undefined8 *)(lVar14 + 0x2b0) = 0x30304e304e3;
                                                  *(undefined8 *)(lVar14 + 0x2b8) = uVar15;
                                                  if (0x2a < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x2c0) = 0x30304e404e4;
                                                  *(undefined8 *)(lVar14 + 0x2c8) = uVar15;
                                                  if (uVar1 != 0x2b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_UIR_TextureSlotManager_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x2d0) = 0x30304e504e5;
                                                  *(undefined8 *)(lVar14 + 0x2d8) = uVar15;
                                                  if (0x2c < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                              Obi_IColliderWorldImpl_TypeInfo;
                                                    *(undefined8 *)(lVar14 + 0x2e0) = 0x30304e604e6;
                                                    *(undefined8 *)(lVar14 + 0x2e8) = uVar15;
                                                    if (uVar1 != 0x2d) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<AudioClip>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x2f0) = 0x30304e704e7;
                                                  *(undefined8 *)(lVar14 + 0x2f8) = uVar15;
                                                  if (0x2e < uVar1) {
                                                    uVar15 = *(undefined8 *)StringLiteral_12719;
                                                    *(undefined8 *)(lVar14 + 0x300) = 0x30304e804e8;
                                                    *(undefined8 *)(lVar14 + 0x308) = uVar15;
                                                    if (uVar1 != 0x2f) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x310) = 0x30304e904e9;
                                                  *(undefined8 *)(lVar14 + 0x318) = uVar15;
                                                  if (0x30 < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_TextureRegistry_TypeInfo;
                                                  *(undefined8 *)(lVar14 + 800) = 0x30304ea04ea;
                                                  *(undefined8 *)(lVar14 + 0x328) = uVar15;
                                                  if (uVar1 != 0x31) {
                                                    uVar15 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar14 + 0x330) = 0x4e42710;
                                                    *(undefined8 *)(lVar14 + 0x338) = uVar15;
                                                    if (0x32 < uVar1) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Queue<Action>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x340) = 0x4e4275f;
                                                  *(undefined8 *)(lVar14 + 0x348) = uVar15;
                                                  if (uVar1 != 0x33) {
                                                    uVar15 = *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar14 + 0x350) = 0x4b02ee0;
                                                    *(undefined8 *)(lVar14 + 0x358) = uVar15;
                                                    if (0x34 < uVar1) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnInit__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x360) = 0x4b02ee1;
                                                  *(undefined8 *)(lVar14 + 0x368) = uVar15;
                                                  if (uVar1 != 0x35) {
                                                    uVar15 = *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar14 + 0x370) = 0x10104e44e9f;
                                                    *(undefined8 *)(lVar14 + 0x378) = uVar15;
                                                    if (0x36 < uVar1) {
                                                      uVar15 = *(undefined8 *)PTR_DAT_033efc58;
                                                      *(undefined8 *)(lVar14 + 0x380) = 0x4e44f31;
                                                      *(undefined8 *)(lVar14 + 0x388) = uVar15;
                                                      if (uVar1 != 0x37) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmuld_laneq_f64__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x390) = 0x4e44f35;
                                                  *(undefined8 *)(lVar14 + 0x398) = uVar15;
                                                  if (0x38 < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_ParseNumericCharRefInline__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x3a0) = 0x4e44f36;
                                                  *(undefined8 *)(lVar14 + 0x3a8) = uVar15;
                                                  if (uVar1 != 0x39) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033f5558;
                                                    *(undefined8 *)(lVar14 + 0x3b0) = 0x4e44f38;
                                                    *(undefined8 *)(lVar14 + 0x3b8) = uVar15;
                                                    if (0x3a < uVar1) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_STMTools_Links_LinkController_PreparseTags__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x3c0) = 0x4e44f3c;
                                                  *(undefined8 *)(lVar14 + 0x3c8) = uVar15;
                                                  if (uVar1 != 0x3b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<IInteractorView,_List<IInteractorView>>_get_Item__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x3d0) = 0x4e44f3d;
                                                  *(undefined8 *)(lVar14 + 0x3d8) = uVar15;
                                                  if (0x3c < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_ScriptableObject_CreateInstance<ProbeReferenceVolumeProfile>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x3e0) = 0x3a44f42;
                                                  *(undefined8 *)(lVar14 + 1000) = uVar15;
                                                  if (uVar1 != 0x3d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Autohand_HandDistanceGrabber_<>c__DisplayClass62_1_<StartCatchAssist>b__4__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x3f0) = 0x4e44f49;
                                                  *(undefined8 *)(lVar14 + 0x3f8) = uVar15;
                                                  if (0x3e < uVar1) {
                                                    uVar15 = *(undefined8 *)PTR_DAT_033edd00;
                                                    *(undefined8 *)(lVar14 + 0x400) = 0x4e84fc4;
                                                    *(undefined8 *)(lVar14 + 0x408) = uVar15;
                                                    if (uVar1 != 0x3f) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_Meta_Voice_Logging_RingDictionaryBuffer<CorrelationID,_CorrelationID>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x410) = 0x4e74fc8;
                                                  *(undefined8 *)(lVar14 + 0x418) = uVar15;
                                                  if (0x40 < uVar1) {
                                                    uVar15 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar14 + 0x420) = 0x30304e35182;
                                                    *(undefined8 *)(lVar14 + 0x428) = uVar15;
                                                    if (uVar1 != 0x41) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_IO_FileStream_InitBuffer__;
                                                  *(undefined8 *)(lVar14 + 0x430) = 0x4e45187;
                                                  *(undefined8 *)(lVar14 + 0x438) = uVar15;
                                                  if (0x42 < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                              System_Xml_Linq_XObject_TypeInfo;
                                                    *(undefined8 *)(lVar14 + 0x440) = 0x4e35221;
                                                    *(undefined8 *)(lVar14 + 0x448) = uVar15;
                                                    if (uVar1 != 0x43) {
                                                      uVar15 = *(undefined8 *)puVar5;
                                                      *(undefined8 *)(lVar14 + 0x450) =
                                                           0x30304e3556a;
                                                      *(undefined8 *)(lVar14 + 0x458) = uVar15;
                                                      if (0x44 < uVar1) {
                                                        uVar15 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<int,_object>_Clear__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x460) = 0x30304e46faf;
                                                  *(undefined8 *)(lVar14 + 0x468) = uVar15;
                                                  if (uVar1 != 0x45) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<KeyValuePair<string,_object>>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x470) = 0x30304e26fb0;
                                                  *(undefined8 *)(lVar14 + 0x478) = uVar15;
                                                  if (0x46 < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Obi_ObiNativeList<Vector4>_Add__;
                                                  *(undefined8 *)(lVar14 + 0x480) = 0x10104e66fb1;
                                                  *(undefined8 *)(lVar14 + 0x488) = uVar15;
                                                  if (uVar1 != 0x47) {
                                                    uVar15 = *(undefined8 *)StringLiteral_9634;
                                                    *(undefined8 *)(lVar14 + 0x490) = 0x30304e96fb2;
                                                    *(undefined8 *)(lVar14 + 0x498) = uVar15;
                                                    if (0x48 < uVar1) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<OVRSceneAnchor>_get_Count__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x4a0) = 0x30304e36fb3;
                                                  *(undefined8 *)(lVar14 + 0x4a8) = uVar15;
                                                  if (uVar1 != 0x49) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_SignatureType_get_CustomAttributes__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x4b0) = 0x30304e86fb4;
                                                  *(undefined8 *)(lVar14 + 0x4b8) = uVar15;
                                                  if (0x4a < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Pool_IObjectPool<HashSet<int>>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x4c0) = 0x30304e56fb5;
                                                  *(undefined8 *)(lVar14 + 0x4c8) = uVar15;
                                                  if (uVar1 != 0x4b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_JsonContainerType_TypeInfo;
                                                  *(undefined8 *)(lVar14 + 0x4d0) = 0x20204e76fb6;
                                                  *(undefined8 *)(lVar14 + 0x4d8) = uVar15;
                                                  if (0x4c < uVar1) {
                                                    uVar15 = *(undefined8 *)StringLiteral_519;
                                                    *(undefined8 *)(lVar14 + 0x4e0) = 0x30304e66fb7;
                                                    *(undefined8 *)(lVar14 + 0x4e8) = uVar15;
                                                    if (uVar1 != 0x4d) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Stack_Enumerator<__Il2CppFullySharedGenericType>_MoveNext__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x4f0) = 0x30104e46fbd;
                                                  *(undefined8 *)(lVar14 + 0x4f8) = uVar15;
                                                  if (0x4e < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_Serialization_IValueProvider_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x500) = 0x30304e796c6;
                                                  *(undefined8 *)(lVar14 + 0x508) = uVar15;
                                                  if (uVar1 != 0x4f) {
                                                    uVar15 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar14 + 0x510) = 0x10103a4c42c;
                                                    *(undefined8 *)(lVar14 + 0x518) = uVar15;
                                                    if (0x50 < uVar1) {
                                                      uVar15 = *(undefined8 *)float_var;
                                                      *(undefined8 *)(lVar14 + 0x520) =
                                                           0x30103a4c42d;
                                                      *(undefined8 *)(lVar14 + 0x528) = uVar15;
                                                      if (uVar1 != 0x51) {
                                                        uVar15 = *(undefined8 *)puVar9;
                                                        *(undefined8 *)(lVar14 + 0x530) = 0x3a4c42e;
                                                        *(undefined8 *)(lVar14 + 0x538) = uVar15;
                                                        if (0x52 < uVar1) {
                                                          uVar15 = *(undefined8 *)StringLiteral_2965
                                                          ;
                                                          *(undefined8 *)(lVar14 + 0x540) =
                                                               0x30303a4cadc;
                                                          *(undefined8 *)(lVar14 + 0x548) = uVar15;
                                                          if (uVar1 != 0x53) {
                                                            uVar15 = *(undefined8 *)
                                                                      StringLiteral_819;
                                                            *(undefined8 *)(lVar14 + 0x550) =
                                                                 0x10103b5caed;
                                                            *(undefined8 *)(lVar14 + 0x558) = uVar15
                                                            ;
                                                            if (0x54 < uVar1) {
                                                              uVar15 = *(undefined8 *)
                                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_veorq_s8__;
                                                  *(undefined8 *)(lVar14 + 0x560) = 0x30303a8d698;
                                                  *(undefined8 *)(lVar14 + 0x568) = uVar15;
                                                  if (uVar1 != 0x55) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Events_UnityEvent<Collider>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x570) = 0xdeaadeaa;
                                                  *(undefined8 *)(lVar14 + 0x578) = uVar15;
                                                  if (0x56 < uVar1) {
                                                    uVar15 = *(undefined8 *)UnityEngine_Keyframe_var
                                                    ;
                                                    *(undefined8 *)(lVar14 + 0x580) = 0xdeabdeab;
                                                    *(undefined8 *)(lVar14 + 0x588) = uVar15;
                                                    if (uVar1 != 0x57) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<Character>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x590) = 0xdeacdeac;
                                                  *(undefined8 *)(lVar14 + 0x598) = uVar15;
                                                  if (0x58 < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_IEnumerator<ITreeViewItem>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x5a0) = 0xdeaddead;
                                                  *(undefined8 *)(lVar14 + 0x5a8) = uVar15;
                                                  if (uVar1 != 0x59) {
                                                    uVar15 = *(undefined8 *)StringLiteral_6317;
                                                    *(undefined8 *)(lVar14 + 0x5b0) = 0xdeaedeae;
                                                    *(undefined8 *)(lVar14 + 0x5b8) = uVar15;
                                                    if (0x5a < uVar1) {
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_XmlWellFormedWriter_WriteFullEndElement__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x5c0) = 0xdeafdeaf;
                                                  *(undefined8 *)(lVar14 + 0x5c8) = uVar15;
                                                  if (uVar1 != 0x5b) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_WebHeaderCollection_Add__;
                                                  *(undefined8 *)(lVar14 + 0x5d0) = 0xdeb0deb0;
                                                  *(undefined8 *)(lVar14 + 0x5d8) = uVar15;
                                                  if (0x5c < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<MethodInfo>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x5e0) = 0xdeb1deb1;
                                                  *(undefined8 *)(lVar14 + 0x5e8) = uVar15;
                                                  if (uVar1 != 0x5d) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x5f0) = 0xdeb2deb2;
                                                  *(undefined8 *)(lVar14 + 0x5f8) = uVar15;
                                                  if (0x5e < uVar1) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_set_Capacity__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x600) = 0xdeb3deb3;
                                                  *(undefined8 *)(lVar14 + 0x608) = uVar15;
                                                  if (uVar1 != 0x5f) {
                                                    uVar15 = *(undefined8 *)
                                                              Unity_Mathematics_double2_TypeInfo;
                                                    *(undefined8 *)(lVar14 + 0x610) = 0x10104b0fde8;
                                                    *(undefined8 *)(lVar14 + 0x618) = uVar15;
                                                    if (0x60 < uVar1) {
                                                      uVar15 = *(undefined8 *)StringLiteral_9520;
                                                      *(undefined8 *)(lVar14 + 0x620) =
                                                           0x30304b0fde9;
                                                      *(undefined8 *)(lVar14 + 0x628) = uVar15;
                                                      if (uVar1 != 0x61) {
                                                        *(undefined8 *)(lVar14 + 0x638) = 0;
                                                        *(undefined8 *)(lVar14 + 0x630) = 0;
                                                        puVar5 = 
                                                  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo
                                                  ;
                                                  *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) =
                                                       lVar14;
                                                  iVar13 = FUN_0172b6bc();
                                                  *(int *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10)
                                                       = iVar13 + -1;
                                                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                  }
                                                  if (DAT_03775606 == '\0') {
                                                    thunk_FUN_00d48444(
                                                  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo
                                                  );
                                                  DAT_03775606 = '\x01';
                                                  }
                                                  puVar4 = 
                                                  System_Net_WebHeaderCollection_RfcChar___TypeInfo;
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(lVar14 + 0xb8) + 0x18);
                                                  lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  puVar5 = 
                                                  Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__0__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    FUN_01298e34(lVar14,uVar15,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Collections_Generic_List<HandJointMap>_TypeInfo
                                                  );
                                                  *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18
                                                           ) = lVar14;
                                                  lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar5)
                                                  ;
                                                  if (lVar14 != 0) {
                                                    FUN_01298da0(lVar14,*(undefined8 *)
                                                                                                                                                  
                                                  Method_OVRAnchor_TryGetComponent<OVRAnchorContainer>__
                                                  );
                                                  *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20
                                                           ) = lVar14;
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_01730bf0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_00da5194();
}


