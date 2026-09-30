/*
FUNCTION_NAME: FUN_012c3f0c
ENTRY_POINT: 012c3f0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


void FUN_012c3f0c(long param_1)

{
  if ((DAT_037765c6 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1972);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(PTR_DAT_033eb0d8);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_PoseDetection_FeatureStateDescription_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_PanelRaycaster_OnPanelDestroyed__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CatchAssistData>_Remove__);
    thunk_FUN_00d48444(StringLiteral_9798);
    thunk_FUN_00d48444(Method_System_RuntimeType_CreateInstanceCheckThis__);
    thunk_FUN_00d48444(System_Func<DiscriminatedUnionConverter_UnionCase,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__);
    thunk_FUN_00d48444(StringLiteral_9632);
    thunk_FUN_00d48444(OVRPlugin_Quatf___TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_037765c6 = 1;
  }
  FUN_012e5a10(*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x132));
  return;
}


