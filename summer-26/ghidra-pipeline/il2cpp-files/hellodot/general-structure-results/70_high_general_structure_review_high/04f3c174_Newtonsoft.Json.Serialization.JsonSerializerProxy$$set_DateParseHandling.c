/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateParseHandling
ENTRY_POINT: 04f3c174
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateParseHandling(void)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint *unaff_x19;
  int iVar9;
  ushort *puVar10;
  long unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  int unaff_w24;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long unaff_x25;
  uint uVar14;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  uVar3 = unaff_w23 - unaff_w24;
  lVar1 = unaff_x21 + (long)unaff_w24 * 2;
  uVar6 = FUN_04db9688();
  if ((uVar6 & 1) == 0) {
    if (DAT_06a6cef9 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
      DAT_06a6cef9 = '\x01';
    }
    if (unaff_x26 == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar7 = FUN_04db75ac();
      uVar8 = *(undefined4 *)(unaff_x26 + 0x10);
    }
    uVar6 = FUN_04f3f758(lVar1,uVar3,uVar7,uVar8,*(undefined8 *)PTR_DAT_065fb090);
    if ((uVar6 & 1) == 0) goto LAB_04f3c218;
    if (unaff_x26 == 0) goto LAB_04f3c598;
    uVar11 = *(uint *)(unaff_x26 + 0x10);
    if (uVar11 < uVar3) {
      unaff_w28 = (uint)*(ushort *)(lVar1 + (long)(int)uVar11 * 2);
      goto LAB_04f3c2b4;
    }
  }
  else {
LAB_04f3c218:
    uVar6 = FUN_04db9688();
    if ((uVar6 & 1) == 0) {
      if (DAT_06a6cef9 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
        DAT_06a6cef9 = '\x01';
      }
      if (unaff_x25 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = FUN_04db75ac();
        uVar8 = *(undefined4 *)(unaff_x25 + 0x10);
      }
      uVar6 = FUN_04f3f758(lVar1,uVar3,uVar7,uVar8,*(undefined8 *)PTR_DAT_065fb090);
      if ((uVar6 & 1) == 0) goto LAB_04f3c2ac;
      if (unaff_x25 == 0) {
LAB_04f3c598:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar11 = *(uint *)(unaff_x25 + 0x10);
      if (uVar3 <= uVar11) goto LAB_04f3c554;
      unaff_w28 = (uint)*(ushort *)(lVar1 + (long)(int)uVar11 * 2);
      uVar13 = 0;
    }
    else {
LAB_04f3c2ac:
      uVar11 = 0;
LAB_04f3c2b4:
      uVar13 = 1;
    }
    puVar4 = PTR_DAT_065f73a8;
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
        iVar9 = -8;
        do {
          if (uVar3 <= uVar13) goto FUN_04f3c538;
          uVar2 = *(ushort *)(lVar1 + (long)(int)(uVar11 + iVar9 + 9) * 2);
          uVar13 = (uint)uVar2;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (9 < uVar2 - 0x30) {
            bVar5 = false;
            uVar12 = uVar11 + iVar9 + 9;
            goto LAB_04f3c474;
          }
          uVar13 = uVar11 + iVar9 + 10;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          uVar14 = ((uint)uVar2 + uVar14 * 10) - 0x30;
        } while (bVar5);
        if (uVar13 < uVar3) {
          uVar2 = *(ushort *)(lVar1 + (long)(int)uVar12 * 2);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar13 = uVar2 - 0x30;
          if (9 < uVar13) goto LAB_04f3c470;
          uVar12 = uVar11 + 10;
          if ((0x19999999 < uVar14) || ((bVar5 = false, uVar14 == 0x19999999 && (0x35 < uVar2)))) {
            bVar5 = true;
          }
          uVar14 = uVar13 + uVar14 * 10;
          if (uVar3 <= uVar12) goto LAB_04f3c534;
          do {
            uVar2 = *(ushort *)(lVar1 + (long)(int)uVar12 * 2);
            uVar13 = (uint)uVar2;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if (9 < uVar2 - 0x30) goto LAB_04f3c474;
            uVar12 = uVar12 + 1;
            bVar5 = true;
          } while (uVar3 != uVar12);
        }
        else {
FUN_04f3c538:
          if ((uStack000000000000001c & 1) != 0 || uVar14 == 0) {
LAB_04f3c54c:
            uVar7 = 1;
            goto LAB_04f3c55c;
          }
        }
LAB_04f3c580:
        uVar14 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_04f3c55c;
      }
      do {
        uVar11 = uVar11 + 1;
        if (uVar3 <= uVar11) {
          uVar14 = 0;
          goto LAB_04f3c54c;
        }
        uVar2 = *(ushort *)(lVar1 + (long)(int)uVar11 * 2);
        uVar14 = uVar2 - 0x30;
      } while (uVar14 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (uVar14 < 10) goto LAB_04f3c318;
      uVar14 = 0;
      uVar12 = uVar11;
LAB_04f3c470:
      uVar13 = (uint)uVar2;
      bVar5 = false;
LAB_04f3c474:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar12 = uVar12 + 1;
          if ((int)uVar12 < (int)uVar3) {
            puVar10 = (ushort *)(lVar1 + (long)(int)uVar12 * 2);
            do {
              if (uVar3 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              uVar2 = *puVar10;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_04f3c4f0;
              uVar12 = uVar12 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar3 != uVar12);
          }
          else {
LAB_04f3c4f0:
            if (uVar12 < uVar3) goto LAB_04f3c504;
          }
          goto LAB_04f3c534;
        }
      }
      else {
LAB_04f3c504:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = FUN_04f3d628(lVar1,uVar3,uVar12);
        if ((uVar6 & 1) != 0) {
LAB_04f3c534:
          if (!bVar5) goto FUN_04f3c538;
          goto LAB_04f3c580;
        }
      }
    }
  }
LAB_04f3c554:
  uVar14 = 0;
  uVar7 = 0;
LAB_04f3c55c:
  *unaff_x19 = uVar14;
  return uVar7;
}


