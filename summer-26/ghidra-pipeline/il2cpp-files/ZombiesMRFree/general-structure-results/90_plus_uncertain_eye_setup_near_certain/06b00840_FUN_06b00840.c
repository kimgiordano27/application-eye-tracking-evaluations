/*
FUNCTION_NAME: FUN_06b00840
ENTRY_POINT: 06b00840
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


void FUN_06b00840(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = OVRPlugin_OVRP_1_66_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_65_0_TypeInfo;
  puVar1 = Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo;
  if ((DAT_073ab39c & 1) == 0) {
    FUN_02fe925c(Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_66_0_TypeInfo);
    DAT_073ab39c = 1;
  }
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = 0xbf800000;
  uVar4 = FUN_068b2fac(*(undefined8 *)puVar2,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar4;
  uVar4 = FUN_068b2fac(*(undefined8 *)puVar3,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar4;
  return;
}


