/*
FUNCTION_NAME: FUN_033f0654
ENTRY_POINT: 033f0654
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 265
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_033f0654(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 local_28;
  
  local_28 = param_1;
  if ((DAT_048325ed & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_DSASignatureDeformatter_SetHashAlgorithm__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<DrawingData_ProcessedBuilderData_MeshBuffers>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__)
    ;
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<SDFCharacter>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<UnsafeAppendBuffer>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnFocusChanged__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnShutdown__);
    DAT_048325ed = 1;
  }
  iVar7 = (int)param_1;
  if (iVar7 < 0x1000c) {
    if (0x10006 < iVar7) {
      if (iVar7 != 0x10008) {
        if (iVar7 == 0x1000b) {
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Security_Cryptography_DSASignatureDeformatter_SetHashAlgorithm__
                                    );
          FUN_03579a78(uVar5,0);
          return uVar5;
        }
        goto LAB_033f0998;
      }
LAB_033f0904:
      uVar5 = FUN_033f0cb0(param_1);
      uVar2 = FUN_0340eec4(param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = FUN_033f0c40(*(undefined8 *)
                              Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__,param_2);
        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                                  );
      }
      else {
        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                                  );
        uVar3 = *(undefined8 *)
                 Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<SDFCharacter>__
        ;
      }
      FUN_03588d4c(uVar4,uVar3,uVar5,0);
      return uVar4;
    }
    if (iVar7 == 0x10002) goto LAB_033f0904;
    if (iVar7 != 0x10006) goto LAB_033f0998;
    uVar2 = FUN_0340eec4(param_2,0);
    puVar6 = (undefined8 *)
             Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
    ;
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_033f0d34(&local_28);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                                );
      uVar5 = *(undefined8 *)
               Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
      ;
      goto LAB_033f0a30;
    }
  }
  else {
    if (0x10016 < iVar7) {
      if (iVar7 == 0x10025) {
        uVar2 = FUN_0340eec4(param_2,0);
        if ((uVar2 & 1) == 0) {
          uVar5 = FUN_033f0c40(*(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_DeviceCommand__
                               ,param_2);
          uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<DrawingData_ProcessedBuilderData_MeshBuffers>__
                                    );
        }
        else {
          uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<DrawingData_ProcessedBuilderData_MeshBuffers>__
                                    );
          uVar5 = *(undefined8 *)
                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
          ;
        }
        FUN_034ca3f8(uVar3,uVar5,0);
        return uVar3;
      }
      if (iVar7 == 0x10042) goto LAB_033f0904;
      if (iVar7 == 0x1002d) {
        uVar2 = FUN_0340eec4(param_2,0);
        if ((param_3 & 1) != 0) {
          if ((uVar2 & 1) == 0) {
            uVar5 = FUN_033f0c40(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnFocusChanged__
                                 ,param_2);
            uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                                      );
          }
          else {
            uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                                      );
            uVar5 = *(undefined8 *)
                     Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
            ;
          }
          FUN_034c6a34(uVar3,uVar5,0);
          return uVar3;
        }
        if ((uVar2 & 1) != 0) {
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                                    );
          FUN_034c71ec(uVar5,*(undefined8 *)
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                       ,0);
          return uVar5;
        }
        uVar5 = FUN_033f0c40(*(undefined8 *)
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                             ,param_2);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                                  );
        FUN_034c7210(uVar3,uVar5,param_2,0);
        return uVar3;
      }
LAB_033f0998:
      uVar5 = FUN_033f0cb0(param_1);
      return uVar5;
    }
    if (iVar7 != 0x10014) {
      if (iVar7 == 0x10016) {
        uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                                  );
        FUN_034f3578(uVar5,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                     ,*(undefined8 *)
                       Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<UnsafeAppendBuffer>__
                     ,0);
        return uVar5;
      }
      goto LAB_033f0998;
    }
    uVar2 = FUN_0340eec4(param_2,0);
    puVar6 = (undefined8 *)Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnShutdown__;
    if ((uVar2 & 1) != 0) goto LAB_033f0998;
  }
  uVar5 = FUN_033f0c40(*puVar6,param_2);
  uVar1 = FUN_033f0d34(&local_28);
  uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
LAB_033f0a30:
  FUN_034c7720(uVar3,uVar5,uVar1,0);
  return uVar3;
}


