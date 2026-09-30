/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<OnColocationSessionFound>d__18$$MoveNext
ENTRY_POINT: 04d40fc0
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


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<OnColocationSessionFound>d__18__MoveNext
               (long param_1)

{
  uint uVar1;
  long unaff_x20;
  code *pcVar2;
  long unaff_x22;
  long in_stack_000022e8;
  
  pcVar2 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x290);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0(*(long *)(unaff_x20 + 0x20));
  }
  uVar1 = (*pcVar2)();
  if (*(long *)(unaff_x22 + 0x28) == in_stack_000022e8) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


