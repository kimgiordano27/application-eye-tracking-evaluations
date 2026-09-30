/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 0624b6c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull
               (long param_1,long param_2,undefined8 param_3,int param_4,long param_5,
               undefined4 param_6)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  long lVar10;
  long unaff_x24;
  long lVar11;
  
  if ((*(byte *)(unaff_x24 + 0x9ec) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07daae20);
    *(undefined1 *)(unaff_x24 + 0x9ec) = 1;
  }
  psVar7 = (short *)FUN_06251760(param_2,0);
  psVar8 = psVar7;
  sVar1 = 0x30;
  if (*psVar7 != 0) {
    psVar8 = psVar7 + 1;
    sVar1 = *psVar7;
  }
  if (DAT_0825aded == '\0') {
    FUN_0373b518(PTR_DAT_07da5848);
    DAT_0825aded = '\x01';
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar2 < (int)*(uint *)(param_1 + 0x10)) {
    if (*(uint *)(param_1 + 0x10) <= uVar2) goto LAB_0624b8f4;
    *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar2 * 2) = sVar1;
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
  }
  else {
    FUN_060dbfe4(param_1,sVar1,0);
  }
  param_4 = param_4 + -1;
  if (param_4 == 0) goto LAB_0624b884;
  if (param_5 == 0) {
LAB_0624b8f8:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar10 = *(long *)(param_5 + 0x38);
  if (DAT_0825ba12 == '\0') {
    FUN_0373b518(PTR_DAT_07da5848);
    DAT_0825ba12 = '\x01';
  }
  if (lVar10 == 0) goto LAB_0624b8f8;
  if (*(int *)(lVar10 + 0x10) == 1) {
    uVar2 = *(uint *)(param_1 + 0x18);
    if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar2) goto LAB_0624b7ec;
    if (*(uint *)(param_1 + 0x10) <= uVar2) {
LAB_0624b8f4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar11 = *(long *)(param_1 + 8);
    uVar6 = FUN_060bb390(lVar10,0,0);
    *(undefined2 *)(lVar11 + (long)(int)uVar2 * 2) = uVar6;
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    puVar4 = PTR_DAT_07da5848;
  }
  else {
LAB_0624b7ec:
    FUN_060dc110(param_1,lVar10,0);
    puVar4 = PTR_DAT_07da5848;
  }
  for (; puVar5 = PTR_DAT_07da5848, PTR_DAT_07da5848 = puVar4, 0 < param_4; param_4 = param_4 + -1)
  {
    sVar1 = *psVar8;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      psVar8 = psVar8 + 1;
      sVar3 = sVar1;
    }
    if (DAT_0825aded == '\0') {
      FUN_0373b518(puVar5);
      DAT_0825aded = '\x01';
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(param_1 + 0x10)) {
      if (*(uint *)(param_1 + 0x10) <= uVar2) goto LAB_0624b8f4;
      *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_060dbfe4(param_1,sVar3,0);
    }
    puVar4 = PTR_DAT_07da5848;
    PTR_DAT_07da5848 = puVar5;
  }
LAB_0624b884:
  puVar4 = PTR_DAT_07daae20;
  psVar8 = (short *)FUN_06251760(param_2,0);
  if (*psVar8 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_2 + 4) + -1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_0624c068(param_1,param_5,iVar9,param_6,3,1);
  return;
}


