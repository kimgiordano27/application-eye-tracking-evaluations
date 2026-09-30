/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DefaultValueHandling
ENTRY_POINT: 04f3bc50
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


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DefaultValueHandling
               (long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint in_w9;
  int in_w10;
  int iVar5;
  byte in_w12;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar6;
  long *unaff_x25;
  long unaff_x26;
  uint uVar7;
  ulong uVar8;
  
  uVar4 = in_w10 + 0x10;
  iVar5 = -0xf;
  do {
    if ((in_w12 & 1) == 0) goto LAB_04f3bdb4;
    uVar1 = *(ushort *)(unaff_x22 + (long)(in_w10 + iVar5 + 0x10) * 2);
    uVar8 = (ulong)uVar1;
    if ((in_w9 <= uVar1) || (iVar2 = *(int *)(param_1 + uVar8 * 4 + 0x20), iVar2 == 0xff)) {
      uVar7 = 0;
      uVar4 = in_w10 + iVar5 + 0x10;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
    }
    uVar7 = in_w10 + iVar5 + 0x11;
    in_w12 = uVar7 < unaff_w21;
    bVar3 = iVar5 != -1;
    iVar5 = iVar5 + 1;
    unaff_x26 = (long)iVar2 + unaff_x26 * 0x10;
  } while (bVar3);
  if (uVar7 < unaff_w21) {
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
    uVar8 = (ulong)uVar1;
    if ((uVar1 < in_w9) && (*(int *)(param_1 + uVar8 * 4 + 0x20) != 0xff)) {
      uVar4 = in_w10 + 0x11;
      if (uVar4 < unaff_w21) {
        do {
          uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
          uVar8 = (ulong)uVar1;
          if ((in_w9 <= uVar1) || (*(int *)(param_1 + uVar8 * 4 + 0x20) == 0xff)) {
            uVar7 = 1;
            goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
          }
          uVar4 = uVar4 + 1;
        } while (unaff_w21 != uVar4);
      }
    }
    else {
      uVar7 = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling:
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (((int)uVar8 - 9U < 5) || ((int)uVar8 == 0x20)) {
        if ((unaff_w23 >> 1 & 1) == 0) {
          unaff_x26 = 0;
          uVar4 = 0;
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
        }
        uVar4 = uVar4 + 1;
        if ((int)uVar4 < (int)unaff_w21) {
          puVar6 = (ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
          do {
            if (unaff_w21 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            uVar1 = *puVar6;
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3bda8;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 1;
          } while (unaff_w21 != uVar4);
        }
        else {
LAB_04f3bda8:
          if (uVar4 < unaff_w21) goto LAB_04f3bdc4;
        }
        if (uVar7 == 0) goto LAB_04f3bdb4;
      }
      else {
LAB_04f3bdc4:
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar4 = FUN_04f3d628();
        if ((uVar4 & 1) == 0) {
          unaff_x26 = 0;
        }
        if ((uVar7 & uVar4) == 0)
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
      }
    }
    unaff_x26 = 0;
    uVar4 = 0;
    *unaff_x20 = 1;
  }
  else {
LAB_04f3bdb4:
    uVar4 = 1;
  }
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = unaff_x26;
  return uVar4 & 1;
}


