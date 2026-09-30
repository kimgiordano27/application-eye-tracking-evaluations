/*
FUNCTION_NAME: FUN_06afe408
ENTRY_POINT: 06afe408
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06afe408(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_073ab389 & 1) == 0) {
    FUN_02fe925c(OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_02fe925c(ParadoxNotion_Serialization_FullSerializer_fsMetaProperty_TypeInfo);
    DAT_073ab389 = 1;
  }
  puVar1 = ParadoxNotion_Serialization_FullSerializer_fsMetaProperty_TypeInfo;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_0480ea70(param_1 + 0x10,param_2,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
    uVar2 = FUN_0480eb6c(param_1 + 0x10,*(undefined8 *)puVar1);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    return;
  }
  thunk_FUN_03037804(PTR_DAT_06f6d640);
  uVar3 = thunk_FUN_0301080c();
  uVar4 = thunk_FUN_03037804(OVRPlugin_OVRP_1_54_0_TypeInfo);
  FUN_05aeefcc(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03037804(OVRPlugin_OVRP_1_55_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar3,uVar4);
}


