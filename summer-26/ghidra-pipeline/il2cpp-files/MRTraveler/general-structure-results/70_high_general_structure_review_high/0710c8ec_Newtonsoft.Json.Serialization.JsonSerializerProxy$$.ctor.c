/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 0710c8ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  ushort uVar1;
  bool in_ZR;
  bool in_CY;
  bool bVar2;
  undefined8 uVar3;
  ulong *unaff_x19;
  uint unaff_w20;
  uint uVar4;
  uint uVar5;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar6;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint unaff_w26;
  ulong uVar10;
  undefined1 *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  uint uStack000000000000000c;
  
  if (in_CY && !in_ZR) goto LAB_0710cb74;
  if (unaff_w28 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        uVar10 = 0;
        goto LAB_0710cbb8;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar9 = (ulong)uVar1;
      unaff_w26 = uVar1 - 0x30;
    } while (unaff_w26 == 0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (unaff_w26 < 10) goto LAB_0710c928;
    uVar10 = 0;
    uVar7 = unaff_w24;
LAB_0710caa8:
    uVar4 = (uint)uVar9;
    bVar2 = false;
    uVar5 = unaff_w20;
LAB_0710caac:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((uVar4 - 9 < 5) || (uVar4 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0710cb74;
      uVar7 = uVar7 + 1;
      if ((int)uVar7 < (int)unaff_w23) {
        puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
        do {
          if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          uVar1 = *puVar6;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0710cb28;
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (unaff_w23 != uVar7);
      }
      else {
LAB_0710cb28:
        if (uVar7 < unaff_w23) goto LAB_0710cb3c;
      }
    }
    else {
LAB_0710cb3c:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar9 = FUN_0710d4b8();
      if ((uVar9 & 1) == 0) {
LAB_0710cb74:
        uVar10 = 0;
        uVar3 = 0;
        goto LAB_0710cb7c;
      }
    }
LAB_0710cba4:
    uStack000000000000000c = uVar5;
    if (!bVar2) {
LAB_0710cba8:
      if ((uStack000000000000000c & 1) != 0 || uVar10 == 0) {
LAB_0710cbb8:
        uVar3 = 1;
        goto LAB_0710cb7c;
      }
    }
  }
  else {
LAB_0710c928:
    uVar4 = unaff_w24 + 1;
    uVar10 = (ulong)unaff_w26;
    uVar7 = unaff_w24 + 0x13;
    iVar8 = -0x12;
    uStack000000000000000c = unaff_w20;
    do {
      if (unaff_w23 <= uVar4) goto LAB_0710cba8;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar8 + 0x13) * 2);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar4 = (uint)uVar1;
      uVar5 = uStack000000000000000c;
      if (9 < uVar4 - 0x30) {
        bVar2 = false;
        uVar7 = unaff_w24 + iVar8 + 0x13;
        goto LAB_0710caac;
      }
      uVar4 = unaff_w24 + iVar8 + 0x14;
      bVar2 = iVar8 != -1;
      iVar8 = iVar8 + 1;
      uVar10 = ((ulong)uVar1 + uVar10 * 10) - 0x30;
    } while (bVar2);
    if (unaff_w23 <= uVar4) goto LAB_0710cba8;
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
    uVar9 = (ulong)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    unaff_w20 = uStack000000000000000c;
    if (9 < uVar1 - 0x30) goto LAB_0710caa8;
    uVar7 = unaff_w24 + 0x14;
    if ((0x1999999999999999 < uVar10) ||
       ((bVar2 = false, uVar10 == 0x1999999999999999 && (0x35 < uVar1)))) {
      bVar2 = true;
    }
    uVar10 = (uVar9 + uVar10 * 10) - 0x30;
    if (unaff_w23 <= uVar7) goto LAB_0710cba4;
    do {
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
      uVar4 = (uint)uVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (9 < uVar1 - 0x30) goto LAB_0710caac;
      uVar7 = uVar7 + 1;
      bVar2 = true;
    } while (unaff_w23 != uVar7);
  }
  uVar10 = 0;
  uVar3 = 0;
  *unaff_x27 = 1;
LAB_0710cb7c:
  *unaff_x19 = uVar10;
  return uVar3;
}


