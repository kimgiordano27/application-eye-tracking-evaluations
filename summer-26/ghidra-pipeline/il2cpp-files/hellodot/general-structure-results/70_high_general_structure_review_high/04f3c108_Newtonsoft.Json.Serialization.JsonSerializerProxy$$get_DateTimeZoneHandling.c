/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateTimeZoneHandling
ENTRY_POINT: 04f3c108
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateTimeZoneHandling(void)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint *unaff_x19;
  int iVar7;
  long unaff_x20;
  long lVar8;
  ushort *puVar9;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar10;
  uint uVar11;
  long unaff_x25;
  uint uVar12;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  uVar4 = thunk_FUN_04db8ae0();
  if ((uVar4 & 1) == 0) {
    lVar8 = *(long *)PTR_DAT_065f7688;
    if (unaff_w23 < unaff_w24) {
      FUN_04f51680(0);
    }
    if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    unaff_w23 = unaff_w23 - unaff_w24;
    unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
    uVar4 = FUN_04db9688();
    if ((uVar4 & 1) == 0) {
      if (DAT_06a6cef9 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
        DAT_06a6cef9 = '\x01';
      }
      if (unaff_x26 == 0) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar5 = FUN_04db75ac();
        uVar6 = *(undefined4 *)(unaff_x26 + 0x10);
      }
      uVar4 = FUN_04f3f758(unaff_x21,unaff_w23,uVar5,uVar6,*(undefined8 *)PTR_DAT_065fb090);
      if ((uVar4 & 1) == 0) goto LAB_04f3c218;
      if (unaff_x26 == 0) goto LAB_04f3c598;
      unaff_w24 = *(uint *)(unaff_x26 + 0x10);
      if (unaff_w23 <= unaff_w24) goto LAB_04f3c554;
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    }
    else {
LAB_04f3c218:
      uVar4 = FUN_04db9688();
      if ((uVar4 & 1) == 0) {
        if (DAT_06a6cef9 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
          DAT_06a6cef9 = '\x01';
        }
        if (unaff_x25 == 0) {
          uVar5 = 0;
          uVar6 = 0;
        }
        else {
          uVar5 = FUN_04db75ac();
          uVar6 = *(undefined4 *)(unaff_x25 + 0x10);
        }
        uVar4 = FUN_04f3f758(unaff_x21,unaff_w23,uVar5,uVar6,*(undefined8 *)PTR_DAT_065fb090);
        if ((uVar4 & 1) != 0) {
          if (unaff_x25 == 0) {
LAB_04f3c598:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          unaff_w24 = *(uint *)(unaff_x25 + 0x10);
          if (unaff_w23 <= unaff_w24) goto LAB_04f3c554;
          unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
          unaff_x20 = 0;
          uVar11 = 0;
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture;
        }
      }
      unaff_w24 = 0;
    }
    unaff_x20 = 0;
    uVar11 = 1;
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture:
    puVar2 = PTR_DAT_065f73a8;
    if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar12 = unaff_w28 - 0x30;
    if (uVar12 < 10) {
      uStack000000000000001c = uVar11;
      if (unaff_w28 != 0x30) {
LAB_04f3c318:
        uVar11 = unaff_w24 + 1;
        uVar10 = unaff_w24 + 9;
        iVar7 = -8;
        do {
          if (unaff_w23 <= uVar11) goto FUN_04f3c538;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar7 + 9) * 2);
          uVar11 = (uint)uVar1;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (9 < uVar1 - 0x30) {
            bVar3 = false;
            uVar10 = unaff_w24 + iVar7 + 9;
            goto LAB_04f3c474;
          }
          uVar11 = unaff_w24 + iVar7 + 10;
          bVar3 = iVar7 != -1;
          iVar7 = iVar7 + 1;
          uVar12 = ((uint)uVar1 + uVar12 * 10) - 0x30;
        } while (bVar3);
        if (uVar11 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = uVar1 - 0x30;
          if (9 < uVar11) goto LAB_04f3c470;
          uVar10 = unaff_w24 + 10;
          if ((0x19999999 < uVar12) || ((bVar3 = false, uVar12 == 0x19999999 && (0x35 < uVar1)))) {
            bVar3 = true;
          }
          uVar12 = uVar11 + uVar12 * 10;
          if (unaff_w23 <= uVar10) goto LAB_04f3c534;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar11 = (uint)uVar1;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if (9 < uVar1 - 0x30) goto LAB_04f3c474;
            uVar10 = uVar10 + 1;
            bVar3 = true;
          } while (unaff_w23 != uVar10);
        }
        else {
FUN_04f3c538:
          if ((uStack000000000000001c & 1) != 0 || uVar12 == 0) {
LAB_04f3c54c:
            uVar5 = 1;
            goto LAB_04f3c55c;
          }
        }
LAB_04f3c580:
        uVar12 = 0;
        uVar5 = 0;
        *unaff_x27 = 1;
        goto LAB_04f3c55c;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar12 = 0;
          goto LAB_04f3c54c;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar12 = uVar1 - 0x30;
      } while (uVar12 == 0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (uVar12 < 10) goto LAB_04f3c318;
      uVar12 = 0;
      uVar10 = unaff_w24;
LAB_04f3c470:
      uVar11 = (uint)uVar1;
      bVar3 = false;
LAB_04f3c474:
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar9 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              uVar1 = *puVar9;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3c4f0;
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_04f3c4f0:
            if (uVar10 < unaff_w23) goto LAB_04f3c504;
          }
          goto LAB_04f3c534;
        }
      }
      else {
LAB_04f3c504:
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar4 = FUN_04f3d628(unaff_x21,(ulong)unaff_w23 | unaff_x20 << 0x20,uVar10);
        if ((uVar4 & 1) != 0) {
LAB_04f3c534:
          if (!bVar3) goto FUN_04f3c538;
          goto LAB_04f3c580;
        }
      }
    }
  }
  else {
    if (unaff_w28 != 0x2d) {
      if (unaff_w28 == 0x2b) {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) goto LAB_04f3c554;
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      }
      uVar11 = 1;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture;
    }
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 < unaff_w23) {
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar11 = 0;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture;
    }
  }
LAB_04f3c554:
  uVar12 = 0;
  uVar5 = 0;
LAB_04f3c55c:
  *unaff_x19 = uVar12;
  return uVar5;
}


