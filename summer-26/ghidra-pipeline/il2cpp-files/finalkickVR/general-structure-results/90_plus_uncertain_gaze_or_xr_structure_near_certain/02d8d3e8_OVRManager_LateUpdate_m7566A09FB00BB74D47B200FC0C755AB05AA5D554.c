/*
FUNCTION_NAME: OVRManager_LateUpdate_m7566A09FB00BB74D47B200FC0C755AB05AA5D554
ENTRY_POINT: 02d8d3e8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 130
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRManager_LateUpdate_m7566A09FB00BB74D47B200FC0C755AB05AA5D554
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_LateUpdate_m7566A09FB00BB74D47B200FC0C755AB05AA5D554::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Meta_WitAi_Requests_VoiceServiceRequest_<PerformMainThreadCallbacks>d__9_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRManager_LateUpdate_m7566A09FB00BB74D47B200FC0C755AB05AA5D554::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_Meta_WitAi_Requests_VoiceServiceRequest_<PerformMainThreadCallbacks>d__9_System_Collections_IEnumerator_Reset__
            );
  OVRHaptics_Process_m4C06440CFE490FDE9213449D6DF094E68E55C4CB(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if ((*(byte *)(lVar3 + 0x134) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar4 = *(undefined8 *)(lVar3 + 0x138);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar4,0);
    if ((bVar2 & 1) == 0) {
      OculusXRPlugin_SetAppSpacePosition_m4F081B1A6672C6CE541651F75EA9B955938808F2(0,0);
      OculusXRPlugin_SetAppSpaceRotation_m24E78BBF3BA5775538BA8C0A1A0CE99A9521E2D6
                (0,0,0,0x3f800000,0);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar5 = *(void **)(lVar3 + 0x138);
      NullCheck(pvVar5);
      uVar6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar5);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar5 = *(void **)(lVar3 + 0x138);
      NullCheck(pvVar5);
      Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar5,0);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar5 = *(void **)(lVar3 + 0x138);
      NullCheck(pvVar5);
      Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar5,0);
      OculusXRPlugin_SetAppSpacePosition_m4F081B1A6672C6CE541651F75EA9B955938808F2(uVar6,0);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar5 = *(void **)(lVar3 + 0x138);
      NullCheck(pvVar5);
      uVar6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar5,0);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar5 = *(void **)(lVar3 + 0x138);
      NullCheck(pvVar5);
      Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar5,0);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar5 = *(void **)(lVar3 + 0x138);
      NullCheck(pvVar5);
      Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar5,0);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar5 = *(void **)(lVar3 + 0x138);
      NullCheck(pvVar5);
      Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar5,0);
      OculusXRPlugin_SetAppSpaceRotation_m24E78BBF3BA5775538BA8C0A1A0CE99A9521E2D6
                (uVar6,param_2,param_3,param_4,0);
    }
  }
  return;
}


