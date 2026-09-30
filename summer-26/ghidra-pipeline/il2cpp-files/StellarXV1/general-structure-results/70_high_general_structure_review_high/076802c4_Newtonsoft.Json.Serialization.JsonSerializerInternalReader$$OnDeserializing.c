/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 076802c4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing(void)

{
  bool bVar1;
  uint uVar2;
  short *psVar3;
  short sVar4;
  long unaff_x19;
  int unaff_w21;
  int iVar5;
  ulong unaff_x22;
  ulong uVar6;
  int unaff_w23;
  short *unaff_x24;
  
  if (-1 < unaff_w23 + -1) {
    psVar3 = unaff_x24 + -1;
    do {
      do {
        unaff_x24 = psVar3;
        uVar2 = (uint)unaff_x22;
        iVar5 = unaff_w21 + -1;
        uVar6 = (unaff_x22 & 0xffffffff) / 10;
        *unaff_x24 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < unaff_w21;
        psVar3 = unaff_x24 + -1;
        unaff_x22 = uVar6;
        unaff_w21 = iVar5;
      } while (bVar1);
    } while (9 < uVar2);
  }
  iVar5 = *(int *)(unaff_x19 + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      unaff_x24 = unaff_x24 + -1;
      sVar4 = FUN_074e0328();
      iVar5 = iVar5 + -1;
      *unaff_x24 = sVar4;
    } while (iVar5 != -1);
  }
  return;
}


