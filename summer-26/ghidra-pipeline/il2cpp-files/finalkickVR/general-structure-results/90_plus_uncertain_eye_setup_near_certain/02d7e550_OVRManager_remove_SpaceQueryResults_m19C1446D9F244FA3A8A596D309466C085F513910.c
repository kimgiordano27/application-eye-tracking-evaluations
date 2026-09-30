/*
FUNCTION_NAME: OVRManager_remove_SpaceQueryResults_m19C1446D9F244FA3A8A596D309466C085F513910
ENTRY_POINT: 02d7e550
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_remove_SpaceQueryResults_m19C1446D9F244FA3A8A596D309466C085F513910
               (undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C *pAVar5;
  Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C *local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_remove_SpaceQueryResults_m19C1446D9F244FA3A8A596D309466C085F513910::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
                    /* try { // try from 02d7e598 to 02e7e5a3 has its CatchHandler @ 02d7e7c4 */
    OVRManager_remove_SpaceQueryResults_m19C1446D9F244FA3A8A596D309466C085F513910::
    s_Il2CppMethodInitialized = 1;
  }
                    /* try { // try from 02d7e5a4 to 02e7e5e3 has its CatchHandler @ 02d7e3c8 */
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_28 = *(Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C **)(lVar3 + 0xa8);
  do {
    pIVar4 = (Il2CppObject *)
             Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(local_28,param_1,0);
    pAVar5 = (Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C *)
             Castclass(pIVar4,*(Il2CppClass **)
                               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                      );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pAVar5 = InterlockedCompareExchangeImpl<Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C*>
                       ((Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C **)(lVar3 + 0xa8),pAVar5
                        ,local_28);
    bVar2 = pAVar5 != local_28;
    local_28 = pAVar5;
  } while (bVar2);
  return;
}


