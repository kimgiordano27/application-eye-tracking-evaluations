/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 0710c978
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  ushort uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  undefined8 uVar3;
  ulong *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar4;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar5;
  int unaff_w25;
  ulong uVar6;
  ulong unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  
  while (!(bool)in_CY || (bool)in_ZR) {
    uVar5 = unaff_w27 + unaff_w25 + 0x14;
    bVar2 = unaff_w25 == -1;
    unaff_w25 = unaff_w25 + 1;
    unaff_x26 = (unaff_x20 + unaff_x26 * unaff_x28) - 0x30;
    if (bVar2) {
      if (unaff_w23 <= uVar5) goto LAB_0710cba8;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar6 = (ulong)uVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (9 < uVar1 - 0x30) {
        bVar2 = false;
        goto LAB_0710caac;
      }
      unaff_w24 = unaff_w27 + 0x14;
      if ((0x1999999999999999 < unaff_x26) ||
         ((bVar2 = false, unaff_x26 == 0x1999999999999999 && (0x35 < uVar1)))) {
        bVar2 = true;
      }
      unaff_x26 = (uVar6 + unaff_x26 * 10) - 0x30;
      if (unaff_w23 <= unaff_w24) goto LAB_0710cba4;
      goto LAB_0710ca14;
    }
    if (unaff_w23 <= uVar5) goto LAB_0710cba8;
    uVar1 = *(ushort *)(unaff_x21 + (long)(unaff_w27 + unaff_w25 + 0x13) * 2);
    unaff_x20 = (ulong)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = uVar1 - 0x30;
    in_ZR = uVar5 == 9;
    in_CY = 8 < uVar5;
  }
  uVar6 = unaff_x20 & 0xffffffff;
  bVar2 = false;
  unaff_w24 = unaff_w27 + unaff_w25 + 0x13;
LAB_0710caac:
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (((int)uVar6 - 9U < 5) || ((int)uVar6 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0710cb74;
    uVar5 = unaff_w24 + 1;
    if ((int)uVar5 < (int)unaff_w23) {
      puVar4 = (ushort *)(unaff_x21 + (long)(int)uVar5 * 2);
      do {
        if (unaff_w23 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar1 = *puVar4;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0710cb28;
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (unaff_w23 != uVar5);
    }
    else {
LAB_0710cb28:
      if (uVar5 < unaff_w23) goto LAB_0710cb3c;
    }
  }
  else {
LAB_0710cb3c:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = FUN_0710d4b8();
    if ((uVar6 & 1) == 0) {
LAB_0710cb74:
      unaff_x26 = 0;
      uVar3 = 0;
      goto LAB_0710cb7c;
    }
  }
LAB_0710cba4:
  if (!bVar2) {
LAB_0710cba8:
    if ((in_stack_00000008 & 0x100000000) != 0 || unaff_x26 == 0) {
      uVar3 = 1;
      goto LAB_0710cb7c;
    }
  }
LAB_0710cbc0:
  unaff_x26 = 0;
  uVar3 = 0;
  *in_stack_00000010 = 1;
LAB_0710cb7c:
  *unaff_x19 = unaff_x26;
  return uVar3;
  while( true ) {
    unaff_w24 = unaff_w24 + 1;
    bVar2 = true;
    if (unaff_w23 == unaff_w24) break;
LAB_0710ca14:
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar6 = (ulong)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (9 < uVar1 - 0x30) goto LAB_0710caac;
  }
  goto LAB_0710cbc0;
}


