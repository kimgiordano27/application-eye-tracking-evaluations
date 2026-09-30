/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceResolver
ENTRY_POINT: 050dcac0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceResolver(void)

{
  bool bVar1;
  uint uVar2;
  short *psVar3;
  short sVar4;
  int in_w8;
  long unaff_x20;
  int unaff_w21;
  int iVar5;
  short *unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar6;
  int unaff_w25;
  int in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  if (((int)unaff_x24 != 0) || (-1 < unaff_w23 + -1)) {
    psVar3 = unaff_x22 + -1;
    do {
      do {
        unaff_x22 = psVar3;
        uVar2 = (uint)unaff_x24;
        iVar5 = unaff_w21 + -1;
        uVar6 = (unaff_x24 & 0xffffffff) / 10;
        *unaff_x22 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < unaff_w21;
        psVar3 = unaff_x22 + -1;
        unaff_x24 = uVar6;
        unaff_w21 = iVar5;
      } while (bVar1);
    } while (9 < uVar2);
  }
  iVar5 = *(int *)(unaff_x20 + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      unaff_x22 = unaff_x22 + -1;
      sVar4 = FUN_04f69818();
      iVar5 = iVar5 + -1;
      *unaff_x22 = sVar4;
    } while (iVar5 != -1);
  }
  return unaff_w25 <= in_stack_00000008;
}


