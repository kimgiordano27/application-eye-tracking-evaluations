/*
FUNCTION_NAME: FUN_075bf70c
ENTRY_POINT: 075bf70c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_075bf70c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_0826e712 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_17_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_18_0_TypeInfo);
    DAT_0826e712 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_16_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_15_0_TypeInfo;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_049cf910(&local_68,*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    while( true ) {
      uVar3 = FUN_05d64e98(&local_50,*(undefined8 *)puVar2);
      lVar4 = local_40;
      if ((uVar3 & 1) == 0) {
        FUN_05d64e94(&local_50,*(undefined8 *)puVar1);
        return;
      }
      if (local_40 == 0) break;
      uVar3 = FUN_075bec60(local_40);
      if (((uVar3 & 1) != 0) && (lVar4 = FUN_075bec9c(lVar4,param_3), lVar4 != 0)) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_075bf89c(param_2);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


