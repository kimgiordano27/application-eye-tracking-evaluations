/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 05bd43b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionDiscovery
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4)

{
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_s8;
  undefined4 unaff_s10;
  undefined8 in_stack_00000040;
  
  while( true ) {
    *(undefined4 *)(param_1 + 0x28) = param_4;
    if ((long)(int)unaff_x19[10] <= (long)unaff_x21) {
      (**(code **)(*unaff_x19 + 0x1c8))();
      return;
    }
    param_4 = unaff_s10;
    uVar2 = unaff_s8;
    uVar1 = FUN_05bd479c(in_stack_00000040);
    param_1 = unaff_x19[7];
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    param_1 = param_1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
    unaff_x20 = unaff_x20 + 0xc;
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


