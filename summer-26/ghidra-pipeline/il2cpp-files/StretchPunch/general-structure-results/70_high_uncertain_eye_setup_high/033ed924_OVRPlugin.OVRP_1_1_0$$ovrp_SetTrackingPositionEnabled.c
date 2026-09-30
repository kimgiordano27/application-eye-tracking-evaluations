/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingPositionEnabled
ENTRY_POINT: 033ed924
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingPositionEnabled
          (ulong param_1,undefined1 (*param_2) [16],uint param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  uint uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
    FUN_01d7d918(StringLiteral_1209);
    *(undefined1 *)(unaff_x22 + 0xb45) = 1;
  }
  puVar2 = StringLiteral_1209;
  if (param_3 < 0x1d) {
    if (param_4 < 2) {
      if (*(int *)(*(long *)StringLiteral_1209 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      puVar3 = StringLiteral_9323;
      iVar1 = (byte)(*param_2)[2] - param_3;
      if (0 < iVar1) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033edad0(param_2,iVar1,param_4);
      }
      return *param_2;
    }
    uStack000000000000000c = param_4;
    uVar4 = thunk_FUN_01dd295c(StringLiteral_8322);
    uVar4 = thunk_FUN_01de23e8(uVar4,&stack0x0000000c);
    uVar5 = thunk_FUN_01dd295c(StringLiteral_8323);
    uVar6 = thunk_FUN_01dd295c(StringLiteral_8324);
    uVar4 = FUN_0326b5e0(uVar5,uVar4,uVar6,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar5 = thunk_FUN_01de27b8();
    uVar6 = thunk_FUN_01dd295c(StringLiteral_5048);
    FUN_03287130(uVar5,uVar4,uVar6,0);
    uVar4 = thunk_FUN_01dd295c(StringLiteral_9336);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar5,uVar4);
  }
  thunk_FUN_01dd295c(StringLiteral_1122);
  uVar4 = thunk_FUN_01de27b8();
  uVar5 = thunk_FUN_01dd295c(StringLiteral_9334);
  uVar6 = thunk_FUN_01dd295c(StringLiteral_9335);
  FUN_0328a910(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_01dd295c(StringLiteral_9336);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,uVar5);
}


