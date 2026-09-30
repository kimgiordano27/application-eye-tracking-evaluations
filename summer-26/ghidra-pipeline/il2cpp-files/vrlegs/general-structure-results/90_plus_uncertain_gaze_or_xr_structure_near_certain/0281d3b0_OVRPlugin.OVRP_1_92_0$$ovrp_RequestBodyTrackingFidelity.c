/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 0281d3b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 (*unaff_x19) [16];
  int unaff_w25;
  long *unaff_x28;
  undefined1 auVar3 [16];
  long in_stack_00000048;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  long in_stack_000000a8;
  
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  FUN_027cf91c();
  auVar3 = FUN_027d3da0();
  *unaff_x19 = auVar3;
  if (unaff_w25 == 0x2d) {
    uVar1 = *(undefined8 *)*unaff_x19;
    uVar2 = *(undefined8 *)(*unaff_x19 + 8);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar3 = FUN_027d3bc0(uVar1,uVar2,0);
    *unaff_x19 = auVar3;
  }
  if (*(long *)(in_stack_00000048 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


