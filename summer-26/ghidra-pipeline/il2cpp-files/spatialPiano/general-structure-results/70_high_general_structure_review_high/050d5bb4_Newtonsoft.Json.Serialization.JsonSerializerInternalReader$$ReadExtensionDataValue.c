/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 050d5bb4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue(void)

{
  uint uVar1;
  int iVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long *unaff_x19;
  uint uVar3;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  int unaff_w25;
  
  if (in_ZR || in_NG != in_OV) {
    if (1 < unaff_w25) {
      if (unaff_w25 == 2) {
LAB_050d5cb8:
        uVar3 = unaff_w21 + (uint)*(ushort *)(unaff_x20 + unaff_x24) + 0x800000;
        goto LAB_050d5dbc;
      }
LAB_050d5da0:
      uVar3 = (uint)*(uint3 *)(unaff_x20 + unaff_x24) + unaff_w21 + -0x80000000;
      goto LAB_050d5dbc;
    }
    if (unaff_w25 == 0) {
LAB_050d5c38:
      uVar3 = unaff_w21 + 0x80;
      goto LAB_050d5dbc;
    }
  }
  else {
    if (5 < unaff_w25) {
      if (unaff_w25 == 6) {
        iVar2 = *(int *)(unaff_x20 + unaff_x24);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*(char *)(unaff_x22 + 0xc1c) == '\0') {
          FUN_02f08768(PTR_DAT_067dad70);
          *(undefined1 *)(unaff_x22 + 0xc1c) = 1;
        }
        unaff_x24 = unaff_x24 | 4;
        uVar3 = iVar2 + unaff_w21;
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar1 = uVar3 ^ unaff_w23;
        uVar3 = uVar1 + (uVar3 >> 0xc | uVar3 * 0x100000);
        uVar1 = uVar3 ^ (uVar1 >> 0x17 | uVar1 << 9);
        unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
        unaff_w21 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
        goto LAB_050d5cb8;
      }
      iVar2 = *(int *)(unaff_x20 + unaff_x24);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(char *)(unaff_x22 + 0xc1c) == '\0') {
        FUN_02f08768(PTR_DAT_067dad70);
        *(undefined1 *)(unaff_x22 + 0xc1c) = 1;
      }
      unaff_x24 = unaff_x24 | 4;
      uVar3 = iVar2 + unaff_w21;
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar1 = uVar3 ^ unaff_w23;
      uVar3 = uVar1 + (uVar3 >> 0xc | uVar3 * 0x100000);
      uVar1 = uVar3 ^ (uVar1 >> 0x17 | uVar1 << 9);
      unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
      unaff_w21 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
      goto LAB_050d5da0;
    }
    if (unaff_w25 == 4) {
      iVar2 = *(int *)(unaff_x20 + unaff_x24);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(char *)(unaff_x22 + 0xc1c) == '\0') {
        FUN_02f08768(PTR_DAT_067dad70);
        *(undefined1 *)(unaff_x22 + 0xc1c) = 1;
      }
      uVar3 = iVar2 + unaff_w21;
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar1 = uVar3 ^ unaff_w23;
      uVar3 = uVar1 + (uVar3 >> 0xc | uVar3 * 0x100000);
      uVar1 = uVar3 ^ (uVar1 >> 0x17 | uVar1 << 9);
      unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
      unaff_w21 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
      goto LAB_050d5c38;
    }
    iVar2 = *(int *)(unaff_x20 + unaff_x24);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(char *)(unaff_x22 + 0xc1c) == '\0') {
      FUN_02f08768(PTR_DAT_067dad70);
      *(undefined1 *)(unaff_x22 + 0xc1c) = 1;
    }
    unaff_x24 = unaff_x24 | 4;
    uVar3 = iVar2 + unaff_w21;
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar1 = uVar3 ^ unaff_w23;
    uVar3 = uVar1 + (uVar3 >> 0xc | uVar3 * 0x100000);
    uVar1 = uVar3 ^ (uVar1 >> 0x17 | uVar1 << 9);
    unaff_w23 = uVar1 >> 0xd | uVar1 << 0x13;
    unaff_w21 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
  }
  uVar3 = unaff_w21 + (uint)*(byte *)(unaff_x20 + unaff_x24) + 0x8000;
LAB_050d5dbc:
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (*(char *)(unaff_x22 + 0xc1c) == '\0') {
    FUN_02f08768(PTR_DAT_067dad70);
    *(undefined1 *)(unaff_x22 + 0xc1c) = 1;
  }
  if ((*(int *)(*unaff_x19 + 0xe4) == 0) &&
     (thunk_FUN_02f6670c(), *(char *)(unaff_x22 + 0xc1c) == '\0')) {
    FUN_02f08768(PTR_DAT_067dad70);
    *(undefined1 *)(unaff_x22 + 0xc1c) = 1;
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = unaff_w23 ^ uVar3;
  uVar3 = uVar1 + (uVar3 >> 0xc | uVar3 << 0x14);
  uVar1 = uVar3 ^ (uVar1 >> 0x17 | uVar1 << 9);
  uVar3 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
  uVar1 = uVar3 ^ (uVar1 >> 0xd | uVar1 << 0x13);
  uVar3 = uVar1 + (uVar3 >> 0xc | uVar3 * 0x100000);
  uVar1 = uVar3 ^ (uVar1 >> 0x17 | uVar1 << 9);
  return uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000) ^ (uVar1 >> 0xd | uVar1 << 0x13);
}


