/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MissingMemberHandling
ENTRY_POINT: 04f3bce0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04f3bdb4) */

uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MissingMemberHandling
               (long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint in_w9;
  int in_w10;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar3;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x28;
  
  while (in_w10 != 0xff) {
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w21 == unaff_w24) goto LAB_04f3bdf4;
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
    unaff_x28 = (ulong)uVar1;
    if (in_w9 <= uVar1) break;
    in_w10 = *(int *)(param_1 + unaff_x28 * 4 + 0x20);
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (((int)unaff_x28 - 9U < 5) || ((int)unaff_x28 == 0x20)) {
    if ((unaff_w23 >> 1 & 1) == 0) {
      unaff_x26 = 0;
      uVar2 = 0;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
    }
    uVar2 = unaff_w24 + 1;
    if ((int)uVar2 < (int)unaff_w21) {
      puVar3 = (ushort *)(unaff_x22 + (long)(int)uVar2 * 2);
      do {
        if (unaff_w21 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar1 = *puVar3;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3bda8;
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (unaff_w21 != uVar2);
    }
    else {
LAB_04f3bda8:
      if (uVar2 < unaff_w21) goto LAB_04f3bdc4;
    }
  }
  else {
LAB_04f3bdc4:
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar2 = FUN_04f3d628();
    if ((uVar2 & 1) == 0) {
      unaff_x26 = 0;
    }
    if ((uVar2 & 1) == 0)
    goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
  }
LAB_04f3bdf4:
  unaff_x26 = 0;
  uVar2 = 0;
  *unaff_x20 = 1;
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = unaff_x26;
  return uVar2 & 1;
}


