/*
FUNCTION_NAME: Obi.ObiRopeMeshRenderer$$PreprocessInputMesh
ENTRY_POINT: 01850734
PROGRAM: Lovesick-libil2cpp.so
SCORE: 292
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void Obi_ObiRopeMeshRenderer__PreprocessInputMesh(undefined8 *param_1,undefined8 param_2)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  undefined8 uVar13;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 *puVar14;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *puVar15;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 *puVar16;
  undefined4 uStack000000000000000c;
  
  puVar1 = Method_UnityEngine_InputSystem_LowLevel_KeyboardState__ctor__;
  puVar14 = *(undefined8 **)(unaff_x24 + 0xb58);
  puVar15 = *(undefined8 **)(unaff_x27 + 0xb8);
  puVar16 = *(undefined8 **)(unaff_x29 + 0x1b0);
  FUN_01298da0(param_2,*param_1);
  uVar13 = *unaff_x22;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_01780344(uVar13,0);
  uStack000000000000000c = 2;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*unaff_x28,0);
  uStack000000000000000c = 3;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*unaff_x25,0);
  uStack000000000000000c = 4;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*unaff_x26,0);
  uStack000000000000000c = 5;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*puVar14,0);
  uStack000000000000000c = 6;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_8522,0);
  uStack000000000000000c = 7;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*puVar15,0);
  uStack000000000000000c = 8;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)TMPro_TMP_PageInfo___TypeInfo,0);
  uStack000000000000000c = 9;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*puVar16,0);
  uStack000000000000000c = 10;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_3957,0);
  uStack000000000000000c = 0xb;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0)
  ;
  uStack000000000000000c = 0xc;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_146,0);
  uStack000000000000000c = 0xd;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0);
  uStack000000000000000c = 0xe;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
                        ,0);
  uStack000000000000000c = 0xf;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
  uStack000000000000000c = 0x10;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)Method_System_Reflection_EventInfo_GetEventFromHandle__,0);
  uStack000000000000000c = 0x11;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
  uStack000000000000000c = 0x12;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_5148,0);
  uStack000000000000000c = 0x13;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                        ,0);
  uStack000000000000000c = 0x14;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ProbeVolumeState,_ProbeVolumeAsset>_MoveNext__
                        ,0);
  uStack000000000000000c = 0x15;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  puVar2 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
  uVar13 = FUN_01780344(*(undefined8 *)
                         System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                        ,0);
  uStack000000000000000c = 0x16;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt16LiftedToNull_TypeInfo
                        ,0);
  uStack000000000000000c = 0x17;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  puVar9 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
  uVar13 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
  uStack000000000000000c = 0x18;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)System_Collections_Generic_HashSet<IXRGroupMember>_TypeInfo,0
                       );
  uStack000000000000000c = 0x19;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  puVar6 = Method_System_Collections_Generic_List<RendererList>_Add__;
  uVar13 = FUN_01780344(*(undefined8 *)Method_System_Collections_Generic_List<RendererList>_Add__,0)
  ;
  uStack000000000000000c = 0x1a;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)Method_Oculus_Platform_Request<AppDownloadResult>__ctor__,0);
  uStack000000000000000c = 0x1b;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)PTR_DAT_033f3f28,0);
  uStack000000000000000c = 0x1c;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)Method_System_Net_WebOperation_SetPriorityRequest__,0);
  uStack000000000000000c = 0x1d;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  puVar7 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
  uVar13 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
  uStack000000000000000c = 0x1e;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_Watch<T>_var,0);
  uStack000000000000000c = 0x1f;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_3349,0);
  uStack000000000000000c = 0x20;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_1036,0);
  uStack000000000000000c = 0x21;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         System_Security_Principal_WindowsImpersonationContext_TypeInfo,0);
  uStack000000000000000c = 0x22;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         System_Collections_Specialized_OrderedDictionary_OrderedDictionaryEnumerator_TypeInfo
                        ,0);
  uStack000000000000000c = 0x23;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)System_Collections_Generic_List<LogEntry>_TypeInfo,0);
  uStack000000000000000c = 0x24;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)Method_OVRTask_SetResult<OVRPlugin_Result>__,0);
  uStack000000000000000c = 0x25;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_6785,0);
  uStack000000000000000c = 0x26;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  puVar4 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  uVar13 = FUN_01780344(*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                        ,0);
  uStack000000000000000c = 0x27;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)StringLiteral_11159,0);
  uStack000000000000000c = 0x28;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  uVar13 = FUN_01780344(*(undefined8 *)
                         Method_UnityEngine_GameObject_GetComponentInChildren<LookAtCamera>__,0);
  uStack000000000000000c = 0x29;
  FUN_0129a054(param_2,uVar13,&stack0x0000000c,*unaff_x21);
  puVar5 = Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__;
  **(undefined8 **)
    (*(long *)Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
    + 0xb8) = param_2;
  plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                  DigitalOpus_MB_Core_MB_TextureCompressionQuality___TypeInfo,0x13);
  puVar8 = Method_SoccerBlocker_HideCrowd__;
  uVar13 = FUN_01780344(*(undefined8 *)Method_SoccerBlocker_HideCrowd__,0);
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar11 != 0) {
    FUN_017b46ec(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    *(undefined4 *)(lVar11 + 0x18) = 0;
    if (plVar10 != (long *)0x0) {
      lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar12 == 0) {
LAB_0185169c:
        uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar13,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_018516a8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar10[4] = lVar11;
      uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar11 != 0) {
        FUN_017b46ec(lVar11,0);
        *(undefined8 *)(lVar11 + 0x10) = uVar13;
        *(undefined4 *)(lVar11 + 0x18) = 1;
        lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar12 == 0) goto LAB_0185169c;
        if (*(uint *)(plVar10 + 3) < 2) goto LAB_018516a8;
        plVar10[5] = lVar11;
        uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar11 != 0) {
          FUN_017b46ec(lVar11,0);
          *(undefined8 *)(lVar11 + 0x10) = uVar13;
          *(undefined4 *)(lVar11 + 0x18) = 0x29;
          lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
          puVar3 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
          if (lVar12 == 0) goto LAB_0185169c;
          if (*(uint *)(plVar10 + 3) < 3) goto LAB_018516a8;
          plVar10[6] = lVar11;
          uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar11 != 0) {
            FUN_017b46ec(lVar11,0);
            *(undefined8 *)(lVar11 + 0x10) = uVar13;
            *(undefined4 *)(lVar11 + 0x18) = 4;
            lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar12 == 0) goto LAB_0185169c;
            if (*(uint *)(plVar10 + 3) < 4) goto LAB_018516a8;
            plVar10[7] = lVar11;
            uVar13 = FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__,
                                  0);
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar11 != 0) {
              FUN_017b46ec(lVar11,0);
              *(undefined8 *)(lVar11 + 0x10) = uVar13;
              *(undefined4 *)(lVar11 + 0x18) = 2;
              lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
              puVar3 = OVRPlugin_OVRP_1_50_0_TypeInfo;
              if (lVar12 == 0) goto LAB_0185169c;
              if (*(uint *)(plVar10 + 3) < 5) goto LAB_018516a8;
              plVar10[8] = lVar11;
              uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar11 != 0) {
                FUN_017b46ec(lVar11,0);
                *(undefined8 *)(lVar11 + 0x10) = uVar13;
                *(undefined4 *)(lVar11 + 0x18) = 6;
                lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
                if (lVar12 == 0) goto LAB_0185169c;
                if (*(uint *)(plVar10 + 3) < 6) goto LAB_018516a8;
                plVar10[9] = lVar11;
                uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar11 != 0) {
                  FUN_017b46ec(lVar11,0);
                  *(undefined8 *)(lVar11 + 0x10) = uVar13;
                  *(undefined4 *)(lVar11 + 0x18) = 0xe;
                  lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                  puVar3 = StringLiteral_5228;
                  if (lVar12 == 0) goto LAB_0185169c;
                  if (*(uint *)(plVar10 + 3) < 7) goto LAB_018516a8;
                  plVar10[10] = lVar11;
                  uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if (lVar11 != 0) {
                    FUN_017b46ec(lVar11,0);
                    *(undefined8 *)(lVar11 + 0x10) = uVar13;
                    *(undefined4 *)(lVar11 + 0x18) = 8;
                    lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                    if (lVar12 == 0) goto LAB_0185169c;
                    if (*(uint *)(plVar10 + 3) < 8) goto LAB_018516a8;
                    plVar10[0xb] = lVar11;
                    uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar11 != 0) {
                      FUN_017b46ec(lVar11,0);
                      *(undefined8 *)(lVar11 + 0x10) = uVar13;
                      *(undefined4 *)(lVar11 + 0x18) = 10;
                      lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                      puVar3 = 
                      Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                      if (lVar12 == 0) goto LAB_0185169c;
                      if (*(uint *)(plVar10 + 3) < 9) goto LAB_018516a8;
                      plVar10[0xc] = lVar11;
                      uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                      if (lVar11 != 0) {
                        FUN_017b46ec(lVar11,0);
                        *(undefined8 *)(lVar11 + 0x10) = uVar13;
                        *(undefined4 *)(lVar11 + 0x18) = 0xc;
                        lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                        puVar3 = StringLiteral_6673;
                        if (lVar12 == 0) goto LAB_0185169c;
                        if (*(uint *)(plVar10 + 3) < 10) goto LAB_018516a8;
                        plVar10[0xd] = lVar11;
                        uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        if (lVar11 != 0) {
                          FUN_017b46ec(lVar11,0);
                          *(undefined8 *)(lVar11 + 0x10) = uVar13;
                          *(undefined4 *)(lVar11 + 0x18) = 0x10;
                          lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                          puVar3 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                          if (lVar12 == 0) goto LAB_0185169c;
                          if (*(uint *)(plVar10 + 3) < 0xb) goto LAB_018516a8;
                          plVar10[0xe] = lVar11;
                          uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                          if (lVar11 != 0) {
                            FUN_017b46ec(lVar11,0);
                            *(undefined8 *)(lVar11 + 0x10) = uVar13;
                            *(undefined4 *)(lVar11 + 0x18) = 0x12;
                            lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                            puVar3 = 
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                            ;
                            if (lVar12 == 0) goto LAB_0185169c;
                            if (*(uint *)(plVar10 + 3) < 0xc) goto LAB_018516a8;
                            plVar10[0xf] = lVar11;
                            uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
                            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                            if (lVar11 != 0) {
                              FUN_017b46ec(lVar11,0);
                              *(undefined8 *)(lVar11 + 0x10) = uVar13;
                              *(undefined4 *)(lVar11 + 0x18) = 0x14;
                              lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                              if (lVar12 == 0) goto LAB_0185169c;
                              if (*(uint *)(plVar10 + 3) < 0xd) goto LAB_018516a8;
                              plVar10[0x10] = lVar11;
                              uVar13 = FUN_01780344(*(undefined8 *)puVar2,0);
                              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                              if (lVar11 != 0) {
                                FUN_017b46ec(lVar11,0);
                                *(undefined8 *)(lVar11 + 0x10) = uVar13;
                                *(undefined4 *)(lVar11 + 0x18) = 0x16;
                                lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40))
                                ;
                                if (lVar12 == 0) goto LAB_0185169c;
                                if (*(uint *)(plVar10 + 3) < 0xe) goto LAB_018516a8;
                                plVar10[0x11] = lVar11;
                                uVar13 = FUN_01780344(*(undefined8 *)puVar9,0);
                                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                if (lVar11 != 0) {
                                  FUN_017b46ec(lVar11,0);
                                  *(undefined8 *)(lVar11 + 0x10) = uVar13;
                                  *(undefined4 *)(lVar11 + 0x18) = 0x18;
                                  lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                      (*plVar10 + 0x40));
                                  if (lVar12 == 0) goto LAB_0185169c;
                                  if (*(uint *)(plVar10 + 3) < 0xf) goto LAB_018516a8;
                                  plVar10[0x12] = lVar11;
                                  uVar13 = FUN_01780344(*(undefined8 *)puVar7,0);
                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                  if (lVar11 != 0) {
                                    FUN_017b46ec(lVar11,0);
                                    *(undefined8 *)(lVar11 + 0x10) = uVar13;
                                    *(undefined4 *)(lVar11 + 0x18) = 0x1e;
                                    lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                        (*plVar10 + 0x40));
                                    if (lVar12 == 0) goto LAB_0185169c;
                                    if (*(uint *)(plVar10 + 3) < 0x10) goto LAB_018516a8;
                                    plVar10[0x13] = lVar11;
                                    uVar13 = FUN_01780344(*(undefined8 *)puVar6,0);
                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                    if (lVar11 != 0) {
                                      FUN_017b46ec(lVar11,0);
                                      *(undefined8 *)(lVar11 + 0x10) = uVar13;
                                      *(undefined4 *)(lVar11 + 0x18) = 0x1a;
                                      lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                          (*plVar10 + 0x40));
                                      if (lVar12 == 0) goto LAB_0185169c;
                                      if (*(uint *)(plVar10 + 3) < 0x11) goto LAB_018516a8;
                                      plVar10[0x14] = lVar11;
                                      uVar13 = FUN_01780344(*(undefined8 *)puVar8,0);
                                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                      if (lVar11 != 0) {
                                        FUN_017b46ec(lVar11,0);
                                        *(undefined8 *)(lVar11 + 0x10) = uVar13;
                                        *(undefined4 *)(lVar11 + 0x18) = 0;
                                        lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                            (*plVar10 + 0x40));
                                        if (lVar12 == 0) goto LAB_0185169c;
                                        if (*(uint *)(plVar10 + 3) < 0x12) goto LAB_018516a8;
                                        plVar10[0x15] = lVar11;
                                        uVar13 = FUN_01780344(*(undefined8 *)puVar4,0);
                                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                        if (lVar11 != 0) {
                                          FUN_017b46ec(lVar11,0);
                                          *(undefined8 *)(lVar11 + 0x10) = uVar13;
                                          *(undefined4 *)(lVar11 + 0x18) = 0x27;
                                          lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                              (*plVar10 + 0x40));
                                          if (lVar12 == 0) goto LAB_0185169c;
                                          if (*(uint *)(plVar10 + 3) < 0x13) goto LAB_018516a8;
                                          plVar10[0x16] = lVar11;
                                          puVar1 = UnityEngine_UIElements_IGroupManager_TypeInfo;
                                          *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8) =
                                               plVar10;
                                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                          puVar1 = 
                                          System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>_TypeInfo
                                          ;
                                          if (lVar11 != 0) {
                                            FUN_012d239c(lVar11,0,*(undefined8 *)StringLiteral_7482,
                                                         0);
                                            lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                            if (lVar12 != 0) {
                                              FUN_013c8f44(lVar12,lVar11,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_get_Item__
                                                  );
                                              *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) =
                                                   lVar12;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


