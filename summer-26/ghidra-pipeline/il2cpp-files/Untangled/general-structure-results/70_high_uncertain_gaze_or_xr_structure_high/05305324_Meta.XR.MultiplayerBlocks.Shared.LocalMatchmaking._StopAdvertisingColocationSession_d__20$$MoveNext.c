/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$MoveNext
ENTRY_POINT: 05305324
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__MoveNext
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x21;
  undefined8 *puVar7;
  long unaff_x23;
  
  puVar2 = PTR_DAT_06d3e688;
  puVar1 = PTR_DAT_06d09728;
  puVar7 = *(undefined8 **)(unaff_x21 + 0x718);
  if ((*(byte *)(unaff_x23 + 0x2c5) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d09718);
    FUN_02f07e70(PTR_DAT_06d3e688);
    FUN_02f07e70(PTR_DAT_06d3e690);
    FUN_02f07e70(PTR_DAT_06d09728);
    *(undefined1 *)(unaff_x23 + 0x2c5) = 1;
  }
  puVar3 = PTR_DAT_06d3e690;
  uVar5 = thunk_FUN_02ef1808(*puVar7);
  FUN_04cf48a0(uVar5,param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_066ed070(uVar5,0);
  uVar5 = thunk_FUN_02ef1808(*puVar7);
  FUN_04cf48a0(uVar5,param_1,*(undefined8 *)puVar3,0);
  FUN_066ed258(uVar5,0);
  uVar4 = FUN_066ca0bc(*(undefined8 *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  lVar6 = FUN_066c67ec(param_1,0);
  if (lVar6 != 0) {
    uVar4 = FUN_066c9a84(lVar6,0);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    uVar5 = FUN_066c67b0(param_1,0);
    FUN_05305438(param_1,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


