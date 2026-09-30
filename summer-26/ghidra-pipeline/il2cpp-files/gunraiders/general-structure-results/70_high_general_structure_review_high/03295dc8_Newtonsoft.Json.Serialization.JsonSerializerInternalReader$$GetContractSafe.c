/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 03295dc8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(void)

{
  short sVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  
  sVar1 = FUN_0314e438();
  if (sVar1 == 0x79) {
                    /* try { // try from 03295df0 to 03395e0b has its CatchHandler @ 03295e1c */
    lVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042305b0);
    puVar4 = (undefined8 *)Method_Oculus_Platform_Models_DeserializableList<Product>__ctor__;
  }
  else {
    if ((int)unaff_x19[3] != 4) {
      return 0;
    }
    lVar2 = (**(code **)(*unaff_x19 + 600))();
    lVar3 = (**(code **)(*unaff_x19 + 600))();
    if ((lVar3 == 0) || (lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    sVar1 = FUN_0314e438(lVar2,*(int *)(lVar3 + 0x10) + -1,0);
    if (sVar1 != 0x79) {
      return 0;
    }
    lVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042305b0);
    puVar4 = (undefined8 *)
             Method_Oculus_Platform_Models_DeserializableList<Product>_get_HasNextPage__;
  }
  FUN_03297248(lVar2,*puVar4,1,0);
  unaff_x19[0x15] = lVar2;
  return lVar2;
}


