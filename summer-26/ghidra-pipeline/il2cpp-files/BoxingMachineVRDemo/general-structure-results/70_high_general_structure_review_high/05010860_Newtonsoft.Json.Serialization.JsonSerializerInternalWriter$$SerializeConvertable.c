/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 05010860
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int *unaff_x19;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *unaff_x21;
  uint unaff_w22;
  uint uVar14;
  uint uVar15;
  ulong unaff_x23;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long unaff_x25;
  undefined1 *unaff_x27;
  uint uVar19;
  int iStack000000000000001c;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06777060);
  FUN_02d6084c(PTR_DAT_06777300);
  FUN_02d6084c(PTR_DAT_06770f78);
  FUN_02d6084c(PTR_DAT_06773ac8);
  FUN_02d6084c(PTR_DAT_067761c8);
  *(undefined1 *)(unaff_x20 + 0x218) = 1;
  puVar5 = PTR_DAT_06777060;
  uVar14 = (uint)unaff_x23;
  if (uVar14 == 0) goto LAB_05010dac;
  uVar3 = *unaff_x21;
  if ((unaff_w22 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
      if (1 < uVar14) {
        uVar16 = 1;
        do {
          uVar3 = unaff_x21[(int)uVar16];
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_050108b8;
          uVar16 = uVar16 + 1;
        } while (uVar14 != uVar16);
      }
      goto LAB_05010dac;
    }
  }
  uVar16 = 0;
LAB_050108b8:
  uVar19 = (uint)uVar3;
  uVar11 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) goto LAB_050108c0;
  if (unaff_x25 == 0) goto LAB_05010df4;
  lVar1 = *(long *)(unaff_x25 + 0x28);
  lVar2 = *(long *)(unaff_x25 + 0x30);
  uVar8 = thunk_FUN_04e8bd3c(lVar1,*(undefined8 *)PTR_DAT_06773ac8,0);
  if (((uVar8 & 1) == 0) ||
     (uVar8 = thunk_FUN_04e8bd3c(lVar2,*(undefined8 *)PTR_DAT_067761c8,0), (uVar8 & 1) == 0)) {
    lVar12 = *(long *)PTR_DAT_06777300;
    if (uVar14 < uVar16) {
      FUN_05027268(0);
    }
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    uVar14 = uVar14 - uVar16;
    unaff_x23 = (ulong)uVar14;
    unaff_x21 = unaff_x21 + (int)uVar16;
    uVar11 = FUN_04e8cf70(lVar1,0);
    if ((uVar11 & 1) == 0) {
      if (DAT_06b77dad == '\0') {
        FUN_02d6084c(PTR_DAT_0676c428);
        DAT_06b77dad = '\x01';
      }
      if (lVar1 == 0) {
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        uVar9 = FUN_04e8a8a0(lVar1,0);
        uVar10 = *(undefined4 *)(lVar1 + 0x10);
      }
      uVar11 = FUN_05015874(unaff_x21,unaff_x23,uVar9,uVar10,*(undefined8 *)PTR_DAT_0677a8d8);
      if ((uVar11 & 1) == 0) goto LAB_05010a6c;
      if (lVar1 == 0) goto LAB_05010df4;
      uVar16 = *(uint *)(lVar1 + 0x10);
      if (uVar14 <= uVar16) goto LAB_05010dac;
      uVar19 = (uint)unaff_x21[(int)uVar16];
    }
    else {
LAB_05010a6c:
      uVar11 = FUN_04e8cf70(lVar2,0);
      if ((uVar11 & 1) == 0) {
        if (DAT_06b77dad == '\0') {
          FUN_02d6084c(PTR_DAT_0676c428);
          DAT_06b77dad = '\x01';
        }
        if (lVar2 == 0) {
          uVar9 = 0;
          uVar10 = 0;
        }
        else {
          uVar9 = FUN_04e8a8a0(lVar2,0);
          uVar10 = *(undefined4 *)(lVar2 + 0x10);
        }
        uVar11 = FUN_05015874(unaff_x21,unaff_x23,uVar9,uVar10,*(undefined8 *)PTR_DAT_0677a8d8);
        if ((uVar11 & 1) != 0) {
          if (lVar2 == 0) {
LAB_05010df4:
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar16 = *(uint *)(lVar2 + 0x10);
          if (uVar16 < uVar14) {
            uVar19 = (uint)unaff_x21[(int)uVar16];
            uVar11 = 0;
            iVar18 = -1;
            goto LAB_05010b0c;
          }
          goto LAB_05010dac;
        }
      }
      uVar16 = 0;
    }
    uVar11 = 0;
    iVar18 = 1;
LAB_05010b0c:
    puVar5 = PTR_DAT_06777060;
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar14 = uVar19 - 0x30;
    if (uVar14 < 10) {
      uVar15 = (uint)unaff_x23;
      iStack000000000000001c = iVar18;
      if (uVar19 != 0x30) {
LAB_05010b6c:
        uVar19 = uVar16 + 1;
        uVar17 = uVar16 + 9;
        iVar18 = -8;
        do {
          if (uVar15 <= uVar19) goto LAB_05010de0;
          uVar3 = unaff_x21[(int)(uVar16 + iVar18 + 9)];
          uVar19 = (uint)uVar3;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (9 < uVar3 - 0x30) {
            bVar6 = false;
            uVar17 = uVar16 + iVar18 + 9;
            goto LAB_05010cd4;
          }
          uVar19 = uVar16 + iVar18 + 10;
          bVar6 = iVar18 != -1;
          iVar18 = iVar18 + 1;
          uVar4 = ((uint)uVar3 + uVar14 * 10) - 0x30;
          uVar14 = uVar4;
        } while (bVar6);
        if (uVar15 <= uVar19) {
LAB_05010de0:
          uVar9 = 1;
          iStack000000000000001c = uVar14 * iStack000000000000001c;
          goto LAB_05010db4;
        }
        uVar3 = unaff_x21[(int)uVar17];
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (9 < uVar3 - 0x30) goto LAB_05010cd0;
        uVar14 = (uVar3 - 0x30) + uVar4 * 10;
        uVar17 = uVar16 + 10;
        iVar18 = 2 - iStack000000000000001c;
        if (-1 < 1 - iStack000000000000001c) {
          iVar18 = 1 - iStack000000000000001c;
        }
        bVar7 = (ulong)(uint)(iVar18 >> 1) + 0x7fffffff < (ulong)uVar14;
        bVar6 = 0xccccccc < (int)uVar4 || bVar7;
        if (uVar17 < uVar15) {
          do {
            uVar3 = unaff_x21[(int)uVar17];
            uVar19 = (uint)uVar3;
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (9 < uVar3 - 0x30) goto LAB_05010cd4;
            uVar17 = uVar17 + 1;
            bVar6 = true;
          } while (uVar15 != uVar17);
        }
        else if (0xccccccc >= (int)uVar4 && !bVar7) goto LAB_05010de0;
LAB_05010d98:
        iStack000000000000001c = 0;
        uVar9 = 0;
        *unaff_x27 = 1;
        goto LAB_05010db4;
      }
      do {
        uVar16 = uVar16 + 1;
        if (uVar15 <= uVar16) {
          uVar14 = 0;
          goto LAB_05010de0;
        }
        uVar3 = unaff_x21[(int)uVar16];
        uVar14 = uVar3 - 0x30;
      } while (uVar14 == 0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (uVar14 < 10) goto LAB_05010b6c;
      uVar17 = uVar16;
      uVar14 = 0;
LAB_05010cd0:
      uVar19 = (uint)uVar3;
      bVar6 = false;
LAB_05010cd4:
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if ((uVar19 - 9 < 5) || (uVar19 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar17 = uVar17 + 1;
          if ((int)uVar17 < (int)uVar15) {
            puVar13 = unaff_x21 + (int)uVar17;
            do {
              if (uVar15 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              uVar3 = *puVar13;
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_05010d50;
              uVar17 = uVar17 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar15 != uVar17);
          }
          else {
LAB_05010d50:
            if (uVar17 < uVar15) goto LAB_05010d64;
          }
          goto LAB_05010d90;
        }
      }
      else {
LAB_05010d64:
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_05013474(unaff_x21,unaff_x23 & 0xffffffff | uVar11 << 0x20,uVar17);
        if ((uVar11 & 1) != 0) {
LAB_05010d90:
          if (!bVar6) goto LAB_05010de0;
          goto LAB_05010d98;
        }
      }
    }
  }
  else {
    if (uVar19 != 0x2b) {
      if (uVar19 == 0x2d) {
        uVar16 = uVar16 + 1;
        if (uVar14 <= uVar16) goto LAB_05010dac;
        uVar19 = (uint)unaff_x21[(int)uVar16];
        iVar18 = -1;
      }
      else {
LAB_050108c0:
        iVar18 = 1;
      }
      goto LAB_05010b0c;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 < uVar14) {
      uVar19 = (uint)unaff_x21[(int)uVar16];
      goto LAB_050108c0;
    }
  }
LAB_05010dac:
  iStack000000000000001c = 0;
  uVar9 = 0;
LAB_05010db4:
  *unaff_x19 = iStack000000000000001c;
  return uVar9;
}


