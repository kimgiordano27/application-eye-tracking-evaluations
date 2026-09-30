/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 03173d44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(uint param_1)

{
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  long in_stack_00000048;
  
  if ((param_1 & 1) != 0) {
    if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_03173e64(&stack0x00000020,in_stack_00000048,unaff_w20);
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x19 = in_stack_00000020;
  }
  return param_1 & 1;
}


