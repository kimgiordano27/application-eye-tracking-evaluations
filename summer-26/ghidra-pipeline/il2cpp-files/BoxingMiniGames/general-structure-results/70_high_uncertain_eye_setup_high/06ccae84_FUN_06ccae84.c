/*
FUNCTION_NAME: FUN_06ccae84
ENTRY_POINT: 06ccae84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06ccae84(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_07eea543 & 1) == 0) {
    FUN_03642964(OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_03642964(OVRPlugin_SpaceQueryResult___TypeInfo);
    DAT_07eea543 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if ((param_3 != 0) &&
     (uVar3 = FUN_06cb34b8(param_3,0), puVar2 = OVRPlugin_SpaceQueryResult___TypeInfo,
     puVar1 = OVRPlugin_SpaceComponentType___TypeInfo, param_2 != 0)) {
    local_60 = FUN_06cb6174(param_2,0);
    uVar4 = thunk_FUN_0367fa58(*(undefined8 *)puVar2,local_60);
    uVar5 = FUN_03ca7678(uVar4,uVar3,*(undefined8 *)puVar1);
    if ((uVar5 & 1) != 0) {
      *(long *)(param_1 + 0x18) = param_2;
      thunk_FUN_036b7ad0((long *)(param_1 + 0x18),param_2);
      local_50 = FUN_06cb33f0(param_3,0);
      uVar3 = FUN_05e11654(local_50,0);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      thunk_FUN_036b7ad0();
      uVar3 = FUN_06ccb220(param_3);
      thunk_FUN_071c64ec(param_1,uVar3,0);
      return;
    }
    uVar3 = thunk_FUN_036aa1c8(OVRPlugin_TrackingConfidence___TypeInfo);
    uVar3 = FUN_05c98b2c(uVar3,param_3,param_2,0);
    thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
    uVar4 = thunk_FUN_0367fe20();
    uVar6 = thunk_FUN_036aa1c8(PTR_DAT_079fe068);
    FUN_05d7e218(uVar4,uVar3,uVar6,0);
    uVar3 = thunk_FUN_036aa1c8(OVRPlugin_Vector2f___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


