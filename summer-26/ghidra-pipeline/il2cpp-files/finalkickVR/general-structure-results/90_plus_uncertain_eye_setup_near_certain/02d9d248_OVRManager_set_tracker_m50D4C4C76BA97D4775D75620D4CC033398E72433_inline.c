/*
FUNCTION_NAME: OVRManager_set_tracker_m50D4C4C76BA97D4775D75620D4CC033398E72433_inline
ENTRY_POINT: 02d9d248
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* OVRManager_set_tracker_m50D4C4C76BA97D4775D75620D4CC033398E72433_inline(OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154*,
   MethodInfo const*) */

void OVRManager_set_tracker_m50D4C4C76BA97D4775D75620D4CC033398E72433_inline
               (OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154 *param_1,MethodInfo *param_2)

{
  undefined *puVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 02d9cda4 with catch @ 02d9d248 */
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
                    /* try { // try from 02d9d25c to 02e9d27f has its CatchHandler @ 02d9d28c */
                    /* catch() { ... } // from try @ 02d9cdac with catch @ 02d9d264 */
  if ((OVRManager_set_tracker_m50D4C4C76BA97D4775D75620D4CC033398E72433_inline(OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154*,MethodInfo_const*)
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_set_tracker_m50D4C4C76BA97D4775D75620D4CC033398E72433_inline(OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154*,MethodInfo_const*)
    ::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154 **)(lVar2 + 0x10) = param_1;
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  Il2CppCodeGenWriteBarrier((void **)(lVar2 + 0x10),param_1);
  return;
}


