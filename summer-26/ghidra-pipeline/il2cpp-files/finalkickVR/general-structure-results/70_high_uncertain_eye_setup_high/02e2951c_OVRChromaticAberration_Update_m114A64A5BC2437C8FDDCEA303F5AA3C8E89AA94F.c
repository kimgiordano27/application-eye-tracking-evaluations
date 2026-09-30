/*
FUNCTION_NAME: OVRChromaticAberration_Update_m114A64A5BC2437C8FDDCEA303F5AA3C8E89AA94F
ENTRY_POINT: 02e2951c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRChromaticAberration_Update_m114A64A5BC2437C8FDDCEA303F5AA3C8E89AA94F(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  void *pvVar3;
  
  if ((OVRChromaticAberration_Update_m114A64A5BC2437C8FDDCEA303F5AA3C8E89AA94F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRChromaticAberration_Update_m114A64A5BC2437C8FDDCEA303F5AA3C8E89AA94F::
    s_Il2CppMethodInitialized = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  bVar2 = OVRInput_GetDown_mEF663E99B6E5FABB41B86716C6D04C788C979139(uVar1,0x80000000,0);
  if ((bVar2 & 1) != 0) {
    *(bool *)(param_1 + 0x24) = (*(byte *)(param_1 + 0x24) & 1) == 0;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    pvVar3 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    bVar2 = *(byte *)(param_1 + 0x24);
    NullCheck(pvVar3);
    OVRManager_set_chromatic_mC1109A775529EF48476D51176DEC780678AAE0EF(pvVar3,bVar2 & 1,0);
  }
  return;
}


