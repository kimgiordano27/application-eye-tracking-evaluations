/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DefaultValueHandling
ENTRY_POINT: 04f3bc74
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling
               (long param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint in_w9;
  int in_w10;
  int in_w11;
  long in_x12;
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
  int iVar6;
  ulong unaff_x28;
  ulong uVar7;
  
  while (*(int *)(in_x12 + 0x20) != 0xff) {
    uVar5 = in_w10 + in_w11 + 0x11;
    bVar2 = in_w11 == -1;
    in_w11 = in_w11 + 1;
    unaff_x26 = (long)*(int *)(in_x12 + 0x20) + unaff_x26 * 0x10;
    if (bVar2) {
      if (unaff_w21 <= uVar5) goto LAB_04f3bdb4;
      uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
      uVar7 = (ulong)uVar1;
      if ((in_w9 <= uVar1) || (*(int *)(param_1 + uVar7 * 4 + 0x20) == 0xff)) {
        uVar5 = 0;
        goto LAB_04f3bbb4;
      }
      unaff_w24 = in_w10 + 0x11;
      if (unaff_w21 <= unaff_w24) goto LAB_04f3bdf4;
      goto LAB_04f3bccc;
    }
    if (unaff_w21 <= uVar5) goto LAB_04f3bdb4;
    uVar1 = *(ushort *)(unaff_x22 + (long)(in_w10 + in_w11 + 0x10) * 2);
    unaff_x28 = (ulong)uVar1;
    if (in_w9 <= uVar1) break;
    in_x12 = param_1 + unaff_x28 * 4;
  }
  iVar6 = (int)unaff_x28;
  uVar5 = 0;
  unaff_w24 = in_w10 + in_w11 + 0x10;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling:
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if ((iVar6 - 9U < 5) || (iVar6 == 0x20)) {
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
    if (uVar5 == 0) {
LAB_04f3bdb4:
      uVar3 = 1;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
    }
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
LAB_04f3bdf4:
  unaff_x26 = 0;
  uVar3 = 0;
  *unaff_x20 = 1;
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = unaff_x26;
  return uVar3 & 1;
LAB_04f3bccc:
  uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
  uVar7 = (ulong)uVar1;
  if ((uVar1 < in_w9) && (*(int *)(param_1 + uVar7 * 4 + 0x20) != 0xff)) goto code_r0x04f3bce8;
  uVar5 = 1;
LAB_04f3bbb4:
  iVar6 = (int)uVar7;
  goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
code_r0x04f3bce8:
  unaff_w24 = unaff_w24 + 1;
  if (unaff_w21 == unaff_w24) goto LAB_04f3bdf4;
  goto LAB_04f3bccc;
}


