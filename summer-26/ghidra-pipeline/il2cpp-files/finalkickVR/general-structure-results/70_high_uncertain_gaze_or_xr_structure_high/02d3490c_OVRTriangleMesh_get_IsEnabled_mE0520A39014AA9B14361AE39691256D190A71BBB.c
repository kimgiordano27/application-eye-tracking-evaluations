/*
FUNCTION_NAME: OVRTriangleMesh_get_IsEnabled_mE0520A39014AA9B14361AE39691256D190A71BBB
ENTRY_POINT: 02d3490c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_9;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


bool OVRTriangleMesh_get_IsEnabled_mE0520A39014AA9B14361AE39691256D190A71BBB
               (OVRTriangleMesh_t7910803FBB7BFF9C52A87059453ECCD75DFA4EBC *param_1,
               undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte local_2a;
  byte local_29;
  undefined8 local_28;
  OVRTriangleMesh_t7910803FBB7BFF9C52A87059453ECCD75DFA4EBC *local_20;
  bool local_11;
  
  puVar1 = 
  Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__;
  local_28 = param_2;
  local_20 = param_1;
  if ((OVRTriangleMesh_get_IsEnabled_mE0520A39014AA9B14361AE39691256D190A71BBB::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRTriangleMesh_get_IsEnabled_mE0520A39014AA9B14361AE39691256D190A71BBB::
    s_Il2CppMethodInitialized = 1;
  }
  local_29 = 0;
  local_2a = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = OVRTriangleMesh_get_IsNull_m608CD54A61261B505BE31BFB37DD12BA74FD8F32(local_20,0);
  if ((bVar2 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar4 = OVRTriangleMesh_get_Handle_m0008FF335D016327F2D76CD9527B54A8F4362EE5_inline
                      (local_20,(MethodInfo *)0x0);
    uVar3 = OVRTriangleMesh_get_Type_mFD3F3657F461E9B0BA9BD2313B5913A14D4DE880(local_20,0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar2 = OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                      (uVar4,uVar3,&local_29,&local_2a,0);
    bVar2 = bVar2 & 1;
  }
  else {
    bVar2 = 0;
  }
  local_11 = (bVar2 & local_29 & 1) != 0 && (local_2a & 1) == 0;
  return local_11;
}


