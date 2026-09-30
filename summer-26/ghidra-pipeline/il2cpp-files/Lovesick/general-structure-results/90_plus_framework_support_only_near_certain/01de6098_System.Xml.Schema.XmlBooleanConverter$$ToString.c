/*
FUNCTION_NAME: System.Xml.Schema.XmlBooleanConverter$$ToString
ENTRY_POINT: 01de6098
PROGRAM: Lovesick-libil2cpp.so
SCORE: 216
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Xml_Schema_XmlBooleanConverter__ToString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  uint *puVar7;
  undefined8 *unaff_x22;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_10294);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Guid,_OVRSceneAnchor>_Remove__);
  thunk_FUN_00d48444(StringLiteral_4617);
  thunk_FUN_00d48444(StringLiteral_11184);
  thunk_FUN_00d48444(StringLiteral_5331);
  thunk_FUN_00d48444(Meta_Voice_Logging_ICoreLogger_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_6231);
  thunk_FUN_00d48444(PTR_DAT_033ead38);
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_get_Item__
                    );
  thunk_FUN_00d48444(StringLiteral_3321);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVProfile>_Clear__
                    );
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80>_SliceWithStride<Color32>__
                    );
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchValueAsync>d__19>__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f6ab0);
  thunk_FUN_00d48444(Method_Obi_ObiNativeList<EdgeMeshHeader>_get_Item__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                    );
  thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
  thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
  thunk_FUN_00d48444(StringLiteral_6673);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                    );
  thunk_FUN_00d48444(StringLiteral_6785);
  *(undefined1 *)(unaff_x21 + 0x926) = 1;
  plVar3 = (long *)FUN_00da4fb8(*unaff_x22,0x29);
  uVar6 = *unaff_x19;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x20);
  }
  lVar4 = FUN_01780344(uVar6,0);
  if (plVar3 == (long *)0x0) {
LAB_01de6c90:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_01de6c84:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  puVar1 = Method_UnityEngine_GameObject_GetComponentInChildren<LookAtCamera>__;
  puVar7 = (uint *)(plVar3 + 3);
  if (1 < *puVar7) {
    plVar3[5] = lVar4;
    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_01de6c84;
    puVar1 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
    if (2 < *puVar7) {
      plVar3[6] = lVar4;
      lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_01de6c84;
      puVar1 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
      if (3 < *puVar7) {
        plVar3[7] = lVar4;
        lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_01de6c84;
        puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
        if (4 < *puVar7) {
          plVar3[8] = lVar4;
          lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_01de6c84;
          puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
          if (5 < *puVar7) {
            plVar3[9] = lVar4;
            lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_01de6c84;
            puVar1 = StringLiteral_5228;
            if (6 < *puVar7) {
              plVar3[10] = lVar4;
              lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_01de6c84;
              puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
              if (7 < *puVar7) {
                plVar3[0xb] = lVar4;
                lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_01de6c84;
                puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                if (8 < *puVar7) {
                  plVar3[0xc] = lVar4;
                  lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)
                     ) goto LAB_01de6c84;
                  puVar1 = StringLiteral_6673;
                  if (9 < *puVar7) {
                    plVar3[0xd] = lVar4;
                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar5 == 0)) goto LAB_01de6c84;
                    puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                    if (10 < *puVar7) {
                      plVar3[0xe] = lVar4;
                      lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar5 == 0)) goto LAB_01de6c84;
                      puVar1 = 
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      ;
                      if (0xb < *puVar7) {
                        plVar3[0xf] = lVar4;
                        lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar5 == 0)) goto LAB_01de6c84;
                        puVar1 = 
                        System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                        ;
                        if (0xc < *puVar7) {
                          plVar3[0x10] = lVar4;
                          lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                             lVar5 == 0)) goto LAB_01de6c84;
                          puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                          if (0xd < *puVar7) {
                            plVar3[0x11] = lVar4;
                            lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                               lVar5 == 0)) goto LAB_01de6c84;
                            puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                            if (0xe < *puVar7) {
                              plVar3[0x12] = lVar4;
                              lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                              if ((lVar4 != 0) &&
                                 (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar5 == 0)) goto LAB_01de6c84;
                              puVar1 = Method_System_Collections_Generic_List<RendererList>_Add__;
                              if (0xf < *puVar7) {
                                plVar3[0x13] = lVar4;
                                lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                if ((lVar4 != 0) &&
                                   (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)
                                                              ), lVar5 == 0)) goto LAB_01de6c84;
                                puVar1 = 
                                System_Security_Principal_WindowsImpersonationContext_TypeInfo;
                                if (0x10 < *puVar7) {
                                  plVar3[0x14] = lVar4;
                                  lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                  if ((lVar4 != 0) &&
                                     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                        (*plVar3 + 0x40)),
                                     lVar5 == 0)) goto LAB_01de6c84;
                                  puVar1 = 
                                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                                  ;
                                  if (0x11 < *puVar7) {
                                    plVar3[0x15] = lVar4;
                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                    if ((lVar4 != 0) &&
                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                          (*plVar3 + 0x40)),
                                       lVar5 == 0)) goto LAB_01de6c84;
                                    puVar1 = StringLiteral_3349;
                                    if (0x12 < *puVar7) {
                                      plVar3[0x16] = lVar4;
                                      lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                      if ((lVar4 != 0) &&
                                         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                            (*plVar3 + 0x40)),
                                         lVar5 == 0)) goto LAB_01de6c84;
                                      puVar1 = StringLiteral_11159;
                                      if (0x13 < *puVar7) {
                                        plVar3[0x17] = lVar4;
                                        lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                        if ((lVar4 != 0) &&
                                           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                              (*plVar3 + 0x40)),
                                           lVar5 == 0)) goto LAB_01de6c84;
                                        puVar1 = 
                                        Method_System_Collections_Generic_Dictionary<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_Remove__
                                        ;
                                        if (0x14 < *puVar7) {
                                          plVar3[0x18] = lVar4;
                                          lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                          if ((lVar4 != 0) &&
                                             (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                (*plVar3 + 0x40)),
                                             lVar5 == 0)) goto LAB_01de6c84;
                                          puVar1 = 
                                          Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
                                          if (0x15 < *puVar7) {
                                            plVar3[0x19] = lVar4;
                                            lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                            if ((lVar4 != 0) &&
                                               (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                  (*plVar3 + 0x40)),
                                               lVar5 == 0)) goto LAB_01de6c84;
                                            puVar1 = PTR_DAT_033f3f28;
                                            if (0x16 < *puVar7) {
                                              plVar3[0x1a] = lVar4;
                                              lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                              if ((lVar4 != 0) &&
                                                 (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*plVar3 + 0x40)
                                                                            ), lVar5 == 0))
                                              goto LAB_01de6c84;
                                              puVar1 = 
                                              System_Collections_Generic_List<LogEntry>_TypeInfo;
                                              if (0x17 < *puVar7) {
                                                plVar3[0x1b] = lVar4;
                                                lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                if ((lVar4 != 0) &&
                                                   (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                      (*plVar3 +
                                                                                      0x40)),
                                                   lVar5 == 0)) goto LAB_01de6c84;
                                                puVar1 = StringLiteral_6785;
                                                if (0x18 < *puVar7) {
                                                  plVar3[0x1c] = lVar4;
                                                  lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40)), lVar5 == 0)) goto LAB_01de6c84;
                                                  puVar1 = StringLiteral_10294;
                                                  if (0x19 < *puVar7) {
                                                    plVar3[0x1d] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary<Guid,_OVRSceneAnchor>_Remove__
                                                  ;
                                                  if (0x1a < *puVar7) {
                                                    plVar3[0x1e] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = StringLiteral_4617;
                                                  if (0x1b < *puVar7) {
                                                    plVar3[0x1f] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = StringLiteral_11184;
                                                  if (0x1c < *puVar7) {
                                                    plVar3[0x20] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = StringLiteral_5331;
                                                  if (0x1d < *puVar7) {
                                                    plVar3[0x21] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = Meta_Voice_Logging_ICoreLogger_TypeInfo;
                                                  if (0x1e < *puVar7) {
                                                    plVar3[0x22] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = StringLiteral_6231;
                                                  if (0x1f < *puVar7) {
                                                    plVar3[0x23] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = PTR_DAT_033ead38;
                                                  if (0x20 < *puVar7) {
                                                    plVar3[0x24] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = 
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_get_Item__
                                                  ;
                                                  if (0x21 < *puVar7) {
                                                    plVar3[0x25] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = StringLiteral_3321;
                                                  if (0x22 < *puVar7) {
                                                    plVar3[0x26] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVProfile>_Clear__
                                                  ;
                                                  if (0x23 < *puVar7) {
                                                    plVar3[0x27] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = 
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80>_SliceWithStride<Color32>__
                                                  ;
                                                  if (0x24 < *puVar7) {
                                                    plVar3[0x28] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchValueAsync>d__19>__
                                                  ;
                                                  if (0x25 < *puVar7) {
                                                    plVar3[0x29] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = PTR_DAT_033f6ab0;
                                                  if (0x26 < *puVar7) {
                                                    plVar3[0x2a] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = 
                                                  Method_Obi_ObiNativeList<EdgeMeshHeader>_get_Item__
                                                  ;
                                                  if (0x27 < *puVar7) {
                                                    plVar3[0x2b] = lVar4;
                                                    lVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(
                                                  undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                                                  goto LAB_01de6c84;
                                                  puVar1 = PTR_DAT_033eb8b0;
                                                  if (0x28 < *puVar7) {
                                                    plVar3[0x2c] = lVar4;
                                                    puVar2 = StringLiteral_8899;
                                                    **(long **)(*(long *)puVar1 + 0xb8) =
                                                         (long)plVar3;
                                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = PTR_DAT_033f15b0;
                                                    if (lVar4 != 0) {
                                                      FUN_012d239c(lVar4,0,*(undefined8 *)
                                                                                                                                                        
                                                  System_Nullable<long>_var,0);
                                                  *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) =
                                                       lVar4;
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar4 != 0) {
                                                    FUN_01271240(lVar4,*(undefined8 *)
                                                                        StringLiteral_9070);
                                                    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                             0x10) = lVar4;
                                                    return;
                                                  }
                                                  }
                                                  goto LAB_01de6c90;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


