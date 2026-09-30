/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TraceWriter
ENTRY_POINT: 04f3bba0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_9
*/


uint Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TraceWriter(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint in_w9;
  long in_x10;
  int iVar5;
  long *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar6;
  uint unaff_w24;
  long *unaff_x25;
  long lVar7;
  uint uVar8;
  ulong unaff_x28;
  
  if (*(int *)(in_x10 + 0x20) == 0xff) {
    lVar7 = 0;
    uVar4 = unaff_w24;
LAB_04f3bbb0:
    uVar8 = 0;
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling:
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (((int)unaff_x28 - 9U < 5) || ((int)unaff_x28 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) {
        lVar7 = 0;
        uVar4 = 0;
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
      }
      uVar4 = uVar4 + 1;
      if ((int)uVar4 < (int)unaff_w21) {
        puVar6 = (ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
        do {
          if (unaff_w21 <= uVar4) goto LAB_04f3be14;
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
      if (uVar8 == 0) goto LAB_04f3bdb4;
    }
    else {
LAB_04f3bdc4:
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar4 = FUN_04f3d628();
      if ((uVar4 & 1) == 0) {
        lVar7 = 0;
      }
      if ((uVar8 & uVar4) == 0)
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
    }
  }
  else {
    if (in_w9 <= (uint)unaff_x28) {
LAB_04f3be14:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar7 = (long)*(int *)(param_1 + (unaff_x28 & 0xffffffff) * 4 + 0x20);
    uVar8 = unaff_w24 + 1;
    uVar4 = unaff_w24 + 0x10;
    iVar5 = -0xf;
    do {
      if (unaff_w21 <= uVar8) goto LAB_04f3bdb4;
      uVar1 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar5 + 0x10) * 2);
      unaff_x28 = (ulong)uVar1;
      if ((in_w9 <= uVar1) || (iVar2 = *(int *)(param_1 + unaff_x28 * 4 + 0x20), iVar2 == 0xff)) {
        uVar8 = 0;
        uVar4 = unaff_w24 + iVar5 + 0x10;
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
      }
      uVar8 = unaff_w24 + iVar5 + 0x11;
      bVar3 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      lVar7 = (long)iVar2 + lVar7 * 0x10;
    } while (bVar3);
    if (unaff_w21 <= uVar8) {
LAB_04f3bdb4:
      uVar4 = 1;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling;
    }
    uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
    unaff_x28 = (ulong)uVar1;
    if ((in_w9 <= uVar1) || (*(int *)(param_1 + unaff_x28 * 4 + 0x20) == 0xff)) goto LAB_04f3bbb0;
    uVar4 = unaff_w24 + 0x11;
    if (uVar4 < unaff_w21) {
      do {
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
        unaff_x28 = (ulong)uVar1;
        if ((in_w9 <= uVar1) || (*(int *)(param_1 + unaff_x28 * 4 + 0x20) == 0xff)) {
          uVar8 = 1;
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling;
        }
        uVar4 = uVar4 + 1;
      } while (unaff_w21 != uVar4);
    }
  }
  lVar7 = 0;
  uVar4 = 0;
  *unaff_x20 = 1;
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling:
  *unaff_x19 = lVar7;
  return uVar4 & 1;
}


