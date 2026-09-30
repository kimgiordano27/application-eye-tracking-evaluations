/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ContractResolver
ENTRY_POINT: 04f3bc98
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ContractResolver
               (long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 in_CY;
  uint uVar3;
  uint in_w9;
  int in_w10;
  uint in_w11;
  byte in_w12;
  uint in_w14;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar4;
  uint unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  uint uVar5;
  ulong uVar6;
  
  while (!(bool)in_CY) {
    if ((in_w12 & 1) == 0) goto LAB_04f3bdb4;
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)(in_w10 + in_w11 + 0x10) * 2);
    uVar6 = (ulong)uVar1;
    if ((in_w9 <= uVar1) || (iVar2 = *(int *)(param_1 + uVar6 * 4 + 0x20), iVar2 == 0xff)) {
      uVar5 = 0;
      unaff_w24 = in_w10 + in_w11 + 0x10;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
    }
    in_w14 = in_w10 + in_w11 + 0x11;
    in_w12 = in_w14 < unaff_w21;
    unaff_x26 = (long)iVar2 + unaff_x26 * 0x10;
    in_CY = 0xfffffffe < in_w11;
    in_w11 = in_w11 + 1;
  }
  if (in_w14 < unaff_w21) {
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
    uVar6 = (ulong)uVar1;
    if ((uVar1 < in_w9) && (*(int *)(param_1 + uVar6 * 4 + 0x20) != 0xff)) {
      unaff_w24 = in_w10 + 0x11;
      if (unaff_w24 < unaff_w21) {
        do {
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
          uVar6 = (ulong)uVar1;
          if ((in_w9 <= uVar1) || (*(int *)(param_1 + uVar6 * 4 + 0x20) == 0xff)) {
            uVar5 = 1;
            goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
          }
          unaff_w24 = unaff_w24 + 1;
        } while (unaff_w21 != unaff_w24);
      }
    }
    else {
      uVar5 = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling:
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (((int)uVar6 - 9U < 5) || ((int)uVar6 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) {
          unaff_x26 = 0;
          uVar3 = 0;
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
        }
        uVar3 = unaff_w24 + 1;
        if ((int)uVar3 < (int)unaff_w21) {
          puVar4 = (ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
          do {
            if (unaff_w21 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            uVar1 = *puVar4;
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3bda8;
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (unaff_w21 != uVar3);
        }
        else {
LAB_04f3bda8:
          if (uVar3 < unaff_w21) goto LAB_04f3bdc4;
        }
        if (uVar5 == 0) goto LAB_04f3bdb4;
      }
      else {
LAB_04f3bdc4:
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar3 = FUN_04f3d628();
        if ((uVar3 & 1) == 0) {
          unaff_x26 = 0;
        }
        if ((uVar5 & uVar3) == 0)
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
      }
    }
    unaff_x26 = 0;
    uVar3 = 0;
    *unaff_x20 = 1;
  }
  else {
LAB_04f3bdb4:
    uVar3 = 1;
  }
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = unaff_x26;
  return uVar3 & 1;
}


