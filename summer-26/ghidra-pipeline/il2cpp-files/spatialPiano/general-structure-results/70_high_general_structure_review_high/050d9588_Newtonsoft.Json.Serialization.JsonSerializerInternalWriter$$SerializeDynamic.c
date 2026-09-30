/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 050d9588
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_w8;
  short *psVar7;
  int unaff_w19;
  uint uVar8;
  int unaff_w20;
  ushort *puVar9;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar10;
  long unaff_x24;
  short *unaff_x25;
  short sVar11;
  int iVar12;
  long lVar13;
  ulong unaff_x27;
  uint uVar14;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    if (unaff_w19 <= in_w8) goto LAB_050d95ec;
    *(int *)(unaff_x29 + -0x44) = unaff_w20;
LAB_050d97d0:
    unaff_w19 = unaff_w19 + -1;
LAB_050d9824:
    iVar12 = (int)unaff_x27;
    if ((int)unaff_x28 <= iVar12) {
LAB_050d98e0:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_050d9a60;
    }
    uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)iVar12 * 2);
    if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar12, uVar2 == 0)) goto LAB_050d98e0;
    unaff_w20 = *(int *)(unaff_x29 + -0x44);
    if ((unaff_w20 < 1) ||
       ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
      unaff_x24 = *(long *)(unaff_x29 + -0x40);
    }
    else {
      iVar12 = unaff_w20 + 1;
      unaff_x24 = *(long *)(unaff_x29 + -0x40);
      if (0 < unaff_w20) {
        unaff_w20 = 1;
      }
      uVar8 = *(uint *)(unaff_x29 + -0x20);
      *(int *)(unaff_x29 + -0x34) = unaff_w20 + -1;
      do {
        sVar11 = *unaff_x25;
        sVar3 = 0x30;
        if (sVar11 != 0) {
          unaff_x25 = unaff_x25 + 1;
          sVar3 = sVar11;
        }
        if (DAT_06bb905a == '\0') {
          FUN_02f08768(PTR_DAT_067d60d8);
          DAT_06bb905a = '\x01';
        }
        uVar14 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_050d9a30;
          *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = sVar3;
        }
        else {
          FUN_04f8713c();
        }
        if (((uVar8 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_050d9a30;
          if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
            if (unaff_x24 == 0) goto LAB_050d9a48;
            lVar13 = *(long *)(unaff_x24 + 0x40);
            if (DAT_06bb9c1f == '\0') {
              FUN_02f08768(PTR_DAT_067d60d8);
              DAT_06bb9c1f = '\x01';
            }
            if (lVar13 == 0) goto LAB_050d9a48;
            if (*(int *)(lVar13 + 0x10) == 1) {
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_050d9018;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_050d9a30;
              lVar10 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_04f69818(lVar13,0,0);
              *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
              unaff_x24 = *(long *)(unaff_x29 + -0x40);
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
LAB_050d9018:
              FUN_04f87268();
            }
            uVar8 = *(uint *)(unaff_x29 + -0x20);
            unaff_w21 = unaff_w21 - 1;
          }
        }
        iVar12 = iVar12 + -1;
        unaff_w19 = unaff_w19 + -1;
      } while (1 < iVar12);
      unaff_w20 = *(int *)(unaff_x29 + -0x34);
    }
    unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
    *(int *)(unaff_x29 + -0x44) = unaff_w20;
    uVar8 = *(int *)(unaff_x29 + -0x24) + 1;
    unaff_x27 = (ulong)uVar8;
    uVar14 = (uint)unaff_x28;
    if (0x45 < uVar2) {
      if (uVar2 == 0x5c) break;
      if (uVar2 == 0x65) {
LAB_050d9110:
        if ((unaff_x23 & 1) == 0) {
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar6 = *(uint *)(unaff_x22 + 0x18);
          iVar12 = *(int *)(unaff_x29 + -0x24);
          if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_050d9a30;
            *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar2;
          }
          else {
            FUN_04f8713c();
          }
          if ((int)uVar8 < (int)uVar14) {
            sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
            if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
              if (DAT_06bb905a == '\0') {
                FUN_02f08768(PTR_DAT_067d60d8);
                DAT_06bb905a = '\x01';
              }
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              unaff_x27 = (ulong)(iVar12 + 2);
              if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_050d9a30;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
              }
              else {
                FUN_04f8713c();
              }
            }
            iVar12 = (int)unaff_x27;
            if (iVar12 < (int)uVar14) {
              psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar12 * 2);
              lVar13 = *(long *)(unaff_x29 + -0x68) - (long)iVar12;
              while (*psVar7 == 0x30) {
                if (DAT_06bb905a == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb905a = '\x01';
                }
                uVar8 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_050d9a30;
                  *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = 0x30;
                }
                else {
                  FUN_04f8713c();
                }
                lVar13 = lVar13 + -1;
                unaff_x27 = (ulong)((int)unaff_x27 + 1);
                psVar7 = psVar7 + 1;
                if (lVar13 == 0) goto LAB_050d98e0;
              }
              unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
            }
          }
LAB_050d9820:
          unaff_x23 = 0;
        }
        else {
          if (((int)uVar8 < (int)uVar14) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2) == 0x30)) {
            uVar5 = 0;
            uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
            goto LAB_050d913c;
          }
          uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)uVar6 < (int)uVar14) {
            sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
            if (sVar11 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30) {
                uVar5 = 0;
                goto LAB_050d913c;
              }
            }
            else if ((sVar11 == 0x2b) &&
                    (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30)) {
              uVar5 = 1;
LAB_050d913c:
              if ((int)uVar6 < (int)uVar14) {
                psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2);
                do {
                  if (*psVar7 != 0x30) goto LAB_050d95b4;
                  uVar6 = uVar6 + 1;
                  psVar7 = psVar7 + 1;
                } while (uVar14 != uVar6);
                unaff_x27 = unaff_x28 & 0xffffffff;
              }
              else {
LAB_050d95b4:
                unaff_x27 = (ulong)uVar6;
              }
              if (*(int *)(*(long *)PTR_DAT_067dbd90 + 0xe4) == 0) {
                *(undefined4 *)(unaff_x29 + -0x24) = uVar5;
                thunk_FUN_02f6670c();
              }
              FUN_050deccc();
              goto LAB_050d9820;
            }
          }
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar8 < *(uint *)(unaff_x22 + 0x10)) {
              lVar13 = *(long *)(unaff_x22 + 8);
              unaff_x23 = 1;
              goto LAB_050d91cc;
            }
            goto LAB_050d9a30;
          }
          FUN_04f8713c();
          unaff_x23 = 1;
        }
        goto LAB_050d9824;
      }
      if (uVar2 != 0x2030) goto LAB_050d9188;
      if (unaff_x24 == 0) goto LAB_050d9a48;
      lVar13 = *(long *)(unaff_x24 + 0x98);
LAB_050d93d0:
      if (DAT_06bb9c1f == '\0') {
        FUN_02f08768(PTR_DAT_067d60d8);
        DAT_06bb9c1f = '\x01';
      }
      if (lVar13 == 0) goto LAB_050d9a48;
      if (*(int *)(lVar13 + 0x10) == 1) {
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_050d9a30;
          lVar10 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_04f69818(lVar13,0,0);
          *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          goto LAB_050d9824;
        }
      }
      FUN_04f87268();
      goto LAB_050d9824;
    }
    if (0x26 < uVar2) {
      if (uVar2 < 0x2e) {
        if (uVar2 == 0x27) goto LAB_050d9280;
        if (uVar2 == 0x2c) goto LAB_050d9824;
        if (uVar2 != 0x2d) {
LAB_050d9108:
          if (uVar2 == 0x45) goto LAB_050d9110;
        }
      }
      else {
        if (uVar2 == 0x2e) {
          if ((*(uint *)(unaff_x29 + -0x74) & 1) == 0 && unaff_w19 == 0) {
            if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
               ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*unaff_x25 != 0)))) {
              if (unaff_x24 == 0) goto LAB_050d9a48;
              lVar13 = *(long *)(unaff_x24 + 0x38);
              if (DAT_06bb9c1f == '\0') {
                FUN_02f08768(PTR_DAT_067d60d8);
                DAT_06bb9c1f = '\x01';
              }
              if (lVar13 == 0) goto LAB_050d9a48;
              if (*(int *)(lVar13 + 0x10) == 1) {
                uVar8 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_050d98c0;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_050d9a30;
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_04f69818(lVar13,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              }
              else {
LAB_050d98c0:
                FUN_04f87268();
              }
              unaff_w19 = 0;
              *(undefined4 *)(unaff_x29 + -0x74) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x74) = 0;
              unaff_w19 = 0;
            }
          }
          goto LAB_050d9824;
        }
        if (uVar2 != 0x2f) {
          if (uVar2 != 0x30) goto LAB_050d9108;
          goto LAB_050d926c;
        }
      }
LAB_050d9188:
      if (DAT_06bb905a == '\0') {
        FUN_02f08768(PTR_DAT_067d60d8);
        DAT_06bb905a = '\x01';
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_050d91e0;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_050d9a30;
      lVar13 = *(long *)(unaff_x22 + 8);
LAB_050d91cc:
      *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
      *(ushort *)(lVar13 + (long)(int)uVar8 * 2) = uVar2;
      goto LAB_050d9824;
    }
    if (0x23 < uVar2) {
      if (uVar2 != 0x24) {
        if (uVar2 == 0x25) {
          if (unaff_x24 != 0) {
            lVar13 = *(long *)(unaff_x24 + 0x90);
            goto LAB_050d93d0;
          }
          goto LAB_050d9a48;
        }
        if (uVar2 != 0x26) goto LAB_050d9108;
      }
      goto LAB_050d9188;
    }
    if (uVar2 == 0x22) {
LAB_050d9280:
      if ((int)uVar8 < (int)uVar14) {
        lVar13 = unaff_x27 << 0x20;
        puVar9 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
        uVar8 = ~*(uint *)(unaff_x29 + -0x24);
        while ((uVar1 = *puVar9, uVar1 != 0 && (uVar1 != uVar2))) {
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar14 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_050d9a30;
            *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar1;
          }
          else {
            FUN_04f8713c();
          }
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          lVar13 = lVar13 + 0x100000000;
          if (*(uint *)(unaff_x29 + -0x70) == uVar8) goto LAB_050d98e0;
        }
        unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
        unaff_x27 = (ulong)((*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                           uVar8);
      }
      goto LAB_050d9824;
    }
    if (uVar2 != 0x23) goto LAB_050d9108;
LAB_050d926c:
    if (-1 < unaff_w20) {
      sVar11 = *unaff_x25;
      if (sVar11 == 0) goto LAB_050d95e0;
      unaff_x25 = unaff_x25 + 1;
      goto LAB_050d95f0;
    }
    in_w8 = *(int *)(unaff_x29 + -0x90);
    unaff_w20 = unaff_w20 + 1;
  } while( true );
  if (((int)uVar8 < (int)uVar14) &&
     (sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2), sVar11 != 0)) {
    if (DAT_06bb905a == '\0') {
      FUN_02f08768(PTR_DAT_067d60d8);
      DAT_06bb905a = '\x01';
    }
    uVar8 = *(uint *)(unaff_x22 + 0x18);
    unaff_x27 = (ulong)(*(int *)(unaff_x29 + -0x24) + 2);
    if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_050d9a30;
      *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
    }
    else {
LAB_050d91e0:
      FUN_04f8713c();
    }
  }
  goto LAB_050d9824;
LAB_050d95e0:
  if (unaff_w19 <= *(int *)(unaff_x29 + -0x8c)) goto LAB_050d97d0;
LAB_050d95ec:
  sVar11 = 0x30;
LAB_050d95f0:
  if (DAT_06bb905a == '\0') {
    FUN_02f08768(PTR_DAT_067d60d8);
    DAT_06bb905a = '\x01';
  }
  uVar14 = *(uint *)(unaff_x22 + 0x18);
  uVar8 = *(uint *)(unaff_x22 + 0x10);
  *(int *)(unaff_x29 + -0x44) = unaff_w20;
  if ((int)uVar14 < (int)uVar8) {
    if (uVar14 < uVar8) {
      *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = sVar11;
      goto LAB_050d9654;
    }
  }
  else {
    FUN_04f8713c();
LAB_050d9654:
    if (((*(uint *)(unaff_x29 + -0x20) & 1) != 0 || unaff_w19 < 2) || ((int)unaff_w21 < 0))
    goto LAB_050d97d0;
    if (unaff_w21 < *(uint *)(unaff_x29 + -0x10)) {
      if (unaff_w19 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1)
      goto LAB_050d97d0;
      if (unaff_x24 != 0) {
        lVar13 = *(long *)(unaff_x24 + 0x40);
        if (DAT_06bb9c1f == '\0') {
          FUN_02f08768(PTR_DAT_067d60d8);
          DAT_06bb9c1f = '\x01';
        }
        if (lVar13 != 0) {
          if (*(int *)(lVar13 + 0x10) == 1) {
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar8 < *(uint *)(unaff_x22 + 0x10)) {
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_04f69818(lVar13,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                goto LAB_050d97cc;
              }
              goto LAB_050d9a30;
            }
          }
          FUN_04f87268();
LAB_050d97cc:
          unaff_w21 = unaff_w21 - 1;
          goto LAB_050d97d0;
        }
      }
LAB_050d9a48:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_050d9a60;
    }
  }
LAB_050d9a30:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_050d9a60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


