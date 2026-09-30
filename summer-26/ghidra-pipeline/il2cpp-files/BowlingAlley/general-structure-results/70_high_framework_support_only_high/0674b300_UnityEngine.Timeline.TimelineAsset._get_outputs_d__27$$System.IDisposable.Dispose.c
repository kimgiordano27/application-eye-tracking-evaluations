/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineAsset.<get_outputs>d__27$$System.IDisposable.Dispose
ENTRY_POINT: 0674b300
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_5
*/


void UnityEngine_Timeline_TimelineAsset_<get_outputs>d__27__System_IDisposable_Dispose(long param_1)

{
  undefined4 uVar1;
  long *unaff_x19;
  
  uVar1 = FUN_06bc0fd0(**(undefined8 **)(param_1 + 0xae0));
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_Dispose__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x3c) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_MoveNext__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x40) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_Grabbable>_get_Current__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x44) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_Dispose__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x48) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x4c) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_get_Current__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x50) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Column,_float>_get_Current__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x54) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_get_Current__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x58) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Current__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x5c) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<AssetType,_object>_get_Current__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x60) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Column,_float>_Dispose__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 100) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_Dispose__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x68) = uVar1;
  uVar1 = FUN_06bc0fd0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Column,_float>_MoveNext__
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x6c) = uVar1;
  return;
}


