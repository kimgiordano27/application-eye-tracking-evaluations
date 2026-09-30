/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 062491cc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal(void)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  short *psVar7;
  int in_w10;
  int iVar8;
  int unaff_w19;
  short unaff_w20;
  uint unaff_w21;
  int *unaff_x22;
  int unaff_w24;
  int unaff_w25;
  
  if (in_w10 == 0) {
    thunk_FUN_03798b70();
  }
  if (unaff_w24 <= unaff_w25) {
    unaff_w24 = unaff_w25;
  }
  if (unaff_w19 < unaff_w24) {
    *unaff_x22 = 0;
  }
  else {
    *unaff_x22 = unaff_w24;
    puVar5 = PTR_DAT_07daae20;
    lVar6 = FUN_04077754();
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar5);
    }
    psVar7 = (short *)(lVar6 + (ulong)(uint)(unaff_w24 << 1));
    iVar8 = unaff_w25 + -2;
    do {
      uVar1 = unaff_w21 & 0xf;
      sVar3 = 0x30;
      if (9 < uVar1) {
        sVar3 = unaff_w20;
      }
      unaff_w21 = unaff_w21 >> 4;
      psVar7 = psVar7 + -1;
      *psVar7 = sVar3 + (short)uVar1;
      iVar4 = iVar8 + -1;
      bVar2 = -1 < iVar8;
      iVar8 = iVar4;
    } while ((bVar2) || (unaff_w21 != 0));
  }
  return unaff_w24 <= unaff_w19;
}


