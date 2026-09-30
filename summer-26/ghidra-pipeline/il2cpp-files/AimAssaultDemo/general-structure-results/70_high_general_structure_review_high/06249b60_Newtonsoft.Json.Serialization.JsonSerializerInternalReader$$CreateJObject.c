/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 06249b60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong unaff_x19;
  ulong uVar7;
  int unaff_w20;
  short *psVar8;
  int iVar9;
  int *unaff_x21;
  int unaff_w23;
  int iVar10;
  long unaff_x24;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xe20));
  FUN_0373b518(PTR_DAT_07da5848);
  *(undefined1 *)(unaff_x24 + 0x9e5) = 1;
  if (unaff_w23 < 2) {
    unaff_w23 = 1;
  }
  if (unaff_x19 < 10000000) {
    iVar10 = 1;
    uVar6 = (uint)unaff_x19;
  }
  else if (unaff_x19 < 100000000000000) {
    uVar6 = (uint)(unaff_x19 / 10000000);
    iVar10 = 8;
  }
  else {
    uVar6 = (uint)(unaff_x19 / 100000000000000);
    iVar10 = 0xf;
  }
  if (9 < uVar6) {
    if (uVar6 < 100) {
      iVar10 = iVar10 + 1;
    }
    else if (uVar6 < 1000) {
      iVar10 = iVar10 + 2;
    }
    else if (uVar6 >> 4 < 0x271) {
      iVar10 = iVar10 + 3;
    }
    else if (uVar6 >> 5 < 0xc35) {
      iVar10 = iVar10 + 4;
    }
    else if (uVar6 < 1000000) {
      iVar10 = iVar10 + 5;
    }
    else {
      iVar10 = iVar10 + 6;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (iVar10 <= unaff_w23) {
    iVar10 = unaff_w23;
  }
  if (unaff_w20 < iVar10) {
    *unaff_x21 = 0;
    return 0;
  }
  *unaff_x21 = iVar10;
  puVar2 = PTR_DAT_07daae20;
  lVar3 = FUN_04077754();
  iVar9 = unaff_w23 + -2;
  psVar8 = (short *)(lVar3 + (ulong)(uint)(iVar10 << 1));
  while( true ) {
    iVar10 = *(int *)(*(long *)puVar2 + 0xe4);
    if (iVar10 == 0) {
      thunk_FUN_03798b70();
      iVar10 = *(int *)(*(long *)puVar2 + 0xe4);
    }
    iVar4 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (iVar10 == 0) {
      thunk_FUN_03798b70();
    }
    unaff_x19 = unaff_x19 / 1000000000;
    uVar7 = (ulong)(uint)(iVar4 + (int)unaff_x19 * -1000000000);
    iVar10 = 7;
    do {
      do {
        uVar5 = uVar7 / 10;
        uVar6 = (uint)uVar7;
        psVar8 = psVar8 + -1;
        *psVar8 = (short)uVar7 + (short)(uVar7 / 10) * -10 + 0x30;
        iVar4 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        uVar7 = uVar5;
        iVar10 = iVar4;
      } while (bVar1);
    } while (9 < uVar6);
    unaff_w23 = unaff_w23 + -9;
    iVar9 = iVar9 + -9;
  }
  if (iVar10 == 0) {
    thunk_FUN_03798b70();
  }
  if ((iVar4 != 0) || (-1 < unaff_w23 + -1)) {
    do {
      do {
        uVar6 = (uint)unaff_x19;
        uVar7 = (unaff_x19 & 0xffffffff) / 10;
        psVar8 = psVar8 + -1;
        *psVar8 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar10 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        unaff_x19 = uVar7;
        iVar9 = iVar10;
      } while (bVar1);
    } while (9 < uVar6);
  }
  return 1;
}


