/*
FUNCTION_NAME: FUN_061a14e8
ENTRY_POINT: 061a14e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_061a14e8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_06a83d63 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_32_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_72_0_TypeInfo);
    DAT_06a83d63 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_32_0_TypeInfo;
  puVar1 = PTR_DAT_065c89e8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar3 = FUN_061782a0(param_2,0);
  uVar5 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar1);
  }
  uVar5 = FUN_04f3fb68(uVar5,0);
  uVar4 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar3,uVar5,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_06178288(param_2,0);
    uVar3 = FUN_04f81044(uVar3,*(undefined8 *)OVRPlugin_OVRP_1_72_0_TypeInfo,0);
    return uVar3;
  }
  return 0;
}


