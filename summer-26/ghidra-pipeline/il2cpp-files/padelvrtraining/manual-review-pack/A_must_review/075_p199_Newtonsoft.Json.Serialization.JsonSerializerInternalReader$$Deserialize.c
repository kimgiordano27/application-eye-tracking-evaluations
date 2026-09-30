/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
ENTRY_POINT: 0717bad8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize(void)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  undefined1 auVar7 [12];
  undefined2 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ushort *puVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar21;
  short *psVar22;
  long unaff_x22;
  short *psVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  short sVar28;
  uint uVar29;
  long unaff_x26;
  long unaff_x27;
  int iVar30;
  long unaff_x29;
  undefined1 auVar31 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  do {
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    bVar6 = false;
    iVar30 = 0;
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    iVar25 = 0;
    uVar19 = 0;
    iVar24 = 0x7fffffff;
    iVar18 = unaff_w21;
LAB_0717bb2c:
    *(uint *)(unaff_x29 + -0x3c) = uVar19;
    uVar20 = (uint)unaff_x20;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = iVar18;
      FUN_07186bd8();
      *(undefined4 *)(unaff_x26 + 4) = 0;
LAB_0717bbe0:
      iVar18 = *(int *)(unaff_x29 + -0x34);
      iVar25 = iVar18 - iVar24;
      if (iVar25 == 0 || iVar18 < iVar24) {
        iVar25 = 0;
      }
      iVar24 = iVar18 - iVar30;
      if (iVar30 <= iVar18) {
        iVar24 = 0;
      }
      *(int *)(unaff_x29 + -0x74) = iVar24;
      if (bVar6) {
        lVar17 = *(long *)(unaff_x29 + -0x48);
        uVar19 = *(uint *)(unaff_x29 + -0x3c);
        uVar15 = 1;
        *(undefined4 *)(unaff_x29 + -0x4c) = 0;
        iVar30 = iVar18;
      }
      else {
        iVar30 = *(int *)(unaff_x26 + 4);
        lVar17 = *(long *)(unaff_x29 + -0x48);
        uVar19 = *(uint *)(unaff_x29 + -0x3c);
        uVar15 = 0;
        *(int *)(unaff_x29 + -0x4c) = iVar30 - iVar18;
        if (iVar30 - iVar18 == 0 || iVar30 < iVar18) {
          iVar30 = iVar18;
        }
      }
      uVar9 = DAT_01910a88;
      puVar10 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      *(long *)(unaff_x29 + -0x70) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar9;
      *(int *)(unaff_x29 + -0x78) = iVar25;
      *(undefined4 *)(unaff_x29 + -0x5c) = uVar15;
      if ((uVar19 & 1) != 0) {
        if ((lVar17 == 0) || (*(long *)(lVar17 + 0x40) == 0)) goto LAB_0717c8dc;
        if (0 < *(int *)(*(long *)(lVar17 + 0x40) + 0x10)) {
          lVar17 = *(long *)(lVar17 + 0x10);
          if (lVar17 == 0) goto LAB_0717c8dc;
          iVar24 = *(int *)(lVar17 + 0x18);
          if (iVar24 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(lVar17 + 0x20);
          }
          uVar19 = 0xffffffff;
          iVar13 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) +
                   iVar30;
          if (iVar25 <= iVar13) {
            iVar25 = iVar13;
          }
          if ((iVar18 == 0) || (iVar25 <= iVar18)) goto LAB_0717bc94;
          uVar19 = 0;
          lVar26 = 0;
          uVar11 = 4;
          *(long *)(unaff_x29 + -0x58) = lVar17;
          iVar13 = iVar18;
          goto LAB_0717c7ec;
        }
      }
      uVar19 = 0xffffffff;
      goto LAB_0717bc94;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + iVar25;
    if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_07180274();
    if (**(short **)(unaff_x29 + -0x30) != 0) {
LAB_0717bbc0:
      *(int *)(unaff_x29 + -0x38) = iVar18;
      goto LAB_0717bbe0;
    }
    if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    unaff_w21 = FUN_071815d4(*(undefined8 *)(unaff_x29 + -0x28));
    if (unaff_w21 == iVar18) goto LAB_0717bbc0;
    lVar17 = FUN_0502844c(*(undefined8 *)(unaff_x29 + -0x28));
  } while ((int)uVar20 <= unaff_w21);
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  iVar30 = 0;
  bVar6 = false;
  uVar19 = 0;
  iVar25 = 0;
  iVar24 = 0x7fffffff;
  iVar13 = -1;
  iVar12 = -1;
  iVar18 = unaff_w21;
  do {
    uVar4 = *(ushort *)(lVar17 + (long)iVar18 * 2);
    if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
    iVar14 = iVar18 + 1;
    if (uVar4 < 0x46) {
      switch(uVar4) {
      case 0x22:
      case 0x27:
        lVar26 = (long)iVar14;
        lVar1 = lVar26;
        if (iVar14 <= unaff_x27) {
          lVar1 = unaff_x27;
        }
        puVar16 = (ushort *)(lVar17 + (long)iVar14 * 2);
        do {
          if (lVar1 == lVar26) {
            iVar14 = (int)lVar1;
            goto switchD_0717b950_caseD_24;
          }
          uVar3 = *puVar16;
          if (uVar3 == 0) break;
          lVar26 = lVar26 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar3 != uVar4);
        iVar14 = (int)lVar26;
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
        iVar25 = iVar25 + 2;
        break;
      case 0x2c:
        if ((iVar13 < 0) && (0 < *(int *)(unaff_x29 + -0x1c))) {
          if (iVar12 < 0) {
            *(undefined4 *)(unaff_x29 + -0x38) = 1;
            iVar12 = *(int *)(unaff_x29 + -0x1c);
          }
          else {
            iVar2 = *(int *)(unaff_x29 + -0x1c);
            uVar19 = uVar19 | iVar12 != iVar2;
            iVar18 = 1;
            if (iVar12 == iVar2) {
              iVar18 = *(int *)(unaff_x29 + -0x38) + 1;
            }
            *(int *)(unaff_x29 + -0x38) = iVar18;
            iVar12 = iVar2;
          }
        }
        break;
      case 0x2e:
        if (iVar13 < 0) {
          iVar13 = *(int *)(unaff_x29 + -0x1c);
        }
        break;
      case 0x30:
        iVar30 = *(int *)(unaff_x29 + -0x1c) + 1;
        iVar18 = *(int *)(unaff_x29 + -0x1c);
        if (iVar24 != 0x7fffffff) {
          iVar18 = iVar24;
        }
        *(int *)(unaff_x29 + -0x1c) = iVar30;
        iVar24 = iVar18;
        break;
      default:
        if (uVar4 == 0x45) {
LAB_0717b9d4:
          if (((iVar14 < (int)uVar20) && (*(short *)(lVar17 + (long)iVar14 * 2) == 0x30)) ||
             ((iVar18 + 2 < (int)uVar20 &&
              (((sVar28 = *(short *)(lVar17 + (long)iVar14 * 2), sVar28 == 0x2d || (sVar28 == 0x2b))
               && (*(short *)(lVar17 + (long)(iVar18 + 2) * 2) == 0x30)))))) {
            do {
              iVar14 = iVar14 + 1;
              if ((int)uVar20 <= iVar14) {
                bVar6 = true;
                goto LAB_0717bafc;
              }
            } while (*(short *)(lVar17 + (long)iVar14 * 2) == 0x30);
            bVar6 = true;
          }
        }
      }
    }
    else if (uVar4 == 0x5c) {
      if ((iVar14 < (int)uVar20) && (*(short *)(lVar17 + (long)iVar14 * 2) != 0)) {
        iVar14 = iVar18 + 2;
      }
    }
    else {
      if (uVar4 == 0x65) goto LAB_0717b9d4;
      if (uVar4 == 0x2030) {
        iVar25 = iVar25 + 3;
      }
    }
switchD_0717b950_caseD_24:
    iVar18 = iVar14;
  } while (iVar14 < (int)uVar20);
LAB_0717bafc:
  if (iVar13 < 0) {
    iVar13 = *(int *)(unaff_x29 + -0x1c);
  }
  *(int *)(unaff_x29 + -0x34) = iVar13;
  iVar18 = unaff_w21;
  if (-1 < iVar12) {
    if (iVar12 == iVar13) {
      iVar25 = *(int *)(unaff_x29 + -0x38) * -3 + iVar25;
    }
    else {
      uVar19 = 1;
    }
  }
  goto LAB_0717bb2c;
LAB_0717c7ec:
  auVar31._8_8_ = uVar11;
  auVar31._0_8_ = puVar10;
  auVar7 = auVar31._0_12_;
  if ((int)uVar11 <= (int)uVar19) {
    uVar9 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a0fc8,(int)uVar11 << 1);
    auVar31 = FUN_062beef0(uVar9,*(undefined8 *)PTR_DAT_091db0a0);
    FUN_062be9b4(unaff_x29 + -0x18,auVar31._0_8_,auVar31._8_8_,*(undefined8 *)PTR_DAT_0920fbf8);
    auVar31 = FUN_062beef0(uVar9,*(undefined8 *)PTR_DAT_091db0a0);
    auVar7 = auVar31._0_12_;
    lVar17 = *(long *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar31;
  }
  puVar10 = auVar7._0_8_;
  if (auVar7._8_4_ <= uVar19) goto LAB_0717c8d8;
  *(int *)((long)puVar10 + (long)(int)uVar19 * 4) = iVar18;
  if ((int)lVar26 < iVar24 + -1) {
    lVar26 = (long)(int)lVar26 + 1;
    if (*(uint *)(lVar17 + 0x18) <= (uint)lVar26) goto LAB_0717c8d8;
    iVar13 = *(int *)(lVar17 + lVar26 * 4 + 0x20);
  }
  if ((iVar13 == 0) || (iVar18 = iVar13 + iVar18, iVar25 <= iVar18)) goto LAB_0717c8d0;
  uVar11 = (ulong)*(uint *)(unaff_x29 + -0x10);
  uVar19 = uVar19 + 1;
  goto LAB_0717c7ec;
LAB_0717c8d0:
  unaff_x26 = *(long *)(unaff_x29 + -0x70);
LAB_0717bc94:
  uVar11 = FUN_07186bc8(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar11 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar17 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_09843015 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091fa408);
        DAT_09843015 = '\x01';
      }
      if (lVar17 != 0) {
        if (*(int *)(lVar17 + 0x10) == 1) {
          uVar29 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar29) {
LAB_0717c8d8:
                    /* WARNING: Subroutine does not return */
              FUN_03d2d550();
            }
            lVar26 = *(long *)(unaff_x22 + 8);
            uVar8 = FUN_06fcd2c8(lVar17,0,0);
                    /* try { // try from 0717bd18 to 0727bd57 has its CatchHandler @ 0717bd18
                       catch() { ... } // from try @ 0717bd18 with catch @ 0717bd18
                       catch() { ... } // from try @ 0717c140 with catch @ 0717bd18
                       catch() { ... } // from try @ 0717c214 with catch @ 0717bd18
                       catch() { ... } // from try @ 0717c294 with catch @ 0717bd18 */
            *(undefined2 *)(lVar26 + (long)(int)uVar29 * 2) = uVar8;
            *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
            goto LAB_0717bd34;
          }
        }
        FUN_06ff1720(unaff_x22,lVar17,0);
        goto LAB_0717bd34;
      }
    }
LAB_0717c8dc:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
LAB_0717bd34:
  uVar9 = FUN_0502844c(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_09208b68)
  ;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar9;
                    /* try { // try from 0717bd58 to 0727bd5f has its CatchHandler @ 0717c150 */
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar20) {
    psVar23 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar20 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar20;
    do {
      uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      iVar25 = *(int *)(unaff_x29 + -0x4c);
                    /* try { // try from 0717bda0 to 0727bda3 has its CatchHandler @ 0717c178 */
      uVar29 = (uint)uVar4;
                    /* try { // try from 0717bdc8 to 0727bdcf has its CatchHandler @ 0717c168 */
      if ((iVar25 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar29 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar17 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar17 = *(long *)(unaff_x29 + -0x48);
        uVar27 = *(uint *)(unaff_x29 + -0x28);
                    /* try { // try from 0717bdd4 to 0727bddb has its CatchHandler @ 0717c17c */
        iVar24 = iVar25 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar30 - iVar25;
        do {
                    /* try { // try from 0717bde0 to 0727bde7 has its CatchHandler @ 0717c164 */
          sVar28 = *psVar23;
                    /* try { // try from 0717bdec to 0727bdf3 has its CatchHandler @ 0717c160 */
          sVar5 = 0x30;
                    /* try { // try from 0717bdf8 to 0727bdff has its CatchHandler @ 0717c154 */
          if (sVar28 != 0) {
            psVar23 = psVar23 + 1;
            sVar5 = sVar28;
          }
          if (DAT_09842200 == '\0') {
                    /* try { // try from 0717be04 to 0727be0b has its CatchHandler @ 0717c15c */
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09842200 = '\x01';
          }
          uVar21 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0717c8d8;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
          }
          else {
            FUN_06ff15f4(unaff_x22,sVar5,0);
          }
          if ((-1 < (int)uVar19) && (1 < iVar30 && (uVar27 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_0717c8d8;
            if (iVar30 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar19 * 4) + 1) {
              if (lVar17 == 0) goto LAB_0717c8dc;
              lVar26 = *(long *)(lVar17 + 0x40);
              if (DAT_09843015 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09843015 = '\x01';
              }
              if (lVar26 == 0) goto LAB_0717c8dc;
              if (*(int *)(lVar26 + 0x10) == 1) {
                uVar27 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar27) goto LAB_0717bf08;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar27) goto LAB_0717c8d8;
                lVar17 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_06fcd2c8(lVar26,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar27 * 2) = uVar8;
                lVar17 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar27 + 1;
              }
              else {
LAB_0717bf08:
                FUN_06ff1720(unaff_x22,lVar26,0);
              }
              uVar27 = *(uint *)(unaff_x29 + -0x28);
              uVar19 = uVar19 - 1;
            }
          }
          iVar24 = iVar24 + -1;
          iVar30 = iVar30 + -1;
        } while (1 < iVar24);
        iVar30 = *(int *)(unaff_x29 + -0x3c);
        iVar25 = 0;
      }
      uVar27 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar29 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar27 < (int)uVar20) {
            *(int *)(unaff_x29 + -0x3c) = iVar30;
            *(int *)(unaff_x29 + -0x4c) = iVar25;
            lVar17 = (ulong)uVar27 << 0x20;
            uVar21 = ~*(uint *)(unaff_x29 + -0x38);
            puVar16 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
            lVar26 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar27;
            while( true ) {
              uVar4 = *puVar16;
              if ((uVar4 == 0) || (uVar4 == uVar29)) break;
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar27 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar27 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar27) goto LAB_0717c8d8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar27 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar27 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,uVar4,0);
              }
              lVar17 = lVar17 + 0x100000000;
              uVar21 = uVar21 - 1;
              lVar26 = lVar26 + -1;
              puVar16 = puVar16 + 1;
              if (lVar26 == 0) goto LAB_0717c778;
            }
            iVar25 = *(int *)(unaff_x29 + -0x4c);
            iVar30 = *(int *)(unaff_x29 + -0x3c);
            uVar27 = (*(short *)((lVar17 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar21;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar25 < 0) {
            iVar25 = iVar25 + 1;
            if (iVar30 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0717c410:
              sVar28 = 0x30;
              goto LAB_0717c414;
            }
          }
          else {
            sVar28 = *psVar23;
            if (sVar28 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar30) goto LAB_0717c410;
            }
            else {
              psVar23 = psVar23 + 1;
LAB_0717c414:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar21 = *(uint *)(unaff_x22 + 0x18);
              uVar29 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0717c8d8;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar28;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,sVar28,0);
              }
              if ((-1 < (int)uVar19) && (1 < iVar30 && (uVar29 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_0717c8d8;
                if (iVar30 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar19 * 4) + 1) {
                  if (lVar17 == 0) goto LAB_0717c8dc;
                  lVar17 = *(long *)(lVar17 + 0x40);
                  if (DAT_09843015 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09843015 = '\x01';
                  }
                  if (lVar17 == 0) goto LAB_0717c8dc;
                  if (*(int *)(lVar17 + 0x10) == 1) {
                    uVar29 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar29) goto LAB_0717c52c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_0717c8d8;
                    lVar26 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_06fcd2c8(lVar17,0,0);
                    *(undefined2 *)(lVar26 + (long)(int)uVar29 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                  }
                  else {
LAB_0717c52c:
                    FUN_06ff1720(unaff_x22,lVar17,0);
                  }
                  uVar19 = uVar19 - 1;
                }
              }
            }
          }
          iVar30 = iVar30 + -1;
          break;
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
switchD_0717bf70_caseD_24:
          if (DAT_09842200 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09842200 = '\x01';
          }
          uVar21 = *(uint *)(unaff_x22 + 0x18);
          uVar29 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar29 <= (int)uVar21) goto LAB_0717c12c;
LAB_0717c1c4:
          if (uVar29 <= uVar21) goto LAB_0717c8d8;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
          break;
        case 0x25:
          if (lVar17 == 0) goto LAB_0717c8dc;
          lVar17 = *(long *)(lVar17 + 0x90);
joined_r0x0717c058:
          if (DAT_09843015 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09843015 = '\x01';
          }
          if (lVar17 == 0) goto LAB_0717c8dc;
          if (*(int *)(lVar17 + 0x10) == 1) {
            uVar29 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar29 < *(uint *)(unaff_x22 + 0x10)) {
                lVar26 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_06fcd2c8(lVar17,0,0);
                *(undefined2 *)(lVar26 + (long)(int)uVar29 * 2) = uVar8;
                *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                break;
              }
              goto LAB_0717c8d8;
            }
          }
          FUN_06ff1720(unaff_x22,lVar17,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar30 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar23 != 0)))) {
              if (lVar17 == 0) goto LAB_0717c8dc;
              lVar17 = *(long *)(lVar17 + 0x38);
              if (DAT_09843015 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09843015 = '\x01';
              }
              if (lVar17 == 0) goto LAB_0717c8dc;
              if (*(int *)(lVar17 + 0x10) == 1) {
                uVar29 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar29 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar26 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_06fcd2c8(lVar17,0,0);
                    *(undefined2 *)(lVar26 + (long)(int)uVar29 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                    iVar30 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_0717c8d8;
                }
              }
              FUN_06ff1720(unaff_x22,lVar17,0);
              iVar30 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar30 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_0717bf70_caseD_24;
LAB_0717c15c:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar24 = *(int *)(unaff_x29 + -0x38);
            if (DAT_09842200 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09842200 = '\x01';
            }
            uVar21 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0717c8d8;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
            }
            else {
              FUN_06ff15f4(unaff_x22,uVar29,0);
            }
            if ((int)uVar27 < (int)uVar20) {
              sVar28 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
              if ((sVar28 == 0x2d) || (sVar28 == 0x2b)) {
                if (DAT_09842200 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091fa408);
                  DAT_09842200 = '\x01';
                }
                uVar29 = *(uint *)(unaff_x22 + 0x18);
                uVar27 = iVar24 + 2;
                if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_0717c8d8;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = sVar28;
                  *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                }
                else {
                  FUN_06ff15f4(unaff_x22,sVar28,0);
                }
              }
              if ((int)uVar27 < (int)uVar20) {
                psVar22 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
                lVar17 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar27;
                while (*psVar22 == 0x30) {
                  if (DAT_09842200 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09842200 = '\x01';
                  }
                  uVar29 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_0717c8d8;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                  }
                  else {
                    FUN_06ff15f4(unaff_x22,0x30,0);
                  }
                  uVar27 = uVar27 + 1;
                  lVar17 = lVar17 + -1;
                  psVar22 = psVar22 + 1;
                  if (lVar17 == 0) goto LAB_0717c778;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar24 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar27 < (int)uVar20) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2) == 0x30)) {
              uVar15 = 0;
              iVar18 = 1;
              goto LAB_0717c644;
            }
            iVar18 = iVar24 + 2;
            if ((int)uVar20 <= iVar18) {
LAB_0717c684:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar29 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_0717c8d8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,uVar4,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar28 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
            if (sVar28 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar18 * 2) != 0x30)
              goto LAB_0717c684;
              iVar18 = 0;
              uVar15 = 0;
            }
            else {
              if ((sVar28 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar18 * 2) != 0x30))
              goto LAB_0717c684;
              iVar18 = 0;
              uVar15 = 1;
            }
LAB_0717c644:
            uVar29 = iVar24 + 2;
            iVar13 = iVar18;
            uVar27 = uVar29;
            if ((int)uVar29 < (int)uVar20) {
              iVar12 = *(int *)(unaff_x29 + -0x8c) + iVar18;
              do {
                iVar13 = iVar18;
                uVar27 = uVar29;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar29 * 2) != 0x30) break;
                uVar29 = uVar29 + 1;
                iVar18 = iVar18 + 1;
                iVar13 = iVar12 - iVar24;
                uVar27 = uVar20;
              } while (uVar20 != uVar29);
            }
            if (9 < iVar13) {
              iVar13 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar24 = 0;
            }
            else {
              iVar24 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar15;
              thunk_FUN_03db619c();
              uVar15 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_07181720(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar24,uVar4,iVar13,uVar15);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_0717c15c;
          if (uVar4 != 0x2030) goto switchD_0717bf70_caseD_24;
          if (lVar17 != 0) {
            lVar17 = *(long *)(lVar17 + 0x98);
            goto joined_r0x0717c058;
          }
          goto LAB_0717c8dc;
        }
        if (((int)uVar20 <= (int)uVar27) ||
           (uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2), uVar4 == 0))
        goto switchD_0717bf70_caseD_2c;
        if (DAT_09842200 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091fa408);
          DAT_09842200 = '\x01';
        }
        uVar21 = *(uint *)(unaff_x22 + 0x18);
        uVar29 = *(uint *)(unaff_x22 + 0x10);
        uVar27 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar21 < (int)uVar29) goto LAB_0717c1c4;
LAB_0717c12c:
        FUN_06ff15f4(unaff_x22,uVar4,0);
      }
switchD_0717bf70_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar25;
      *(uint *)(unaff_x29 + -0x38) = uVar27;
    } while ((int)uVar27 < (int)uVar20);
  }
LAB_0717c778:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


