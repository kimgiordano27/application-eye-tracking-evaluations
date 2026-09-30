/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Culture
ENTRY_POINT: 04f3c2dc
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Culture(void)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint *unaff_x19;
  int iVar5;
  ushort *puVar6;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  uint unaff_w25;
  uint uVar8;
  uint unaff_w26;
  undefined1 *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  uint uStack000000000000001c;
  
  uStack000000000000001c = unaff_w25;
  if (unaff_w28 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w23 <= unaff_w24) {
        unaff_w26 = 0;
        goto LAB_04f3c54c;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      unaff_w26 = uVar1 - 0x30;
    } while (unaff_w26 == 0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (unaff_w26 < 10) goto LAB_04f3c318;
    unaff_w26 = 0;
    uVar7 = unaff_w24;
LAB_04f3c470:
    uVar8 = (uint)uVar1;
    bVar2 = false;
LAB_04f3c474:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((uVar8 - 9 < 5) || (uVar8 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_04f3c554;
      uVar7 = uVar7 + 1;
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
      uVar3 = FUN_04f3d628();
      if ((uVar3 & 1) == 0) {
LAB_04f3c554:
        unaff_w26 = 0;
        uVar4 = 0;
        goto LAB_04f3c55c;
      }
    }
LAB_04f3c534:
    if (!bVar2) {
FUN_04f3c538:
      if ((uStack000000000000001c & 1) != 0 || unaff_w26 == 0) {
LAB_04f3c54c:
        uVar4 = 1;
        goto LAB_04f3c55c;
      }
    }
  }
  else {
LAB_04f3c318:
    uVar8 = unaff_w24 + 1;
    uVar7 = unaff_w24 + 9;
    iVar5 = -8;
    do {
      if (unaff_w23 <= uVar8) goto FUN_04f3c538;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar5 + 9) * 2);
      uVar8 = (uint)uVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (9 < uVar1 - 0x30) {
        bVar2 = false;
        uVar7 = unaff_w24 + iVar5 + 9;
        goto LAB_04f3c474;
      }
      uVar8 = unaff_w24 + iVar5 + 10;
      bVar2 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      unaff_w26 = ((uint)uVar1 + unaff_w26 * 10) - 0x30;
    } while (bVar2);
    if (unaff_w23 <= uVar8) goto FUN_04f3c538;
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = uVar1 - 0x30;
    if (9 < uVar8) goto LAB_04f3c470;
    uVar7 = unaff_w24 + 10;
    if ((0x19999999 < unaff_w26) || ((bVar2 = false, unaff_w26 == 0x19999999 && (0x35 < uVar1)))) {
      bVar2 = true;
    }
    unaff_w26 = uVar8 + unaff_w26 * 10;
    if (unaff_w23 <= uVar7) goto LAB_04f3c534;
    do {
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
      uVar8 = (uint)uVar1;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (9 < uVar1 - 0x30) goto LAB_04f3c474;
      uVar7 = uVar7 + 1;
      bVar2 = true;
    } while (unaff_w23 != uVar7);
  }
  unaff_w26 = 0;
  uVar4 = 0;
  *unaff_x27 = 1;
LAB_04f3c55c:
  *unaff_x19 = unaff_w26;
  return uVar4;
}


