/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 05926c3c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(void)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  undefined1 auVar7 [12];
  undefined2 uVar8;
  int iVar9;
  short *psVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  ushort *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined8 unaff_x20;
  uint uVar23;
  undefined8 unaff_x21;
  short *psVar24;
  long unaff_x22;
  int iVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  short sVar29;
  uint uVar30;
  long unaff_x26;
  int iVar31;
  long unaff_x29;
  undefined1 auVar32 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  psVar10 = (short *)FUN_059321cc();
  sVar29 = *psVar10;
  *(short **)(unaff_x29 + -0x30) = psVar10;
  if (sVar29 != 0) {
    FUN_059321b0();
  }
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x21;
  if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  iVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
                    (*(undefined8 *)(unaff_x29 + -0x28));
  uVar22 = (uint)unaff_x20;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  do {
    iVar26 = iVar9;
    lVar11 = FUN_03aca200(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar26 < (int)uVar22) {
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar31 = 0;
      bVar6 = false;
      uVar21 = 0;
      iVar9 = 0;
      iVar25 = 0x7fffffff;
      iVar16 = -1;
      iVar15 = -1;
      iVar20 = iVar26;
      do {
        uVar4 = *(ushort *)(lVar11 + (long)iVar20 * 2);
        if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
        iVar17 = iVar20 + 1;
        if (uVar4 < 0x46) {
          switch(uVar4) {
          case 0x22:
          case 0x27:
            lVar27 = (long)iVar17;
            lVar1 = lVar27;
            if ((long)iVar17 <= (long)(int)uVar22) {
              lVar1 = (long)(int)uVar22;
            }
            puVar19 = (ushort *)(lVar11 + (long)iVar17 * 2);
            do {
              if (lVar1 == lVar27) {
                iVar17 = (int)lVar1;
                goto switchD_05926d1c_caseD_24;
              }
              uVar3 = *puVar19;
              if (uVar3 == 0) break;
              lVar27 = lVar27 + 1;
              puVar19 = puVar19 + 1;
            } while (uVar3 != uVar4);
            iVar17 = (int)lVar27;
            break;
          case 0x23:
            *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
            break;
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2d:
          case 0x2f:
            break;
          case 0x25:
            iVar9 = iVar9 + 2;
            break;
          case 0x2c:
            if ((iVar16 < 0) && (0 < *(int *)(unaff_x29 + -0x1c))) {
              if (iVar15 < 0) {
                *(undefined4 *)(unaff_x29 + -0x38) = 1;
                iVar15 = *(int *)(unaff_x29 + -0x1c);
              }
              else {
                iVar2 = *(int *)(unaff_x29 + -0x1c);
                uVar21 = uVar21 | iVar15 != iVar2;
                iVar20 = 1;
                if (iVar15 == iVar2) {
                  iVar20 = *(int *)(unaff_x29 + -0x38) + 1;
                }
                *(int *)(unaff_x29 + -0x38) = iVar20;
                iVar15 = iVar2;
              }
            }
            break;
          case 0x2e:
            if (iVar16 < 0) {
              iVar16 = *(int *)(unaff_x29 + -0x1c);
            }
            break;
          case 0x30:
            iVar31 = *(int *)(unaff_x29 + -0x1c) + 1;
            iVar20 = *(int *)(unaff_x29 + -0x1c);
            if (iVar25 != 0x7fffffff) {
              iVar20 = iVar25;
            }
            *(int *)(unaff_x29 + -0x1c) = iVar31;
            iVar25 = iVar20;
            break;
          default:
            if (uVar4 == 0x45) {
LAB_05926da0:
              if (((iVar17 < (int)uVar22) && (*(short *)(lVar11 + (long)iVar17 * 2) == 0x30)) ||
                 ((iVar20 + 2 < (int)uVar22 &&
                  (((sVar29 = *(short *)(lVar11 + (long)iVar17 * 2), sVar29 == 0x2d ||
                    (sVar29 == 0x2b)) && (*(short *)(lVar11 + (long)(iVar20 + 2) * 2) == 0x30))))))
              {
                do {
                  iVar17 = iVar17 + 1;
                  if ((int)uVar22 <= iVar17) {
                    bVar6 = true;
                    goto LAB_05926ec8;
                  }
                } while (*(short *)(lVar11 + (long)iVar17 * 2) == 0x30);
                bVar6 = true;
              }
            }
          }
        }
        else if (uVar4 == 0x5c) {
          if ((iVar17 < (int)uVar22) && (*(short *)(lVar11 + (long)iVar17 * 2) != 0)) {
            iVar17 = iVar20 + 2;
          }
        }
        else {
          if (uVar4 == 0x65) goto LAB_05926da0;
          if (uVar4 == 0x2030) {
            iVar9 = iVar9 + 3;
          }
        }
switchD_05926d1c_caseD_24:
        iVar20 = iVar17;
      } while (iVar20 < (int)uVar22);
LAB_05926ec8:
      if (iVar16 < 0) {
        iVar16 = *(int *)(unaff_x29 + -0x1c);
      }
      *(int *)(unaff_x29 + -0x34) = iVar16;
      if (-1 < iVar15) {
        if (iVar15 == iVar16) {
          iVar9 = *(int *)(unaff_x29 + -0x38) * -3 + iVar9;
        }
        else {
          uVar21 = 1;
        }
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x34) = 0;
      bVar6 = false;
      iVar31 = 0;
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar9 = 0;
      uVar21 = 0;
      iVar25 = 0x7fffffff;
    }
    *(uint *)(unaff_x29 + -0x3c) = uVar21;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = iVar26;
      FUN_059321c0();
      *(undefined4 *)(unaff_x26 + 4) = 0;
      goto LAB_05926fac;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + iVar9;
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0592b640();
    if (**(short **)(unaff_x29 + -0x30) != 0) break;
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
                      (*(undefined8 *)(unaff_x29 + -0x28));
  } while (iVar9 != iVar26);
  *(int *)(unaff_x29 + -0x38) = iVar26;
LAB_05926fac:
  iVar26 = *(int *)(unaff_x29 + -0x34);
  iVar9 = iVar26 - iVar25;
  if (iVar9 == 0 || iVar26 < iVar25) {
    iVar9 = 0;
  }
  iVar25 = iVar26 - iVar31;
  if (iVar31 <= iVar26) {
    iVar25 = 0;
  }
  *(int *)(unaff_x29 + -0x74) = iVar25;
  if (bVar6) {
    lVar11 = *(long *)(unaff_x29 + -0x48);
    uVar21 = *(uint *)(unaff_x29 + -0x3c);
    uVar18 = 1;
    *(undefined4 *)(unaff_x29 + -0x4c) = 0;
    iVar31 = iVar26;
  }
  else {
    iVar31 = *(int *)(unaff_x26 + 4);
    lVar11 = *(long *)(unaff_x29 + -0x48);
    uVar21 = *(uint *)(unaff_x29 + -0x3c);
    uVar18 = 0;
    *(int *)(unaff_x29 + -0x4c) = iVar31 - iVar26;
    if (iVar31 - iVar26 == 0 || iVar31 < iVar26) {
      iVar31 = iVar26;
    }
  }
  uVar12 = DAT_0139d8a0;
  puVar13 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar13;
  *(long *)(unaff_x29 + -0x70) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar12;
  *(int *)(unaff_x29 + -0x78) = iVar9;
  *(undefined4 *)(unaff_x29 + -0x5c) = uVar18;
  if ((uVar21 & 1) == 0) {
LAB_0592705c:
    uVar21 = 0xffffffff;
  }
  else {
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x40) == 0)) goto LAB_05927ca8;
    if (*(int *)(*(long *)(lVar11 + 0x40) + 0x10) < 1) goto LAB_0592705c;
    lVar11 = *(long *)(lVar11 + 0x10);
    if (lVar11 == 0) goto LAB_05927ca8;
    iVar26 = *(int *)(lVar11 + 0x18);
    if (iVar26 == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)(lVar11 + 0x20);
    }
    uVar21 = 0xffffffff;
    iVar16 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) + iVar31;
    if (iVar9 <= iVar16) {
      iVar9 = iVar16;
    }
    if ((iVar25 != 0) && (iVar25 < iVar9)) {
      uVar21 = 0;
      lVar27 = 0;
      uVar14 = 4;
      *(long *)(unaff_x29 + -0x58) = lVar11;
      iVar16 = iVar25;
      while( true ) {
        auVar32._8_8_ = uVar14;
        auVar32._0_8_ = puVar13;
        auVar7 = auVar32._0_12_;
        if ((int)uVar14 <= (int)uVar21) {
          uVar12 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,(int)uVar14 << 1);
          auVar32 = FUN_049b37a4(uVar12,*(undefined8 *)PTR_DAT_072970b0);
          FUN_049b3278(unaff_x29 + -0x18,auVar32._0_8_,auVar32._8_8_,*(undefined8 *)PTR_DAT_072970a0
                      );
          auVar32 = FUN_049b37a4(uVar12,*(undefined8 *)PTR_DAT_072970b0);
          auVar7 = auVar32._0_12_;
          lVar11 = *(long *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar32;
        }
        puVar13 = auVar7._0_8_;
        if (auVar7._8_4_ <= uVar21) goto LAB_05927ca4;
        *(int *)((long)puVar13 + (long)(int)uVar21 * 4) = iVar25;
        if ((int)lVar27 < iVar26 + -1) {
          lVar27 = (long)(int)lVar27 + 1;
          if (*(uint *)(lVar11 + 0x18) <= (uint)lVar27) goto LAB_05927ca4;
          iVar16 = *(int *)(lVar11 + lVar27 * 4 + 0x20);
        }
        if ((iVar16 == 0) || (iVar25 = iVar16 + iVar25, iVar9 <= iVar25)) break;
        uVar14 = (ulong)*(uint *)(unaff_x29 + -0x10);
        uVar21 = uVar21 + 1;
      }
      unaff_x26 = *(long *)(unaff_x29 + -0x70);
    }
  }
  uVar14 = FUN_059321b0(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar14 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar11 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_076d53fa == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07291038);
        DAT_076d53fa = '\x01';
      }
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x10) == 1) {
          uVar30 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar30) {
LAB_05927ca4:
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            lVar27 = *(long *)(unaff_x22 + 8);
            uVar8 = FUN_057a62b4(lVar11,0,0);
            *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
            *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
            goto LAB_05927100;
          }
        }
        FUN_057c5e60(unaff_x22,lVar11,0);
        goto LAB_05927100;
      }
    }
LAB_05927ca8:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
LAB_05927100:
  uVar12 = FUN_03aca200(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_07290a68
                       );
  *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar22) {
    psVar10 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar22 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar22;
    do {
      uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      iVar9 = *(int *)(unaff_x29 + -0x4c);
      uVar30 = (uint)uVar4;
      if ((iVar9 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar30 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar11 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar11 = *(long *)(unaff_x29 + -0x48);
        uVar28 = *(uint *)(unaff_x29 + -0x28);
        iVar26 = iVar9 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar31 - iVar9;
        do {
          sVar29 = *psVar10;
          sVar5 = 0x30;
          if (sVar29 != 0) {
            psVar10 = psVar10 + 1;
            sVar5 = sVar29;
          }
          if (DAT_076d47fe == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d47fe = '\x01';
          }
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_05927ca4;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
          }
          else {
            FUN_057c5d34(unaff_x22,sVar5,0);
          }
          if ((-1 < (int)uVar21) && (1 < iVar31 && (uVar28 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar21) goto LAB_05927ca4;
            if (iVar31 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar21 * 4) + 1) {
              if (lVar11 == 0) goto LAB_05927ca8;
              lVar27 = *(long *)(lVar11 + 0x40);
              if (DAT_076d53fa == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d53fa = '\x01';
              }
              if (lVar27 == 0) goto LAB_05927ca8;
              if (*(int *)(lVar27 + 0x10) == 1) {
                uVar28 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar28) goto LAB_059272d4;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_05927ca4;
                lVar11 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_057a62b4(lVar27,0,0);
                *(undefined2 *)(lVar11 + (long)(int)uVar28 * 2) = uVar8;
                lVar11 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
              }
              else {
LAB_059272d4:
                FUN_057c5e60(unaff_x22,lVar27,0);
              }
              uVar28 = *(uint *)(unaff_x29 + -0x28);
              uVar21 = uVar21 - 1;
            }
          }
          iVar26 = iVar26 + -1;
          iVar31 = iVar31 + -1;
        } while (1 < iVar26);
        iVar31 = *(int *)(unaff_x29 + -0x3c);
        iVar9 = 0;
      }
      uVar28 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar30 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar28 < (int)uVar22) {
            *(int *)(unaff_x29 + -0x3c) = iVar31;
            *(int *)(unaff_x29 + -0x4c) = iVar9;
            lVar11 = (ulong)uVar28 << 0x20;
            uVar23 = ~*(uint *)(unaff_x29 + -0x38);
            puVar19 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            lVar27 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar28;
            while( true ) {
              uVar4 = *puVar19;
              if ((uVar4 == 0) || (uVar4 == uVar30)) break;
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar28 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar28 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_05927ca4;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar28 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,uVar4,0);
              }
              lVar11 = lVar11 + 0x100000000;
              uVar23 = uVar23 - 1;
              lVar27 = lVar27 + -1;
              puVar19 = puVar19 + 1;
              if (lVar27 == 0) goto LAB_05927b44;
            }
            iVar9 = *(int *)(unaff_x29 + -0x4c);
            iVar31 = *(int *)(unaff_x29 + -0x3c);
            uVar28 = (*(short *)((lVar11 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar23;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
            if (iVar31 <= *(int *)(unaff_x29 + -0x78)) {
LAB_059277dc:
              sVar29 = 0x30;
              goto LAB_059277e0;
            }
          }
          else {
            sVar29 = *psVar10;
            if (sVar29 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar31) goto LAB_059277dc;
            }
            else {
              psVar10 = psVar10 + 1;
LAB_059277e0:
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar23 = *(uint *)(unaff_x22 + 0x18);
              uVar30 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_05927ca4;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar29;
                *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,sVar29,0);
              }
              if ((-1 < (int)uVar21) && (1 < iVar31 && (uVar30 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar21) goto LAB_05927ca4;
                if (iVar31 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar21 * 4) + 1) {
                  if (lVar11 == 0) goto LAB_05927ca8;
                  lVar11 = *(long *)(lVar11 + 0x40);
                  if (DAT_076d53fa == '\0') {
                    thunk_FUN_032e1da0(PTR_DAT_07291038);
                    DAT_076d53fa = '\x01';
                  }
                  if (lVar11 == 0) goto LAB_05927ca8;
                  if (*(int *)(lVar11 + 0x10) == 1) {
                    uVar30 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar30) goto LAB_059278f8;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_05927ca4;
                    lVar27 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_057a62b4(lVar11,0,0);
                    *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                  }
                  else {
LAB_059278f8:
                    FUN_057c5e60(unaff_x22,lVar11,0);
                  }
                  uVar21 = uVar21 - 1;
                }
              }
            }
          }
          iVar31 = iVar31 + -1;
          break;
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
switchD_0592733c_caseD_24:
          if (DAT_076d47fe == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d47fe = '\x01';
          }
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          uVar30 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar30 <= (int)uVar23) goto LAB_059274f8;
LAB_05927590:
          if (uVar30 <= uVar23) goto LAB_05927ca4;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
          break;
        case 0x25:
          if (lVar11 == 0) goto LAB_05927ca8;
          lVar11 = *(long *)(lVar11 + 0x90);
joined_r0x05927424:
          if (DAT_076d53fa == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d53fa = '\x01';
          }
          if (lVar11 == 0) goto LAB_05927ca8;
          if (*(int *)(lVar11 + 0x10) == 1) {
            uVar30 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar30 < *(uint *)(unaff_x22 + 0x10)) {
                lVar27 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_057a62b4(lVar11,0,0);
                *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                break;
              }
              goto LAB_05927ca4;
            }
          }
          FUN_057c5e60(unaff_x22,lVar11,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar31 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar10 != 0)))) {
              if (lVar11 == 0) goto LAB_05927ca8;
              lVar11 = *(long *)(lVar11 + 0x38);
              if (DAT_076d53fa == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d53fa = '\x01';
              }
              if (lVar11 == 0) goto LAB_05927ca8;
              if (*(int *)(lVar11 + 0x10) == 1) {
                uVar30 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar30 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar27 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_057a62b4(lVar11,0,0);
                    *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                    iVar31 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_05927ca4;
                }
              }
              FUN_057c5e60(unaff_x22,lVar11,0);
              iVar31 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar31 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_0592733c_caseD_24;
LAB_05927528:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar26 = *(int *)(unaff_x29 + -0x38);
            if (DAT_076d47fe == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07291038);
              DAT_076d47fe = '\x01';
            }
            uVar23 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_05927ca4;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
            }
            else {
              FUN_057c5d34(unaff_x22,uVar30,0);
            }
            if ((int)uVar28 < (int)uVar22) {
              sVar29 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
              if ((sVar29 == 0x2d) || (sVar29 == 0x2b)) {
                if (DAT_076d47fe == '\0') {
                  thunk_FUN_032e1da0(PTR_DAT_07291038);
                  DAT_076d47fe = '\x01';
                }
                uVar30 = *(uint *)(unaff_x22 + 0x18);
                uVar28 = iVar26 + 2;
                if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_05927ca4;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = sVar29;
                  *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                }
                else {
                  FUN_057c5d34(unaff_x22,sVar29,0);
                }
              }
              if ((int)uVar28 < (int)uVar22) {
                psVar24 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
                lVar11 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar28;
                while (*psVar24 == 0x30) {
                  if (DAT_076d47fe == '\0') {
                    thunk_FUN_032e1da0(PTR_DAT_07291038);
                    DAT_076d47fe = '\x01';
                  }
                  uVar30 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_05927ca4;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                  }
                  else {
                    FUN_057c5d34(unaff_x22,0x30,0);
                  }
                  uVar28 = uVar28 + 1;
                  lVar11 = lVar11 + -1;
                  psVar24 = psVar24 + 1;
                  if (lVar11 == 0) goto LAB_05927b44;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar26 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar28 < (int)uVar22) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2) == 0x30)) {
              uVar18 = 0;
              iVar25 = 1;
              goto LAB_05927a10;
            }
            iVar25 = iVar26 + 2;
            if ((int)uVar22 <= iVar25) {
LAB_05927a50:
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar30 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_05927ca4;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,uVar4,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar29 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            if (sVar29 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar25 * 2) != 0x30)
              goto LAB_05927a50;
              iVar25 = 0;
              uVar18 = 0;
            }
            else {
              if ((sVar29 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar25 * 2) != 0x30))
              goto LAB_05927a50;
              iVar25 = 0;
              uVar18 = 1;
            }
LAB_05927a10:
            uVar30 = iVar26 + 2;
            iVar16 = iVar25;
            uVar28 = uVar30;
            if ((int)uVar30 < (int)uVar22) {
              iVar15 = *(int *)(unaff_x29 + -0x8c) + iVar25;
              do {
                iVar16 = iVar25;
                uVar28 = uVar30;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar30 * 2) != 0x30) break;
                uVar30 = uVar30 + 1;
                iVar25 = iVar25 + 1;
                iVar16 = iVar15 - iVar26;
                uVar28 = uVar22;
              } while (uVar22 != uVar30);
            }
            if (9 < iVar16) {
              iVar16 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar26 = 0;
            }
            else {
              iVar26 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar18;
              thunk_FUN_032cd7c0();
              uVar18 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0592caec(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar26,uVar4,iVar16,uVar18);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_05927528;
          if (uVar4 != 0x2030) goto switchD_0592733c_caseD_24;
          if (lVar11 != 0) {
            lVar11 = *(long *)(lVar11 + 0x98);
            goto joined_r0x05927424;
          }
          goto LAB_05927ca8;
        }
        if (((int)uVar22 <= (int)uVar28) ||
           (uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2), uVar4 == 0))
        goto switchD_0592733c_caseD_2c;
        if (DAT_076d47fe == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07291038);
          DAT_076d47fe = '\x01';
        }
        uVar23 = *(uint *)(unaff_x22 + 0x18);
        uVar30 = *(uint *)(unaff_x22 + 0x10);
        uVar28 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar23 < (int)uVar30) goto LAB_05927590;
LAB_059274f8:
        FUN_057c5d34(unaff_x22,uVar4,0);
      }
switchD_0592733c_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar9;
      *(uint *)(unaff_x29 + -0x38) = uVar28;
    } while ((int)uVar28 < (int)uVar22);
  }
LAB_05927b44:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


