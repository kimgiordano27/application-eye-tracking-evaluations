/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 0675c8b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(long param_1)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  long unaff_x19;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort *unaff_x21;
  ulong *unaff_x22;
  uint uVar13;
  uint uVar14;
  ulong unaff_x23;
  uint uVar15;
  int iVar16;
  long unaff_x25;
  undefined1 *unaff_x26;
  uint unaff_w27;
  ulong uVar17;
  uint uVar18;
  uint uStack000000000000000c;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x150));
  *(undefined1 *)(unaff_x19 + 0xb41) = 1;
  puVar4 = PTR_DAT_084a5b08;
  uVar13 = (uint)unaff_x23;
  if (uVar13 != 0) {
    uVar2 = *unaff_x21;
    if ((unaff_w27 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
        if (uVar13 != 1) {
          lVar6 = *(long *)puVar4;
          uVar15 = 1;
          do {
            uVar2 = unaff_x21[(int)uVar15];
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar6 = *(long *)puVar4;
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0675c8d4;
            uVar15 = uVar15 + 1;
          } while (uVar13 != uVar15);
        }
        goto LAB_0675cdcc;
      }
    }
    uVar15 = 0;
LAB_0675c8d4:
    uVar18 = (uint)uVar2;
    uVar17 = unaff_x23 >> 0x20;
    if ((unaff_w27 >> 2 & 1) == 0) {
LAB_0675c8e0:
      iVar16 = 1;
      uVar7 = uVar17;
      goto LAB_0675cb5c;
    }
    if (unaff_x25 == 0) goto LAB_0675ce38;
    lVar6 = *(long *)(unaff_x25 + 0x28);
    lVar1 = *(long *)(unaff_x25 + 0x30);
    uVar7 = thunk_FUN_065cbffc(lVar6,*(undefined8 *)PTR_DAT_084a2798,0);
    if (((uVar7 & 1) == 0) ||
       (uVar7 = thunk_FUN_065cbffc(lVar1,*(undefined8 *)PTR_DAT_08489150,0), (uVar7 & 1) == 0)) {
      uVar14 = uVar13 - uVar15;
      unaff_x23 = (ulong)uVar14;
      lVar9 = *(long *)PTR_DAT_084a5db0;
      if (uVar13 < uVar15) {
        FUN_06771580(0);
      }
      if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      unaff_x21 = unaff_x21 + (int)uVar15;
      uVar17 = FUN_065cd268(lVar6,0);
      if ((uVar17 & 1) == 0) {
        if (DAT_089760b7 == '\0') {
          FUN_03a8a718(PTR_DAT_08493e18);
          DAT_089760b7 = '\x01';
        }
        if (lVar6 == 0) {
          uVar5 = 0;
          uVar8 = 0;
        }
        else {
          uVar5 = FUN_065cab58(lVar6,0);
          uVar8 = *(undefined4 *)(lVar6 + 0x10);
        }
        uVar17 = FUN_0675fba0(unaff_x21,unaff_x23,uVar5,uVar8,*(undefined8 *)PTR_DAT_084a9b78);
        if ((uVar17 & 1) != 0) {
          if (lVar6 == 0) goto LAB_0675ce38;
          uVar15 = *(uint *)(lVar6 + 0x10);
          uVar17 = 0;
          if (uVar14 <= uVar15) goto LAB_0675cdcc;
          iVar16 = 1;
          goto LAB_0675cb58;
        }
      }
      uVar17 = FUN_065cd268(lVar1,0);
      if ((uVar17 & 1) == 0) {
        if (DAT_089760b7 == '\0') {
          FUN_03a8a718(PTR_DAT_08493e18);
          DAT_089760b7 = '\x01';
        }
        if (lVar1 == 0) {
          uVar5 = 0;
          uVar8 = 0;
        }
        else {
          uVar5 = FUN_065cab58(lVar1,0);
          uVar8 = *(undefined4 *)(lVar1 + 0x10);
        }
        uVar17 = FUN_0675fba0(unaff_x21,unaff_x23,uVar5,uVar8,*(undefined8 *)PTR_DAT_084a9b78);
        if ((uVar17 & 1) != 0) {
          if (lVar1 == 0) {
LAB_0675ce38:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar15 = *(uint *)(lVar1 + 0x10);
          iVar16 = 0;
          uVar17 = 0;
          if (uVar14 <= uVar15) goto LAB_0675cdd0;
          goto LAB_0675cb58;
        }
        uVar7 = 0;
        uVar15 = 0;
        iVar16 = 1;
      }
      else {
        uVar7 = 0;
        uVar15 = 0;
        iVar16 = 1;
      }
    }
    else {
      if (uVar18 == 0x2d) {
        uVar15 = uVar15 + 1;
        iVar16 = 0;
        if (uVar13 <= uVar15) {
          uVar17 = 0;
          goto LAB_0675cdd0;
        }
      }
      else {
        if (uVar18 != 0x2b) goto LAB_0675c8e0;
        uVar15 = uVar15 + 1;
        if (uVar13 <= uVar15) goto LAB_0675cdcc;
        iVar16 = 1;
      }
LAB_0675cb58:
      uVar18 = (uint)unaff_x21[(int)uVar15];
      uVar7 = uVar17;
    }
LAB_0675cb5c:
    puVar4 = PTR_DAT_084a5b08;
    if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = uVar18 - 0x30;
    if (uVar13 < 10) {
      uVar14 = (uint)unaff_x23;
      uStack000000000000000c = unaff_w27;
      if (uVar18 == 0x30) {
        do {
          uVar15 = uVar15 + 1;
          if (uVar14 <= uVar15) {
            uVar17 = 0;
            iVar16 = 1;
            goto LAB_0675cdd0;
          }
          uVar2 = unaff_x21[(int)uVar15];
          uVar11 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = uVar2 - 0x30;
        if (uVar13 < 10) goto LAB_0675cbcc;
        uVar17 = 0;
        uVar13 = uVar15;
LAB_0675ccec:
        uVar15 = (uint)uVar11;
        bVar3 = false;
LAB_0675ccf0:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((uVar15 - 9 < 5) || (uVar15 == 0x20)) {
          if ((uStack000000000000000c >> 1 & 1) == 0) goto LAB_0675cdcc;
          uVar13 = uVar13 + 1;
          if ((int)uVar13 < (int)uVar14) {
            puVar12 = unaff_x21 + (int)uVar13;
            do {
              if (uVar14 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              uVar2 = *puVar12;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_0675cd70;
              uVar13 = uVar13 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar14 != uVar13);
            if (bVar3) goto LAB_0675ce14;
            goto LAB_0675cdfc;
          }
LAB_0675cd70:
          if (uVar14 <= uVar13) goto LAB_0675cdc0;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar7 = FUN_0675d708(unaff_x21,unaff_x23 & 0xffffffff | uVar7 << 0x20,uVar13);
        if ((uVar7 & 1) == 0) goto LAB_0675cdcc;
LAB_0675cdc0:
        if (!bVar3) goto LAB_0675cdfc;
      }
      else {
LAB_0675cbcc:
        uVar17 = (ulong)uVar13;
        uVar13 = uVar15 + 0x13;
        iVar10 = 1;
        do {
          if (uVar14 <= uVar15 + iVar10) goto LAB_0675cdfc;
          uVar2 = unaff_x21[(int)(uVar15 + iVar10)];
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (9 < uVar2 - 0x30) {
            uVar13 = uVar15 + iVar10;
            uVar11 = (ulong)(uint)uVar2;
            goto LAB_0675ccec;
          }
          iVar10 = iVar10 + 1;
          uVar17 = ((ulong)uVar2 + uVar17 * 10) - 0x30;
        } while (iVar10 != 0x13);
        if (uVar13 < uVar14) {
          uVar2 = unaff_x21[(int)uVar13];
          uVar11 = (ulong)uVar2;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (9 < uVar2 - 0x30) goto LAB_0675ccec;
          uVar13 = uVar15 + 0x14;
          if ((0x1999999999999999 < uVar17) ||
             ((bVar3 = false, uVar17 == 0x1999999999999999 && (0x35 < uVar2)))) {
            bVar3 = true;
          }
          uVar17 = (uVar11 + uVar17 * 10) - 0x30;
          if (uVar14 <= uVar13) goto LAB_0675cdc0;
          lVar6 = *(long *)puVar4;
          do {
            uVar2 = unaff_x21[(int)uVar13];
            uVar15 = (uint)uVar2;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar6 = *(long *)puVar4;
            }
            if (9 < uVar2 - 0x30) goto LAB_0675ccf0;
            uVar13 = uVar13 + 1;
            bVar3 = true;
          } while (uVar14 != uVar13);
        }
        else {
LAB_0675cdfc:
          if (uVar17 == 0) {
            iVar16 = 1;
          }
          if (iVar16 != 0) {
            iVar16 = 1;
            goto LAB_0675cdd0;
          }
        }
      }
LAB_0675ce14:
      uVar17 = 0;
      iVar16 = 0;
      *unaff_x26 = 1;
      goto LAB_0675cdd0;
    }
  }
LAB_0675cdcc:
  uVar17 = 0;
  iVar16 = 0;
LAB_0675cdd0:
  *unaff_x22 = uVar17;
  return iVar16;
}


