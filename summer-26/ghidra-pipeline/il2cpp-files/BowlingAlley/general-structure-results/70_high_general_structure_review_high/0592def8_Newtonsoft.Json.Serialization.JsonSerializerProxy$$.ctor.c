/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 0592def8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  uint in_w8;
  long lVar7;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar8;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar9;
  int unaff_w25;
  ulong uVar10;
  long *unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  undefined1 *in_stack_00000008;
  int in_stack_00000010;
  
  while (in_w8 < 10) {
    uVar9 = unaff_w27 + unaff_w25 + 0x13;
    bVar5 = unaff_w25 == -1;
    unaff_w25 = unaff_w25 + 1;
    unaff_x28 = (unaff_x20 + unaff_x28 * unaff_x29) - 0x30;
    if (bVar5) {
      if (unaff_w23 <= uVar9) goto LAB_0592e128;
      uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar10 = (ulong)uVar3;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (9 < uVar3 - 0x30) goto LAB_0592dff4;
      bVar5 = 0xccccccccccccccc < (long)unaff_x28;
      iVar2 = 2 - in_stack_00000010;
      if (-1 < 1 - in_stack_00000010) {
        iVar2 = 1 - in_stack_00000010;
      }
      unaff_x28 = (uVar10 + unaff_x28 * 10) - 0x30;
      unaff_w24 = unaff_w27 + 0x13;
      bVar1 = (ulong)(uint)(iVar2 >> 1) + 0x7fffffffffffffff < unaff_x28;
      bVar4 = bVar5 || bVar1;
      if (unaff_w24 < unaff_w23) goto LAB_0592dfa8;
      if (bVar5 || bVar1) goto LAB_0592e0c4;
      goto LAB_0592e128;
    }
    if (unaff_w23 <= uVar9) goto LAB_0592e128;
    uVar3 = *(ushort *)(unaff_x21 + (long)(unaff_w27 + unaff_w25 + 0x12) * 2);
    unaff_x20 = (ulong)uVar3;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    in_w8 = uVar3 - 0x30;
  }
  unaff_w24 = unaff_w27 + unaff_w25 + 0x12;
  uVar10 = unaff_x20 & 0xffffffff;
LAB_0592dff4:
  bVar4 = false;
  uVar9 = (uint)uVar10;
LAB_0592e004:
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0592e0ec;
    uVar9 = unaff_w24 + 1;
    if ((int)uVar9 < (int)unaff_w23) {
      puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      do {
        if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar3 = *puVar8;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0592e078;
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 1;
      } while (unaff_w23 != uVar9);
    }
    else {
LAB_0592e078:
      if (uVar9 < unaff_w23) goto LAB_0592e08c;
    }
  }
  else {
LAB_0592e08c:
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar10 = FUN_0592fca4();
    if ((uVar10 & 1) == 0) {
LAB_0592e0ec:
      lVar7 = 0;
      uVar6 = 0;
      goto LAB_0592e0f4;
    }
  }
  if (!bVar4) {
LAB_0592e128:
    uVar6 = 1;
    lVar7 = unaff_x28 * (long)in_stack_00000010;
    goto LAB_0592e0f4;
  }
LAB_0592e0c4:
  lVar7 = 0;
  uVar6 = 0;
  *in_stack_00000008 = 1;
LAB_0592e0f4:
  *unaff_x19 = lVar7;
  return uVar6;
  while( true ) {
    unaff_w24 = unaff_w24 + 1;
    bVar4 = true;
    if (unaff_w23 == unaff_w24) break;
LAB_0592dfa8:
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar9 = (uint)uVar3;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (9 < uVar3 - 0x30) goto LAB_0592e004;
  }
  goto LAB_0592e0c4;
}


