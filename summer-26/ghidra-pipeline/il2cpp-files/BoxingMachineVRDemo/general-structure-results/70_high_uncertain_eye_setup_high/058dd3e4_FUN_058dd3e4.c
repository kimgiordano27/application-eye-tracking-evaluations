/*
FUNCTION_NAME: FUN_058dd3e4
ENTRY_POINT: 058dd3e4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_058dd3e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_06b80b32 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676b840);
    FUN_02d6084c(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_02d6084c(System_Xml_Schema_XmlSchemaAttributeGroup_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_63_0_TypeInfo);
    DAT_06b80b32 = 1;
  }
  puVar1 = System_Xml_Schema_XmlSchemaAttributeGroup_TypeInfo;
  FUN_0636fa8c(param_1,0);
  if (*(long *)(param_1 + 0x120) == 0) {
    uVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676b840);
    FUN_047cf76c(uVar3,param_1,*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x120) = uVar3;
    thunk_FUN_02dd37b4(param_1 + 0x120,uVar3);
  }
  puVar2 = OVRPlugin_OVRP_1_62_0_TypeInfo;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar1;
  }
  FUN_0436d9c8(*(long *)(lVar4 + 0xb8) + 0x90,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)puVar2
              );
  uVar5 = FUN_058dd4fc(param_1);
  if ((uVar5 & 1) != 0) {
    FUN_058dcaf8(param_1);
  }
  FUN_058dd62c(param_1);
  FUN_058dd670(param_1);
  FUN_058dd964(param_1);
  return;
}


