/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__21$$SetStateMachine
ENTRY_POINT: 05305318
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21__SetStateMachine
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_06d3e688;
  puVar2 = PTR_DAT_06d09728;
  puVar1 = PTR_DAT_06d09718;
  if ((bRam00000000071c12c5 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d09718);
    FUN_02f07e70(PTR_DAT_06d3e688);
    FUN_02f07e70(PTR_DAT_06d3e690);
    FUN_02f07e70(PTR_DAT_06d09728);
    bRam00000000071c12c5 = 1;
  }
  puVar4 = PTR_DAT_06d3e690;
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_04cf48a0(uVar6,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_066ed070(uVar6,0);
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_04cf48a0(uVar6,param_1,*(undefined8 *)puVar4,0);
  FUN_066ed258(uVar6,0);
  uVar5 = FUN_066ca0bc(*(undefined8 *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  lVar7 = FUN_066c67ec(param_1,0);
  if (lVar7 != 0) {
    uVar5 = FUN_066c9a84(lVar7,0);
    *(undefined4 *)(param_1 + 0x34) = uVar5;
    uVar6 = FUN_066c67b0(param_1,0);
    FUN_05305438(param_1,uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


