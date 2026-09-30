/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 074bda34
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
               (long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  short *psVar3;
  short *psVar4;
  ulong uVar5;
  short *in_x9;
  uint in_w10;
  short in_w11;
  int iVar6;
  int in_w12;
  ulong uVar7;
  long unaff_x19;
  ulong unaff_x20;
  short *unaff_x21;
  
  while (uVar5 = unaff_x20, iVar6 = in_w12, (bool)in_CY && !(bool)in_ZR) {
    do {
      unaff_x21 = in_x9;
      uVar7 = (uVar5 & 0xffffffff) * (ulong)in_w10;
      uVar2 = (uint)uVar5;
      unaff_x20 = uVar7 >> 0x23;
      in_x9 = unaff_x21 + -1;
      *unaff_x21 = (short)uVar5 + (short)(uint)(uVar7 >> 0x23) * in_w11 + 0x30;
      in_w12 = iVar6 + -1;
      bVar1 = -1 < iVar6;
      uVar5 = unaff_x20;
      iVar6 = in_w12;
    } while (bVar1);
    in_ZR = uVar2 == 9;
    in_CY = 8 < uVar2;
  }
  uVar5 = param_1 - (long)unaff_x21;
  if ((long)uVar5 < 0) {
    uVar5 = uVar5 + 1;
  }
  uVar5 = uVar5 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar5;
  psVar3 = (short *)FUN_074c4780();
  psVar4 = psVar3;
  if (-1 < (int)uVar5 + -1) {
    do {
      uVar2 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar2;
      psVar3 = psVar4 + 1;
      *psVar4 = *unaff_x21;
      psVar4 = psVar3;
      unaff_x21 = unaff_x21 + 1;
    } while (uVar2 != 0);
  }
  *psVar3 = 0;
  return;
}


