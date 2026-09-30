/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_SetInsightPassthroughStyle2
ENTRY_POINT: 02ce28d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_84_0__ovrp_SetInsightPassthroughStyle2(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Mesh_MeshData_GetVertexData<Vector3>__);
    MessageWithAppDownloadProgressResult_GetAppDownloadProgressResult_m7D8A8D8E04ED4B60FBEC8A58743C40634514D215
    ::s_Il2CppMethodInitialized = 1;
  }
  uVar1 = Message_1_get_Data_mFC3EBE32D0D8B09A5B09F2D8F35FD05E7993A300_inline
                    (*(Message_1_t67B925992BD1C2CEBED1110E0F560B9CC0DDA3E5 **)(unaff_x29 + -8),
                     *(MethodInfo **)Method_UnityEngine_Mesh_MeshData_GetVertexData<Vector3>__);
  return uVar1;
}


