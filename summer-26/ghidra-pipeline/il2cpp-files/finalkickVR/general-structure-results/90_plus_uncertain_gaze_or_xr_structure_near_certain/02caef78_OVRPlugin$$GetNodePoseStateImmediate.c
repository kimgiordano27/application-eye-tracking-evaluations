/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateImmediate
ENTRY_POINT: 02caef78
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 195
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__GetNodePoseStateImmediate(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  long unaff_x29;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x1c0));
  GroupPresenceSample_LaunchRosterPanel_m0D41335EF734E3C0A1FF75A61C05DF4A0CC6150D::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
            (*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)
              Method_UnityEngine_InputSystem_InputActionState_BindingState_set_processorCount__);
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_InputSystem_InputActionState_BindingState_set_partIndex__);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  RosterOptions__ctor_mA7EA76BA5F23FD240B94A0D7345964DBB2CC22BF
            (*(undefined8 *)(unaff_x29 + -0x20),0);
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x20);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38);
  if (*(long *)(unaff_x29 + -0x28) != 0) {
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
    uVar1 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38);
    NullCheck(*(void **)(unaff_x29 + -0x30));
    RosterOptions_AddSuggestedUser_m79CE74301BD8D3B89CD970F4777FE32CF36E6D47
              (*(undefined8 *)(unaff_x29 + -0x30),uVar1,0);
  }
  pvVar2 = (void *)GroupPresence_LaunchRosterPanel_mFE25E7BC60ABBC100357063F31528A1DC777D59E
                             (*(undefined8 *)(unaff_x29 + -0x18));
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)Method_System_Collections_Generic_List<Vector3>_get_Capacity__
                    );
  Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92
            (uVar1,*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)
              Method_UnityEngine_InputSystem_InputActionState_BindingState_set_mapIndex__,0);
  NullCheck(pvVar2);
  Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(pvVar2,uVar1,0);
  return;
}


