/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 0717f848
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(void)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  short *unaff_x22;
  uint unaff_w25;
  long *unaff_x26;
  
  if (unaff_w25 == 0) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
                    /* try { // try from 0717f8c8 to 0727f933 has its CatchHandler @ 0717f960 */
    if (unaff_w21 < 2) {
      unaff_w21 = 1;
    }
    iVar5 = unaff_w21 + -2;
    do {
      uVar1 = unaff_w20 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w19;
      }
      unaff_w20 = unaff_w20 >> 4;
      unaff_x22 = unaff_x22 + -1;
      *unaff_x22 = sVar3 + (short)uVar1;
      iVar4 = iVar5 + -1;
      bVar2 = -1 < iVar5;
      iVar5 = iVar4;
    } while ((bVar2) || (unaff_w20 != 0));
  }
  else {
    iVar5 = 6;
    do {
      uVar1 = unaff_w20 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w19;
      }
      unaff_w20 = unaff_w20 >> 4;
      unaff_x22 = unaff_x22 + -1;
      *unaff_x22 = sVar3 + (short)uVar1;
      iVar4 = iVar5 + -1;
      bVar2 = -1 < iVar5;
      iVar5 = iVar4;
    } while ((bVar2) || (unaff_w20 != 0));
    iVar5 = unaff_w21 + -10;
    do {
      uVar1 = unaff_w25 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w19;
      }
      unaff_w25 = unaff_w25 >> 4;
      unaff_x22 = unaff_x22 + -1;
      *unaff_x22 = sVar3 + (short)uVar1;
      iVar4 = iVar5 + -1;
      bVar2 = -1 < iVar5;
      iVar5 = iVar4;
    } while ((bVar2) || (unaff_w25 != 0));
  }
  return 1;
}


