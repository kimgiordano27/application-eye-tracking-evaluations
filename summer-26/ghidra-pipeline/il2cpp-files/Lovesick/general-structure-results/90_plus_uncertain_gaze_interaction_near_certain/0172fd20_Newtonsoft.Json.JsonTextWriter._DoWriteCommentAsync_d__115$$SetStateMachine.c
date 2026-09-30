/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter.<DoWriteCommentAsync>d__115$$SetStateMachine
ENTRY_POINT: 0172fd20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 265
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_2;strong_file_logging_hits_5;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_10
*/


void Newtonsoft_Json_JsonTextWriter_<DoWriteCommentAsync>d__115__SetStateMachine(long param_1)

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
  bool in_ZR;
  bool in_CY;
  int iVar10;
  long lVar11;
  uint in_w8;
  undefined8 in_x9;
  undefined8 uVar12;
  undefined8 in_x10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  *(undefined8 *)(param_1 + 0x1918) = in_x10;
  *(undefined8 *)(param_1 + 0x1910) = in_x9;
  if (in_CY && !in_ZR) {
    uVar12 = *(undefined8 *)
              DigitalOpus_MB_Core_MB3_TextureCombiner_<_CombineTexturesIntoAtlases>d__83_TypeInfo;
    *(undefined8 *)(param_1 + 0x1928) = 65000;
    *(undefined8 *)(param_1 + 0x1920) = uVar12;
    if (in_w8 != 0x191) {
      uVar12 = *(undefined8 *)
                Method_UnityEngine_Rendering_Universal_Internal_CopyDepthPass_OnCameraCleanup__;
      *(undefined8 *)(param_1 + 0x1938) = 0xfde9;
      *(undefined8 *)(param_1 + 0x1930) = uVar12;
      if (0x192 < in_w8) {
        uVar12 = *(undefined8 *)Method_System_Collections_Generic_List<VA_MeshTree_Node>_Add__;
        *(undefined8 *)(param_1 + 0x1948) = 65000;
        *(undefined8 *)(param_1 + 0x1940) = uVar12;
        if (in_w8 != 0x193) {
          uVar12 = *(undefined8 *)Method_UnityEngine_AndroidJavaObject_Get<AndroidJavaObject>__;
          *(undefined8 *)(param_1 + 0x1958) = 0xfde9;
          *(undefined8 *)(param_1 + 0x1950) = uVar12;
          puVar4 = System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt64_TypeInfo;
          if (0x194 < in_w8) {
            uVar12 = *(undefined8 *)StringLiteral_12687;
            *(undefined8 *)(param_1 + 0x1968) = 0x3b6;
            *(undefined8 *)(param_1 + 0x1960) = uVar12;
            puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vminvq_u32__;
            **(long **)(*(long *)puVar4 + 0xb8) = param_1;
            lVar11 = FUN_00da4fb8(*(undefined8 *)puVar2,0x62);
            if (lVar11 == 0) {
LAB_01730bf0:
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 != 0) {
              uVar12 = *unaff_x22;
              *(undefined8 *)(lVar11 + 0x20) = 0x4e40025;
              *(undefined8 *)(lVar11 + 0x28) = uVar12;
              if (uVar1 != 1) {
                uVar12 = *unaff_x21;
                *(undefined8 *)(lVar11 + 0x30) = 0x4e401b5;
                *(undefined8 *)(lVar11 + 0x38) = uVar12;
                if (2 < uVar1) {
                  uVar12 = *unaff_x25;
                  *(undefined8 *)(lVar11 + 0x40) = 0x4e401f4;
                  *(undefined8 *)(lVar11 + 0x48) = uVar12;
                  if (uVar1 != 3) {
                    uVar12 = *unaff_x27;
                    *(undefined8 *)(lVar11 + 0x50) = 0x20204e802c4;
                    *(undefined8 *)(lVar11 + 0x58) = uVar12;
                    if (4 < uVar1) {
                      uVar12 = *unaff_x20;
                      *(undefined8 *)(lVar11 + 0x60) = 0x4e502e1;
                      *(undefined8 *)(lVar11 + 0x68) = uVar12;
                      if (uVar1 != 5) {
                        uVar12 = *unaff_x26;
                        *(undefined8 *)(lVar11 + 0x70) = 0x4e90307;
                        *(undefined8 *)(lVar11 + 0x78) = uVar12;
                        if (6 < uVar1) {
                          uVar12 = *(undefined8 *)StringLiteral_11892;
                          *(undefined8 *)(lVar11 + 0x80) = 0x4e40352;
                          *(undefined8 *)(lVar11 + 0x88) = uVar12;
                          if (uVar1 != 7) {
                            uVar12 = *(undefined8 *)PTR_DAT_033f3360;
                            *(undefined8 *)(lVar11 + 0x90) = 0x20204e20354;
                            *(undefined8 *)(lVar11 + 0x98) = uVar12;
                            if (8 < uVar1) {
                              uVar12 = *unaff_x28;
                              *(undefined8 *)(lVar11 + 0xa0) = 0x4e40357;
                              *(undefined8 *)(lVar11 + 0xa8) = uVar12;
                              if (uVar1 != 9) {
                                uVar12 = *(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidGamepadWithDpadButtons>__
                                ;
                                *(undefined8 *)(lVar11 + 0xb0) = 0x4e60359;
                                *(undefined8 *)(lVar11 + 0xb8) = uVar12;
                                if (10 < uVar1) {
                                  uVar12 = *unaff_x24;
                                  *(undefined8 *)(lVar11 + 0xc0) = 0x4e4035a;
                                  *(undefined8 *)(lVar11 + 200) = uVar12;
                                  if (uVar1 != 0xb) {
                                    uVar12 = *unaff_x23;
                                    *(undefined8 *)(lVar11 + 0xd0) = 0x4e4035c;
                                    *(undefined8 *)(lVar11 + 0xd8) = uVar12;
                                    if (0xc < uVar1) {
                                      uVar12 = *(undefined8 *)
                                                Method_System_ThrowHelper_ThrowArgumentException__;
                                      *(undefined8 *)(lVar11 + 0xe0) = 0x4e4035d;
                                      *(undefined8 *)(lVar11 + 0xe8) = uVar12;
                                      if (uVar1 != 0xd) {
                                        uVar12 = *unaff_x19;
                                        *(undefined8 *)(lVar11 + 0xf0) = 0x20204e7035e;
                                        *(undefined8 *)(lVar11 + 0xf8) = uVar12;
                                        if (0xe < uVar1) {
                                          uVar12 = *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_ProBuilder_MeshOperations_AppendElements_<>c_<CreateShapeFromPolygon>b__8_0__
                                          ;
                                          *(undefined8 *)(lVar11 + 0x100) = 0x4e4035f;
                                          *(undefined8 *)(lVar11 + 0x108) = uVar12;
                                          if (uVar1 != 0xf) {
                                            uVar12 = *(undefined8 *)PTR_DAT_033f4bb0;
                                            *(undefined8 *)(lVar11 + 0x110) = 0x4e80360;
                                            *(undefined8 *)(lVar11 + 0x118) = uVar12;
                                            if (0x10 < uVar1) {
                                              uVar12 = *(undefined8 *)PTR_DAT_033ea960;
                                              *(undefined8 *)(lVar11 + 0x120) = 0x4e40361;
                                              *(undefined8 *)(lVar11 + 0x128) = uVar12;
                                              puVar9 = 
                                              Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryReader_readHeader<Type>__
                                              ;
                                              puVar6 = 
                                              Method_Newtonsoft_Json_Utilities_ReflectionDelegateFactory_CreateGet<object>__
                                              ;
                                              puVar8 = 
                                              Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__
                                              ;
                                              puVar7 = 
                                              Method_UnityEngine_UI_Collections_IndexedSet<IClipper>_AddUnique__
                                              ;
                                              puVar5 = 
                                              Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__
                                              ;
                                              puVar3 = TMPro_TMP_InputField_TypeInfo;
                                              puVar2 = 
                                              UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs_TypeInfo
                                              ;
                                              if (uVar1 != 0x11) {
                                                uVar12 = *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                                                ;
                                                *(undefined8 *)(lVar11 + 0x130) = 0x20204e30362;
                                                *(undefined8 *)(lVar11 + 0x138) = uVar12;
                                                if (0x12 < uVar1) {
                                                  uVar12 = *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputManager_GetUnsupportedDevices__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x140) = 0x4e50365;
                                                  *(undefined8 *)(lVar11 + 0x148) = uVar12;
                                                  if (uVar1 != 0x13) {
                                                    uVar12 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar11 + 0x150) = 0x4e20366;
                                                    *(undefined8 *)(lVar11 + 0x158) = uVar12;
                                                    if (0x14 < uVar1) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<string,_fsData>_TryGetValue__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x160) = 0x303036a036a;
                                                  *(undefined8 *)(lVar11 + 0x168) = uVar12;
                                                  if (uVar1 != 0x15) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Serialization_MemberHolder_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x170) = 0x4e5036b;
                                                  *(undefined8 *)(lVar11 + 0x178) = uVar12;
                                                  if (0x16 < uVar1) {
                                                    uVar12 = *(undefined8 *)StringLiteral_8077;
                                                    *(undefined8 *)(lVar11 + 0x180) = 0x30303a403a4;
                                                    *(undefined8 *)(lVar11 + 0x188) = uVar12;
                                                    if (uVar1 != 0x17) {
                                                      uVar12 = *(undefined8 *)PTR_DAT_033f67a0;
                                                      *(undefined8 *)(lVar11 + 400) = 0x30303a803a8;
                                                      *(undefined8 *)(lVar11 + 0x198) = uVar12;
                                                      if (0x18 < uVar1) {
                                                        uVar12 = *(undefined8 *)puVar6;
                                                        *(undefined8 *)(lVar11 + 0x1a0) =
                                                             0x30303b503b5;
                                                        *(undefined8 *)(lVar11 + 0x1a8) = uVar12;
                                                        if (uVar1 != 0x19) {
                                                          uVar12 = *(undefined8 *)PTR_DAT_033f6700;
                                                          *(undefined8 *)(lVar11 + 0x1b0) =
                                                               0x30303b603b6;
                                                          *(undefined8 *)(lVar11 + 0x1b8) = uVar12;
                                                          if (0x1a < uVar1) {
                                                            uVar12 = *(undefined8 *)
                                                                      StringLiteral_1262;
                                                            *(undefined8 *)(lVar11 + 0x1c0) =
                                                                 0x4e60402;
                                                            *(undefined8 *)(lVar11 + 0x1c8) = uVar12
                                                            ;
                                                            if (uVar1 != 0x1b) {
                                                              uVar12 = *(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_ProBuilder_SharedVertex_GetSharedVerticesWithPositions__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x1d0) = 0x4e40417;
                                                  *(undefined8 *)(lVar11 + 0x1d8) = uVar12;
                                                  if (0x1c < uVar1) {
                                                    uVar12 = *(undefined8 *)PTR_DAT_033f3d00;
                                                    *(undefined8 *)(lVar11 + 0x1e0) = 0x4e40474;
                                                    *(undefined8 *)(lVar11 + 0x1e8) = uVar12;
                                                    if (uVar1 != 0x1d) {
                                                      uVar12 = *(undefined8 *)
                                                                System_EmptyArray<char>_TypeInfo;
                                                      *(undefined8 *)(lVar11 + 0x1f0) = 0x4e40475;
                                                      *(undefined8 *)(lVar11 + 0x1f8) = uVar12;
                                                      if (0x1e < uVar1) {
                                                        uVar12 = *(undefined8 *)PTR_DAT_033f1ee0;
                                                        *(undefined8 *)(lVar11 + 0x200) = 0x4e40476;
                                                        *(undefined8 *)(lVar11 + 0x208) = uVar12;
                                                        if (uVar1 != 0x1f) {
                                                          uVar12 = *(undefined8 *)
                                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f64__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x210) = 0x4e40477;
                                                  *(undefined8 *)(lVar11 + 0x218) = uVar12;
                                                  if (0x20 < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Char_GetUnicodeCategory__;
                                                  *(undefined8 *)(lVar11 + 0x220) = 0x4e40478;
                                                  *(undefined8 *)(lVar11 + 0x228) = uVar12;
                                                  if (uVar1 != 0x21) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_ArcherPaintingPuzzle_DomsArrowHit__;
                                                  *(undefined8 *)(lVar11 + 0x230) = 0x4e40479;
                                                  *(undefined8 *)(lVar11 + 0x238) = uVar12;
                                                  puVar6 = 
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Mesh,_ObiTriangleMeshHandle>_MoveNext__
                                                  ;
                                                  if (0x22 < uVar1) {
                                                    uVar12 = *(undefined8 *)StringLiteral_8629;
                                                    *(undefined8 *)(lVar11 + 0x240) = 0x4e4047a;
                                                    *(undefined8 *)(lVar11 + 0x248) = uVar12;
                                                    if (uVar1 != 0x23) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  System_Runtime_CompilerServices_StrongBox<int>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x250) = 0x4e4047b;
                                                  *(undefined8 *)(lVar11 + 600) = uVar12;
                                                  if (0x24 < uVar1) {
                                                    uVar12 = *(undefined8 *)StringLiteral_5041;
                                                    *(undefined8 *)(lVar11 + 0x260) = 0x4e4047c;
                                                    *(undefined8 *)(lVar11 + 0x268) = uVar12;
                                                    if (uVar1 != 0x25) {
                                                      uVar12 = *(undefined8 *)PTR_DAT_033f1840;
                                                      *(undefined8 *)(lVar11 + 0x270) = 0x4e4047d;
                                                      *(undefined8 *)(lVar11 + 0x278) = uVar12;
                                                      if (0x26 < uVar1) {
                                                        uVar12 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_IO_MemoryStream__ctor__;
                                                  *(undefined8 *)(lVar11 + 0x280) = 0x20004b004b0;
                                                  *(undefined8 *)(lVar11 + 0x288) = uVar12;
                                                  if (uVar1 != 0x27) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<Leaderboard>_Add__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x290) = 0x4b004b1;
                                                  *(undefined8 *)(lVar11 + 0x298) = uVar12;
                                                  if (0x28 < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x2a0) = 0x30304e204e2;
                                                  *(undefined8 *)(lVar11 + 0x2a8) = uVar12;
                                                  if (uVar1 != 0x29) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Meta_WitAi_Speech_VoiceAudioEvent_TypeInfo;
                                                  *(undefined8 *)(lVar11 + 0x2b0) = 0x30304e304e3;
                                                  *(undefined8 *)(lVar11 + 0x2b8) = uVar12;
                                                  if (0x2a < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x2c0) = 0x30304e404e4;
                                                  *(undefined8 *)(lVar11 + 0x2c8) = uVar12;
                                                  if (uVar1 != 0x2b) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_UIR_TextureSlotManager_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x2d0) = 0x30304e504e5;
                                                  *(undefined8 *)(lVar11 + 0x2d8) = uVar12;
                                                  if (0x2c < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                              Obi_IColliderWorldImpl_TypeInfo;
                                                    *(undefined8 *)(lVar11 + 0x2e0) = 0x30304e604e6;
                                                    *(undefined8 *)(lVar11 + 0x2e8) = uVar12;
                                                    if (uVar1 != 0x2d) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<AudioClip>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x2f0) = 0x30304e704e7;
                                                  *(undefined8 *)(lVar11 + 0x2f8) = uVar12;
                                                  if (0x2e < uVar1) {
                                                    uVar12 = *(undefined8 *)StringLiteral_12719;
                                                    *(undefined8 *)(lVar11 + 0x300) = 0x30304e804e8;
                                                    *(undefined8 *)(lVar11 + 0x308) = uVar12;
                                                    if (uVar1 != 0x2f) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x310) = 0x30304e904e9;
                                                  *(undefined8 *)(lVar11 + 0x318) = uVar12;
                                                  if (0x30 < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_TextureRegistry_TypeInfo;
                                                  *(undefined8 *)(lVar11 + 800) = 0x30304ea04ea;
                                                  *(undefined8 *)(lVar11 + 0x328) = uVar12;
                                                  if (uVar1 != 0x31) {
                                                    uVar12 = *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar11 + 0x330) = 0x4e42710;
                                                    *(undefined8 *)(lVar11 + 0x338) = uVar12;
                                                    if (0x32 < uVar1) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Queue<Action>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x340) = 0x4e4275f;
                                                  *(undefined8 *)(lVar11 + 0x348) = uVar12;
                                                  if (uVar1 != 0x33) {
                                                    uVar12 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar11 + 0x350) = 0x4b02ee0;
                                                    *(undefined8 *)(lVar11 + 0x358) = uVar12;
                                                    if (0x34 < uVar1) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnInit__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x360) = 0x4b02ee1;
                                                  *(undefined8 *)(lVar11 + 0x368) = uVar12;
                                                  if (uVar1 != 0x35) {
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    *(undefined8 *)(lVar11 + 0x370) = 0x10104e44e9f;
                                                    *(undefined8 *)(lVar11 + 0x378) = uVar12;
                                                    if (0x36 < uVar1) {
                                                      uVar12 = *(undefined8 *)PTR_DAT_033efc58;
                                                      *(undefined8 *)(lVar11 + 0x380) = 0x4e44f31;
                                                      *(undefined8 *)(lVar11 + 0x388) = uVar12;
                                                      if (uVar1 != 0x37) {
                                                        uVar12 = *(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmuld_laneq_f64__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x390) = 0x4e44f35;
                                                  *(undefined8 *)(lVar11 + 0x398) = uVar12;
                                                  if (0x38 < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_XmlTextReaderImpl_ParseNumericCharRefInline__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x3a0) = 0x4e44f36;
                                                  *(undefined8 *)(lVar11 + 0x3a8) = uVar12;
                                                  if (uVar1 != 0x39) {
                                                    uVar12 = *(undefined8 *)PTR_DAT_033f5558;
                                                    *(undefined8 *)(lVar11 + 0x3b0) = 0x4e44f38;
                                                    *(undefined8 *)(lVar11 + 0x3b8) = uVar12;
                                                    if (0x3a < uVar1) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_STMTools_Links_LinkController_PreparseTags__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x3c0) = 0x4e44f3c;
                                                  *(undefined8 *)(lVar11 + 0x3c8) = uVar12;
                                                  if (uVar1 != 0x3b) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<IInteractorView,_List<IInteractorView>>_get_Item__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x3d0) = 0x4e44f3d;
                                                  *(undefined8 *)(lVar11 + 0x3d8) = uVar12;
                                                  if (0x3c < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_ScriptableObject_CreateInstance<ProbeReferenceVolumeProfile>__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x3e0) = 0x3a44f42;
                                                  *(undefined8 *)(lVar11 + 1000) = uVar12;
                                                  if (uVar1 != 0x3d) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Autohand_HandDistanceGrabber_<>c__DisplayClass62_1_<StartCatchAssist>b__4__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x3f0) = 0x4e44f49;
                                                  *(undefined8 *)(lVar11 + 0x3f8) = uVar12;
                                                  if (0x3e < uVar1) {
                                                    uVar12 = *(undefined8 *)PTR_DAT_033edd00;
                                                    *(undefined8 *)(lVar11 + 0x400) = 0x4e84fc4;
                                                    *(undefined8 *)(lVar11 + 0x408) = uVar12;
                                                    if (uVar1 != 0x3f) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Meta_Voice_Logging_RingDictionaryBuffer<CorrelationID,_CorrelationID>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x410) = 0x4e74fc8;
                                                  *(undefined8 *)(lVar11 + 0x418) = uVar12;
                                                  if (0x40 < uVar1) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar11 + 0x420) = 0x30304e35182;
                                                    *(undefined8 *)(lVar11 + 0x428) = uVar12;
                                                    if (uVar1 != 0x41) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_IO_FileStream_InitBuffer__;
                                                  *(undefined8 *)(lVar11 + 0x430) = 0x4e45187;
                                                  *(undefined8 *)(lVar11 + 0x438) = uVar12;
                                                  if (0x42 < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                              System_Xml_Linq_XObject_TypeInfo;
                                                    *(undefined8 *)(lVar11 + 0x440) = 0x4e35221;
                                                    *(undefined8 *)(lVar11 + 0x448) = uVar12;
                                                    if (uVar1 != 0x43) {
                                                      uVar12 = *(undefined8 *)puVar2;
                                                      *(undefined8 *)(lVar11 + 0x450) =
                                                           0x30304e3556a;
                                                      *(undefined8 *)(lVar11 + 0x458) = uVar12;
                                                      if (0x44 < uVar1) {
                                                        uVar12 = *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<int,_object>_Clear__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x460) = 0x30304e46faf;
                                                  *(undefined8 *)(lVar11 + 0x468) = uVar12;
                                                  if (uVar1 != 0x45) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<KeyValuePair<string,_object>>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x470) = 0x30304e26fb0;
                                                  *(undefined8 *)(lVar11 + 0x478) = uVar12;
                                                  if (0x46 < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Obi_ObiNativeList<Vector4>_Add__;
                                                  *(undefined8 *)(lVar11 + 0x480) = 0x10104e66fb1;
                                                  *(undefined8 *)(lVar11 + 0x488) = uVar12;
                                                  if (uVar1 != 0x47) {
                                                    uVar12 = *(undefined8 *)StringLiteral_9634;
                                                    *(undefined8 *)(lVar11 + 0x490) = 0x30304e96fb2;
                                                    *(undefined8 *)(lVar11 + 0x498) = uVar12;
                                                    if (0x48 < uVar1) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<OVRSceneAnchor>_get_Count__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x4a0) = 0x30304e36fb3;
                                                  *(undefined8 *)(lVar11 + 0x4a8) = uVar12;
                                                  if (uVar1 != 0x49) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_SignatureType_get_CustomAttributes__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x4b0) = 0x30304e86fb4;
                                                  *(undefined8 *)(lVar11 + 0x4b8) = uVar12;
                                                  if (0x4a < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Pool_IObjectPool<HashSet<int>>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x4c0) = 0x30304e56fb5;
                                                  *(undefined8 *)(lVar11 + 0x4c8) = uVar12;
                                                  if (uVar1 != 0x4b) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_JsonContainerType_TypeInfo;
                                                  *(undefined8 *)(lVar11 + 0x4d0) = 0x20204e76fb6;
                                                  *(undefined8 *)(lVar11 + 0x4d8) = uVar12;
                                                  if (0x4c < uVar1) {
                                                    uVar12 = *(undefined8 *)StringLiteral_519;
                                                    *(undefined8 *)(lVar11 + 0x4e0) = 0x30304e66fb7;
                                                    *(undefined8 *)(lVar11 + 0x4e8) = uVar12;
                                                    if (uVar1 != 0x4d) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Stack_Enumerator<__Il2CppFullySharedGenericType>_MoveNext__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x4f0) = 0x30104e46fbd;
                                                  *(undefined8 *)(lVar11 + 0x4f8) = uVar12;
                                                  if (0x4e < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Newtonsoft_Json_Serialization_IValueProvider_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x500) = 0x30304e796c6;
                                                  *(undefined8 *)(lVar11 + 0x508) = uVar12;
                                                  if (uVar1 != 0x4f) {
                                                    uVar12 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar11 + 0x510) = 0x10103a4c42c;
                                                    *(undefined8 *)(lVar11 + 0x518) = uVar12;
                                                    if (0x50 < uVar1) {
                                                      uVar12 = *(undefined8 *)float_var;
                                                      *(undefined8 *)(lVar11 + 0x520) =
                                                           0x30103a4c42d;
                                                      *(undefined8 *)(lVar11 + 0x528) = uVar12;
                                                      if (uVar1 != 0x51) {
                                                        uVar12 = *(undefined8 *)puVar6;
                                                        *(undefined8 *)(lVar11 + 0x530) = 0x3a4c42e;
                                                        *(undefined8 *)(lVar11 + 0x538) = uVar12;
                                                        if (0x52 < uVar1) {
                                                          uVar12 = *(undefined8 *)StringLiteral_2965
                                                          ;
                                                          *(undefined8 *)(lVar11 + 0x540) =
                                                               0x30303a4cadc;
                                                          *(undefined8 *)(lVar11 + 0x548) = uVar12;
                                                          if (uVar1 != 0x53) {
                                                            uVar12 = *(undefined8 *)
                                                                      StringLiteral_819;
                                                            *(undefined8 *)(lVar11 + 0x550) =
                                                                 0x10103b5caed;
                                                            *(undefined8 *)(lVar11 + 0x558) = uVar12
                                                            ;
                                                            if (0x54 < uVar1) {
                                                              uVar12 = *(undefined8 *)
                                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_veorq_s8__;
                                                  *(undefined8 *)(lVar11 + 0x560) = 0x30303a8d698;
                                                  *(undefined8 *)(lVar11 + 0x568) = uVar12;
                                                  if (uVar1 != 0x55) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Events_UnityEvent<Collider>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x570) = 0xdeaadeaa;
                                                  *(undefined8 *)(lVar11 + 0x578) = uVar12;
                                                  if (0x56 < uVar1) {
                                                    uVar12 = *(undefined8 *)UnityEngine_Keyframe_var
                                                    ;
                                                    *(undefined8 *)(lVar11 + 0x580) = 0xdeabdeab;
                                                    *(undefined8 *)(lVar11 + 0x588) = uVar12;
                                                    if (uVar1 != 0x57) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<Character>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x590) = 0xdeacdeac;
                                                  *(undefined8 *)(lVar11 + 0x598) = uVar12;
                                                  if (0x58 < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_IEnumerator<ITreeViewItem>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x5a0) = 0xdeaddead;
                                                  *(undefined8 *)(lVar11 + 0x5a8) = uVar12;
                                                  if (uVar1 != 0x59) {
                                                    uVar12 = *(undefined8 *)StringLiteral_6317;
                                                    *(undefined8 *)(lVar11 + 0x5b0) = 0xdeaedeae;
                                                    *(undefined8 *)(lVar11 + 0x5b8) = uVar12;
                                                    if (0x5a < uVar1) {
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_XmlWellFormedWriter_WriteFullEndElement__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x5c0) = 0xdeafdeaf;
                                                  *(undefined8 *)(lVar11 + 0x5c8) = uVar12;
                                                  if (uVar1 != 0x5b) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_WebHeaderCollection_Add__;
                                                  *(undefined8 *)(lVar11 + 0x5d0) = 0xdeb0deb0;
                                                  *(undefined8 *)(lVar11 + 0x5d8) = uVar12;
                                                  if (0x5c < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_List<MethodInfo>__ctor__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x5e0) = 0xdeb1deb1;
                                                  *(undefined8 *)(lVar11 + 0x5e8) = uVar12;
                                                  if (uVar1 != 0x5d) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x5f0) = 0xdeb2deb2;
                                                  *(undefined8 *)(lVar11 + 0x5f8) = uVar12;
                                                  if (0x5e < uVar1) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_set_Capacity__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x600) = 0xdeb3deb3;
                                                  *(undefined8 *)(lVar11 + 0x608) = uVar12;
                                                  if (uVar1 != 0x5f) {
                                                    uVar12 = *(undefined8 *)
                                                              Unity_Mathematics_double2_TypeInfo;
                                                    *(undefined8 *)(lVar11 + 0x610) = 0x10104b0fde8;
                                                    *(undefined8 *)(lVar11 + 0x618) = uVar12;
                                                    if (0x60 < uVar1) {
                                                      uVar12 = *(undefined8 *)StringLiteral_9520;
                                                      *(undefined8 *)(lVar11 + 0x620) =
                                                           0x30304b0fde9;
                                                      *(undefined8 *)(lVar11 + 0x628) = uVar12;
                                                      if (uVar1 != 0x61) {
                                                        *(undefined8 *)(lVar11 + 0x638) = 0;
                                                        *(undefined8 *)(lVar11 + 0x630) = 0;
                                                        puVar2 = 
                                                  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo
                                                  ;
                                                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) =
                                                       lVar11;
                                                  iVar10 = FUN_0172b6bc();
                                                  *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10)
                                                       = iVar10 + -1;
                                                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                  }
                                                  if (DAT_03775606 == '\0') {
                                                    thunk_FUN_00d48444(
                                                  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo
                                                  );
                                                  DAT_03775606 = '\x01';
                                                  }
                                                  puVar3 = 
                                                  System_Net_WebHeaderCollection_RfcChar___TypeInfo;
                                                  lVar11 = *(long *)puVar2;
                                                  if (*(int *)(lVar11 + 0xe0) == 0) {
                                                    thunk_FUN_00d32864();
                                                    lVar11 = *(long *)puVar2;
                                                  }
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(lVar11 + 0xb8) + 0x18);
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  puVar2 = 
                                                  Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__0__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01298e34(lVar11,uVar12,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Collections_Generic_List<HandJointMap>_TypeInfo
                                                  );
                                                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18
                                                           ) = lVar11;
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01298da0(lVar11,*(undefined8 *)
                                                                                                                                                  
                                                  Method_OVRAnchor_TryGetComponent<OVRAnchorContainer>__
                                                  );
                                                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20
                                                           ) = lVar11;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


