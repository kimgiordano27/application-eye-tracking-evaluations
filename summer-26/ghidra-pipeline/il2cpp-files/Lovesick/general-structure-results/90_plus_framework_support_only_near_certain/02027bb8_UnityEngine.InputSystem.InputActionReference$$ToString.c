/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionReference$$ToString
ENTRY_POINT: 02027bb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 210
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_13;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_InputSystem_InputActionReference__ToString(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  
  lVar3 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR_DAT_033eae80;
  if (lVar3 != 0) {
    uVar6 = *(uint *)(unaff_x20 + 3);
    if (uVar6 != 0) {
      unaff_x20[4] = *unaff_x21;
      lVar3 = *(long *)puVar1;
      if (lVar3 != 0) {
        lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar3 == 0) goto LAB_0202ba58;
        uVar6 = *(uint *)(unaff_x20 + 3);
      }
      if (1 < uVar6) {
        unaff_x20[5] = *(long *)puVar1;
        lVar3 = thunk_FUN_00d6225c();
        if (lVar3 == 0) goto LAB_0202ba58;
        if (0x31 < *unaff_x23) {
          unaff_x19[0x35] = (long)unaff_x20;
          plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
          puVar1 = StringLiteral_1828;
          if (plVar4 == (long *)0x0) {
LAB_0202ba64:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((*(long *)StringLiteral_1828 != 0) &&
             (lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_1828,*(undefined8 *)(*plVar4 + 0x40)
                                        ), lVar3 == 0)) goto LAB_0202ba58;
          puVar2 = Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__
          ;
          uVar6 = *(uint *)(plVar4 + 3);
          if (uVar6 != 0) {
            plVar4[4] = *(long *)puVar1;
            lVar3 = *(long *)puVar2;
            if (lVar3 != 0) {
              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
              if (lVar3 == 0) goto LAB_0202ba58;
              uVar6 = *(uint *)(plVar4 + 3);
            }
            if (1 < uVar6) {
              plVar4[5] = *(long *)puVar2;
              lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar3 == 0) goto LAB_0202ba58;
              if (0x32 < *unaff_x23) {
                unaff_x19[0x36] = (long)plVar4;
                plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                puVar1 = 
                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Count__
                ;
                if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                if ((*(long *)
                      Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Count__
                     != 0) &&
                   (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Count__
                                               ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                goto LAB_0202ba58;
                puVar2 = Method_Newtonsoft_Json_Linq_JArray_<LoadAsync>d__2_MoveNext__;
                uVar6 = *(uint *)(plVar4 + 3);
                if (uVar6 != 0) {
                  plVar4[4] = *(long *)puVar1;
                  lVar3 = *(long *)puVar2;
                  if (lVar3 != 0) {
                    lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                    if (lVar3 == 0) goto LAB_0202ba58;
                    uVar6 = *(uint *)(plVar4 + 3);
                  }
                  if (1 < uVar6) {
                    plVar4[5] = *(long *)puVar2;
                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar3 == 0) goto LAB_0202ba58;
                    if (0x33 < *unaff_x23) {
                      unaff_x19[0x37] = (long)plVar4;
                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                      puVar1 = System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo
                      ;
                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                      if ((*(long *)
                            System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo !=
                           0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                      goto LAB_0202ba58;
                      puVar2 = 
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<__Il2CppFullySharedGenericStructType>_CopyFrom__
                      ;
                      uVar6 = *(uint *)(plVar4 + 3);
                      if (uVar6 != 0) {
                        plVar4[4] = *(long *)puVar1;
                        lVar3 = *(long *)puVar2;
                        if (lVar3 != 0) {
                          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                          if (lVar3 == 0) goto LAB_0202ba58;
                          uVar6 = *(uint *)(plVar4 + 3);
                        }
                        if (1 < uVar6) {
                          plVar4[5] = *(long *)puVar2;
                          lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                          if (lVar3 == 0) goto LAB_0202ba58;
                          if (0x34 < *unaff_x23) {
                            unaff_x19[0x38] = (long)plVar4;
                            plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                            puVar1 = Method_System_Collections_Generic_List<MeshRenderer>_Clear__;
                            if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                            if ((*(long *)
                                  Method_System_Collections_Generic_List<MeshRenderer>_Clear__ != 0)
                               && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<MeshRenderer>_Clear__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                            goto LAB_0202ba58;
                            puVar2 = Method_Obi_ObiNativeList<Vector2>_Add__;
                            uVar6 = *(uint *)(plVar4 + 3);
                            if (uVar6 != 0) {
                              plVar4[4] = *(long *)puVar1;
                              lVar3 = *(long *)puVar2;
                              if (lVar3 != 0) {
                                lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                                if (lVar3 == 0) goto LAB_0202ba58;
                                uVar6 = *(uint *)(plVar4 + 3);
                              }
                              if (1 < uVar6) {
                                plVar4[5] = *(long *)puVar2;
                                lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)(*unaff_x19 + 0x40)
                                                          );
                                if (lVar3 == 0) goto LAB_0202ba58;
                                if (0x35 < *unaff_x23) {
                                  unaff_x19[0x39] = (long)plVar4;
                                  plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                  puVar1 = StringLiteral_8538;
                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                  if ((*(long *)StringLiteral_8538 != 0) &&
                                     (lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_8538,
                                                                 *(undefined8 *)(*plVar4 + 0x40)),
                                     lVar3 == 0)) goto LAB_0202ba58;
                                  puVar2 = StringLiteral_14066;
                                  uVar6 = *(uint *)(plVar4 + 3);
                                  if (uVar6 != 0) {
                                    plVar4[4] = *(long *)puVar1;
                                    lVar3 = *(long *)puVar2;
                                    if (lVar3 != 0) {
                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                        (*plVar4 + 0x40));
                                      if (lVar3 == 0) goto LAB_0202ba58;
                                      uVar6 = *(uint *)(plVar4 + 3);
                                    }
                                    if (1 < uVar6) {
                                      plVar4[5] = *(long *)puVar2;
                                      lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)
                                                                         (*unaff_x19 + 0x40));
                                      if (lVar3 == 0) goto LAB_0202ba58;
                                      if (0x36 < *unaff_x23) {
                                        unaff_x19[0x3a] = (long)plVar4;
                                        plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                        puVar1 = Method_System_Type_GetProperty__;
                                        if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                        if ((*(long *)Method_System_Type_GetProperty__ != 0) &&
                                           (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Type_GetProperty__,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                        goto LAB_0202ba58;
                                        puVar2 = 
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_s16__;
                                        uVar6 = *(uint *)(plVar4 + 3);
                                        if (uVar6 != 0) {
                                          plVar4[4] = *(long *)puVar1;
                                          lVar3 = *(long *)puVar2;
                                          if (lVar3 != 0) {
                                            lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                              (*plVar4 + 0x40));
                                            if (lVar3 == 0) goto LAB_0202ba58;
                                            uVar6 = *(uint *)(plVar4 + 3);
                                          }
                                          if (1 < uVar6) {
                                            plVar4[5] = *(long *)puVar2;
                                            lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)
                                                                               (*unaff_x19 + 0x40));
                                            if (lVar3 == 0) goto LAB_0202ba58;
                                            if (0x37 < *unaff_x23) {
                                              unaff_x19[0x3b] = (long)plVar4;
                                              plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                              puVar1 = System_CompatibilitySwitches_TypeInfo;
                                              if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                              if ((*(long *)System_CompatibilitySwitches_TypeInfo !=
                                                   0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_CompatibilitySwitches_TypeInfo,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                              goto LAB_0202ba58;
                                              puVar2 = 
                                              System_Threading_Tasks_Task<WebSocketReceiveResult>_TypeInfo
                                              ;
                                              uVar6 = *(uint *)(plVar4 + 3);
                                              if (uVar6 != 0) {
                                                plVar4[4] = *(long *)puVar1;
                                                lVar3 = *(long *)puVar2;
                                                if (lVar3 != 0) {
                                                  lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)
                                                                                    (*plVar4 + 0x40)
                                                                            );
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                }
                                                if (1 < uVar6) {
                                                  plVar4[5] = *(long *)puVar2;
                                                  lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)
                                                                                     (*unaff_x19 +
                                                                                     0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  if (0x38 < *unaff_x23) {
                                                    unaff_x19[0x3c] = (long)plVar4;
                                                    plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                    puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d>__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d>__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d>__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Data_DataRow_GetCurrentRecordNo__;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x39 < *unaff_x23) {
                                                      unaff_x19[0x3d] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s8__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s8__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s8__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_IO_Enumeration_FileSystemEnumerable<DirectoryInfo>__ctor__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x3a < *unaff_x23) {
                                                      unaff_x19[0x3e] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Linq_Enumerable_<SkipIterator>d__31<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Linq_Enumerable_<SkipIterator>d__31<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Linq_Enumerable_<SkipIterator>d__31<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<SimpleDissolve>__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x3b < *unaff_x23) {
                                                      unaff_x19[0x3f] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Reflection_MethodInfo_GetGenericArguments__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Reflection_MethodInfo_GetGenericArguments__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Reflection_MethodInfo_GetGenericArguments__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass43_0_<DOLocalRotateQuaternion>b__1__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x3c < *unaff_x23) {
                                                      unaff_x19[0x40] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = PTR_DAT_033ecb08;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)PTR_DAT_033ecb08 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033ecb08,*(undefined8 *)(*plVar4 + 0x40)),
                                                  lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = PTR_DAT_033ee298;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x3d < *unaff_x23) {
                                                      unaff_x19[0x41] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  System_Net_Cache_RequestCachePolicy_TypeInfo;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x3e < *unaff_x23) {
                                                      unaff_x19[0x42] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_UnityEngine_ProBuilder_ArrayUtility_Add<int>__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_ProBuilder_ArrayUtility_Add<int>__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_ProBuilder_ArrayUtility_Add<int>__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  UnityEngine_InputSystem_DefaultInputActions_IPlayerActions_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x3f < *unaff_x23) {
                                                      unaff_x19[0x43] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = Meta_WitAi_MatchIntent_TypeInfo;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)Meta_WitAi_MatchIntent_TypeInfo
                                                           != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Meta_WitAi_MatchIntent_TypeInfo,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_6101;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x40 < *unaff_x23) {
                                                      unaff_x19[0x44] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_Newtonsoft_Json_Linq_Extensions_<>c_<Properties>b__4_0__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Newtonsoft_Json_Linq_Extensions_<>c_<Properties>b__4_0__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Newtonsoft_Json_Linq_Extensions_<>c_<Properties>b__4_0__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = PTR_DAT_033f1cb0;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x41 < *unaff_x23) {
                                                      unaff_x19[0x45] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_8343;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_8343 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_8343,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  UnityEngine_Timeline_ITimeControl_TypeInfo;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x42 < *unaff_x23) {
                                                      unaff_x19[0x46] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_8235;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_8235 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_8235,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x43 < *unaff_x23) {
                                                      unaff_x19[0x47] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_15__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_15__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_15__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  System_Collections_Generic_Dictionary<ICanvasElement,_int>_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x44 < *unaff_x23) {
                                                      unaff_x19[0x48] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_12680;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x45 < *unaff_x23) {
                                                      unaff_x19[0x49] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Face,_List<int>>_Dispose__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Face,_List<int>>_Dispose__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Face,_List<int>>_Dispose__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationProcessId_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x46 < *unaff_x23) {
                                                      unaff_x19[0x4a] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__0__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x47 < *unaff_x23) {
                                                      unaff_x19[0x4b] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_MedleyBossMemoryGame_<WrongNotePlayedCoroutine>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_MedleyBossMemoryGame_<WrongNotePlayedCoroutine>d__48_System_Collections_IEnumerator_Reset__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_MedleyBossMemoryGame_<WrongNotePlayedCoroutine>d__48_System_Collections_IEnumerator_Reset__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_FullSerializer_fsBaseConverter_DeserializeMember<Keyframe[]>__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x48 < *unaff_x23) {
                                                      unaff_x19[0x4c] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = Method_System_Convert_ToInt64__;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)Method_System_Convert_ToInt64__
                                                           != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Convert_ToInt64__,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<long,_FontAsset>_Remove__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x49 < *unaff_x23) {
                                                      unaff_x19[0x4d] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Reflection_Emit_EnumBuilder_get_Assembly__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Reflection_Emit_EnumBuilder_get_Assembly__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Reflection_Emit_EnumBuilder_get_Assembly__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  UnityEngine_Rendering_Universal_Internal_GBufferPass_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x4a < *unaff_x23) {
                                                      unaff_x19[0x4e] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  MetaXRAcousticControlZone_State_TypeInfo;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  MetaXRAcousticControlZone_State_TypeInfo != 0) &&
                                                  (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  MetaXRAcousticControlZone_State_TypeInfo,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_6065;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x4b < *unaff_x23) {
                                                      unaff_x19[0x4f] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Collections_Generic_List<RenderChain_RenderNodeData>_get_Item__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_List<RenderChain_RenderNodeData>_get_Item__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<RenderChain_RenderNodeData>_get_Item__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_3455;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x4c < *unaff_x23) {
                                                      unaff_x19[0x50] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<EventEntry>_get_Current__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x4d < *unaff_x23) {
                                                      unaff_x19[0x51] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_7670;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_7670 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_7670,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x4e < *unaff_x23) {
                                                      unaff_x19[0x52] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = PTR_DAT_033f5f60;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)PTR_DAT_033f5f60 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033f5f60,*(undefined8 *)(*plVar4 + 0x40)),
                                                  lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  UnityEngine_ProBuilder_Shapes_Torus_TypeInfo;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x4f < *unaff_x23) {
                                                      unaff_x19[0x53] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_7338;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_7338 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_7338,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x50 < *unaff_x23) {
                                                      unaff_x19[0x54] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_5384;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_5384 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_5384,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnFocusLost__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x51 < *unaff_x23) {
                                                      unaff_x19[0x55] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<IXRHoverInteractable>_Dispose__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<IXRHoverInteractable>_Dispose__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<IXRHoverInteractable>_Dispose__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Oculus_Interaction_Locomotion_AnimatedSnapTurnVisuals_<AnimationRoutine>d__25_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x52 < *unaff_x23) {
                                                      unaff_x19[0x56] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = Method_System_Convert_ToUInt64__;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)Method_System_Convert_ToUInt64__
                                                           != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Convert_ToUInt64__,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_LinkedList<__Il2CppFullySharedGenericType>_ValidateNewNode__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    if (*(long *)puVar2 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(*(long *)puVar2,
                                                                                 *(undefined8 *)
                                                                                  (*plVar4 + 0x40));
                                                      if (lVar3 == 0) goto LAB_0202ba58;
                                                      uVar6 = *(uint *)(plVar4 + 3);
                                                    }
                                                    if (1 < uVar6) {
                                                      plVar4[5] = *(long *)puVar2;
                                                      lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8
                                                                                          *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  if (0x53 < *unaff_x23) {
                                                    unaff_x19[0x57] = (long)plVar4;
                                                    plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                    puVar1 = 
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    if (*(long *)puVar2 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(*(long *)puVar2,
                                                                                 *(undefined8 *)
                                                                                  (*plVar4 + 0x40));
                                                      if (lVar3 == 0) goto LAB_0202ba58;
                                                      uVar6 = *(uint *)(plVar4 + 3);
                                                    }
                                                    if (1 < uVar6) {
                                                      plVar4[5] = *(long *)puVar2;
                                                      lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8
                                                                                          *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  if (0x54 < *unaff_x23) {
                                                    unaff_x19[0x58] = (long)plVar4;
                                                    plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                    puVar1 = 
                                                  Method_UnityEngine_GameObject_AddComponent<Scrollbar>__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<Scrollbar>__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<Scrollbar>__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType>__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x55 < *unaff_x23) {
                                                      unaff_x19[0x59] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_TypeInfo
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_TypeInfo
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_TypeInfo
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_1158;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x56 < *unaff_x23) {
                                                      unaff_x19[0x5a] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_TypeInfo
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_TypeInfo
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_TypeInfo
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_6176;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x57 < *unaff_x23) {
                                                      unaff_x19[0x5b] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_1483;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_1483 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_1483,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<int,_ProbeReferenceVolume_Cell>_Remove__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x58 < *unaff_x23) {
                                                      unaff_x19[0x5c] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_SpaceShipLightAndGlowController_<>c_<DebugLightsOn>b__19_1__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_SpaceShipLightAndGlowController_<>c_<DebugLightsOn>b__19_1__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_SpaceShipLightAndGlowController_<>c_<DebugLightsOn>b__19_1__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = PTR_DAT_033f6540;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x59 < *unaff_x23) {
                                                      unaff_x19[0x5d] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Security_Cryptography_RijndaelManagedTransform_TransformFinalBlock__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Security_Cryptography_RijndaelManagedTransform_TransformFinalBlock__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Security_Cryptography_RijndaelManagedTransform_TransformFinalBlock__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = Method_UnityEngine_Color32_get_Item__;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x5a < *unaff_x23) {
                                                      unaff_x19[0x5e] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>_GetEnumerator__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>_GetEnumerator__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>_GetEnumerator__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x5b < *unaff_x23) {
                                                      unaff_x19[0x5f] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_8211;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_8211 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_8211,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_Remove__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x5c < *unaff_x23) {
                                                      unaff_x19[0x60] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_Unity_Collections_NativeArray<byte>__ctor__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Unity_Collections_NativeArray<byte>__ctor__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Collections_NativeArray<byte>__ctor__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_Ritual_<IncorrectSolutionCoroutine>d__21_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x5d < *unaff_x23) {
                                                      unaff_x19[0x61] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Net_Sockets_Socket_Accept__;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Net_Sockets_Socket_Accept__ != 0) &&
                                                  (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Net_Sockets_Socket_Accept__,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = PTR_DAT_033f2418;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x5e < *unaff_x23) {
                                                      unaff_x19[0x62] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtsq_f32__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtsq_f32__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtsq_f32__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__4__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x5f < *unaff_x23) {
                                                      unaff_x19[99] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_7628;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_7628 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_7628,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Meta_Voice_Net_WebSockets_Requests_WitWebSocketMessageRequest_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x60 < *unaff_x23) {
                                                      unaff_x19[100] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = PTR_DAT_033f3830;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)PTR_DAT_033f3830 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033f3830,*(undefined8 *)(*plVar4 + 0x40)),
                                                  lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = System_Data_Common_StringStorage_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x61 < *unaff_x23) {
                                                      unaff_x19[0x65] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_11454;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_11454 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_11454,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x62 < *unaff_x23) {
                                                      unaff_x19[0x66] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_3496;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_3496 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_3496,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<int,_TMP_Style>_TryGetValue__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (99 < *unaff_x23) {
                                                      unaff_x19[0x67] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = System_Nullable<Color>_TypeInfo;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)System_Nullable<Color>_TypeInfo
                                                           != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_Nullable<Color>_TypeInfo,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_s16__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (100 < *unaff_x23) {
                                                      unaff_x19[0x68] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  System_Reflection_SignatureType_TypeInfo;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Reflection_SignatureType_TypeInfo != 0) &&
                                                  (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_Reflection_SignatureType_TypeInfo,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = PTR_DAT_033eb6c8;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x65 < *unaff_x23) {
                                                      unaff_x19[0x69] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  System_Collections_Generic_List<TMP_FontAsset>_TypeInfo
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x66 < *unaff_x23) {
                                                      unaff_x19[0x6a] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_MemoryExtensions_AsSpan<Vector2>__;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_MemoryExtensions_AsSpan<Vector2>__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_MemoryExtensions_AsSpan<Vector2>__,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SimpleTuple<FaceRebuildData,_List<int>>>_MoveNext__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x67 < *unaff_x23) {
                                                      unaff_x19[0x6b] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Field_<PrivateImplementationDetails>_44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Field_<PrivateImplementationDetails>_44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Field_<PrivateImplementationDetails>_44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_14317;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x68 < *unaff_x23) {
                                                      unaff_x19[0x6c] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  System_Resources_ManifestBasedResourceGroveler_TypeInfo
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Resources_ManifestBasedResourceGroveler_TypeInfo
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  System_Resources_ManifestBasedResourceGroveler_TypeInfo
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_5940;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x69 < *unaff_x23) {
                                                      unaff_x19[0x6d] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_4008;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_4008 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_4008,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Face,_List<SimpleTuple<WingedEdge,_int>>>_Dispose__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x6a < *unaff_x23) {
                                                      unaff_x19[0x6e] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_4678;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_4678 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_4678,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Oculus_Interaction_Surfaces_IBounds_TypeInfo;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x6b < *unaff_x23) {
                                                      unaff_x19[0x6f] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = StringLiteral_2645;
                                                      if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_2645 != 0) &&
                                                         (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_2645,*(undefined8 *)(*plVar4 + 0x40)
                                                  ), lVar3 == 0)) goto LAB_0202ba58;
                                                  puVar2 = Method_OVRAnchor_FetchAnchorsAsync__;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x6c < *unaff_x23) {
                                                      unaff_x19[0x70] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_UnityEngine_Timeline_TimeUtility_<>c_<ParseTimeCode>b__15_1__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_Timeline_TimeUtility_<>c_<ParseTimeCode>b__15_1__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Timeline_TimeUtility_<>c_<ParseTimeCode>b__15_1__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_Obi_ObiContactEventDispatcher_Solver_OnCollision__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x6d < *unaff_x23) {
                                                      unaff_x19[0x71] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_Nullable<int>_get_HasValue__;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Nullable<int>_get_HasValue__ != 0)
                                                  && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Nullable<int>_get_HasValue__,
                                                  *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = StringLiteral_1854;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x6e < *unaff_x23) {
                                                      unaff_x19[0x72] = (long)plVar4;
                                                      plVar4 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar1 = 
                                                  Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion__
                                                  ;
                                                  if (plVar4 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion__
                                                  != 0) && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion__
                                                  ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ServicePointScheduler_<RunScheduler>d__32>__
                                                  ;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  if (uVar6 != 0) {
                                                    plVar4[4] = *(long *)puVar1;
                                                    lVar3 = *(long *)puVar2;
                                                    if (lVar3 != 0) {
                                                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  if (lVar3 == 0) goto LAB_0202ba58;
                                                  uVar6 = *(uint *)(plVar4 + 3);
                                                  }
                                                  if (1 < uVar6) {
                                                    plVar4[5] = *(long *)puVar2;
                                                    lVar3 = thunk_FUN_00d6225c(plVar4,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar3 == 0) goto LAB_0202ba58;
                                                    if (0x6f < *unaff_x23) {
                                                      unaff_x19[0x73] = (long)plVar4;
                                                      puVar1 = 
                                                  Method_UnityEngine_Audio_AudioMixer_TransitionToSnapshot__
                                                  ;
                                                  *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x60) =
                                                       unaff_x19;
                                                  lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,0x5e);
                                                  FUN_0202ba68(&stack0x000005e0,0x41,0x5a,1,0x20,0);
                                                  if (lVar3 == 0) goto LAB_0202ba64;
                                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar3 + 0x20) = 0;
                                                    *(undefined4 *)(lVar3 + 0x28) = 0;
                                                    FUN_0202ba68(&stack0x000005d0,0xc0,0xde,1,0x20,0
                                                                );
                                                    if (1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x2c) = 0;
                                                      *(undefined4 *)(lVar3 + 0x34) = 0;
                                                      FUN_0202ba68(&stack0x000005c0,0x100,0x12e,2,0,
                                                                   0);
                                                      if (2 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x38) = 0;
                                                        *(undefined4 *)(lVar3 + 0x40) = 0;
                                                        FUN_0202ba68(&stack0x000005b0,0x130,0x130,0,
                                                                     0x69,0);
                                                        if (3 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x44) = 0;
                                                          *(undefined4 *)(lVar3 + 0x4c) = 0;
                                                          FUN_0202ba68(&stack0x000005a0,0x132,0x136,
                                                                       2,0,0);
                                                          if (4 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x50) = 0;
                                                            *(undefined4 *)(lVar3 + 0x58) = 0;
                                                            FUN_0202ba68(&stack0x00000590,0x139,
                                                                         0x147,3,0,0);
                                                            if (5 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x5c) = 0;
                                                              *(undefined4 *)(lVar3 + 100) = 0;
                                                              FUN_0202ba68(&stack0x00000580,0x14a,
                                                                           0x176,2,0,0);
                                                              if (6 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x68) = 0;
                                                                *(undefined4 *)(lVar3 + 0x70) = 0;
                                                                FUN_0202ba68(&stack0x00000570,0x178,
                                                                             0x178,0,0xff,0);
                                                                if (7 < *(uint *)(lVar3 + 0x18)) {
                                                                  *(undefined8 *)(lVar3 + 0x74) = 0;
                                                                  *(undefined4 *)(lVar3 + 0x7c) = 0;
                                                                  FUN_0202ba68(&stack0x00000560,
                                                                               0x179,0x17d,3,0,0);
                                                                  if (8 < *(uint *)(lVar3 + 0x18)) {
                                                                    *(undefined8 *)(lVar3 + 0x80) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x88) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000550,
                                                                                 0x181,0x181,0,0x253
                                                                                 ,0);
                                                                    if (9 < *(uint *)(lVar3 + 0x18))
                                                                    {
                                                                      *(undefined8 *)(lVar3 + 0x8c)
                                                                           = 0;
                                                                      *(undefined4 *)(lVar3 + 0x94)
                                                                           = 0;
                                                                      FUN_0202ba68(&stack0x00000540,
                                                                                   0x182,0x184,2,0,0
                                                                                  );
                                                                      if (10 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x98) = 0;
                                                    *(undefined4 *)(lVar3 + 0xa0) = 0;
                                                    FUN_0202ba68(&stack0x00000530,0x186,0x186,0,
                                                                 0x254,0);
                                                    if (0xb < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0xa4) = 0;
                                                      *(undefined4 *)(lVar3 + 0xac) = 0;
                                                      FUN_0202ba68(&stack0x00000520,0x187,0x187,0,
                                                                   0x188,0);
                                                      if (0xc < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0xb0) = 0;
                                                        *(undefined4 *)(lVar3 + 0xb8) = 0;
                                                        FUN_0202ba68(&stack0x00000510,0x189,0x18a,1,
                                                                     0xcd,0);
                                                        if (0xd < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0xbc) = 0;
                                                          *(undefined4 *)(lVar3 + 0xc4) = 0;
                                                          FUN_0202ba68(&stack0x00000500,0x18b,0x18b,
                                                                       0,0x18c,0);
                                                          if (0xe < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 200) = 0;
                                                            *(undefined4 *)(lVar3 + 0xd0) = 0;
                                                            FUN_0202ba68(&stack0x000004f0,0x18e,
                                                                         0x18e,0,0x1dd,0);
                                                            if (0xf < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0xd4) = 0;
                                                              *(undefined4 *)(lVar3 + 0xdc) = 0;
                                                              FUN_0202ba68(&stack0x000004e0,399,399,
                                                                           0,0x259,0);
                                                              if (0x10 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0xe0) = 0;
                                                                *(undefined4 *)(lVar3 + 0xe8) = 0;
                                                                FUN_0202ba68(&stack0x000004d0,400,
                                                                             400,0,0x25b,0);
                                                                if (0x11 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0xec) = 0;
                                                                  *(undefined4 *)(lVar3 + 0xf4) = 0;
                                                                  FUN_0202ba68(&stack0x000004c0,
                                                                               0x191,0x191,0,0x192,0
                                                                              );
                                                                  if (0x12 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0xf8) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x100) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x000004b0,
                                                                                 0x193,0x193,0,0x260
                                                                                 ,0);
                                                                    if (0x13 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x104) = 0;
                                                    *(undefined4 *)(lVar3 + 0x10c) = 0;
                                                    FUN_0202ba68(&stack0x000004a0,0x194,0x194,0,
                                                                 0x263,0);
                                                    if (0x14 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x110) = 0;
                                                      *(undefined4 *)(lVar3 + 0x118) = 0;
                                                      FUN_0202ba68(&stack0x00000490,0x196,0x196,0,
                                                                   0x269,0);
                                                      if (0x15 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x11c) = 0;
                                                        *(undefined4 *)(lVar3 + 0x124) = 0;
                                                        FUN_0202ba68(&stack0x00000480,0x197,0x197,0,
                                                                     0x268,0);
                                                        if (0x16 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x128) = 0;
                                                          *(undefined4 *)(lVar3 + 0x130) = 0;
                                                          FUN_0202ba68(&stack0x00000470,0x198,0x198,
                                                                       0,0x199,0);
                                                          if (0x17 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x134) = 0;
                                                            *(undefined4 *)(lVar3 + 0x13c) = 0;
                                                            FUN_0202ba68(&stack0x00000460,0x19c,
                                                                         0x19c,0,0x26f,0);
                                                            if (0x18 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x140) = 0;
                                                              *(undefined4 *)(lVar3 + 0x148) = 0;
                                                              FUN_0202ba68(&stack0x00000450,0x19d,
                                                                           0x19d,0,0x272,0);
                                                              if (0x19 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x14c) = 0;
                                                                *(undefined4 *)(lVar3 + 0x154) = 0;
                                                                FUN_0202ba68(&stack0x00000440,0x19f,
                                                                             0x19f,0,0x275,0);
                                                                if (0x1a < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x158) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x160) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x00000430,
                                                                               0x1a0,0x1a4,2,0,0);
                                                                  if (0x1b < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x164) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x16c) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000420,
                                                                                 0x1a7,0x1a7,0,0x1a8
                                                                                 ,0);
                                                                    if (0x1c < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x170) = 0;
                                                    *(undefined4 *)(lVar3 + 0x178) = 0;
                                                    FUN_0202ba68(&stack0x00000410,0x1a9,0x1a9,0,
                                                                 0x283,0);
                                                    if (0x1d < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x17c) = 0;
                                                      *(undefined4 *)(lVar3 + 0x184) = 0;
                                                      FUN_0202ba68(&stack0x00000400,0x1ac,0x1ac,0,
                                                                   0x1ad,0);
                                                      if (0x1e < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x188) = 0;
                                                        *(undefined4 *)(lVar3 + 400) = 0;
                                                        FUN_0202ba68(&stack0x000003f0,0x1ae,0x1ae,0,
                                                                     0x288,0);
                                                        if (0x1f < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x194) = 0;
                                                          *(undefined4 *)(lVar3 + 0x19c) = 0;
                                                          FUN_0202ba68(&stack0x000003e0,0x1af,0x1af,
                                                                       0,0x1b0,0);
                                                          if (0x20 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x1a0) = 0;
                                                            *(undefined4 *)(lVar3 + 0x1a8) = 0;
                                                            FUN_0202ba68(&stack0x000003d0,0x1b1,
                                                                         0x1b2,1,0xd9,0);
                                                            if (0x21 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x1ac) = 0;
                                                              *(undefined4 *)(lVar3 + 0x1b4) = 0;
                                                              FUN_0202ba68(&stack0x000003c0,0x1b3,
                                                                           0x1b5,3,0,0);
                                                              if (0x22 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x1b8) = 0;
                                                                *(undefined4 *)(lVar3 + 0x1c0) = 0;
                                                                FUN_0202ba68(&stack0x000003b0,0x1b7,
                                                                             0x1b7,0,0x292,0);
                                                                if (0x23 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x1c4) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x1cc) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x000003a0,
                                                                               0x1b8,0x1b8,0,0x1b9,0
                                                                              );
                                                                  if (0x24 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x1d0) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x1d8) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000390,
                                                                                 0x1bc,0x1bc,0,0x1bd
                                                                                 ,0);
                                                                    if (0x25 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x1dc) = 0;
                                                    *(undefined4 *)(lVar3 + 0x1e4) = 0;
                                                    FUN_0202ba68(&stack0x00000380,0x1c4,0x1c5,0,
                                                                 0x1c6,0);
                                                    if (0x26 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x1e8) = 0;
                                                      *(undefined4 *)(lVar3 + 0x1f0) = 0;
                                                      FUN_0202ba68(&stack0x00000370,0x1c7,0x1c8,0,
                                                                   0x1c9,0);
                                                      if (0x27 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 500) = 0;
                                                        *(undefined4 *)(lVar3 + 0x1fc) = 0;
                                                        FUN_0202ba68(&stack0x00000360,0x1ca,0x1cb,0,
                                                                     0x1cc,0);
                                                        if (0x28 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x200) = 0;
                                                          *(undefined4 *)(lVar3 + 0x208) = 0;
                                                          FUN_0202ba68(&stack0x00000350,0x1cd,0x1db,
                                                                       3,0,0);
                                                          if (0x29 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x20c) = 0;
                                                            *(undefined4 *)(lVar3 + 0x214) = 0;
                                                            FUN_0202ba68(&stack0x00000340,0x1de,
                                                                         0x1ee,2,0,0);
                                                            if (0x2a < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x218) = 0;
                                                              *(undefined4 *)(lVar3 + 0x220) = 0;
                                                              FUN_0202ba68(&stack0x00000330,0x1f1,
                                                                           0x1f2,0,499,0);
                                                              if (0x2b < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x224) = 0;
                                                                *(undefined4 *)(lVar3 + 0x22c) = 0;
                                                                FUN_0202ba68(&stack0x00000320,500,
                                                                             500,0,0x1f5,0);
                                                                if (0x2c < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x230) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x238) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x00000310,
                                                                               0x1fa,0x216,2,0,0);
                                                                  if (0x2d < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x23c) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x244) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000300,
                                                                                 0x386,0x386,0,0x3ac
                                                                                 ,0);
                                                                    if (0x2e < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x248) = 0;
                                                    *(undefined4 *)(lVar3 + 0x250) = 0;
                                                    FUN_0202ba68(&stack0x000002f0,0x388,0x38a,1,0x25
                                                                 ,0);
                                                    if (0x2f < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x254) = 0;
                                                      *(undefined4 *)(lVar3 + 0x25c) = 0;
                                                      FUN_0202ba68(&stack0x000002e0,0x38c,0x38c,0,
                                                                   0x3cc,0);
                                                      if (0x30 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x260) = 0;
                                                        *(undefined4 *)(lVar3 + 0x268) = 0;
                                                        FUN_0202ba68(&stack0x000002d0,0x38e,0x38f,1,
                                                                     0x3f,0);
                                                        if (0x31 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x26c) = 0;
                                                          *(undefined4 *)(lVar3 + 0x274) = 0;
                                                          FUN_0202ba68(&stack0x000002c0,0x391,0x3ab,
                                                                       1,0x20,0);
                                                          if (0x32 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x278) = 0;
                                                            *(undefined4 *)(lVar3 + 0x280) = 0;
                                                            FUN_0202ba68(&stack0x000002b0,0x3e2,
                                                                         0x3ee,2,0,0);
                                                            if (0x33 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x284) = 0;
                                                              *(undefined4 *)(lVar3 + 0x28c) = 0;
                                                              FUN_0202ba68(&stack0x000002a0,0x401,
                                                                           0x40f,1,0x50,0);
                                                              if (0x34 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x290) = 0;
                                                                *(undefined4 *)(lVar3 + 0x298) = 0;
                                                                FUN_0202ba68(&stack0x00000290,0x410,
                                                                             0x42f,1,0x20,0);
                                                                if (0x35 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x29c) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x2a4) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x00000280,
                                                                               0x460,0x480,2,0,0);
                                                                  if (0x36 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x2a8) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x2b0) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000270,
                                                                                 0x490,0x4be,2,0,0);
                                                                    if (0x37 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x2b4) = 0;
                                                    *(undefined4 *)(lVar3 + 700) = 0;
                                                    FUN_0202ba68(&stack0x00000260,0x4c1,0x4c3,3,0,0)
                                                    ;
                                                    if (0x38 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x2c0) = 0;
                                                      *(undefined4 *)(lVar3 + 0x2c8) = 0;
                                                      FUN_0202ba68(&stack0x00000250,0x4c7,0x4c7,0,
                                                                   0x4c8,0);
                                                      if (0x39 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x2cc) = 0;
                                                        *(undefined4 *)(lVar3 + 0x2d4) = 0;
                                                        FUN_0202ba68(&stack0x00000240,0x4cb,0x4cb,0,
                                                                     0x4cc,0);
                                                        if (0x3a < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x2d8) = 0;
                                                          *(undefined4 *)(lVar3 + 0x2e0) = 0;
                                                          FUN_0202ba68(&stack0x00000230,0x4d0,0x4ea,
                                                                       2,0,0);
                                                          if (0x3b < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x2e4) = 0;
                                                            *(undefined4 *)(lVar3 + 0x2ec) = 0;
                                                            FUN_0202ba68(&stack0x00000220,0x4ee,
                                                                         0x4f4,2,0,0);
                                                            if (0x3c < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x2f0) = 0;
                                                              *(undefined4 *)(lVar3 + 0x2f8) = 0;
                                                              FUN_0202ba68(&stack0x00000210,0x4f8,
                                                                           0x4f8,0,0x4f9,0);
                                                              if (0x3d < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x2fc) = 0;
                                                                *(undefined4 *)(lVar3 + 0x304) = 0;
                                                                FUN_0202ba68(&stack0x00000200,0x531,
                                                                             0x556,1,0x30,0);
                                                                if (0x3e < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x308) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x310) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x000001f0,
                                                                               0x10a0,0x10c5,1,0x30,
                                                                               0);
                                                                  if (0x3f < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x314) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x31c) =
                                                                         0;
                                                                    in_stack_000001e8 = 0;
                                                                    in_stack_000001e0 = 0;
                                                                    FUN_0202ba68(&stack0x000001e0,
                                                                                 0x1e00,0x1ef8,2,0,0
                                                                                );
                                                                    if (0x40 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 800) = in_stack_000001e0
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x328) =
                                                         in_stack_000001e8;
                                                    in_stack_000001d8 = 0;
                                                    in_stack_000001d0 = 0;
                                                    FUN_0202ba68(&stack0x000001d0,0x1f08,0x1f0f,1,
                                                                 0xfffffff8,0);
                                                    if (0x41 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x32c) =
                                                           in_stack_000001d0;
                                                      *(undefined4 *)(lVar3 + 0x334) =
                                                           in_stack_000001d8;
                                                      in_stack_000001c8 = 0;
                                                      in_stack_000001c0 = 0;
                                                      FUN_0202ba68(&stack0x000001c0,0x1f18,0x1f1f,1,
                                                                   0xfffffff8,0);
                                                      if (0x42 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x338) =
                                                             in_stack_000001c0;
                                                        *(undefined4 *)(lVar3 + 0x340) =
                                                             in_stack_000001c8;
                                                        in_stack_000001b8 = 0;
                                                        in_stack_000001b0 = 0;
                                                        FUN_0202ba68(&stack0x000001b0,0x1f28,0x1f2f,
                                                                     1,0xfffffff8,0);
                                                        if (0x43 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x344) =
                                                               in_stack_000001b0;
                                                          *(undefined4 *)(lVar3 + 0x34c) =
                                                               in_stack_000001b8;
                                                          in_stack_000001a8 = 0;
                                                          in_stack_000001a0 = 0;
                                                          FUN_0202ba68(&stack0x000001a0,0x1f38,7999,
                                                                       1,0xfffffff8,0);
                                                          if (0x44 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x350) =
                                                                 in_stack_000001a0;
                                                            *(undefined4 *)(lVar3 + 0x358) =
                                                                 in_stack_000001a8;
                                                            in_stack_00000198 = 0;
                                                            in_stack_00000190 = 0;
                                                            FUN_0202ba68(&stack0x00000190,0x1f48,
                                                                         0x1f4d,1,0xfffffff8,0);
                                                            if (0x45 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x35c) =
                                                                   in_stack_00000190;
                                                              *(undefined4 *)(lVar3 + 0x364) =
                                                                   in_stack_00000198;
                                                              in_stack_00000188 = 0;
                                                              in_stack_00000180 = 0;
                                                              FUN_0202ba68(&stack0x00000180,0x1f59,
                                                                           0x1f59,0,0x1f51,0);
                                                              if (0x46 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x368) =
                                                                     in_stack_00000180;
                                                                *(undefined4 *)(lVar3 + 0x370) =
                                                                     in_stack_00000188;
                                                                in_stack_00000178 = 0;
                                                                in_stack_00000170 = 0;
                                                                FUN_0202ba68(&stack0x00000170,0x1f5b
                                                                             ,0x1f5b,0,0x1f53,0);
                                                                if (0x47 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x374) =
                                                                       in_stack_00000170;
                                                                  *(undefined4 *)(lVar3 + 0x37c) =
                                                                       in_stack_00000178;
                                                                  in_stack_00000168 = 0;
                                                                  in_stack_00000160 = 0;
                                                                  FUN_0202ba68(&stack0x00000160,
                                                                               0x1f5d,0x1f5d,0,
                                                                               0x1f55,0);
                                                                  if (0x48 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x380) =
                                                                         in_stack_00000160;
                                                                    *(undefined4 *)(lVar3 + 0x388) =
                                                                         in_stack_00000168;
                                                                    in_stack_00000158 = 0;
                                                                    in_stack_00000150 = 0;
                                                                    FUN_0202ba68(&stack0x00000150,
                                                                                 0x1f5f,0x1f5f,0,
                                                                                 0x1f57,0);
                                                                    if (0x49 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x38c) =
                                                         in_stack_00000150;
                                                    *(undefined4 *)(lVar3 + 0x394) =
                                                         in_stack_00000158;
                                                    in_stack_00000148 = 0;
                                                    in_stack_00000140 = 0;
                                                    FUN_0202ba68(&stack0x00000140,0x1f68,0x1f6f,1,
                                                                 0xfffffff8,0);
                                                    if (0x4a < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x398) =
                                                           in_stack_00000140;
                                                      *(undefined4 *)(lVar3 + 0x3a0) =
                                                           in_stack_00000148;
                                                      in_stack_00000138 = 0;
                                                      in_stack_00000130 = 0;
                                                      FUN_0202ba68(&stack0x00000130,0x1f88,0x1f8f,1,
                                                                   0xfffffff8,0);
                                                      if (0x4b < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x3a4) =
                                                             in_stack_00000130;
                                                        *(undefined4 *)(lVar3 + 0x3ac) =
                                                             in_stack_00000138;
                                                        in_stack_00000128 = 0;
                                                        in_stack_00000120 = 0;
                                                        FUN_0202ba68(&stack0x00000120,0x1f98,0x1f9f,
                                                                     1,0xfffffff8,0);
                                                        if (0x4c < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x3b0) =
                                                               in_stack_00000120;
                                                          *(undefined4 *)(lVar3 + 0x3b8) =
                                                               in_stack_00000128;
                                                          in_stack_00000118 = 0;
                                                          in_stack_00000110 = 0;
                                                          FUN_0202ba68(&stack0x00000110,0x1fa8,
                                                                       0x1faf,1,0xfffffff8,0);
                                                          if (0x4d < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x3bc) =
                                                                 in_stack_00000110;
                                                            *(undefined4 *)(lVar3 + 0x3c4) =
                                                                 in_stack_00000118;
                                                            in_stack_00000108 = 0;
                                                            in_stack_00000100 = 0;
                                                            FUN_0202ba68(&stack0x00000100,0x1fb8,
                                                                         0x1fb9,1,0xfffffff8,0);
                                                            if (0x4e < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x3c8) =
                                                                   in_stack_00000100;
                                                              *(undefined4 *)(lVar3 + 0x3d0) =
                                                                   in_stack_00000108;
                                                              in_stack_000000f8 = 0;
                                                              in_stack_000000f0 = 0;
                                                              FUN_0202ba68(&stack0x000000f0,0x1fba,
                                                                           0x1fbb,1,0xffffffb6,0);
                                                              if (0x4f < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x3d4) =
                                                                     in_stack_000000f0;
                                                                *(undefined4 *)(lVar3 + 0x3dc) =
                                                                     in_stack_000000f8;
                                                                in_stack_000000e8 = 0;
                                                                in_stack_000000e0 = 0;
                                                                FUN_0202ba68(&stack0x000000e0,0x1fbc
                                                                             ,0x1fbc,0,0x1fb3,0);
                                                                if (0x50 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x3e0) =
                                                                       in_stack_000000e0;
                                                                  *(undefined4 *)(lVar3 + 1000) =
                                                                       in_stack_000000e8;
                                                                  in_stack_000000d8 = 0;
                                                                  in_stack_000000d0 = 0;
                                                                  FUN_0202ba68(&stack0x000000d0,
                                                                               0x1fc8,0x1fcb,1,
                                                                               0xffffffaa,0);
                                                                  if (0x51 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x3ec) =
                                                                         in_stack_000000d0;
                                                                    *(undefined4 *)(lVar3 + 0x3f4) =
                                                                         in_stack_000000d8;
                                                                    in_stack_000000c8 = 0;
                                                                    in_stack_000000c0 = 0;
                                                                    FUN_0202ba68(&stack0x000000c0,
                                                                                 0x1fcc,0x1fcc,0,
                                                                                 0x1fc3,0);
                                                                    if (0x52 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x3f8) =
                                                         in_stack_000000c0;
                                                    *(undefined4 *)(lVar3 + 0x400) =
                                                         in_stack_000000c8;
                                                    in_stack_000000b8 = 0;
                                                    in_stack_000000b0 = 0;
                                                    FUN_0202ba68(&stack0x000000b0,0x1fd8,0x1fd9,1,
                                                                 0xfffffff8,0);
                                                    if (0x53 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x404) =
                                                           in_stack_000000b0;
                                                      *(undefined4 *)(lVar3 + 0x40c) =
                                                           in_stack_000000b8;
                                                      in_stack_000000a8 = 0;
                                                      in_stack_000000a0 = 0;
                                                      FUN_0202ba68(&stack0x000000a0,0x1fda,0x1fdb,1,
                                                                   0xffffff9c,0);
                                                      if (0x54 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x410) =
                                                             in_stack_000000a0;
                                                        *(undefined4 *)(lVar3 + 0x418) =
                                                             in_stack_000000a8;
                                                        in_stack_00000098 = 0;
                                                        in_stack_00000090 = 0;
                                                        FUN_0202ba68(&stack0x00000090,0x1fe8,0x1fe9,
                                                                     1,0xfffffff8,0);
                                                        if (0x55 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x41c) =
                                                               in_stack_00000090;
                                                          *(undefined4 *)(lVar3 + 0x424) =
                                                               in_stack_00000098;
                                                          in_stack_00000088 = 0;
                                                          in_stack_00000080 = 0;
                                                          FUN_0202ba68(&stack0x00000080,0x1fea,
                                                                       0x1feb,1,0xffffff90,0);
                                                          if (0x56 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x428) =
                                                                 in_stack_00000080;
                                                            *(undefined4 *)(lVar3 + 0x430) =
                                                                 in_stack_00000088;
                                                            in_stack_00000078 = 0;
                                                            in_stack_00000070 = 0;
                                                            FUN_0202ba68(&stack0x00000070,0x1fec,
                                                                         0x1fec,0,0x1fe5,0);
                                                            if (0x57 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x434) =
                                                                   in_stack_00000070;
                                                              *(undefined4 *)(lVar3 + 0x43c) =
                                                                   in_stack_00000078;
                                                              in_stack_00000068 = 0;
                                                              in_stack_00000060 = 0;
                                                              FUN_0202ba68(&stack0x00000060,0x1ff8,
                                                                           0x1ff9,1,0xffffff80,0);
                                                              if (0x58 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x440) =
                                                                     in_stack_00000060;
                                                                *(undefined4 *)(lVar3 + 0x448) =
                                                                     in_stack_00000068;
                                                                in_stack_00000058 = 0;
                                                                in_stack_00000050 = 0;
                                                                FUN_0202ba68(&stack0x00000050,0x1ffa
                                                                             ,0x1ffb,1,0xffffff82,0)
                                                                ;
                                                                if (0x59 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x44c) =
                                                                       in_stack_00000050;
                                                                  *(undefined4 *)(lVar3 + 0x454) =
                                                                       in_stack_00000058;
                                                                  in_stack_00000048 = 0;
                                                                  in_stack_00000040 = 0;
                                                                  FUN_0202ba68(&stack0x00000040,
                                                                               0x1ffc,0x1ffc,0,
                                                                               0x1ff3,0);
                                                                  if (0x5a < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x458) =
                                                                         in_stack_00000040;
                                                                    *(undefined4 *)(lVar3 + 0x460) =
                                                                         in_stack_00000048;
                                                                    in_stack_00000038 = 0;
                                                                    in_stack_00000030 = 0;
                                                                    FUN_0202ba68(&stack0x00000030,
                                                                                 0x2160,0x216f,1,
                                                                                 0x10,0);
                                                                    if (0x5b < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x464) =
                                                         in_stack_00000030;
                                                    *(undefined4 *)(lVar3 + 0x46c) =
                                                         in_stack_00000038;
                                                    in_stack_00000028 = 0;
                                                    in_stack_00000020 = 0;
                                                    FUN_0202ba68(&stack0x00000020,0x24b6,0x24d0,1,
                                                                 0x1a,0);
                                                    if (0x5c < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x470) =
                                                           in_stack_00000020;
                                                      *(undefined4 *)(lVar3 + 0x478) =
                                                           in_stack_00000028;
                                                      in_stack_00000018 = 0;
                                                      in_stack_00000010 = 0;
                                                      FUN_0202ba68(&stack0x00000010,0xff21,0xff3a,1,
                                                                   0x20,0);
                                                      if (0x5d < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x47c) =
                                                             in_stack_00000010;
                                                        *(undefined4 *)(lVar3 + 0x484) =
                                                             in_stack_00000018;
                                                        *(long *)(*(long *)(*unaff_x24 + 0xb8) +
                                                                 0x68) = lVar3;
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
LAB_0202ba58:
  uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,0);
}


