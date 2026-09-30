/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__16$$SetStateMachine
ENTRY_POINT: 04d40fb4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16__SetStateMachine
               (long param_1)

{
  uint uVar1;
  long lVar2;
  ushort in_w9;
  long unaff_x20;
  code *pcVar3;
  long unaff_x22;
  long in_stack_000022e8;
  
  lVar2 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x290);
  if ((in_w9 & 1) == 0) {
    FUN_02d9a2e0(lVar2);
  }
  uVar1 = (*pcVar3)();
  if (*(long *)(unaff_x22 + 0x28) != in_stack_000022e8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1 & 1;
}


