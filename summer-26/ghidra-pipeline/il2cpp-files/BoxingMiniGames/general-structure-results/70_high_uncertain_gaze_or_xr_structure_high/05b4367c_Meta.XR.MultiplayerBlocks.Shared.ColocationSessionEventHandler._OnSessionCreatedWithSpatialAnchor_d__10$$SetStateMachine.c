/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpatialAnchor>d__10$$SetStateMachine
ENTRY_POINT: 05b4367c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10__SetStateMachine
          (long param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  lVar3 = thunk_FUN_0367fd24(param_3,lVar3);
  if (lVar3 == 0) {
    FUN_05e390e4(2,0);
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    if (*(long *)(*param_3 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(param_3);
    }
    puVar1 = (undefined8 *)thunk_FUN_0367ff68();
    in_stack_00000038 = puVar1[1];
    in_stack_00000030 = *puVar1;
    in_stack_00000048 = puVar1[3];
    in_stack_00000040 = puVar1[2];
    in_stack_00000050 = puVar1[4];
    uVar2 = (**(code **)(*param_2 + 0x1c8))
                      (param_2,&stack0x00000030,*(undefined8 *)(*param_2 + 0x1d0));
  }
  return uVar2;
}


