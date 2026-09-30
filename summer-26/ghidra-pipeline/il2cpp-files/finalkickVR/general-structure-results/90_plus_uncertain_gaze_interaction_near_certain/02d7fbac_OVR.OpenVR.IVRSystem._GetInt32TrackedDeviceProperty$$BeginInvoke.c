/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetInt32TrackedDeviceProperty$$BeginInvoke
ENTRY_POINT: 02d7fbac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


void OVR_OpenVR_IVRSystem__GetInt32TrackedDeviceProperty__BeginInvoke
               (byte param_1,undefined8 param_2)

{
  long lVar1;
  uint uStack000000000000000c;
  undefined8 *puStack0000000000000010;
  byte bStack000000000000001f;
  undefined8 uStack0000000000000020;
  byte bStack000000000000002f;
  
  puStack0000000000000010 =
       (undefined8 *)
       Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  bStack000000000000002f = param_1 & 1;
  uStack0000000000000020 = param_2;
  if ((OVRManager_set_hasVrFocus_m85C981DA02ECC6A7829D348FCBC2149040CD5321::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_set_hasVrFocus_m85C981DA02ECC6A7829D348FCBC2149040CD5321::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  *(undefined1 *)(lVar1 + 0xeb) = 1;
  bStack000000000000001f = bStack000000000000002f & 1;
  uStack000000000000000c = (uint)bStack000000000000001f;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  *(byte *)(lVar1 + 0xec) = (byte)uStack000000000000000c & 1;
  return;
}


