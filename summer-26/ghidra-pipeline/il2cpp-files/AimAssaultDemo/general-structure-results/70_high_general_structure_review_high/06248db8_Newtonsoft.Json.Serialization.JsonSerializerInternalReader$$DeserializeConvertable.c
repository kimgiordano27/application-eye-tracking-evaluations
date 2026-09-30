/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 06248db8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong unaff_x19;
  ulong uVar8;
  int unaff_w20;
  int unaff_w21;
  short *psVar9;
  int *unaff_x22;
  long unaff_x24;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x848));
  *(undefined1 *)(unaff_x24 + 0x9dd) = 1;
  uVar5 = (uint)(unaff_x19 >> 5) & 0x7ffffff;
  uVar7 = (uint)unaff_x19 / 100000;
  if (uVar5 < 0xc35) {
    uVar7 = (uint)unaff_x19;
  }
  iVar6 = 6;
  if (uVar5 < 0xc35) {
    iVar6 = 1;
  }
  if (9 < uVar7) {
    if (uVar7 < 100) {
      iVar6 = iVar6 + 1;
    }
    else if (uVar7 < 1000) {
      iVar6 = iVar6 + 2;
    }
    else if (uVar7 >> 4 < 0x271) {
      iVar6 = iVar6 + 3;
    }
    else {
      iVar6 = iVar6 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (iVar6 <= unaff_w20) {
    iVar6 = unaff_w20;
  }
  if (unaff_w21 < iVar6) {
    uVar3 = 0;
    *unaff_x22 = 0;
  }
  else {
    *unaff_x22 = iVar6;
    lVar4 = FUN_04077754();
    psVar9 = (short *)(lVar4 + (long)iVar6 * 2);
    if (unaff_w20 < 2) {
      do {
        uVar8 = (unaff_x19 & 0xffffffff) / 10;
        uVar7 = (uint)unaff_x19;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)unaff_x19 + (short)uVar8 * -10 + 0x30;
        unaff_x19 = uVar8;
      } while (9 < uVar7);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar6 = unaff_w20 + -2;
      do {
        do {
          uVar7 = (uint)unaff_x19;
          uVar8 = (unaff_x19 & 0xffffffff) / 10;
          psVar9 = psVar9 + -1;
          *psVar9 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
          iVar2 = iVar6 + -1;
          bVar1 = -1 < iVar6;
          unaff_x19 = uVar8;
          iVar6 = iVar2;
        } while (bVar1);
      } while (9 < uVar7);
    }
    uVar3 = 1;
  }
  return uVar3;
}


