/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 032974a8
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


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject
               (undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar2 = FUN_01c54c40();
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar1 = *(int *)(param_2 + 0x10) + -1;
    if (iVar1 < 1) {
      bVar4 = false;
    }
    else {
      do {
        iVar1 = FUN_03157b8c(param_2,0x2d,iVar1 + -1,0);
        bVar4 = 0 < iVar1;
        if (iVar1 < 1) {
          return bVar4;
        }
        uVar3 = FUN_031548e4(param_2,0,iVar1,0);
        uVar2 = FUN_01c54c40(param_1,uVar3);
      } while ((uVar2 & 1) == 0);
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}


