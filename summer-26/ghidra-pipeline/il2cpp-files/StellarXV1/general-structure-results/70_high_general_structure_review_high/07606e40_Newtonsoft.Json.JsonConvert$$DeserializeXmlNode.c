/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 07606e40
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXmlNode(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long in_x9;
  long *unaff_x19;
  long *unaff_x20;
  
  (**(code **)(in_x9 + 0x238))(param_2,param_1,*(undefined8 *)(in_x9 + 0x240));
  lVar1 = (**(code **)(*unaff_x19 + 0x248))();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar2 = (long *)FUN_075c187c(lVar1,0);
  if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_092a6460)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(plVar2);
  }
  (**(code **)(*unaff_x20 + 600))();
  return;
}


