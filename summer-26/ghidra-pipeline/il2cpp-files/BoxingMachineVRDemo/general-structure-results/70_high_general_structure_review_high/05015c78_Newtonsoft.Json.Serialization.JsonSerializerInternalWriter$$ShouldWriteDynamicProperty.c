/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 05015c78
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02d6084c(PTR_DAT_0677aac0);
  *(undefined1 *)(unaff_x20 + 0x239) = 1;
  lVar4 = *(long *)(unaff_x19 + 0x90);
  if (lVar4 == 0) {
    lVar4 = **(long **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
    if (lVar4 == 0) goto LAB_05015d00;
  }
  if (*(int *)(lVar4 + 0x10) != 0) {
    uVar1 = FUN_04e6e9e0(*(undefined8 *)PTR_DAT_0677aac0,lVar4,0);
    uVar2 = FUN_0503e3fc();
    uVar3 = Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__get_End(0);
    FUN_04e8db00(uVar2,uVar3,uVar1,0);
    return;
  }
LAB_05015d00:
  FUN_0503e3fc();
  return;
}


