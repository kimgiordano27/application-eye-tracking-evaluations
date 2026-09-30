/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 02caf670
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 175
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetTrackingTransformRawPose(void)

{
  undefined8 uVar1;
  void *pvVar2;
  long unaff_x29;
  undefined8 in_stack_00000000;
  byte bStack0000000000000037;
  byte bStack0000000000000057;
  byte bStack0000000000000077;
  
  uVar1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991();
  GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
            (*(undefined8 *)(unaff_x29 + -8),uVar1,in_stack_00000000);
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithPath__
                    );
  GroupPresenceOptions__ctor_m793B93FF13AAA359F49421977850848351DF7C56(uVar1,in_stack_00000000);
  *(undefined8 *)(unaff_x29 + -0x48) = uVar1;
  bStack0000000000000077 =
       String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                 (*(undefined8 *)(unaff_x29 + -0x28),in_stack_00000000);
  bStack0000000000000077 = bStack0000000000000077 & 1;
  if (bStack0000000000000077 == 0) {
    pvVar2 = *(void **)(unaff_x29 + -0x48);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x28);
    NullCheck(pvVar2);
    GroupPresenceOptions_SetDestinationApiName_m5F0030669BFD5F89B1E65BA94C44B8B5EF87E426
              (pvVar2,uVar1,0);
  }
  bStack0000000000000057 =
       String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                 (*(undefined8 *)(unaff_x29 + -0x30),0);
  bStack0000000000000057 = bStack0000000000000057 & 1;
  if (bStack0000000000000057 == 0) {
    pvVar2 = *(void **)(unaff_x29 + -0x48);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x30);
    NullCheck(pvVar2);
    GroupPresenceOptions_SetMatchSessionId_m57D07643712FCDA1866F6C3263B3D450235D8FD1(pvVar2,uVar1,0)
    ;
  }
  bStack0000000000000037 =
       String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478
                 (*(undefined8 *)(unaff_x29 + -0x38),0);
  bStack0000000000000037 = bStack0000000000000037 & 1;
  if (bStack0000000000000037 == 0) {
    pvVar2 = *(void **)(unaff_x29 + -0x48);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x38);
    NullCheck(pvVar2);
    GroupPresenceOptions_SetLobbySessionId_m162D6F6F3199B15B78238E815DAA122A9B01A63B(pvVar2,uVar1,0)
    ;
  }
  GroupPresence_Set_m299E65E855451B87F6C7AB4DDB3E6B1B8953A137(*(undefined8 *)(unaff_x29 + -0x48),0);
  return;
}


