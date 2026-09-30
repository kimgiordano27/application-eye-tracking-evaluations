/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 01779694
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
               (long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  long *unaff_x21;
  short *psVar8;
  
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x21);
  }
  psVar5 = (short *)(param_1 + 0x14);
  psVar8 = psVar5;
  if ((int)unaff_x20 != 0) {
    iVar6 = -2;
    do {
      do {
        uVar3 = (uint)unaff_x20;
        uVar7 = (unaff_x20 & 0xffffffff) / 10;
        psVar8 = psVar8 + -1;
        *psVar8 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        unaff_x20 = uVar7;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  uVar7 = (long)psVar5 - (long)psVar8;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar7;
  psVar4 = (short *)FUN_01780054();
  psVar5 = psVar4;
  if (-1 < (int)uVar7 + -1) {
    do {
      uVar3 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar3;
      psVar4 = psVar5 + 1;
      *psVar5 = *psVar8;
      psVar5 = psVar4;
      psVar8 = psVar8 + 1;
    } while (0 < (int)uVar3);
  }
  *psVar4 = 0;
  return;
}


