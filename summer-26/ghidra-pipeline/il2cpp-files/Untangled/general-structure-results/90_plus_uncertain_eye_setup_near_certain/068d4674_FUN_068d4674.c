/*
FUNCTION_NAME: FUN_068d4674
ENTRY_POINT: 068d4674
PROGRAM: Untangled-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_068d4674(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_071d704c & 1) == 0) {
    FUN_02f07e70(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                );
    FUN_02f07e70(OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d01e20);
    DAT_071d704c = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar2 = FUN_04c8610c(*(long *)(param_1 + 0x10),param_2,&local_40,
                           *(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo), (uVar2 & 1) != 0)) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar2 = FUN_06823c08(*(undefined4 *)(param_1 + 0x18),local_40,uStack_38,&local_60,0);
    uVar1 = local_60;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066c971c(uVar1,0,0);
      if ((uVar2 & 1) != 0) {
        *param_3 = local_60;
        thunk_FUN_02f411dc(param_3);
        return 1;
      }
    }
  }
  *param_3 = 0;
  thunk_FUN_02f411dc(param_3,0);
  return 0;
}


