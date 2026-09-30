/*
FUNCTION_NAME: OVRResetOrientation_Update_m252E6B10886A53A66232559F65D6BE22E0E22072
ENTRY_POINT: 02e557c0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRResetOrientation_Update_m252E6B10886A53A66232559F65D6BE22E0E22072(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  void *pvVar3;
  
  if ((OVRResetOrientation_Update_m252E6B10886A53A66232559F65D6BE22E0E22072::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRResetOrientation_Update_m252E6B10886A53A66232559F65D6BE22E0E22072::s_Il2CppMethodInitialized
         = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  bVar2 = OVRInput_GetDown_mEF663E99B6E5FABB41B86716C6D04C788C979139(uVar1,0x80000000,0);
  if ((bVar2 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    pvVar3 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar3);
    OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82(pvVar3,0);
  }
  return;
}


