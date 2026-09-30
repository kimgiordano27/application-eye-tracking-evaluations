/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatParseHandling
ENTRY_POINT: 076135d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_FloatParseHandling(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x40);
  if ((*(byte *)(unaff_x21 + 0xde8) & 1) == 0) {
    FUN_04077588(PTR_DAT_09287040);
    *(undefined1 *)(unaff_x21 + 0xde8) = 1;
  }
  uVar2 = FUN_04077674(*puVar6,unaff_w20);
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    iVar4 = *(int *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x10);
    if (iVar4 < *(int *)(param_1 + 0x1c)) {
      iVar5 = 0;
    }
    else {
      if (lVar3 == 0) {
LAB_076136b0:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0769cb24(lVar3,iVar4,uVar2,0,*(int *)(lVar3 + 0x18) - iVar4,0);
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) goto LAB_076136b0;
      iVar1 = *(int *)(param_1 + 0x1c);
      iVar4 = 0;
      iVar5 = *(int *)(lVar3 + 0x18) - *(int *)(param_1 + 0x18);
    }
    FUN_0769cb24(lVar3,iVar4,uVar2,iVar5,iVar1,0);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x10),uVar2);
  iVar1 = 0;
  if (*(int *)(param_1 + 0x20) != unaff_w20) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}


