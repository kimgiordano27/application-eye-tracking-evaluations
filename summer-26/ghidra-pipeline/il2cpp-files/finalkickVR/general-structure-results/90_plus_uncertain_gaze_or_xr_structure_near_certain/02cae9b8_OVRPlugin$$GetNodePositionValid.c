/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 02cae9b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 198
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__GetNodePositionValid(void)

{
  void *pvVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  
  GroupPresenceSample_ClearPresence_m0A7758CED526921D0AEBE9A053052145211B61B3::
  s_Il2CppMethodInitialized = 1;
  uStack0000000000000000 = 0;
  GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
            (*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)
              Method_UnityEngine_InputSystem_InputActionState_<>c_<SaveAndResetState>b__135_0__);
  pvVar1 = (void *)GroupPresence_Clear_m5508A296B1D0131F9FCF797D432BB46A4893CBB4
                             (uStack0000000000000000);
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)Method_System_Collections_Generic_List<Vector3>_get_Capacity__
                    );
  Callback__ctor_mD171F5D506678F07015C8FDDC8BB3CC3B2059E92
            (uVar2,*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_ControlSchemeSyntax_WithBindingGroup__
             ,uStack0000000000000000);
  NullCheck(pvVar1);
  Request_OnComplete_mFF740AAA53CD7EC649138E513189CD533A602BBE(pvVar1,uVar2,uStack0000000000000000);
  return;
}


