/*
FUNCTION_NAME: FUN_02764eb4
ENTRY_POINT: 02764eb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


void FUN_02764eb4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = UnityEngine_InputSystem_Controls_DpadControl_var;
  if ((DAT_03788558 & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_BaseDataWriter_set_Stream__);
    thunk_FUN_00d48444(Method_UnityEngine_Texture2D_GetPixelData<byte>__);
    thunk_FUN_00d48444(
                      Oculus_Interaction_Body_PoseDetection_BodyPoseComparerActiveState_JointComparerConfig_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<IronMaidenNeedle>_get_Current__
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_GeometryChangedEvent_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_148);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_lane_f32__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputStateBlock_ReadFloat__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ITelemetryWriter>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Core_AsyncInitialize__);
    thunk_FUN_00d48444(
                      Method_DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_NativeSliceCopyTo<Vector4>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<IMarker>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_ExposedReference<GameObject>_Resolve__);
    thunk_FUN_00d48444(StringLiteral_2247);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_BaseField<__Il2CppFullySharedGenericType>_UpdateMixedValueContent__
                      );
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_GroupCollection_CopyTo__);
    thunk_FUN_00d48444(StringLiteral_6464);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_Run<JSONNode>__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebSocket_<Close>d__36>__
                      );
    thunk_FUN_00d48444(StringLiteral_3213);
    thunk_FUN_00d48444(Meta_WitAi_Requests_AudioStreamHandler_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea848);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__);
    thunk_FUN_00d48444(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__);
    thunk_FUN_00d48444(System_Collections_CaseInsensitiveHashCodeProvider_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2859);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_DpadControl_var);
    DAT_03788558 = 1;
  }
  lVar2 = FUN_027a82d8(param_1,0);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar3 != 0) &&
     (FUN_012c5834(lVar3,param_1,
                   *(undefined8 *)
                    Method_DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_NativeSliceCopyTo<Vector4>__
                   ,0),
     puVar1 = 
     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebSocket_<Close>d__36>__,
     lVar2 != 0)) {
    FUN_010bfd58(lVar2,lVar3,0,*(undefined8 *)Method_UnityEngine_Texture2D_GetPixelData<byte>__);
    lVar2 = FUN_027a82d8(param_1,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar3 != 0) &&
       (FUN_012c5834(lVar3,param_1,
                     *(undefined8 *)System_Collections_Generic_IEnumerable<IMarker>_TypeInfo,0),
       puVar1 = StringLiteral_3213, lVar2 != 0)) {
      FUN_010bfd58(lVar2,lVar3,0,
                   *(undefined8 *)
                    Oculus_Interaction_Body_PoseDetection_BodyPoseComparerActiveState_JointComparerConfig_TypeInfo
                  );
      lVar2 = FUN_027a82d8(param_1,0);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar3 != 0) &&
         (FUN_012c5834(lVar3,param_1,
                       *(undefined8 *)Method_UnityEngine_ExposedReference<GameObject>_Resolve__,0),
         puVar1 = Meta_WitAi_Requests_AudioStreamHandler_TypeInfo, lVar2 != 0)) {
        FUN_010bfd58(lVar2,lVar3,0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<IronMaidenNeedle>_get_Current__
                    );
        lVar2 = FUN_027a82d8(param_1,0);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar3 != 0) &&
           (FUN_012c5834(lVar3,param_1,*(undefined8 *)Method_Oculus_Platform_Core_AsyncInitialize__,
                         0),
           puVar1 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__,
           lVar2 != 0)) {
          FUN_010bfd58(lVar2,lVar3,0,
                       *(undefined8 *)Method_Sirenix_Serialization_BaseDataWriter_set_Stream__);
          lVar2 = FUN_027a82d8(param_1,0);
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if ((lVar3 != 0) &&
             (FUN_012c5834(lVar3,param_1,
                           *(undefined8 *)
                            Method_System_Text_RegularExpressions_GroupCollection_CopyTo__,0),
             puVar1 = Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__,
             lVar2 != 0)) {
            FUN_010bfd58(lVar2,lVar3,0,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_lane_f32__);
            lVar2 = FUN_027a82d8(param_1,0);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if ((lVar3 != 0) &&
               (FUN_012c5834(lVar3,param_1,*(undefined8 *)StringLiteral_6464,0),
               puVar1 = StringLiteral_2859, lVar2 != 0)) {
              FUN_010bfd58(lVar2,lVar3,0,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_LowLevel_InputStateBlock_ReadFloat__);
              lVar2 = FUN_027a82d8(param_1,0);
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if ((lVar3 != 0) &&
                 (FUN_012c5834(lVar3,param_1,
                               *(undefined8 *)Method_System_Threading_Tasks_Task_Run<JSONNode>__,0),
                 puVar1 = System_Collections_CaseInsensitiveHashCodeProvider_TypeInfo, lVar2 != 0))
              {
                FUN_010bfd58(lVar2,lVar3,0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<ITelemetryWriter>_MoveNext__
                            );
                lVar2 = FUN_027a82d8(param_1,0);
                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if ((lVar3 != 0) &&
                   (FUN_012c5834(lVar3,param_1,*(undefined8 *)StringLiteral_2247,0),
                   puVar1 = PTR_DAT_033ea848, lVar2 != 0)) {
                  FUN_010bfd58(lVar2,lVar3,0,
                               *(undefined8 *)UnityEngine_UIElements_GeometryChangedEvent_TypeInfo);
                  lVar2 = FUN_027a82d8(param_1,0);
                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if ((lVar3 != 0) &&
                     (FUN_012c5834(lVar3,param_1,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseField<__Il2CppFullySharedGenericType>_UpdateMixedValueContent__
                                   ,0), lVar2 != 0)) {
                    FUN_010bfd58(lVar2,lVar3,0,*(undefined8 *)StringLiteral_148);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


