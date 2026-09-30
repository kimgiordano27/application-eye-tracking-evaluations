/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MaxDepth
ENTRY_POINT: 04f3c324
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MaxDepth(void)

{
  ushort uVar1;
  uint uVar2;
  bool in_CY;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *unaff_x19;
  int iVar7;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  uint uVar9;
  uint uVar10;
  uint unaff_w26;
  long *unaff_x29;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  
  uVar9 = unaff_w24 + 9;
  iVar7 = -8;
  bVar3 = !in_CY;
  do {
    if (!bVar3) goto FUN_04f3c538;
    uVar1 = *(ushort *)(unaff_x21 + (long)(unaff_w24 + iVar7 + 9) * 2);
    uVar10 = (uint)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (9 < uVar1 - 0x30) {
      bVar3 = false;
      uVar9 = unaff_w24 + iVar7 + 9;
      goto LAB_04f3c474;
    }
    uVar10 = unaff_w24 + iVar7 + 10;
    bVar3 = uVar10 < unaff_w23;
    bVar4 = iVar7 != -1;
    iVar7 = iVar7 + 1;
    unaff_w26 = ((uint)uVar1 + unaff_w26 * 10) - 0x30;
  } while (bVar4);
  if (uVar10 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
    uVar10 = (uint)uVar1;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar2 = uVar1 - 0x30;
    if (uVar2 < 10) {
      uVar9 = unaff_w24 + 10;
      if ((0x19999999 < unaff_w26) || ((bVar3 = false, unaff_w26 == 0x19999999 && (0x35 < uVar1))))
      {
        bVar3 = true;
      }
      unaff_w26 = uVar2 + unaff_w26 * 10;
      if (unaff_w23 <= uVar9) goto LAB_04f3c534;
      do {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
        uVar10 = (uint)uVar1;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (9 < uVar1 - 0x30) goto LAB_04f3c474;
        uVar9 = uVar9 + 1;
        bVar3 = true;
      } while (unaff_w23 != uVar9);
    }
    else {
      bVar3 = false;
LAB_04f3c474:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((uVar10 - 9 < 5) || (uVar10 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) == 0) goto LAB_04f3c554;
        uVar9 = uVar9 + 1;
        if ((int)uVar9 < (int)unaff_w23) {
          puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
          do {
            if (unaff_w23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            uVar1 = *puVar8;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3c4f0;
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (unaff_w23 != uVar9);
        }
        else {
LAB_04f3c4f0:
          if (uVar9 < unaff_w23) goto LAB_04f3c504;
        }
      }
      else {
LAB_04f3c504:
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar5 = FUN_04f3d628();
        if ((uVar5 & 1) == 0) {
LAB_04f3c554:
          unaff_w26 = 0;
          uVar6 = 0;
          goto LAB_04f3c55c;
        }
      }
LAB_04f3c534:
      if (!bVar3) goto FUN_04f3c538;
    }
  }
  else {
FUN_04f3c538:
    if ((in_stack_00000018 & 0x100000000) != 0 || unaff_w26 == 0) {
      uVar6 = 1;
      goto LAB_04f3c55c;
    }
  }
  unaff_w26 = 0;
  uVar6 = 0;
  *in_stack_00000010 = 1;
LAB_04f3c55c:
  *unaff_x19 = unaff_w26;
  return uVar6;
}


