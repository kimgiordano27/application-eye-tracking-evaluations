/*
FUNCTION_NAME: FUN_0685ae3c
ENTRY_POINT: 0685ae3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0685ae3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  if ((DAT_071d6b54 & 1) == 0) {
    FUN_02f07e70(System_Xml_Schema_XmlSchemaImport_TypeInfo);
    FUN_02f07e70(System_Xml_Schema_XmlSchemaInclude_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_50_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_39_0_TypeInfo);
    DAT_071d6b54 = 1;
  }
  puVar3 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_39_0_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_04710c00(param_1,param_2,param_3,param_4,param_5,param_6,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar4 = *(long *)puVar2;
  }
  FUN_068cbd7c(param_4,**(undefined8 **)(lVar4 + 0xb8),0);
  puVar1 = System_Xml_Schema_XmlSchemaInclude_TypeInfo;
  if (*(long *)(param_4 + 0x408) != 0) {
    FUN_068cbd7c(*(long *)(param_4 + 0x408),*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0
                );
    lVar4 = FUN_045f2bec(param_4,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      FUN_068cbd7c(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


