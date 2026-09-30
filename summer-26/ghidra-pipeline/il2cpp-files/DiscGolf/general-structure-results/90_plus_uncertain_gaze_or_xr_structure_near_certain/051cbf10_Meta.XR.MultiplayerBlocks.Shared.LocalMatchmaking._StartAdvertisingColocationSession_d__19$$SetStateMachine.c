/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$SetStateMachine
ENTRY_POINT: 051cbf10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__SetStateMachine
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *in_x9;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  
  uStack0000000000000060 = param_3;
  uStack0000000000000070 = param_1;
  uStack0000000000000080 = param_2;
  iVar1 = (*in_x9)();
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x20 + 0x18)) {
    uVar5 = *(undefined8 *)(unaff_x24 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x24 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x24 + 0x30);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      uVar6 = *(undefined8 *)(unaff_x23 + 0x28);
      uVar4 = *(undefined8 *)(unaff_x23 + 0x20);
      *(undefined8 *)(unaff_x24 + 0x30) = *(undefined8 *)(unaff_x23 + 0x30);
      *(undefined8 *)(unaff_x24 + 0x28) = uVar6;
      *(undefined8 *)(unaff_x24 + 0x20) = uVar4;
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x23 + 0x28) = uVar5;
        *(undefined8 *)(unaff_x23 + 0x20) = uVar3;
        *(undefined8 *)(unaff_x23 + 0x30) = uVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


