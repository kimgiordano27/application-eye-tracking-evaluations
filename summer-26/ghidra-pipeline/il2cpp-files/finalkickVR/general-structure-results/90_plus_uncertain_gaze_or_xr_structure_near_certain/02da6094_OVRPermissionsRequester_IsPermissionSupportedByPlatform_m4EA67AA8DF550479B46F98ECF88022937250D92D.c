/*
FUNCTION_NAME: OVRPermissionsRequester_IsPermissionSupportedByPlatform_m4EA67AA8DF550479B46F98ECF88022937250D92D
ENTRY_POINT: 02da6094
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 195
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_21;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


byte OVRPermissionsRequester_IsPermissionSupportedByPlatform_m4EA67AA8DF550479B46F98ECF88022937250D92D
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  Il2CppClass *pIVar2;
  undefined8 uVar3;
  Exception_t *pEVar4;
  undefined8 uVar5;
  MethodInfo *pMVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  byte local_21;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_20 = param_2;
  local_14 = param_1;
  if ((OVRPermissionsRequester_IsPermissionSupportedByPlatform_m4EA67AA8DF550479B46F98ECF88022937250D92D
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPermissionsRequester_IsPermissionSupportedByPlatform_m4EA67AA8DF550479B46F98ECF88022937250D92D
    ::s_Il2CppMethodInitialized = 1;
  }
  local_21 = 0;
  local_28 = local_14;
  switch(local_14) {
  case 0:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_21 = OVRPlugin_get_faceTrackingSupported_m309FC12CACF9C70F552B0F3B96E554CF11F53387(0);
    local_21 = local_21 & 1;
    break;
  case 1:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_21 = OVRPlugin_get_bodyTrackingSupported_m8DAE070C838B80E84818040B45D811F38F84B3A3(0);
    local_21 = local_21 & 1;
    break;
  case 2:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_21 = OVRPlugin_get_eyeTrackingSupported_m7192CA66A8AB4E4C9958C741256E29CB3C0DB17A(0);
    local_21 = local_21 & 1;
    break;
  case 3:
    local_21 = 1;
    break;
  default:
    local_30 = local_14;
    local_34 = local_14;
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_OVRVirtualKeyboard_HandInputSource_<>c_<UpdateInput>b__6_0__
                       );
    uVar3 = Box(pIVar2,&local_34);
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                       );
    pEVar4 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
    uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRVirtualKeyboard_HandInputSource_<>c_<UpdateInput>b__6_1__)
    ;
    ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85
              (pEVar4,uVar5,uVar3,0);
    pMVar6 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_0__
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar6);
  }
  return local_21;
}


