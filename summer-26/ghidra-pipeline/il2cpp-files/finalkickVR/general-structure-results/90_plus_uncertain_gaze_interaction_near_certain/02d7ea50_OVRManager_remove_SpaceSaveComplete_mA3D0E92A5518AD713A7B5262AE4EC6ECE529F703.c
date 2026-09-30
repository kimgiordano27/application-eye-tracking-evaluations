/*
FUNCTION_NAME: OVRManager_remove_SpaceSaveComplete_mA3D0E92A5518AD713A7B5262AE4EC6ECE529F703
ENTRY_POINT: 02d7ea50
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void OVRManager_remove_SpaceSaveComplete_mA3D0E92A5518AD713A7B5262AE4EC6ECE529F703
               (undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A *pAVar5;
  Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A *local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_remove_SpaceSaveComplete_mA3D0E92A5518AD713A7B5262AE4EC6ECE529F703::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_remove_SpaceSaveComplete_mA3D0E92A5518AD713A7B5262AE4EC6ECE529F703::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_28 = *(Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A **)(lVar3 + 0xb8);
  do {
    pIVar4 = (Il2CppObject *)
             Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(local_28,param_1,0);
    pAVar5 = (Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A *)
             Castclass(pIVar4,*(Il2CppClass **)
                               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_System_Collections_IEnumerator_Reset__
                      );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pAVar5 = InterlockedCompareExchangeImpl<Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A*>
                       ((Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A **)(lVar3 + 0xb8),pAVar5
                        ,local_28);
    bVar2 = pAVar5 != local_28;
    local_28 = pAVar5;
  } while (bVar2);
  return;
}


