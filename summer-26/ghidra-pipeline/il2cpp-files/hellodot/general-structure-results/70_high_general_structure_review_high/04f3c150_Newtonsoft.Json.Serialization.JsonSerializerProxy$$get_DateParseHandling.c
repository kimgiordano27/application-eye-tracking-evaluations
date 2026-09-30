/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateParseHandling
ENTRY_POINT: 04f3c150
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateParseHandling(long *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint *unaff_x19;
  int iVar8;
  long lVar9;
  ushort *puVar10;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long unaff_x25;
  uint uVar14;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  lVar9 = *param_1;
  if (unaff_w23 < unaff_w24) {
    FUN_04f51680(0);
  }
  if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  uVar2 = unaff_w23 - unaff_w24;
  lVar9 = unaff_x21 + (long)(int)unaff_w24 * 2;
  uVar5 = FUN_04db9688();
  if ((uVar5 & 1) == 0) {
    if (DAT_06a6cef9 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
      DAT_06a6cef9 = '\x01';
    }
    if (unaff_x26 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = FUN_04db75ac();
      uVar7 = *(undefined4 *)(unaff_x26 + 0x10);
    }
    uVar5 = FUN_04f3f758(lVar9,uVar2,uVar6,uVar7,*(undefined8 *)PTR_DAT_065fb090);
    if ((uVar5 & 1) == 0) goto LAB_04f3c218;
    if (unaff_x26 == 0) goto LAB_04f3c598;
    uVar11 = *(uint *)(unaff_x26 + 0x10);
    if (uVar11 < uVar2) {
      unaff_w28 = (uint)*(ushort *)(lVar9 + (long)(int)uVar11 * 2);
      goto LAB_04f3c2b4;
    }
  }
  else {
LAB_04f3c218:
    uVar5 = FUN_04db9688();
    if ((uVar5 & 1) == 0) {
      if (DAT_06a6cef9 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
        DAT_06a6cef9 = '\x01';
      }
      if (unaff_x25 == 0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = FUN_04db75ac();
        uVar7 = *(undefined4 *)(unaff_x25 + 0x10);
      }
      uVar5 = FUN_04f3f758(lVar9,uVar2,uVar6,uVar7,*(undefined8 *)PTR_DAT_065fb090);
      if ((uVar5 & 1) == 0) goto LAB_04f3c2ac;
      if (unaff_x25 == 0) {
LAB_04f3c598:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar11 = *(uint *)(unaff_x25 + 0x10);
      if (uVar2 <= uVar11) goto LAB_04f3c554;
      unaff_w28 = (uint)*(ushort *)(lVar9 + (long)(int)uVar11 * 2);
      uVar13 = 0;
    }
    else {
LAB_04f3c2ac:
      uVar11 = 0;
LAB_04f3c2b4:
      uVar13 = 1;
    }
    puVar3 = PTR_DAT_065f73a8;
    if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar14 = unaff_w28 - 0x30;
    if (uVar14 < 10) {
      uStack000000000000001c = uVar13;
      if (unaff_w28 != 0x30) {
LAB_04f3c318:
        uVar13 = uVar11 + 1;
        uVar12 = uVar11 + 9;
        iVar8 = -8;
        do {
          if (uVar2 <= uVar13) goto FUN_04f3c538;
          uVar1 = *(ushort *)(lVar9 + (long)(int)(uVar11 + iVar8 + 9) * 2);
          uVar13 = (uint)uVar1;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (9 < uVar1 - 0x30) {
            bVar4 = false;
            uVar12 = uVar11 + iVar8 + 9;
            goto LAB_04f3c474;
          }
          uVar13 = uVar11 + iVar8 + 10;
          bVar4 = iVar8 != -1;
          iVar8 = iVar8 + 1;
          uVar14 = ((uint)uVar1 + uVar14 * 10) - 0x30;
        } while (bVar4);
        if (uVar13 < uVar2) {
          uVar1 = *(ushort *)(lVar9 + (long)(int)uVar12 * 2);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar13 = uVar1 - 0x30;
          if (9 < uVar13) goto LAB_04f3c470;
          uVar12 = uVar11 + 10;
          if ((0x19999999 < uVar14) || ((bVar4 = false, uVar14 == 0x19999999 && (0x35 < uVar1)))) {
            bVar4 = true;
          }
          uVar14 = uVar13 + uVar14 * 10;
          if (uVar2 <= uVar12) goto LAB_04f3c534;
          do {
            uVar1 = *(ushort *)(lVar9 + (long)(int)uVar12 * 2);
            uVar13 = (uint)uVar1;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if (9 < uVar1 - 0x30) goto LAB_04f3c474;
            uVar12 = uVar12 + 1;
            bVar4 = true;
          } while (uVar2 != uVar12);
        }
        else {
FUN_04f3c538:
          if ((uStack000000000000001c & 1) != 0 || uVar14 == 0) {
LAB_04f3c54c:
            uVar6 = 1;
            goto LAB_04f3c55c;
          }
        }
LAB_04f3c580:
        uVar14 = 0;
        uVar6 = 0;
        *unaff_x27 = 1;
        goto LAB_04f3c55c;
      }
      do {
        uVar11 = uVar11 + 1;
        if (uVar2 <= uVar11) {
          uVar14 = 0;
          goto LAB_04f3c54c;
        }
        uVar1 = *(ushort *)(lVar9 + (long)(int)uVar11 * 2);
        uVar14 = uVar1 - 0x30;
      } while (uVar14 == 0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (uVar14 < 10) goto LAB_04f3c318;
      uVar14 = 0;
      uVar12 = uVar11;
LAB_04f3c470:
      uVar13 = (uint)uVar1;
      bVar4 = false;
LAB_04f3c474:
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar12 = uVar12 + 1;
          if ((int)uVar12 < (int)uVar2) {
            puVar10 = (ushort *)(lVar9 + (long)(int)uVar12 * 2);
            do {
              if (uVar2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              uVar1 = *puVar10;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3c4f0;
              uVar12 = uVar12 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar2 != uVar12);
          }
          else {
LAB_04f3c4f0:
            if (uVar12 < uVar2) goto LAB_04f3c504;
          }
          goto LAB_04f3c534;
        }
      }
      else {
LAB_04f3c504:
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar5 = FUN_04f3d628(lVar9,uVar2,uVar12);
        if ((uVar5 & 1) != 0) {
LAB_04f3c534:
          if (!bVar4) goto FUN_04f3c538;
          goto LAB_04f3c580;
        }
      }
    }
  }
LAB_04f3c554:
  uVar14 = 0;
  uVar6 = 0;
LAB_04f3c55c:
  *unaff_x19 = uVar14;
  return uVar6;
}


