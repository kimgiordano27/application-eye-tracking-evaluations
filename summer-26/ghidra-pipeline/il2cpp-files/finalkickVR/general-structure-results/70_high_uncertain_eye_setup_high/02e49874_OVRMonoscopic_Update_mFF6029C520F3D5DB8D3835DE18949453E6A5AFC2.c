/*
FUNCTION_NAME: OVRMonoscopic_Update_mFF6029C520F3D5DB8D3835DE18949453E6A5AFC2
ENTRY_POINT: 02e49874
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


void OVRMonoscopic_Update_mFF6029C520F3D5DB8D3835DE18949453E6A5AFC2(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  void *pvVar3;
  
  if ((OVRMonoscopic_Update_mFF6029C520F3D5DB8D3835DE18949453E6A5AFC2::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRMonoscopic_Update_mFF6029C520F3D5DB8D3835DE18949453E6A5AFC2::s_Il2CppMethodInitialized = 1;
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
    OVRManager_set_monoscopic_m1EAAB3C2A3CDB7D72B1700D635AAA6C2AE41893D(pvVar3,bVar2 & 1,0);
  }
  return;
}


