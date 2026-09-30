/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopDiscoveringColocationSessions
ENTRY_POINT: 028fff80
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopDiscoveringColocationSessions
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  long lVar3;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    param_1 = *unaff_x22;
  }
  in_stack_00000028 = unaff_x21[1];
  in_stack_00000020 = *unaff_x21;
  in_stack_00000038 = unaff_x21[3];
  in_stack_00000030 = unaff_x21[2];
  lVar3 = **(long **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),&stack0x00000020)
  ;
  uVar2 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
  if (lVar3 != 0) {
    FUN_02b9f22c(lVar3,uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


