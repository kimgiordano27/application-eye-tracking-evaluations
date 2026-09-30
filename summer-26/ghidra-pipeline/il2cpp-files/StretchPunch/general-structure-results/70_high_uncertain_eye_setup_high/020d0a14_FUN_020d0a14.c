/*
FUNCTION_NAME: FUN_020d0a14
ENTRY_POINT: 020d0a14
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_020d0a14(long param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_01d7d918(StringLiteral_1109);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01dde854(param_5);
    }
  }
  local_58 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar2 = FUN_033fa93c(param_1,0);
  if ((uVar2 & 1) == 0) {
    FUN_033fa900(param_1,0,0);
  }
  lVar3 = FUN_033f9ca0(0);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_032ff418(0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  local_58 = FUN_033fa3e0(lVar3,0);
  uVar2 = OVRPlugin_OVRP_1_103_0__ovrp_StartColocationAdvertisement(&local_58,0);
  if (((((uVar2 & 1) == 0) && (uVar2 = FUN_033fad88(&local_58,param_4 & 1,0), (uVar2 & 1) == 0)) ||
      (uVar2 = FUN_033fada4(param_1,param_4 & 1,0), (uVar2 & 1) == 0)) ||
     (uVar2 = FUN_033fadf4(&local_58,param_1,0), (uVar2 & 1) == 0)) {
    uVar2 = FUN_033fa93c(param_1,0);
    puVar1 = StringLiteral_1109;
    if ((uVar2 & 1) != 0) {
      param_1 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1109);
      FUN_033fa948(param_1,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033fae88(&local_78,param_1,param_4 & 1,0);
    uStack_48 = uStack_70;
    local_50 = local_78;
    uStack_38 = uStack_60;
    uStack_40 = local_68;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1109 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033fae1c(lVar3,1,&local_50,0);
  }
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x18))
              (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
    FUN_033fa324(&local_50,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


