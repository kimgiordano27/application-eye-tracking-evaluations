/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 050036a8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
               (long param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar3;
  uint in_w8;
  uint in_w9;
  long *unaff_x19;
  uint uVar4;
  long unaff_x20;
  int iVar5;
  long unaff_x22;
  uint uVar6;
  ulong unaff_x24;
  int iVar7;
  ulong unaff_x25;
  int *unaff_x26;
  undefined1 unaff_w27;
  
  while( true ) {
    uVar4 = in_w9 ^ (in_w8 >> 0x17 | in_w8 << 9);
    uVar6 = uVar4 >> 0xd | uVar4 << 0x13;
    iVar5 = uVar4 + (in_w9 >> 5 | in_w9 << 0x1b);
    if (!(bool)in_CY || (bool)in_ZR) break;
    iVar7 = unaff_x26[-1];
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if (*(char *)(unaff_x22 + 0xa2) == '\0') {
      FUN_02d4dc40();
      *(undefined1 *)(unaff_x22 + 0xa2) = unaff_w27;
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      cVar3 = *(char *)(unaff_x22 + 0xa2);
    }
    else {
      cVar3 = '\x01';
    }
    iVar2 = *unaff_x26;
    if (cVar3 == '\0') {
      FUN_02d4dc40();
      *(undefined1 *)(unaff_x22 + 0xa2) = unaff_w27;
    }
    param_1 = *unaff_x19;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      param_1 = *unaff_x19;
    }
    uVar4 = iVar7 + iVar5;
    unaff_x25 = unaff_x25 - 8;
    unaff_x26 = unaff_x26 + 2;
    uVar6 = uVar4 ^ uVar6;
    in_CY = 6 < unaff_x25;
    in_ZR = unaff_x25 == 7;
    uVar4 = uVar6 + (uVar4 >> 0xc | uVar4 * 0x100000);
    uVar1 = uVar4 ^ (uVar6 >> 0x17 | uVar6 << 9);
    uVar6 = uVar1 + (uVar4 >> 5 | uVar4 * 0x8000000) + iVar2;
    in_w8 = uVar6 ^ (uVar1 >> 0xd | uVar1 << 0x13);
    in_w9 = in_w8 + (uVar6 >> 0xc | uVar6 * 0x100000);
  }
  iVar7 = (int)unaff_x25;
  if (iVar7 < 4) {
    if (1 < iVar7) {
      if (iVar7 == 2) {
LAB_050037c4:
        uVar4 = iVar5 + (uint)*(ushort *)(unaff_x20 + unaff_x24) + 0x800000;
        goto LAB_050038c8;
      }
LAB_050038ac:
      uVar4 = (uint)*(uint3 *)(unaff_x20 + unaff_x24) + iVar5 + -0x80000000;
      goto LAB_050038c8;
    }
    if (iVar7 == 0) {
LAB_05003744:
      uVar4 = iVar5 + 0x80;
      goto LAB_050038c8;
    }
  }
  else {
    if (5 < iVar7) {
      if (iVar7 == 6) {
        iVar7 = *(int *)(unaff_x20 + unaff_x24);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (*(char *)(unaff_x22 + 0xa2) == '\0') {
          FUN_02d4dc40(PTR_DAT_06656080);
          *(undefined1 *)(unaff_x22 + 0xa2) = 1;
        }
        unaff_x24 = unaff_x24 | 4;
        uVar4 = iVar7 + iVar5;
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar6 = uVar4 ^ uVar6;
        uVar4 = uVar6 + (uVar4 >> 0xc | uVar4 * 0x100000);
        uVar1 = uVar4 ^ (uVar6 >> 0x17 | uVar6 << 9);
        uVar6 = uVar1 >> 0xd | uVar1 << 0x13;
        iVar5 = uVar1 + (uVar4 >> 5 | uVar4 * 0x8000000);
        goto LAB_050037c4;
      }
      iVar7 = *(int *)(unaff_x20 + unaff_x24);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      if (*(char *)(unaff_x22 + 0xa2) == '\0') {
        FUN_02d4dc40(PTR_DAT_06656080);
        *(undefined1 *)(unaff_x22 + 0xa2) = 1;
      }
      unaff_x24 = unaff_x24 | 4;
      uVar4 = iVar7 + iVar5;
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar6 = uVar4 ^ uVar6;
      uVar4 = uVar6 + (uVar4 >> 0xc | uVar4 * 0x100000);
      uVar1 = uVar4 ^ (uVar6 >> 0x17 | uVar6 << 9);
      uVar6 = uVar1 >> 0xd | uVar1 << 0x13;
      iVar5 = uVar1 + (uVar4 >> 5 | uVar4 * 0x8000000);
      goto LAB_050038ac;
    }
    if (iVar7 == 4) {
      iVar7 = *(int *)(unaff_x20 + unaff_x24);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      if (*(char *)(unaff_x22 + 0xa2) == '\0') {
        FUN_02d4dc40(PTR_DAT_06656080);
        *(undefined1 *)(unaff_x22 + 0xa2) = 1;
      }
      uVar4 = iVar7 + iVar5;
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar6 = uVar4 ^ uVar6;
      uVar4 = uVar6 + (uVar4 >> 0xc | uVar4 * 0x100000);
      uVar1 = uVar4 ^ (uVar6 >> 0x17 | uVar6 << 9);
      uVar6 = uVar1 >> 0xd | uVar1 << 0x13;
      iVar5 = uVar1 + (uVar4 >> 5 | uVar4 * 0x8000000);
      goto LAB_05003744;
    }
    iVar7 = *(int *)(unaff_x20 + unaff_x24);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if (*(char *)(unaff_x22 + 0xa2) == '\0') {
      FUN_02d4dc40(PTR_DAT_06656080);
      *(undefined1 *)(unaff_x22 + 0xa2) = 1;
    }
    unaff_x24 = unaff_x24 | 4;
    uVar4 = iVar7 + iVar5;
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar6 = uVar4 ^ uVar6;
    uVar4 = uVar6 + (uVar4 >> 0xc | uVar4 * 0x100000);
    uVar1 = uVar4 ^ (uVar6 >> 0x17 | uVar6 << 9);
    uVar6 = uVar1 >> 0xd | uVar1 << 0x13;
    iVar5 = uVar1 + (uVar4 >> 5 | uVar4 * 0x8000000);
  }
  uVar4 = iVar5 + (uint)*(byte *)(unaff_x20 + unaff_x24) + 0x8000;
LAB_050038c8:
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (*(char *)(unaff_x22 + 0xa2) == '\0') {
    FUN_02d4dc40(PTR_DAT_06656080);
    *(undefined1 *)(unaff_x22 + 0xa2) = 1;
  }
  if ((*(int *)(*unaff_x19 + 0xe4) == 0) &&
     (thunk_FUN_02dabd98(), *(char *)(unaff_x22 + 0xa2) == '\0')) {
    FUN_02d4dc40(PTR_DAT_06656080);
    *(undefined1 *)(unaff_x22 + 0xa2) = 1;
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar6 = uVar6 ^ uVar4;
  uVar4 = uVar6 + (uVar4 >> 0xc | uVar4 << 0x14);
  uVar1 = uVar4 ^ (uVar6 >> 0x17 | uVar6 << 9);
  uVar6 = uVar1 + (uVar4 >> 5 | uVar4 * 0x8000000);
  uVar4 = uVar6 ^ (uVar1 >> 0xd | uVar1 << 0x13);
  uVar6 = uVar4 + (uVar6 >> 0xc | uVar6 * 0x100000);
  uVar4 = uVar6 ^ (uVar4 >> 0x17 | uVar4 << 9);
  return uVar4 + (uVar6 >> 5 | uVar6 * 0x8000000) ^ (uVar4 >> 0xd | uVar4 << 0x13);
}


