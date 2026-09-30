/*
FUNCTION_NAME: OVRManager_remove_VrFocusAcquired_mD5CBD147F95529A4538FC2FD21D70456D9D9949C
ENTRY_POINT: 02d7c9d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


void OVRManager_remove_VrFocusAcquired_mD5CBD147F95529A4538FC2FD21D70456D9D9949C(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar5;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_remove_VrFocusAcquired_mD5CBD147F95529A4538FC2FD21D70456D9D9949C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_remove_VrFocusAcquired_mD5CBD147F95529A4538FC2FD21D70456D9D9949C::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_28 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar3 + 0x50);
  do {
    pIVar4 = (Il2CppObject *)
             Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(local_28,param_1,0);
    pAVar5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
             CastclassSealed(pIVar4,*(Il2CppClass **)
                                     Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                            );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pAVar5 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>
                       ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar3 + 0x50),pAVar5,
                        local_28);
    bVar2 = pAVar5 != local_28;
    local_28 = pAVar5;
  } while (bVar2);
  return;
}


