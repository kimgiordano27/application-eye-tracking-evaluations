/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 0592d7ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue
               (long param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint in_w9;
  int in_w10;
  int iVar5;
  int *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar6;
  uint unaff_w24;
  long *unaff_x25;
  int iVar7;
  uint uVar8;
  ulong unaff_x28;
  
  if (in_w10 == 0xff) {
    iVar7 = 0;
    uVar4 = unaff_w24;
LAB_0592d7b8:
    uVar8 = 0;
LAB_0592d90c:
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (((int)unaff_x28 - 9U < 5) || ((int)unaff_x28 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) {
        iVar7 = 0;
        uVar4 = 0;
        goto LAB_0592d930;
      }
      uVar4 = uVar4 + 1;
      if ((int)uVar4 < (int)unaff_w21) {
        puVar6 = (ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
        do {
          if (unaff_w21 <= uVar4) goto LAB_0592da1c;
          uVar2 = *puVar6;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0592d9b0;
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (unaff_w21 != uVar4);
      }
      else {
LAB_0592d9b0:
        if (uVar4 < unaff_w21) goto LAB_0592d9cc;
      }
      if (uVar8 == 0) goto LAB_0592d9bc;
    }
    else {
LAB_0592d9cc:
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_0592fca4();
      if ((uVar4 & 1) == 0) {
        iVar7 = 0;
      }
      if ((uVar8 & uVar4) == 0) goto LAB_0592d930;
    }
  }
  else {
    if (in_w9 <= (uint)unaff_x28) {
LAB_0592da1c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    iVar7 = *(int *)(param_1 + (unaff_x28 & 0xffffffff) * 4 + 0x20);
    uVar8 = unaff_w24 + 1;
    uVar4 = unaff_w24 + 8;
    iVar5 = -7;
    do {
      if (unaff_w21 <= uVar8) goto LAB_0592d9bc;
      uVar2 = *(ushort *)(unaff_x22 + (long)(int)(unaff_w24 + iVar5 + 8) * 2);
      unaff_x28 = (ulong)uVar2;
      if ((in_w9 <= uVar2) || (iVar1 = *(int *)(param_1 + unaff_x28 * 4 + 0x20), iVar1 == 0xff)) {
        uVar8 = 0;
        uVar4 = unaff_w24 + iVar5 + 8;
        goto LAB_0592d90c;
      }
      uVar8 = unaff_w24 + iVar5 + 9;
      bVar3 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      iVar7 = iVar1 + iVar7 * 0x10;
    } while (bVar3);
    if (unaff_w21 <= uVar8) {
LAB_0592d9bc:
      uVar4 = 1;
      goto LAB_0592d930;
    }
    uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
    unaff_x28 = (ulong)uVar2;
    if ((in_w9 <= uVar2) || (*(int *)(param_1 + unaff_x28 * 4 + 0x20) == 0xff)) goto LAB_0592d7b8;
    uVar4 = unaff_w24 + 9;
    if (uVar4 < unaff_w21) {
      do {
        uVar2 = *(ushort *)(unaff_x22 + (long)(int)uVar4 * 2);
        unaff_x28 = (ulong)uVar2;
        if ((in_w9 <= uVar2) || (*(int *)(param_1 + unaff_x28 * 4 + 0x20) == 0xff)) {
          uVar8 = 1;
          goto LAB_0592d90c;
        }
        uVar4 = uVar4 + 1;
      } while (unaff_w21 != uVar4);
    }
  }
  iVar7 = 0;
  uVar4 = 0;
  *unaff_x20 = 1;
LAB_0592d930:
  *unaff_x19 = iVar7;
  return uVar4 & 1;
}


