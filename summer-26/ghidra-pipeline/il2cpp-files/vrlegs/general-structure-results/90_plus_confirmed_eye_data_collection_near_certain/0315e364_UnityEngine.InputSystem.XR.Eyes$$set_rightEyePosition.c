/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_rightEyePosition
ENTRY_POINT: 0315e364
PROGRAM: vrlegs-libil2cpp.so
SCORE: 229
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;telemetry;structure_combo;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_rightEyePosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000208;
  
                    /* try { // try from 0315e364 to 0325e367 has its CatchHandler @ 0315e38c */
  FUN_01ab69ac();
                    /* try { // try from 0315e368 to 0325e36b has its CatchHandler @ 0315deb8 */
                    /* try { // try from 0315e36c to 0325e36f has its CatchHandler @ 0315e384 */
  FUN_01ab69ac(
              _Common_UnityServicesExt_Scripts_ErrorHandle_IRetryPolicy<Dictionary<string,_Item>>_TypeInfo
              );
  *(undefined1 *)(unaff_x22 + 0xdea) = 1;
  FUN_03112b88(&stack0x00000100,*unaff_x24,0);
  in_stack_000001e8 = in_stack_00000128;
  in_stack_000001e0 = in_stack_00000120;
  in_stack_000001c8 = in_stack_00000108;
  in_stack_000001c0 = in_stack_00000100;
  in_stack_000001d8 = in_stack_00000118;
  in_stack_000001d0 = in_stack_00000110;
  in_stack_00000188 = in_stack_00000108;
  in_stack_00000180 = in_stack_00000100;
  in_stack_00000198 = in_stack_00000118;
  in_stack_00000190 = in_stack_00000110;
  in_stack_000001a8 = in_stack_00000128;
  in_stack_000001a0 = in_stack_00000120;
  in_stack_000001b8 = in_stack_00000138;
  in_stack_000001b0 = in_stack_00000130;
  uVar3 = thunk_FUN_01a89a98(*unaff_x21,&stack0x00000180);
  puVar2 = 
  _Common_UnityServicesExt_Scripts_ErrorHandle_IRetryPolicy<Dictionary<string,_Item>>_TypeInfo;
  puVar1 = System_Func<UserRoomTaskPostData>_TypeInfo;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_031b46f4(&stack0x00000080,unaff_x19 + 0x18,0);
  memcpy(&stack0x00000100,&stack0x00000080,0x80);
  memcpy(&stack0x00000080,&stack0x00000100,0x80);
  uVar4 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000080);
  memcpy(&stack0x00000000,(void *)(unaff_x20 + 0x70),0x80);
  uVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar1);
  uVar3 = FUN_025be8b0(*(undefined8 *)puVar2,uVar3,uVar4,uVar5,0);
  FUN_0311e224(uVar3,0);
  FUN_03158a10();
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000208) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


