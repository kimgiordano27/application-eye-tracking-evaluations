/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpatialAnchor>d__10$$SetStateMachine
ENTRY_POINT: 0775db40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10__SetStateMachine
               (undefined8 *param_1)

{
  int iVar1;
  uint in_w8;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int in_w10;
  ulong unaff_x19;
  ulong unaff_x22;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x27;
  ulong unaff_x29;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  
  if ((unaff_x19 & 1) == 0) {
    in_w8 = 0;
  }
  uStack0000000000000000 = 4;
  if ((unaff_x24 & 1) == 0) {
    uStack0000000000000000 = 0;
  }
  uVar2 = 8;
  if ((unaff_x25 & 1) == 0) {
    uVar2 = 0;
  }
  uVar8 = 0x10;
  if ((unaff_x27 & 1) == 0) {
    uVar8 = 0;
  }
  uVar3 = 0x20;
  if ((unaff_x22 & 1) == 0) {
    uVar3 = 0;
  }
  uVar9 = 0x40;
  if ((unaff_x29 & 1) == 0) {
    uVar9 = 0;
  }
  uVar4 = 0x80;
  if ((in_stack_00000020 & 1) == 0) {
    uVar4 = 0;
  }
  uVar10 = 0x100;
  if ((in_stack_00000018 & 0x100000000) == 0) {
    uVar10 = 0;
  }
  uVar5 = 0x200;
  if ((in_stack_00000018 & 1) == 0) {
    uVar5 = 0;
  }
  uVar11 = 0x400;
  if ((in_stack_00000010 & 0x100000000) == 0) {
    uVar11 = 0;
  }
  uVar6 = 0x800;
  if ((in_stack_00000010 & 1) == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x1000;
  if ((in_stack_00000008 & 0x100000000) == 0) {
    uVar7 = 0;
  }
  uStack0000000000000004 = in_w8;
  iVar1 = (*(code *)*param_1)();
  return uVar3 | in_stack_00000020._4_4_ & 1 | uStack0000000000000004 | uStack0000000000000000 |
         uVar2 | uVar8 | uVar9 | uVar4 | uVar10 | uVar5 | uVar11 | uVar6 | uVar7 | in_w10 << 0xd |
         (uint)(iVar1 == 1) << 0xe;
}


