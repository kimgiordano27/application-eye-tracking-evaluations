/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 070ffab0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList
               (ulong param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea1b30);
    *(undefined1 *)(unaff_x22 + 0x165) = 1;
  }
  FUN_070b1d68(param_3,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07112c04(0x30,0);
  }
  if (DAT_0941218d == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    DAT_0941218d = '\x01';
  }
  puVar1 = PTR_DAT_08ea1b30;
  if (param_2 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = System_Convert__ToInt16(param_2,0);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
  }
  uVar3 = FUN_070b1710();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  FUN_070ff8d0(uVar2,uVar4,param_3,uVar3);
  return;
}


