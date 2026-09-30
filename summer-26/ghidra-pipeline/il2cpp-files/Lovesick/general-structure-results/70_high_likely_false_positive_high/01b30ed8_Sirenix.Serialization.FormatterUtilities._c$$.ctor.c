/*
FUNCTION_NAME: Sirenix.Serialization.FormatterUtilities.<>c$$.ctor
ENTRY_POINT: 01b30ed8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_rendering_without_foveation_or_eye_source;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Sirenix_Serialization_FormatterUtilities_<>c___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  undefined8 uVar6;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  uint *unaff_x25;
  uint *puVar7;
  
  uVar6 = **(undefined8 **)(param_1 + 0xb8);
  lVar3 = thunk_FUN_00d62348();
  if (lVar3 != 0) {
    FUN_01b41a50(lVar3,uVar6,*(undefined8 *)StringLiteral_7066,0);
    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar4 == 0) {
LAB_01b340b8:
      uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,0);
    }
    if (*unaff_x25 < 0xd) {
LAB_01b340c4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x19[0x10] = lVar3;
    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
    lVar3 = thunk_FUN_00d62348(*unaff_x24);
    if (lVar3 != 0) {
      FUN_01b41a50(lVar3,uVar6,*(undefined8 *)StringLiteral_1759,0);
      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar4 == 0) goto LAB_01b340b8;
      if (*unaff_x25 < 0xe) goto LAB_01b340c4;
      unaff_x19[0x11] = lVar3;
      uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
      lVar3 = thunk_FUN_00d62348(*unaff_x24);
      if (lVar3 != 0) {
        FUN_01b41a50(lVar3,uVar6,*(undefined8 *)StringLiteral_12975,0);
        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar4 == 0) goto LAB_01b340b8;
        if (*unaff_x25 < 0xf) goto LAB_01b340c4;
        unaff_x19[0x12] = lVar3;
        uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
        lVar3 = thunk_FUN_00d62348(*unaff_x24);
        if (lVar3 != 0) {
          FUN_01b41a50(lVar3,uVar6,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_high_u8__,0);
          lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar4 == 0) goto LAB_01b340b8;
          if (*unaff_x25 < 0x10) goto LAB_01b340c4;
          unaff_x19[0x13] = lVar3;
          uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
          lVar3 = thunk_FUN_00d62348(*unaff_x24);
          if (lVar3 != 0) {
            FUN_01b41a50(lVar3,uVar6,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<long,_ComputedStyle>_set_Item__
                         ,0);
            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar4 == 0) goto LAB_01b340b8;
            if (*unaff_x25 < 0x11) goto LAB_01b340c4;
            unaff_x19[0x14] = lVar3;
            uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
            lVar3 = thunk_FUN_00d62348(*unaff_x24);
            if (lVar3 != 0) {
              FUN_01b41a50(lVar3,uVar6,
                           *(undefined8 *)System_Collections_Generic_List<InternedString>_TypeInfo,0
                          );
              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar4 == 0) goto LAB_01b340b8;
              if (*unaff_x25 < 0x12) goto LAB_01b340c4;
              unaff_x19[0x15] = lVar3;
              uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
              lVar3 = thunk_FUN_00d62348(*unaff_x24);
              if (lVar3 != 0) {
                FUN_01b41a50(lVar3,uVar6,*(undefined8 *)Unity_Mathematics_double3x2_TypeInfo,0);
                lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar4 == 0) goto LAB_01b340b8;
                if (*unaff_x25 < 0x13) goto LAB_01b340c4;
                unaff_x19[0x16] = lVar3;
                uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                lVar3 = thunk_FUN_00d62348(*unaff_x24);
                if (lVar3 != 0) {
                  FUN_01b41a50(lVar3,uVar6,
                               *(undefined8 *)
                                UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo,0)
                  ;
                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar4 == 0) goto LAB_01b340b8;
                  if (*unaff_x25 < 0x14) goto LAB_01b340c4;
                  unaff_x19[0x17] = lVar3;
                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                  if (lVar3 != 0) {
                    FUN_01b41a50(lVar3,uVar6,*(undefined8 *)StringLiteral_8861,0);
                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar4 == 0) goto LAB_01b340b8;
                    if (*unaff_x25 < 0x15) goto LAB_01b340c4;
                    unaff_x19[0x18] = lVar3;
                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                    if (lVar3 != 0) {
                      FUN_01b41a50(lVar3,uVar6,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<IXRSelectInteractable>_GetEnumerator__
                                   ,0);
                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar4 == 0) goto LAB_01b340b8;
                      if (*unaff_x25 < 0x16) goto LAB_01b340c4;
                      unaff_x19[0x19] = lVar3;
                      uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                      lVar3 = thunk_FUN_00d62348(*unaff_x24);
                      if (lVar3 != 0) {
                        FUN_01b41a50(lVar3,uVar6,
                                     *(undefined8 *)UnityEngine_UIElements_EventDispatcher_TypeInfo,
                                     0);
                        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                        if (lVar4 == 0) goto LAB_01b340b8;
                        if (*unaff_x25 < 0x17) goto LAB_01b340c4;
                        unaff_x19[0x1a] = lVar3;
                        uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                        lVar3 = thunk_FUN_00d62348(*unaff_x24);
                        if (lVar3 != 0) {
                          FUN_01b41a50(lVar3,uVar6,*(undefined8 *)StringLiteral_2508,0);
                          lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                          if (lVar4 == 0) goto LAB_01b340b8;
                          if (*unaff_x25 < 0x18) goto LAB_01b340c4;
                          unaff_x19[0x1b] = lVar3;
                          uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                          lVar3 = thunk_FUN_00d62348(*unaff_x24);
                          if (lVar3 != 0) {
                            FUN_01b41a50(lVar3,uVar6,*(undefined8 *)PTR_DAT_033f0690,0);
                            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar4 == 0) goto LAB_01b340b8;
                            if (*unaff_x25 < 0x19) goto LAB_01b340c4;
                            unaff_x19[0x1c] = lVar3;
                            uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                            lVar3 = thunk_FUN_00d62348(*unaff_x24);
                            if (lVar3 != 0) {
                              FUN_01b41a50(lVar3,uVar6,
                                           *(undefined8 *)
                                            Oculus_Interaction_PoseDetection_TransformFeatureConfig_TypeInfo
                                           ,0);
                              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
                              if (lVar4 == 0) goto LAB_01b340b8;
                              if (*unaff_x25 < 0x1a) goto LAB_01b340c4;
                              unaff_x19[0x1d] = lVar3;
                              uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                              lVar3 = thunk_FUN_00d62348(*unaff_x24);
                              if (lVar3 != 0) {
                                FUN_01b41a50(lVar3,uVar6,*(undefined8 *)StringLiteral_5766,0);
                                lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40))
                                ;
                                if (lVar4 == 0) goto LAB_01b340b8;
                                if (*unaff_x25 < 0x1b) goto LAB_01b340c4;
                                unaff_x19[0x1e] = lVar3;
                                uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                if (lVar3 != 0) {
                                  FUN_01b41a50(lVar3,uVar6,
                                               *(undefined8 *)
                                                Method_OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_System_Collections_IEnumerator_Reset__
                                               ,0);
                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40));
                                  if (lVar4 == 0) goto LAB_01b340b8;
                                  if (*unaff_x25 < 0x1c) goto LAB_01b340c4;
                                  unaff_x19[0x1f] = lVar3;
                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                  if (lVar3 != 0) {
                                    FUN_01b41a50(lVar3,uVar6,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<Guid,_Action<Guid>>_Remove__
                                                 ,0);
                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40));
                                    if (lVar4 == 0) goto LAB_01b340b8;
                                    if (*unaff_x25 < 0x1d) goto LAB_01b340c4;
                                    unaff_x19[0x20] = lVar3;
                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                    if (lVar3 != 0) {
                                      FUN_01b41a50(lVar3,uVar6,*(undefined8 *)StringLiteral_1492,0);
                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40));
                                      if (lVar4 == 0) goto LAB_01b340b8;
                                      if (*unaff_x25 < 0x1e) goto LAB_01b340c4;
                                      unaff_x19[0x21] = lVar3;
                                      uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                      lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                      if (lVar3 != 0) {
                                        FUN_01b41a50(lVar3,uVar6,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__
                                                  ,0);
                                        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40));
                                        if (lVar4 == 0) goto LAB_01b340b8;
                                        if (*unaff_x25 < 0x1f) goto LAB_01b340c4;
                                        unaff_x19[0x22] = lVar3;
                                        uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                        lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                        if (lVar3 != 0) {
                                          FUN_01b41a50(lVar3,uVar6,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_InputSystem_InputControl_GetChildControl<TouchPressControl>__
                                                  ,0);
                                          lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40));
                                          if (lVar4 == 0) goto LAB_01b340b8;
                                          if (*unaff_x25 < 0x20) goto LAB_01b340c4;
                                          unaff_x19[0x23] = lVar3;
                                          uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                          lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                          if (lVar3 != 0) {
                                            FUN_01b41a50(lVar3,uVar6,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRObjectPool_ListScope<OVRSpatialAnchor>_Dispose__
                                                  ,0);
                                            lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40));
                                            if (lVar4 == 0) goto LAB_01b340b8;
                                            if (*unaff_x25 < 0x21) goto LAB_01b340c4;
                                            unaff_x19[0x24] = lVar3;
                                            uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                            lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                            if (lVar3 != 0) {
                                              FUN_01b41a50(lVar3,uVar6,
                                                           *(undefined8 *)PTR_DAT_033ed118,0);
                                              lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                              ;
                                              if (lVar4 == 0) goto LAB_01b340b8;
                                              if (*unaff_x25 < 0x22) goto LAB_01b340c4;
                                              unaff_x19[0x25] = lVar3;
                                              uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                              lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                              if (lVar3 != 0) {
                                                FUN_01b41a50(lVar3,uVar6,
                                                             *(undefined8 *)
                                                                                                                            
                                                  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_24_var
                                                  ,0);
                                                lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  ));
                                                if (lVar4 == 0) goto LAB_01b340b8;
                                                if (*unaff_x25 < 0x23) goto LAB_01b340c4;
                                                unaff_x19[0x26] = lVar3;
                                                uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                if (lVar3 != 0) {
                                                  FUN_01b41a50(lVar3,uVar6,
                                                               *(undefined8 *)
                                                                Method_System_Boolean_Parse__,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x24) goto LAB_01b340c4;
                                                  unaff_x19[0x27] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Clear__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x25) goto LAB_01b340c4;
                                                  unaff_x19[0x28] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<int,_TMP_ColorGradient>__ctor__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x26) goto LAB_01b340c4;
                                                  unaff_x19[0x29] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Xml_Schema_XsdBuilder_BuildAny_ProcessContents__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x27) goto LAB_01b340c4;
                                                  unaff_x19[0x2a] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033f2c80,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x28) goto LAB_01b340c4;
                                                    unaff_x19[0x2b] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_List<ProBuilderMesh>_get_Count__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x29) goto LAB_01b340c4;
                                                  unaff_x19[0x2c] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_AudioInputState__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x2a) goto LAB_01b340c4;
                                                  unaff_x19[0x2d] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_IO_FileStream_SetLength__,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x2b) goto LAB_01b340c4;
                                                  unaff_x19[0x2e] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_8951,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x2c) goto LAB_01b340c4;
                                                    unaff_x19[0x2f] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x2d) goto LAB_01b340c4;
                                                  unaff_x19[0x30] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x2e) goto LAB_01b340c4;
                                                  unaff_x19[0x31] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_5349,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x2f) goto LAB_01b340c4;
                                                    unaff_x19[0x32] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)PTR_DAT_033eb208,0
                                                                  );
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x30) goto LAB_01b340c4;
                                                  unaff_x19[0x33] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass23_0_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x31) goto LAB_01b340c4;
                                                  unaff_x19[0x34] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033f0740,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x32) goto LAB_01b340c4;
                                                    unaff_x19[0x35] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                    StringLiteral_11540,0);
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x33) goto LAB_01b340c4;
                                                  unaff_x19[0x36] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Text_Encoder_Convert__,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x34) goto LAB_01b340c4;
                                                  unaff_x19[0x37] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_2312,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x35) goto LAB_01b340c4;
                                                    unaff_x19[0x38] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_ProBuilder_ProBuilderMesh_<>c_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x36) goto LAB_01b340c4;
                                                  unaff_x19[0x39] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_UIElements_GroupBoxUtility_TypeInfo,0)
                                                  ;
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x37) goto LAB_01b340c4;
                                                  unaff_x19[0x3a] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Oculus_Platform_Models_NetSyncSessionsChangedNotification_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x38) goto LAB_01b340c4;
                                                  unaff_x19[0x3b] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_4286,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x39) goto LAB_01b340c4;
                                                    unaff_x19[0x3c] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_RequestLightsDelegate_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x3a) goto LAB_01b340c4;
                                                  unaff_x19[0x3d] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_6838,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x3b) goto LAB_01b340c4;
                                                    unaff_x19[0x3e] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_add_onGestureStarted__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x3c) goto LAB_01b340c4;
                                                  unaff_x19[0x3f] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_GuitarPick_<OnPickGrabbedCoroutine>d__10_System_Collections_IEnumerator_Reset__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x3d) goto LAB_01b340c4;
                                                  unaff_x19[0x40] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_10631,
                                                                 0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x3e) goto LAB_01b340c4;
                                                    unaff_x19[0x41] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_UI_InputField_ContentType___TypeInfo,0
                                                  );
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x3f) goto LAB_01b340c4;
                                                  unaff_x19[0x42] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_2076,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*unaff_x25 < 0x40) goto LAB_01b340c4;
                                                    unaff_x19[0x43] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                    if (lVar3 != 0) {
                                                      FUN_01b41a50(lVar3,uVar6,
                                                                   *(undefined8 *)StringLiteral_3041
                                                                   ,0);
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x41) goto LAB_01b340c4;
                                                  unaff_x19[0x44] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x42) goto LAB_01b340c4;
                                                  unaff_x19[0x45] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Xml_Schema_XmlUntypedConverter_ToDouble__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x43) goto LAB_01b340c4;
                                                  unaff_x19[0x46] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<EdgeLookup>__ctor__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x44) goto LAB_01b340c4;
                                                  unaff_x19[0x47] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Collections_Generic_List<LinkObject>_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x45) goto LAB_01b340c4;
                                                  unaff_x19[0x48] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*unaff_x24);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41a50(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_Clear__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*unaff_x25 < 0x46) goto LAB_01b340c4;
                                                  unaff_x19[0x49] = lVar3;
                                                  puVar2 = StringLiteral_9724;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__
                                                  ;
                                                  lVar3 = *(long *)(*unaff_x22 + 0xb8);
                                                  *(long **)(lVar3 + 0x1268) = unaff_x19;
                                                  memset((void *)(lVar3 + 0x1270),0,0xe3c);
                                                  plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                 puVar1,0x54);
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if ((lVar3 != 0) &&
                                                     (FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)PTR_DAT_033f16a8,0
                                                                  ), plVar5 != (long *)0x0)) {
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    puVar7 = (uint *)(plVar5 + 3);
                                                    if (*puVar7 == 0) goto LAB_01b340c4;
                                                    plVar5[4] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)PTR_DAT_033f6a40,0
                                                                  );
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 2) goto LAB_01b340c4;
                                                  plVar5[5] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_TaskAwaiter<MRUK_LoadDeviceResult>_get_IsCompleted__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 3) goto LAB_01b340c4;
                                                  plVar5[6] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_152,0)
                                                    ;
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 4) goto LAB_01b340c4;
                                                    plVar5[7] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_Mono_Security_X509_X509ExtensionCollection_IndexOf__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 5) goto LAB_01b340c4;
                                                  plVar5[8] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_3223,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 6) goto LAB_01b340c4;
                                                    plVar5[9] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Xml_XmlSqlBinaryReader_SetupContentAsXXX__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 7) goto LAB_01b340c4;
                                                  plVar5[10] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033f3f70,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 8) goto LAB_01b340c4;
                                                    plVar5[0xb] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_Unity_Mathematics_math_select_shuffle_component__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 9) goto LAB_01b340c4;
                                                  plVar5[0xc] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<NavMeshModifierVolume>_GetEnumerator__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 10) goto LAB_01b340c4;
                                                  plVar5[0xd] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_10814,
                                                                 0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0xb) goto LAB_01b340c4;
                                                    plVar5[0xe] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Unity_Mathematics_float2x2_TypeInfo,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0xc) goto LAB_01b340c4;
                                                  plVar5[0xf] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_Playables_ScriptPlayable<SubtitleBehavior>_GetBehaviour__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0xd) goto LAB_01b340c4;
                                                  plVar5[0x10] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_Playables_PlayableExtensions_SetInputWeight<AnimationRemoveScalePlayable>__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0xe) goto LAB_01b340c4;
                                                  plVar5[0x11] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033eed60,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0xf) goto LAB_01b340c4;
                                                    plVar5[0x12] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  System_Buffers_ArrayPool<char>_TypeInfo,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x10) goto LAB_01b340c4;
                                                  plVar5[0x13] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<IObiJobHandle>_Dispose__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x11) goto LAB_01b340c4;
                                                  plVar5[0x14] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Globalization_TimeSpanParse_TimeSpanResult_SetFailure__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x12) goto LAB_01b340c4;
                                                  plVar5[0x15] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<VA_AudioSource>_get_Item__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x13) goto LAB_01b340c4;
                                                  plVar5[0x16] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033f4980,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x14) goto LAB_01b340c4;
                                                    plVar5[0x17] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)PTR_DAT_033f43b0,0
                                                                  );
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x15) goto LAB_01b340c4;
                                                  plVar5[0x18] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<GrabbableObject>_get_Count__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x16) goto LAB_01b340c4;
                                                  plVar5[0x19] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<TMP_Style>__ctor__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x17) goto LAB_01b340c4;
                                                  plVar5[0x1a] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_SimpleCheckForDuplicateAttributes__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x18) goto LAB_01b340c4;
                                                  plVar5[0x1b] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_UIElements_UIRAtlasAllocator_Row___TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x19) goto LAB_01b340c4;
                                                  plVar5[0x1c] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x1a) goto LAB_01b340c4;
                                                  plVar5[0x1d] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_UIElements_EventBase<PointerCancelEvent>_TypeId__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x1b) goto LAB_01b340c4;
                                                  plVar5[0x1e] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_InputSystem_InputControlList<object>__ctor__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x1c) goto LAB_01b340c4;
                                                  plVar5[0x1f] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<DecalDrawCallChunk>_RemoveRange__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x1d) goto LAB_01b340c4;
                                                  plVar5[0x20] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_6095,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x1e) goto LAB_01b340c4;
                                                    plVar5[0x21] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_float>_get_Current__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x1f) goto LAB_01b340c4;
                                                  plVar5[0x22] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_5909,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x20) goto LAB_01b340c4;
                                                    plVar5[0x23] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_Obi_ObiNativeList<Triangle>_Dispose__,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x21) goto LAB_01b340c4;
                                                  plVar5[0x24] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_Oculus_Interaction_HandVisual_UpdateSkeleton__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x22) goto LAB_01b340c4;
                                                  plVar5[0x25] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033f2eb8,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x23) goto LAB_01b340c4;
                                                    plVar5[0x26] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Xml_XmlTextWriter_VerifyPrefixXml__,
                                                  0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x24) goto LAB_01b340c4;
                                                  plVar5[0x27] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_Events_UnityEvent<TouchScreenKeyboard_Status>_Invoke__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x25) goto LAB_01b340c4;
                                                  plVar5[0x28] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<VRequestResponse<string>>_GetAwaiter__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x26) goto LAB_01b340c4;
                                                  plVar5[0x29] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_8743,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x27) goto LAB_01b340c4;
                                                    plVar5[0x2a] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_add_onGestureStarted__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x28) goto LAB_01b340c4;
                                                  plVar5[0x2b] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_4874,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x29) goto LAB_01b340c4;
                                                    plVar5[0x2c] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)StringLiteral_6186
                                                                   ,0);
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x2a) goto LAB_01b340c4;
                                                  plVar5[0x2d] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_OVRControllerTest_<>c_<Start>b__4_17__,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x2b) goto LAB_01b340c4;
                                                  plVar5[0x2e] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Collections_Generic_List<VisualElementAsset>_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x2c) goto LAB_01b340c4;
                                                  plVar5[0x2f] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033eb458,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x2d) goto LAB_01b340c4;
                                                    plVar5[0x30] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)PTR_DAT_033f0620,0
                                                                  );
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x2e) goto LAB_01b340c4;
                                                  plVar5[0x31] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_RCG_Lovesick_RhythmGame_BassGuitar_OnGrab__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x2f) goto LAB_01b340c4;
                                                  plVar5[0x32] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_4649,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x30) goto LAB_01b340c4;
                                                    plVar5[0x33] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                    StringLiteral_11143,0);
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x31) goto LAB_01b340c4;
                                                  plVar5[0x34] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<EventTrigger_Entry>__ctor__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x32) goto LAB_01b340c4;
                                                  plVar5[0x35] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Vector4,_Vector4,_VectorOptions>>__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x33) goto LAB_01b340c4;
                                                  plVar5[0x36] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  DG_Tweening_ShortcutExtensions_<>c__DisplayClass27_0_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x34) goto LAB_01b340c4;
                                                  plVar5[0x37] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Tuple<Pose,_float,_float,_float>_get_Item2__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x35) goto LAB_01b340c4;
                                                  plVar5[0x38] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List<MeshSubsetCombineUtility_MeshInstance>_Add__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x36) goto LAB_01b340c4;
                                                  plVar5[0x39] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                  Obi_IObiConstraints_TypeInfo,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x37) goto LAB_01b340c4;
                                                    plVar5[0x3a] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Mono_Globalization_Unicode_Contraction_TypeInfo,0)
                                                  ;
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x38) goto LAB_01b340c4;
                                                  plVar5[0x3b] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_8469,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x39) goto LAB_01b340c4;
                                                    plVar5[0x3c] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)StringLiteral_9257
                                                                   ,0);
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x3a) goto LAB_01b340c4;
                                                  plVar5[0x3d] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Meta_Voice_UnityOpus_ErrorCode_TypeInfo,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x3b) goto LAB_01b340c4;
                                                  plVar5[0x3e] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_Rendering_RendererUtils_RendererList_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x3c) goto LAB_01b340c4;
                                                  plVar5[0x3f] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_Obi_ObiNativeList<Vector3>_get_count__,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x3d) goto LAB_01b340c4;
                                                  plVar5[0x40] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<float>__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x3e) goto LAB_01b340c4;
                                                  plVar5[0x41] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033f30c0,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x3f) goto LAB_01b340c4;
                                                    plVar5[0x42] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)StringLiteral_6109
                                                                   ,0);
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x40) goto LAB_01b340c4;
                                                  plVar5[0x43] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_UIElements_VisualTreeAsset_<get_templateDependencies>d__17_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x41) goto LAB_01b340c4;
                                                  plVar5[0x44] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_9894,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x42) goto LAB_01b340c4;
                                                    plVar5[0x45] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)PTR_DAT_033ed580,0
                                                                  );
                                                      lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x43) goto LAB_01b340c4;
                                                  plVar5[0x46] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033eca68,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x44) goto LAB_01b340c4;
                                                    plVar5[0x47] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_00000C26_BurstDirectCall_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x45) goto LAB_01b340c4;
                                                  plVar5[0x48] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  OVR_OpenVR_IVRIOBuffer__Read_TypeInfo,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x46) goto LAB_01b340c4;
                                                  plVar5[0x49] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<RuntimeElement>_MoveNext__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x47) goto LAB_01b340c4;
                                                  plVar5[0x4a] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MB3_TextureBaker_<_CreateAtlasesCoroutineAtlases>d__109_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x48) goto LAB_01b340c4;
                                                  plVar5[0x4b] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_TMPro_TMP_InputField_<CaretBlink>d__276_System_Collections_IEnumerator_Reset__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x49) goto LAB_01b340c4;
                                                  plVar5[0x4c] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_14175,
                                                                 0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x4a) goto LAB_01b340c4;
                                                    plVar5[0x4d] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_Component_GetComponent<Animation>__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x4b) goto LAB_01b340c4;
                                                  plVar5[0x4e] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour<PoolManagerSingleton>__ctor__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x4c) goto LAB_01b340c4;
                                                  plVar5[0x4f] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_Events_BaseInvokableCall_TypeInfo,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x4d) goto LAB_01b340c4;
                                                  plVar5[0x50] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<int,_int>_TryGetValue__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x4e) goto LAB_01b340c4;
                                                  plVar5[0x51] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033ecbd0,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x4f) goto LAB_01b340c4;
                                                    plVar5[0x52] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_Autohand_Demo_TextPlacePointEvent_OnGrab__,
                                                  0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x50) goto LAB_01b340c4;
                                                  plVar5[0x53] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)PTR_DAT_033f6238,0);
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x51) goto LAB_01b340c4;
                                                    plVar5[0x54] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_List<RuleMatcher>__ctor__
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x52) goto LAB_01b340c4;
                                                  plVar5[0x55] = lVar3;
                                                  uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar3 != 0) {
                                                    FUN_01b41b78(lVar3,uVar6,
                                                                 *(undefined8 *)StringLiteral_8444,0
                                                                );
                                                    lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01b340b8;
                                                    if (*puVar7 < 0x53) goto LAB_01b340c4;
                                                    plVar5[0x56] = lVar3;
                                                    uVar6 = **(undefined8 **)(*unaff_x23 + 0xb8);
                                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar3 != 0) {
                                                      FUN_01b41b78(lVar3,uVar6,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  RCG_Lovesick_Locomotion_TeleportPoint_<ShowCoroutine>d__28_TypeInfo
                                                  ,0);
                                                  lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01b340b8;
                                                  if (*puVar7 < 0x54) goto LAB_01b340c4;
                                                  plVar5[0x57] = lVar3;
                                                  puVar1 = PTR_DAT_033eca08;
                                                  lVar4 = *unaff_x22;
                                                  lVar3 = *(long *)(lVar4 + 0xb8);
                                                  *(long **)(lVar3 + 0x20b0) = plVar5;
                                                  memset((void *)(lVar3 + 0x20b8),0,0x118);
                                                  memset((void *)(*(long *)(lVar4 + 0xb8) + 0x21d0),
                                                         0,0x138);
                                                  lVar3 = *(long *)(lVar4 + 0xb8);
                                                  *(undefined8 *)(lVar3 + 0x2310) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2308) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2320) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2318) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2330) = 0;
                                                  *(undefined8 *)(lVar3 + 9000) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2340) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2338) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2348) = 0;
                                                  lVar3 = *(long *)(lVar4 + 0xb8);
                                                  *(undefined8 *)(lVar3 + 0x2358) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2350) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2368) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2360) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2378) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2370) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2388) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2380) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2398) = 0;
                                                  *(undefined8 *)(lVar3 + 0x2390) = 0;
                                                  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x23a0)
                                                       = 0xffffffff;
                                                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar3 != 0) {
                                                    FUN_01791214(lVar3,0,0,0,0);
                                                    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x23a8)
                                                         = lVar3;
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


