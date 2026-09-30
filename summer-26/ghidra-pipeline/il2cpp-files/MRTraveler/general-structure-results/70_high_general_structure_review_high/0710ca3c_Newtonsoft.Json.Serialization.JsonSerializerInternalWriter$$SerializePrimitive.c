/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 0710ca3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0710cba8) */
/* WARNING: Removing unreachable block (ram,0x0710cbb8) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(void)

{
  ushort uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar3;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar4;
  undefined1 *unaff_x27;
  long *unaff_x29;
  
  while (!(bool)in_ZR) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (9 < uVar1 - 0x30) {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0710cb3c;
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0710cb7c;
      uVar4 = unaff_w24 + 1;
      if ((int)unaff_w23 <= (int)uVar4) goto LAB_0710cb28;
      puVar3 = (ushort *)(unaff_x21 + (long)(int)uVar4 * 2);
      goto LAB_0710cae0;
    }
    unaff_w24 = unaff_w24 + 1;
    in_ZR = unaff_w23 == unaff_w24;
  }
  goto LAB_0710cbc0;
LAB_0710cb28:
  if (uVar4 < unaff_w23) {
LAB_0710cb3c:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_0710d4b8();
    if ((uVar2 & 1) == 0) goto LAB_0710cb7c;
  }
  goto LAB_0710cbc0;
  while( true ) {
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    if (unaff_w23 == uVar4) break;
LAB_0710cae0:
    if (unaff_w23 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar1 = *puVar3;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0710cb28;
  }
LAB_0710cbc0:
  *unaff_x27 = 1;
LAB_0710cb7c:
  *unaff_x19 = 0;
  return 0;
}


