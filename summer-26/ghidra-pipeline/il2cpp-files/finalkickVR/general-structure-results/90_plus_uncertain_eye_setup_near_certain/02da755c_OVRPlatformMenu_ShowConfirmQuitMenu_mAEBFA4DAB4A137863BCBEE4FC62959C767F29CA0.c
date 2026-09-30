/*
FUNCTION_NAME: OVRPlatformMenu_ShowConfirmQuitMenu_mAEBFA4DAB4A137863BCBEE4FC62959C767F29CA0
ENTRY_POINT: 02da755c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRPlatformMenu_ShowConfirmQuitMenu_mAEBFA4DAB4A137863BCBEE4FC62959C767F29CA0
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRPlatformMenu_ShowConfirmQuitMenu_mAEBFA4DAB4A137863BCBEE4FC62959C767F29CA0::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
              );
    OVRPlatformMenu_ShowConfirmQuitMenu_mAEBFA4DAB4A137863BCBEE4FC62959C767F29CA0::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  local_24 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B();
  uVar1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(&local_24,0);
  uVar1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)
                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
                     ,uVar1,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(uVar1,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_PlatformUIConfirmQuit_m535F93DC2CAE215773CB4B8A10F47E921086FBC3(0);
  return;
}


