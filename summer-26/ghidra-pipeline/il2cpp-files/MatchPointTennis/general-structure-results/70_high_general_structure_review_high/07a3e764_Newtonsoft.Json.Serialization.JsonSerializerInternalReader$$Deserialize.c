/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
ENTRY_POINT: 07a3e764
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  ulong uVar8;
  int *piVar9;
  ulong unaff_x25;
  ulong uVar10;
  
  uVar10 = unaff_x25;
  if (unaff_w22 < 8) {
    uVar8 = 0;
  }
  else {
    piVar9 = (int *)(unaff_x20 + 4);
    do {
      iVar5 = piVar9[-1];
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (DAT_0a5251a8 == '\0') {
        FUN_04447ba8();
        DAT_0a5251a8 = '\x01';
      }
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        cVar7 = DAT_0a5251a8;
      }
      else {
        cVar7 = '\x01';
      }
      iVar4 = *piVar9;
      if (cVar7 == '\0') {
        FUN_04447ba8();
        DAT_0a5251a8 = '\x01';
      }
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar2 = iVar5 + unaff_w21;
      uVar1 = uVar2 ^ unaff_w23;
      uVar2 = uVar1 + (uVar2 >> 0xc | uVar2 * 0x100000);
      uVar1 = uVar2 ^ (uVar1 >> 0x17 | uVar1 << 9);
      uVar2 = uVar1 + (uVar2 >> 5 | uVar2 * 0x8000000) + iVar4;
      uVar1 = uVar2 ^ (uVar1 >> 0xd | uVar1 << 0x13);
      uVar2 = uVar1 + (uVar2 >> 0xc | uVar2 * 0x100000);
      uVar10 = uVar10 - 8;
      uVar1 = uVar2 ^ (uVar1 >> 0x17 | uVar1 << 9);
      unaff_w21 = uVar1 + (uVar2 >> 5 | uVar2 * 0x8000000);
      unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
      piVar9 = piVar9 + 2;
    } while (7 < uVar10);
    uVar8 = unaff_x25 & 0xfffffffffffffff8;
  }
  switch(uVar10 & 0xffffffff) {
  case 4:
    iVar5 = *(int *)(unaff_x20 + uVar8);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = iVar5 + unaff_w21;
    if (DAT_0a5251a8 == '\0') {
      FUN_04447ba8(PTR_DAT_09f40228);
      DAT_0a5251a8 = '\x01';
    }
    uVar1 = uVar2 ^ unaff_w23;
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = uVar1 + (uVar2 >> 0xc | uVar2 * 0x100000);
    uVar1 = uVar2 ^ (uVar1 >> 0x17 | uVar1 << 9);
    unaff_w21 = uVar1 + (uVar2 >> 5 | uVar2 * 0x8000000);
    unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
  case 0:
    unaff_w21 = unaff_w21 + 0x80;
    break;
  case 5:
    iVar5 = *(int *)(unaff_x20 + uVar8);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = iVar5 + unaff_w21;
    if (DAT_0a5251a8 == '\0') {
      FUN_04447ba8(PTR_DAT_09f40228);
      DAT_0a5251a8 = '\x01';
    }
    uVar8 = uVar8 | 4;
    uVar1 = uVar2 ^ unaff_w23;
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = uVar1 + (uVar2 >> 0xc | uVar2 * 0x100000);
    uVar1 = uVar2 ^ (uVar1 >> 0x17 | uVar1 << 9);
    unaff_w21 = uVar1 + (uVar2 >> 5 | uVar2 * 0x8000000);
    unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
  case 1:
    unaff_w21 = unaff_w21 + *(byte *)(unaff_x20 + uVar8) + 0x8000;
    break;
  case 6:
    iVar5 = *(int *)(unaff_x20 + uVar8);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = iVar5 + unaff_w21;
    if (DAT_0a5251a8 == '\0') {
      FUN_04447ba8(PTR_DAT_09f40228);
      DAT_0a5251a8 = '\x01';
    }
    uVar8 = uVar8 | 4;
    uVar1 = uVar2 ^ unaff_w23;
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = uVar1 + (uVar2 >> 0xc | uVar2 * 0x100000);
    uVar1 = uVar2 ^ (uVar1 >> 0x17 | uVar1 << 9);
    unaff_w21 = uVar1 + (uVar2 >> 5 | uVar2 * 0x8000000);
    unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
  case 2:
    unaff_w21 = unaff_w21 + *(ushort *)(unaff_x20 + uVar8) + 0x800000;
    break;
  case 7:
    iVar5 = *(int *)(unaff_x20 + uVar8);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = iVar5 + unaff_w21;
    if (DAT_0a5251a8 == '\0') {
      FUN_04447ba8(PTR_DAT_09f40228);
      DAT_0a5251a8 = '\x01';
    }
    uVar8 = uVar8 | 4;
    uVar1 = uVar2 ^ unaff_w23;
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = uVar1 + (uVar2 >> 0xc | uVar2 * 0x100000);
    uVar1 = uVar2 ^ (uVar1 >> 0x17 | uVar1 << 9);
    unaff_w21 = uVar1 + (uVar2 >> 5 | uVar2 * 0x8000000);
    unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
  case 3:
    unaff_w21 = (unaff_w21 ^ 0x80000000) + (uint)*(uint3 *)(unaff_x20 + uVar8);
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a5251a8 == '\0') {
    FUN_04447ba8(PTR_DAT_09f40228);
    DAT_0a5251a8 = '\x01';
  }
  uVar2 = unaff_w23 ^ unaff_w21;
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    bVar6 = DAT_0a5251a8 == '\0';
  }
  else {
    bVar6 = false;
  }
  uVar1 = uVar2 + (unaff_w21 >> 0xc | unaff_w21 << 0x14);
  uVar3 = uVar1 ^ (uVar2 >> 0x17 | uVar2 << 9);
  uVar2 = uVar3 + (uVar1 >> 5 | uVar1 * 0x8000000);
  if (bVar6) {
    FUN_04447ba8(PTR_DAT_09f40228);
    DAT_0a5251a8 = '\x01';
  }
  uVar1 = (uVar3 >> 0xd | uVar3 << 0x13) ^ uVar2;
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = uVar1 + (uVar2 >> 0xc | uVar2 * 0x100000);
  uVar1 = uVar2 ^ (uVar1 >> 0x17 | uVar1 << 9);
  return uVar1 + (uVar2 >> 5 | uVar2 * 0x8000000) ^ (uVar1 >> 0xd | uVar1 << 0x13);
}


