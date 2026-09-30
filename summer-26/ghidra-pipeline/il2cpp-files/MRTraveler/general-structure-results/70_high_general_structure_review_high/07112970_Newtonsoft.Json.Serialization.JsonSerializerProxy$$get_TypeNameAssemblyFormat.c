/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormat
ENTRY_POINT: 07112970
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormat
               (undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x20;
  char *unaff_x21;
  long *unaff_x23;
  
  sVar2 = FUN_06f6fafc(param_1,param_2,0);
  if (sVar2 == 0x78) {
    cVar1 = *unaff_x21;
    if (DAT_0941218d == '\0') {
      FUN_03c8f898(PTR_DAT_08e83798);
      DAT_0941218d = '\x01';
    }
    uVar3 = System_Convert__ToInt16();
    uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x23);
    }
    FUN_070fc634(cVar1,uVar3,uVar4);
    return;
  }
  cVar1 = *unaff_x21;
  if (DAT_0941218d == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    DAT_0941218d = '\x01';
  }
  if (unaff_x20 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = System_Convert__ToInt16();
    uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_070fc18c((int)cVar1,uVar3,uVar4);
  return;
}


