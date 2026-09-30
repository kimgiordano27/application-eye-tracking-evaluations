/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateFormatHandling
ENTRY_POINT: 04f3c0c0
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateFormatHandling(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint in_w8;
  uint *unaff_x19;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  long unaff_x21;
  uint unaff_w22;
  uint uVar13;
  ulong unaff_x23;
  uint unaff_w24;
  uint uVar14;
  uint uVar15;
  long unaff_x25;
  uint uVar16;
  long *unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  while ((uVar14 = (uint)unaff_x23, in_w8 < 5 || (unaff_w28 == 0x20))) {
    unaff_w24 = unaff_w24 + 1;
    if (uVar14 == unaff_w24) goto LAB_04f3c554;
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    unaff_w28 = (uint)uVar3;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    in_w8 = uVar3 - 9;
  }
  uVar10 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) {
LAB_04f3c070:
    uVar14 = 1;
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture:
    puVar4 = PTR_DAT_065f73a8;
    if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar16 = unaff_w28 - 0x30;
    if (uVar16 < 10) {
      uVar13 = (uint)unaff_x23;
      uStack000000000000001c = uVar14;
      if (unaff_w28 != 0x30) goto LAB_04f3c318;
      goto LAB_04f3c2e8;
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_04f3c598;
    lVar1 = *(long *)(unaff_x25 + 0x28);
    lVar2 = *(long *)(unaff_x25 + 0x30);
    uVar6 = thunk_FUN_04db8ae0(lVar1,*(undefined8 *)PTR_DAT_065d8130,0);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = thunk_FUN_04db8ae0(lVar2,*(undefined8 *)PTR_DAT_065e1bc8,0), (uVar6 & 1) == 0)) {
      lVar11 = *(long *)PTR_DAT_065f7688;
      if (uVar14 < unaff_w24) {
        FUN_04f51680(0);
      }
      if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      uVar14 = uVar14 - unaff_w24;
      unaff_x23 = (ulong)uVar14;
      unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
      uVar10 = FUN_04db9688(lVar1,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_06a6cef9 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
          DAT_06a6cef9 = '\x01';
        }
        if (lVar1 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = FUN_04db75ac(lVar1,0);
          uVar8 = *(undefined4 *)(lVar1 + 0x10);
        }
        uVar10 = FUN_04f3f758(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_065fb090);
        if ((uVar10 & 1) == 0) goto LAB_04f3c218;
        if (lVar1 == 0) goto LAB_04f3c598;
        unaff_w24 = *(uint *)(lVar1 + 0x10);
        if (uVar14 <= unaff_w24) goto LAB_04f3c554;
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      }
      else {
LAB_04f3c218:
        uVar10 = FUN_04db9688(lVar2,0);
        if ((uVar10 & 1) == 0) {
          if (DAT_06a6cef9 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
            DAT_06a6cef9 = '\x01';
          }
          if (lVar2 == 0) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            uVar7 = FUN_04db75ac(lVar2,0);
            uVar8 = *(undefined4 *)(lVar2 + 0x10);
          }
          uVar10 = FUN_04f3f758(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_065fb090);
          if ((uVar10 & 1) != 0) {
            if (lVar2 == 0) {
LAB_04f3c598:
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            unaff_w24 = *(uint *)(lVar2 + 0x10);
            if (unaff_w24 < uVar14) {
              unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
              uVar10 = 0;
              uVar14 = 0;
              goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture;
            }
            goto LAB_04f3c554;
          }
        }
        unaff_w24 = 0;
      }
      uVar10 = 0;
      uVar14 = 1;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture;
    }
    if (unaff_w28 == 0x2d) {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w24 < uVar14) {
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar14 = 0;
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture;
      }
    }
    else {
      if (unaff_w28 != 0x2b) goto LAB_04f3c070;
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w24 < uVar14) {
        unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        goto LAB_04f3c070;
      }
    }
  }
LAB_04f3c554:
  uVar16 = 0;
  uVar7 = 0;
LAB_04f3c55c:
  *unaff_x19 = uVar16;
  return uVar7;
  while( true ) {
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    uVar16 = uVar3 - 0x30;
    if (uVar16 != 0) break;
LAB_04f3c2e8:
    unaff_w24 = unaff_w24 + 1;
    if (uVar13 <= unaff_w24) {
      uVar16 = 0;
      goto LAB_04f3c54c;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (uVar16 < 10) {
LAB_04f3c318:
    uVar15 = unaff_w24 + 1;
    uVar14 = unaff_w24 + 9;
    iVar9 = -8;
    do {
      if (uVar13 <= uVar15) goto FUN_04f3c538;
      uVar3 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar9 + 9) * 2);
      uVar15 = (uint)uVar3;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (9 < uVar3 - 0x30) {
        bVar5 = false;
        uVar14 = unaff_w24 + iVar9 + 9;
        goto LAB_04f3c474;
      }
      uVar15 = unaff_w24 + iVar9 + 10;
      bVar5 = iVar9 != -1;
      iVar9 = iVar9 + 1;
      uVar16 = ((uint)uVar3 + uVar16 * 10) - 0x30;
    } while (bVar5);
    if (uVar13 <= uVar15) goto FUN_04f3c538;
    uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar15 = uVar3 - 0x30;
    if (9 < uVar15) goto LAB_04f3c470;
    uVar14 = unaff_w24 + 10;
    if ((0x19999999 < uVar16) || ((bVar5 = false, uVar16 == 0x19999999 && (0x35 < uVar3)))) {
      bVar5 = true;
    }
    uVar16 = uVar15 + uVar16 * 10;
    if (uVar13 <= uVar14) goto LAB_04f3c534;
    do {
      uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
      uVar15 = (uint)uVar3;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (9 < uVar3 - 0x30) goto LAB_04f3c474;
      uVar14 = uVar14 + 1;
      bVar5 = true;
    } while (uVar13 != uVar14);
  }
  else {
    uVar16 = 0;
    uVar14 = unaff_w24;
LAB_04f3c470:
    uVar15 = (uint)uVar3;
    bVar5 = false;
LAB_04f3c474:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((uVar15 - 9 < 5) || (uVar15 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_04f3c554;
      uVar14 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar13) {
        puVar12 = (ushort *)(unaff_x21 + (long)(int)uVar14 * 2);
        do {
          if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          uVar3 = *puVar12;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_04f3c4f0;
          uVar14 = uVar14 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar13 != uVar14);
      }
      else {
LAB_04f3c4f0:
        if (uVar14 < uVar13) goto LAB_04f3c504;
      }
    }
    else {
LAB_04f3c504:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar10 = FUN_04f3d628(unaff_x21,unaff_x23 & 0xffffffff | uVar10 << 0x20,uVar14);
      if ((uVar10 & 1) == 0) goto LAB_04f3c554;
    }
LAB_04f3c534:
    if (!bVar5) {
FUN_04f3c538:
      if ((uStack000000000000001c & 1) != 0 || uVar16 == 0) {
LAB_04f3c54c:
        uVar7 = 1;
        goto LAB_04f3c55c;
      }
    }
  }
  uVar16 = 0;
  uVar7 = 0;
  *unaff_x27 = 1;
  goto LAB_04f3c55c;
}


