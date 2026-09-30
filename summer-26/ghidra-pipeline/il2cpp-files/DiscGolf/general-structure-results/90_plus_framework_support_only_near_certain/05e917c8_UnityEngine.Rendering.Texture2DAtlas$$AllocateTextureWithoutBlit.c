/*
FUNCTION_NAME: UnityEngine.Rendering.Texture2DAtlas$$AllocateTextureWithoutBlit
ENTRY_POINT: 05e917c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 198
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_Texture2DAtlas__AllocateTextureWithoutBlit(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((DAT_06dc3c95 & 1) == 0) {
    FUN_02d965b8(Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>_Dispose__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>_GetEnumerator__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>_GetSubArray__);
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<RigidbodyContactEventManager_JobResultStruct>__ctor__
                );
    FUN_02d965b8(
                Method_Unity_Collections_NativeArray<RigidbodyContactEventManager_JobResultStruct>_Dispose__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
    FUN_02d965b8(Method_Unity_Collections_NativeHashMap<ConnectionId,_ConnectionPayload>__ctor__);
    DAT_06dc3c95 = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    System_Array_EmptyInternalEnumerator<PointerDeviceState_PointerLocation>__System_Collections_IEnumerator_get_Current
              (&stack0x00000010,*(long *)(param_1 + 0x38),
               *(undefined8 *)
                Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>_Dispose__);
    puVar1 = Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>_GetSubArray__;
    while (uVar3 = FUN_05258680(&stack0x00000010,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      FUN_05e919a8(param_1,in_stack_00000020);
    }
    FUN_05258794(&stack0x00000010,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>_GetEnumerator__);
    FUN_05e91a00(param_1);
    puVar2 = Method_Unity_Collections_NativeHashMap<ConnectionId,_ConnectionPayload>__ctor__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__;
    iVar5 = 0;
    while( true ) {
      lVar6 = *(long *)(param_1 + 0x18);
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar6 + 8) <= iVar5) break;
      uVar4 = FUN_042cd3f4(param_1 + 0x18,iVar5,*(undefined8 *)puVar1);
      FUN_05ec1db0(uVar4,0);
      iVar5 = iVar5 + 1;
    }
    FUN_042cd70c(param_1 + 0x18,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  return;
}


