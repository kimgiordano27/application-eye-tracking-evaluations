/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 074b5870
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 in_w8;
  char cVar4;
  long unaff_x19;
  uint uVar5;
  long unaff_x20;
  int iVar6;
  ulong unaff_x21;
  uint unaff_w22;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  
  *(undefined1 *)(unaff_x19 + 0x446) = in_w8;
  puVar2 = PTR_DAT_0912e8f8;
  uVar11 = (ulong)(int)unaff_w22;
  uVar8 = unaff_x21 >> 0x20;
  uVar7 = (uint)(unaff_x21 >> 0x20);
  if (unaff_w22 < 8) {
    uVar9 = 0;
  }
  else {
    lVar3 = *(long *)PTR_DAT_0912e8f8;
    uVar9 = uVar11 & 0xfffffffffffffff8;
    piVar12 = (int *)(unaff_x20 + 4);
    do {
      iVar6 = piVar12[-1];
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if (DAT_0968e4bd == '\0') {
        FUN_03f13384(puVar2);
        DAT_0968e4bd = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        cVar4 = DAT_0968e4bd;
      }
      else {
        cVar4 = '\x01';
      }
      iVar10 = *piVar12;
      if (cVar4 == '\0') {
        FUN_03f13384(puVar2);
        DAT_0968e4bd = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = iVar6 + (int)unaff_x21;
      uVar11 = uVar11 - 8;
      piVar12 = piVar12 + 2;
      uVar5 = uVar7 ^ (uint)uVar8;
      uVar7 = uVar5 + (uVar7 >> 0xc | uVar7 * 0x100000);
      uVar5 = uVar7 ^ (uVar5 >> 0x17 | uVar5 << 9);
      uVar7 = uVar5 + (uVar7 >> 5 | uVar7 * 0x8000000) + iVar10;
      uVar1 = uVar7 ^ (uVar5 >> 0xd | uVar5 << 0x13);
      uVar5 = uVar1 + (uVar7 >> 0xc | uVar7 * 0x100000);
      uVar1 = uVar5 ^ (uVar1 >> 0x17 | uVar1 << 9);
      uVar7 = uVar1 >> 0xd | uVar1 << 0x13;
      uVar8 = (ulong)uVar7;
      unaff_x21 = (ulong)(uVar1 + (uVar5 >> 5 | uVar5 * 0x8000000));
    } while (7 < uVar11);
  }
  iVar6 = (int)unaff_x21;
  iVar10 = (int)uVar11;
  if (iVar10 < 4) {
    if (1 < iVar10) {
      if (iVar10 == 2) {
LAB_074b5a68:
        uVar5 = iVar6 + (uint)*(ushort *)(unaff_x20 + uVar9) + 0x800000;
        goto LAB_074b5b6c;
      }
LAB_074b5b50:
      uVar5 = (uint)*(uint3 *)(unaff_x20 + uVar9) + iVar6 + -0x80000000;
      goto LAB_074b5b6c;
    }
    if (iVar10 == 0) {
LAB_074b59e8:
      uVar5 = iVar6 + 0x80;
      goto LAB_074b5b6c;
    }
  }
  else {
    if (5 < iVar10) {
      if (iVar10 == 6) {
        iVar10 = *(int *)(unaff_x20 + uVar9);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        if (DAT_0968e4bd == '\0') {
          FUN_03f13384(PTR_DAT_0912e8f8);
          DAT_0968e4bd = '\x01';
        }
        uVar9 = uVar9 | 4;
        uVar5 = iVar10 + iVar6;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = uVar5 ^ uVar7;
        uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
        uVar1 = uVar5 ^ (uVar7 >> 0x17 | uVar7 << 9);
        uVar7 = uVar1 >> 0xd | uVar1 << 0x13;
        iVar6 = uVar1 + (uVar5 >> 5 | uVar5 * 0x8000000);
        goto LAB_074b5a68;
      }
      iVar10 = *(int *)(unaff_x20 + uVar9);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if (DAT_0968e4bd == '\0') {
        FUN_03f13384(PTR_DAT_0912e8f8);
        DAT_0968e4bd = '\x01';
      }
      uVar9 = uVar9 | 4;
      uVar5 = iVar10 + iVar6;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar7 = uVar5 ^ uVar7;
      uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
      uVar1 = uVar5 ^ (uVar7 >> 0x17 | uVar7 << 9);
      uVar7 = uVar1 >> 0xd | uVar1 << 0x13;
      iVar6 = uVar1 + (uVar5 >> 5 | uVar5 * 0x8000000);
      goto LAB_074b5b50;
    }
    if (iVar10 == 4) {
      iVar10 = *(int *)(unaff_x20 + uVar9);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      if (DAT_0968e4bd == '\0') {
        FUN_03f13384(PTR_DAT_0912e8f8);
        DAT_0968e4bd = '\x01';
      }
      uVar5 = iVar10 + iVar6;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar7 = uVar5 ^ uVar7;
      uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
      uVar1 = uVar5 ^ (uVar7 >> 0x17 | uVar7 << 9);
      uVar7 = uVar1 >> 0xd | uVar1 << 0x13;
      iVar6 = uVar1 + (uVar5 >> 5 | uVar5 * 0x8000000);
      goto LAB_074b59e8;
    }
    iVar10 = *(int *)(unaff_x20 + uVar9);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if (DAT_0968e4bd == '\0') {
      FUN_03f13384(PTR_DAT_0912e8f8);
      DAT_0968e4bd = '\x01';
    }
    uVar9 = uVar9 | 4;
    uVar5 = iVar10 + iVar6;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar7 = uVar5 ^ uVar7;
    uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 * 0x100000);
    uVar1 = uVar5 ^ (uVar7 >> 0x17 | uVar7 << 9);
    uVar7 = uVar1 >> 0xd | uVar1 << 0x13;
    iVar6 = uVar1 + (uVar5 >> 5 | uVar5 * 0x8000000);
  }
  uVar5 = iVar6 + (uint)*(byte *)(unaff_x20 + uVar9) + 0x8000;
LAB_074b5b6c:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  if (DAT_0968e4bd == '\0') {
    FUN_03f13384(PTR_DAT_0912e8f8);
    DAT_0968e4bd = '\x01';
  }
  if ((*(int *)(*(long *)puVar2 + 0xe4) == 0) && (thunk_FUN_03f6fea8(), DAT_0968e4bd == '\0')) {
    FUN_03f13384(PTR_DAT_0912e8f8);
    DAT_0968e4bd = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar7 = uVar7 ^ uVar5;
  uVar5 = uVar7 + (uVar5 >> 0xc | uVar5 << 0x14);
  uVar1 = uVar5 ^ (uVar7 >> 0x17 | uVar7 << 9);
  uVar7 = uVar1 + (uVar5 >> 5 | uVar5 * 0x8000000);
  uVar5 = uVar7 ^ (uVar1 >> 0xd | uVar1 << 0x13);
  uVar7 = uVar5 + (uVar7 >> 0xc | uVar7 * 0x100000);
  uVar5 = uVar7 ^ (uVar5 >> 0x17 | uVar5 << 9);
  return uVar5 + (uVar7 >> 5 | uVar7 * 0x8000000) ^ (uVar5 >> 0xd | uVar5 << 0x13);
}


