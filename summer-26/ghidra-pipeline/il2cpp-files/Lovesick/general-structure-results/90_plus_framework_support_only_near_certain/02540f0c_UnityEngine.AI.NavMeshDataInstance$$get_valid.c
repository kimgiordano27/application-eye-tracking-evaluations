/*
FUNCTION_NAME: UnityEngine.AI.NavMeshDataInstance$$get_valid
ENTRY_POINT: 02540f0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 173
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3
*/


void UnityEngine_AI_NavMeshDataInstance__get_valid(ulong param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_UIElements_RepeatButton_UxmlFactory_TypeInfo);
    thunk_FUN_00d48444(System_Data_SqlTypes_SqlChars___TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_Complete__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
                      );
    *(undefined1 *)(unaff_x21 + 0xba0) = 1;
  }
  puVar2 = System_Data_SqlTypes_SqlChars___TypeInfo;
  if (unaff_x20 == (long *)0x0) {
    if ((*(long *)(param_2 + 0x18) != 0) && (*(char *)(*(long *)(param_2 + 0x18) + 0x10) != '\0')) {
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List<HandTriggerAreaEvents>__ctor__
                                );
      FUN_017713a8(uVar3,uVar4,0);
      uVar4 = thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<ushort>_Dispose__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,uVar4);
    }
    goto LAB_02541060;
  }
  lVar5 = *unaff_x20;
  bVar1 = *(byte *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
                   + 300);
  if ((*(byte *)(lVar5 + 300) < bVar1) ||
     (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
     )) {
    bVar1 = *(byte *)(*(long *)UnityEngine_UIElements_RepeatButton_UxmlFactory_TypeInfo + 300);
    if ((*(byte *)(lVar5 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)UnityEngine_UIElements_RepeatButton_UxmlFactory_TypeInfo)) goto LAB_02541060;
    *(undefined8 *)(param_2 + 0x38) = 0;
    FUN_013b6000(param_2,*(undefined8 *)puVar2);
    lVar5 = *(long *)(param_2 + 0x18);
    if (lVar5 == 0) goto LAB_02541060;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x38) = unaff_x20;
    if (lVar5 == 0) goto LAB_02541060;
    FUN_02556090(lVar5);
  }
  FUN_02555fb0(lVar5);
LAB_02541060:
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_02541088(param_2,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30));
  return;
}


