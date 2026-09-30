/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_CheckAdditionalContent
ENTRY_POINT: 04f3c348
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_CheckAdditionalContent(long param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  uint *unaff_x19;
  int unaff_w20;
  ushort *puVar6;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  uint unaff_w26;
  int unaff_w27;
  int unaff_w28;
  long *unaff_x29;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  
  while( true ) {
    uVar1 = *(ushort *)(unaff_x21 + (long)in_w8 * 2);
    uVar7 = (uint)uVar1;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (9 < uVar1 - 0x30) {
      bVar3 = false;
      unaff_w24 = unaff_w27 + unaff_w20 + 9;
      goto LAB_04f3c474;
    }
    uVar7 = unaff_w27 + unaff_w20 + 10;
    bVar3 = unaff_w20 == -1;
    unaff_w20 = unaff_w20 + 1;
    unaff_w26 = ((uint)uVar1 + unaff_w26 * unaff_w28) - 0x30;
    if (bVar3) break;
    if (unaff_w23 <= uVar7) goto FUN_04f3c538;
    param_1 = *unaff_x29;
    in_w8 = unaff_w27 + unaff_w20 + 9;
  }
  if (uVar7 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar7 = (uint)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar2 = uVar1 - 0x30;
    if (9 < uVar2) {
      bVar3 = false;
      goto LAB_04f3c474;
    }
    unaff_w24 = unaff_w27 + 10;
    if ((0x19999999 < unaff_w26) || ((bVar3 = false, unaff_w26 == 0x19999999 && (0x35 < uVar1)))) {
      bVar3 = true;
    }
    unaff_w26 = uVar2 + unaff_w26 * 10;
    if (unaff_w23 <= unaff_w24) goto LAB_04f3c534;
    goto LAB_04f3c3f4;
  }
FUN_04f3c538:
  if ((in_stack_00000018 & 0x100000000) != 0 || unaff_w26 == 0) {
    uVar5 = 1;
    goto LAB_04f3c55c;
  }
  goto LAB_04f3c580;
LAB_04f3c474:
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto LAB_04f3c554;
    uVar7 = unaff_w24 + 1;
    if ((int)uVar7 < (int)unaff_w23) {
      puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
      do {
        if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar1 = *puVar6;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3c4f0;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (unaff_w23 != uVar7);
    }
    else {
LAB_04f3c4f0:
      if (uVar7 < unaff_w23) goto LAB_04f3c504;
    }
  }
  else {
LAB_04f3c504:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar4 = FUN_04f3d628();
    if ((uVar4 & 1) == 0) {
LAB_04f3c554:
      unaff_w26 = 0;
      uVar5 = 0;
      goto LAB_04f3c55c;
    }
  }
LAB_04f3c534:
  if (!bVar3) goto FUN_04f3c538;
  goto LAB_04f3c580;
  while( true ) {
    unaff_w24 = unaff_w24 + 1;
    bVar3 = true;
    if (unaff_w23 == unaff_w24) break;
LAB_04f3c3f4:
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar7 = (uint)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (9 < uVar1 - 0x30) goto LAB_04f3c474;
  }
LAB_04f3c580:
  unaff_w26 = 0;
  uVar5 = 0;
  *in_stack_00000010 = 1;
LAB_04f3c55c:
  *unaff_x19 = unaff_w26;
  return uVar5;
}


