/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 05011e6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint *unaff_x19;
  int iVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  ushort *unaff_x21;
  uint unaff_w22;
  uint uVar13;
  uint uVar14;
  ulong unaff_x23;
  uint uVar15;
  long unaff_x25;
  uint uVar16;
  undefined1 *unaff_x27;
  uint uVar17;
  uint uStack000000000000001c;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0xf78));
  FUN_02d6084c(PTR_DAT_06773ac8);
  FUN_02d6084c(PTR_DAT_067761c8);
  *(undefined1 *)(unaff_x20 + 0x21c) = 1;
  puVar4 = PTR_DAT_06777060;
  uVar13 = (uint)unaff_x23;
  if (uVar13 == 0) goto LAB_05012390;
  uVar3 = *unaff_x21;
  if ((unaff_w22 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
      if (1 < uVar13) {
        uVar15 = 1;
        do {
          uVar3 = unaff_x21[(int)uVar15];
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_05011ea4;
          uVar15 = uVar15 + 1;
        } while (uVar13 != uVar15);
      }
      goto LAB_05012390;
    }
  }
  uVar15 = 0;
LAB_05011ea4:
  uVar17 = (uint)uVar3;
  uVar10 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) goto LAB_05011eac;
  if (unaff_x25 == 0) goto LAB_050123d4;
  lVar1 = *(long *)(unaff_x25 + 0x28);
  lVar2 = *(long *)(unaff_x25 + 0x30);
  uVar6 = thunk_FUN_04e8bd3c(lVar1,*(undefined8 *)PTR_DAT_06773ac8,0);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = thunk_FUN_04e8bd3c(lVar2,*(undefined8 *)PTR_DAT_067761c8,0), (uVar6 & 1) == 0)) {
    lVar11 = *(long *)PTR_DAT_06777300;
    if (uVar13 < uVar15) {
      FUN_05027268(0);
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    uVar13 = uVar13 - uVar15;
    unaff_x23 = (ulong)uVar13;
    unaff_x21 = unaff_x21 + (int)uVar15;
    uVar10 = FUN_04e8cf70(lVar1,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_06b77dad == '\0') {
        FUN_02d6084c(PTR_DAT_0676c428);
        DAT_06b77dad = '\x01';
      }
      if (lVar1 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = FUN_04e8a8a0(lVar1,0);
        uVar8 = *(undefined4 *)(lVar1 + 0x10);
      }
      uVar10 = FUN_05015874(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_0677a8d8);
      if ((uVar10 & 1) == 0) goto LAB_05012054;
      if (lVar1 == 0) goto LAB_050123d4;
      uVar15 = *(uint *)(lVar1 + 0x10);
      if (uVar13 <= uVar15) goto LAB_05012390;
      uVar17 = (uint)unaff_x21[(int)uVar15];
    }
    else {
LAB_05012054:
      uVar10 = FUN_04e8cf70(lVar2,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_06b77dad == '\0') {
          FUN_02d6084c(PTR_DAT_0676c428);
          DAT_06b77dad = '\x01';
        }
        if (lVar2 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = FUN_04e8a8a0(lVar2,0);
          uVar8 = *(undefined4 *)(lVar2 + 0x10);
        }
        uVar10 = FUN_05015874(unaff_x21,unaff_x23,uVar7,uVar8,*(undefined8 *)PTR_DAT_0677a8d8);
        if ((uVar10 & 1) != 0) {
          if (lVar2 == 0) {
LAB_050123d4:
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar15 = *(uint *)(lVar2 + 0x10);
          if (uVar13 <= uVar15) goto LAB_05012390;
          uVar17 = (uint)unaff_x21[(int)uVar15];
          uVar10 = 0;
          uVar13 = 0;
          goto LAB_050120f4;
        }
      }
      uVar15 = 0;
    }
    uVar10 = 0;
    uVar13 = 1;
LAB_050120f4:
    puVar4 = PTR_DAT_06777060;
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar16 = uVar17 - 0x30;
    if (uVar16 < 10) {
      uVar14 = (uint)unaff_x23;
      uStack000000000000001c = uVar13;
      if (uVar17 != 0x30) {
LAB_05012154:
        uVar13 = uVar15 + 1;
        uVar17 = uVar15 + 9;
        iVar9 = -8;
        do {
          if (uVar14 <= uVar13) goto LAB_05012374;
          uVar3 = unaff_x21[(int)(uVar15 + iVar9 + 9)];
          uVar13 = (uint)uVar3;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (9 < uVar3 - 0x30) {
            bVar5 = false;
            uVar17 = uVar15 + iVar9 + 9;
            goto LAB_050122b0;
          }
          uVar13 = uVar15 + iVar9 + 10;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          uVar16 = ((uint)uVar3 + uVar16 * 10) - 0x30;
        } while (bVar5);
        if (uVar13 < uVar14) {
          uVar3 = unaff_x21[(int)uVar17];
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar13 = uVar3 - 0x30;
          if (9 < uVar13) goto LAB_050122ac;
          uVar17 = uVar15 + 10;
          if ((0x19999999 < uVar16) || ((bVar5 = false, uVar16 == 0x19999999 && (0x35 < uVar3)))) {
            bVar5 = true;
          }
          uVar16 = uVar13 + uVar16 * 10;
          if (uVar14 <= uVar17) goto LAB_05012370;
          do {
            uVar3 = unaff_x21[(int)uVar17];
            uVar13 = (uint)uVar3;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (9 < uVar3 - 0x30) goto LAB_050122b0;
            uVar17 = uVar17 + 1;
            bVar5 = true;
          } while (uVar14 != uVar17);
        }
        else {
LAB_05012374:
          if ((uStack000000000000001c & 1) != 0 || uVar16 == 0) {
LAB_05012388:
            uVar7 = 1;
            goto LAB_05012398;
          }
        }
LAB_050123bc:
        uVar16 = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_05012398;
      }
      do {
        uVar15 = uVar15 + 1;
        if (uVar14 <= uVar15) {
          uVar16 = 0;
          goto LAB_05012388;
        }
        uVar3 = unaff_x21[(int)uVar15];
        uVar16 = uVar3 - 0x30;
      } while (uVar16 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (uVar16 < 10) goto LAB_05012154;
      uVar16 = 0;
      uVar17 = uVar15;
LAB_050122ac:
      uVar13 = (uint)uVar3;
      bVar5 = false;
LAB_050122b0:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar17 = uVar17 + 1;
          if ((int)uVar17 < (int)uVar14) {
            puVar12 = unaff_x21 + (int)uVar17;
            do {
              if (uVar14 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              uVar3 = *puVar12;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0501232c;
              uVar17 = uVar17 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar14 != uVar17);
          }
          else {
LAB_0501232c:
            if (uVar17 < uVar14) goto LAB_05012340;
          }
          goto LAB_05012370;
        }
      }
      else {
LAB_05012340:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_05013474(unaff_x21,unaff_x23 & 0xffffffff | uVar10 << 0x20,uVar17);
        if ((uVar10 & 1) != 0) {
LAB_05012370:
          if (!bVar5) goto LAB_05012374;
          goto LAB_050123bc;
        }
      }
    }
  }
  else {
    if (uVar17 != 0x2d) {
      if (uVar17 == 0x2b) {
        uVar15 = uVar15 + 1;
        if (uVar13 <= uVar15) goto LAB_05012390;
        uVar17 = (uint)unaff_x21[(int)uVar15];
      }
LAB_05011eac:
      uVar13 = 1;
      goto LAB_050120f4;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 < uVar13) {
      uVar17 = (uint)unaff_x21[(int)uVar15];
      uVar13 = 0;
      goto LAB_050120f4;
    }
  }
LAB_05012390:
  uVar16 = 0;
  uVar7 = 0;
LAB_05012398:
  *unaff_x19 = uVar16;
  return uVar7;
}


