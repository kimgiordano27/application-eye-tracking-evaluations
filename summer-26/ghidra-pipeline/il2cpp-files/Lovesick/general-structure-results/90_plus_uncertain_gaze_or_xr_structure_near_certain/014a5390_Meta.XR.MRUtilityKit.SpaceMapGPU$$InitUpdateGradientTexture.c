/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$InitUpdateGradientTexture
ENTRY_POINT: 014a5390
PROGRAM: Lovesick-libil2cpp.so
SCORE: 204
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__InitUpdateGradientTexture(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack000000000000000c;
  
  if ((DAT_03776cd8 & 1) == 0) {
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<KeyControl>_get_Count__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28>__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__);
    DAT_03776cd8 = 1;
  }
  if (param_1[5] != 0) {
    uVar2 = FUN_012ddcec(param_1[5],param_2,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_TypeInfo
                        );
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x358))(param_1,param_2,0,*(undefined8 *)(*param_1 + 0x360));
      if (param_1[5] == 0) goto LAB_014a54ec;
      FUN_012de18c(param_1[5],param_2,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<KeyControl>_get_Count__);
    }
    puVar1 = Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__;
    if (param_1[5] != 0) {
      uStack000000000000000c = *(undefined4 *)(param_1[5] + 0x20);
      uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x0000000c);
      uVar3 = FUN_015f6780(*(undefined8 *)puVar1,uVar3,0);
      (**(code **)(*param_1 + 0x288))(param_1,param_2,uVar3,0,*(undefined8 *)(*param_1 + 0x290));
      lVar4 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0xa8) != 0)) {
        FUN_013dfa68(*(long *)(lVar4 + 0xa8),param_2,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28>__
                    );
      }
      return;
    }
  }
LAB_014a54ec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


