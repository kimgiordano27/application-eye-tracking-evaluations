/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetInt32$$.ctor
ENTRY_POINT: 02da758c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRSettings__GetInt32___ctor(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined4 uVar2;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x6b8));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
            );
  OVRPlatformMenu_ShowConfirmQuitMenu_mAEBFA4DAB4A137863BCBEE4FC62959C767F29CA0::
  s_Il2CppMethodInitialized = 1;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  uVar2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B();
  *(undefined4 *)(unaff_x29 + -0x18) = uVar2;
  *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -0x18);
  uVar1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(unaff_x29 + -0x14,0);
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


