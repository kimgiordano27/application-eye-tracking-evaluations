/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 03295e54
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(void)

{
  short sVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  int unaff_w21;
  
  if (unaff_w21 == 4) {
    lVar2 = (**(code **)(*unaff_x19 + 600))();
    lVar3 = (**(code **)(*unaff_x19 + 600))();
    if ((lVar3 == 0) || (lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    sVar1 = FUN_0314e438(lVar2,*(int *)(lVar3 + 0x10) + -1,0);
    lVar2 = 0;
    if (sVar1 == 0x79) {
      lVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042305b0);
                    /* try { // try from 03295ef0 to 03395ef7 has its CatchHandler @ 03295f00 */
                    /* try { // try from 03295ef8 to 03395f03 has its CatchHandler @ 03295bd8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03295ef0 with catch @ 03295f00
                        */
      FUN_03297248(lVar2,*(undefined8 *)
                          Method_Oculus_Platform_Models_DeserializableList<Product>_get_HasNextPage__
                   ,1,0);
      unaff_x19[0x15] = lVar2;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}


