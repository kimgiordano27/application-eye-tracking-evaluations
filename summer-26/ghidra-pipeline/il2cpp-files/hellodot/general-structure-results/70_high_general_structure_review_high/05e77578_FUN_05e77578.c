/*
FUNCTION_NAME: FUN_05e77578
ENTRY_POINT: 05e77578
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2
*/


void FUN_05e77578(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = 
  UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<RectInt,_IntegerField,_int>_TypeInfo
  ;
  if ((DAT_06a7bc50 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_Linq_XHashtable<WeakReference>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_Linq_XHashtable<XName>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>___TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription<RectInt,_IntegerField,_int>___TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector2,_FloatField,_float>___TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector2Int,_IntegerField,_int>___TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector3,_FloatField,_float>___TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector3Int,_IntegerField,_int>___TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector4,_FloatField,_float>___TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_HashSet<string>___TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<ISchedule>___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<RectInt,_IntegerField,_int>_TypeInfo
              );
    DAT_06a7bc50 = 1;
  }
  lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (param_2 == 0) {
    if (lVar6 != 0) {
      System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
                (lVar6,param_1,*(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
      lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_05e77864;
      iVar3 = FUN_04678fbc(lVar6,*(undefined8 *)
                                  UnityEngine_UIElements_BaseCompositeField_FieldDescription<RectInt,_IntegerField,_int>___TypeInfo
                          );
      if (iVar3 == 0) {
        *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = 0;
      }
    }
  }
  else {
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                  UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector4,_FloatField,_float>___TypeInfo
                                );
      FUN_04678954(lVar6,*(undefined8 *)
                          UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>___TypeInfo
                  );
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
      if (lVar6 == 0) goto LAB_05e77864;
    }
    FUN_04679278(lVar6,param_1,param_2,
                 *(undefined8 *)
                  UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector2Int,_IntegerField,_int>___TypeInfo
                );
  }
  lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
  if (param_3 == 0) {
    if (lVar6 != 0) {
      System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
                (lVar6,param_1,
                 *(undefined8 *)
                  Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_TypeInfo);
      if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_05e77864;
      iVar3 = FUN_04678fbc(**(long **)(*(long *)puVar1 + 0xb8),
                           *(undefined8 *)
                            UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector2,_FloatField,_float>___TypeInfo
                          );
      if (iVar3 == 0) {
        **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
      }
    }
  }
  else {
    if (lVar6 == 0) {
      uVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                  UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector3Int,_IntegerField,_int>___TypeInfo
                                );
      FUN_04678954(uVar4,*(undefined8 *)
                          UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>___TypeInfo
                  );
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
      lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar6 == 0) {
LAB_05e77864:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
    }
    FUN_04679278(lVar6,param_1,param_3,
                 *(undefined8 *)
                  UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector3,_FloatField,_float>___TypeInfo
                );
  }
  puVar2 = System_Collections_Generic_IEnumerator<ISchedule>___TypeInfo;
  lVar6 = *(long *)puVar1;
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)System_Xml_Linq_XHashtable<WeakReference>_TypeInfo);
    FUN_05e77868(uVar4,0,*(undefined8 *)puVar2);
    lVar6 = *(long *)puVar1;
  }
  puVar1 = System_Collections_Generic_HashSet<string>___TypeInfo;
  if (**(long **)(lVar6 + 0xb8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
                              );
    FUN_05e77904(uVar5,0,*(undefined8 *)puVar1);
  }
  FUN_05e779a4(uVar4,uVar5);
  return;
}


