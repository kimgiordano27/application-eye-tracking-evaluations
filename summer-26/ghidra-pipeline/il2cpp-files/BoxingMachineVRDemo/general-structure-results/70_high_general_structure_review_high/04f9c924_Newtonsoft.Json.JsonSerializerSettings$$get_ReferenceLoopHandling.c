/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 04f9c924
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(void)

{
  short sVar1;
  long lVar2;
  code *in_x9;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  long unaff_x21;
  
  lVar2 = (*in_x9)();
  if ((lVar2 != 0) && (unaff_x21 != 0)) {
    sVar1 = FUN_04e87a5c();
    uVar3 = 0;
    if (sVar1 == 0x79) {
      uVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
      FUN_04f9dc18(uVar3,*(undefined8 *)PTR_DAT_06778298,1,0);
      *unaff_x19 = uVar3;
      thunk_FUN_02dd37b4();
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


