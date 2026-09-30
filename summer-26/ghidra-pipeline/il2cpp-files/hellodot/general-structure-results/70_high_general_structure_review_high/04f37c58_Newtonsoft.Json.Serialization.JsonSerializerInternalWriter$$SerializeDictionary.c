/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 04f37c58
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(long param_1)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short unaff_w19;
  uint unaff_w20;
  undefined8 unaff_x21;
  int unaff_w22;
  int unaff_w23;
  short *psVar6;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f37b1c with catch @ 04f37c58
                        */
  psVar6 = (short *)(param_1 + (long)unaff_w23 * 2);
  if ((*(int *)(*unaff_x26 + 0xe0) == 0) && (thunk_FUN_02cd038c(), *(int *)(*unaff_x26 + 0xe0) == 0)
     ) {
    thunk_FUN_02cd038c();
  }
  if (unaff_w24 == 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (unaff_w22 < 2) {
      unaff_w22 = 1;
    }
    iVar5 = unaff_w22 + -2;
    do {
      uVar1 = unaff_w20 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w19;
      }
      unaff_w20 = unaff_w20 >> 4;
      psVar6 = psVar6 + -1;
      *psVar6 = sVar3 + (short)uVar1;
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
      psVar6 = psVar6 + -1;
      *psVar6 = sVar3 + (short)uVar1;
      iVar4 = iVar5 + -1;
      bVar2 = -1 < iVar5;
      iVar5 = iVar4;
    } while ((bVar2) || (unaff_w20 != 0));
    iVar5 = unaff_w22 + -10;
    do {
      uVar1 = unaff_w24 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w19;
      }
      unaff_w24 = unaff_w24 >> 4;
      psVar6 = psVar6 + -1;
      *psVar6 = sVar3 + (short)uVar1;
      iVar4 = iVar5 + -1;
      bVar2 = -1 < iVar5;
      iVar5 = iVar4;
    } while ((bVar2) || (unaff_w24 != 0));
  }
  return unaff_x21;
}


