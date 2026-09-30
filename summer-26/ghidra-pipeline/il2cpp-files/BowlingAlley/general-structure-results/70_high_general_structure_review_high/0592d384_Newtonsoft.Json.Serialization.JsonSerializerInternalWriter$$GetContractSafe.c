/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContractSafe
ENTRY_POINT: 0592d384
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContractSafe(void)

{
  ushort uVar1;
  uint uVar2;
  bool in_ZR;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *unaff_x19;
  int iVar7;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar9;
  int unaff_w25;
  uint uVar10;
  uint unaff_w26;
  undefined1 *unaff_x27;
  long *unaff_x29;
  int iStack000000000000001c;
  
  iStack000000000000001c = unaff_w25;
  if (in_ZR) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        unaff_w26 = 0;
        goto LAB_0592d630;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      unaff_w26 = uVar1 - 0x30;
    } while (unaff_w26 == 0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (unaff_w26 < 10) goto LAB_0592d3bc;
    uVar9 = unaff_w24;
    unaff_w26 = 0;
LAB_0592d520:
    uVar10 = (uint)uVar1;
    bVar3 = false;
LAB_0592d524:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0592d5fc;
      uVar9 = uVar9 + 1;
      if ((int)uVar9 < (int)unaff_w23) {
        puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        do {
          if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          uVar1 = *puVar8;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0592d5a0;
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (unaff_w23 != uVar9);
      }
      else {
LAB_0592d5a0:
        if (uVar9 < unaff_w23) goto LAB_0592d5b4;
      }
    }
    else {
LAB_0592d5b4:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar5 = FUN_0592fca4();
      if ((uVar5 & 1) == 0) {
LAB_0592d5fc:
        iStack000000000000001c = 0;
        uVar6 = 0;
        goto LAB_0592d604;
      }
    }
    if (!bVar3) {
LAB_0592d630:
      uVar6 = 1;
      iStack000000000000001c = unaff_w26 * iStack000000000000001c;
      goto LAB_0592d604;
    }
  }
  else {
LAB_0592d3bc:
    uVar10 = unaff_w24 + 1;
    uVar9 = unaff_w24 + 9;
    iVar7 = -8;
    do {
      if (unaff_w23 <= uVar10) goto LAB_0592d630;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar7 + 9) * 2);
      uVar10 = (uint)uVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (9 < uVar1 - 0x30) {
        bVar3 = false;
        uVar9 = unaff_w24 + iVar7 + 9;
        goto LAB_0592d524;
      }
      uVar10 = unaff_w24 + iVar7 + 10;
      bVar3 = iVar7 != -1;
      iVar7 = iVar7 + 1;
      uVar2 = ((uint)uVar1 + unaff_w26 * 10) - 0x30;
      unaff_w26 = uVar2;
    } while (bVar3);
    if (unaff_w23 <= uVar10) goto LAB_0592d630;
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (9 < uVar1 - 0x30) goto LAB_0592d520;
    unaff_w26 = (uVar1 - 0x30) + uVar2 * 10;
    uVar9 = unaff_w24 + 10;
    iVar7 = 2 - iStack000000000000001c;
    if (-1 < 1 - iStack000000000000001c) {
      iVar7 = 1 - iStack000000000000001c;
    }
    bVar4 = (ulong)(uint)(iVar7 >> 1) + 0x7fffffff < (ulong)unaff_w26;
    bVar3 = 0xccccccc < (int)uVar2 || bVar4;
    if (uVar9 < unaff_w23) {
      do {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        uVar10 = (uint)uVar1;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if (9 < uVar1 - 0x30) goto LAB_0592d524;
        uVar9 = uVar9 + 1;
        bVar3 = true;
      } while (unaff_w23 != uVar9);
    }
    else if (0xccccccc >= (int)uVar2 && !bVar4) goto LAB_0592d630;
  }
  iStack000000000000001c = 0;
  uVar6 = 0;
  *unaff_x27 = 1;
LAB_0592d604:
  *unaff_x19 = iStack000000000000001c;
  return uVar6;
}


