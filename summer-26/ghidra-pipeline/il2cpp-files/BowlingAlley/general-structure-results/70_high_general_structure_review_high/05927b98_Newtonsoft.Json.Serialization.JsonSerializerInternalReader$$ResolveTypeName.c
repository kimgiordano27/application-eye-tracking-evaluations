/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 05927b98
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(long param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined1 auVar4 [12];
  undefined2 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int in_w8;
  int iVar9;
  int iVar10;
  int in_w10;
  long in_x12;
  uint unaff_w19;
  uint uVar11;
  undefined8 unaff_x20;
  uint uVar12;
  short *psVar13;
  long unaff_x22;
  short *psVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  short sVar20;
  uint uVar21;
  undefined8 unaff_x26;
  int unaff_w27;
  int unaff_w28;
  ushort *puVar22;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  if (unaff_w27 < in_w10) {
    unaff_w19 = 0;
    lVar18 = 0;
    uVar7 = 4;
    *(long *)(unaff_x29 + -0x58) = in_x12;
    iVar16 = unaff_w27;
    while( true ) {
      auVar23._8_8_ = uVar7;
      auVar23._0_8_ = param_1;
      auVar4 = auVar23._0_12_;
      if ((int)uVar7 <= (int)unaff_w19) {
        uVar6 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,(int)uVar7 << 1);
        auVar23 = FUN_049b37a4(uVar6,*(undefined8 *)PTR_DAT_072970b0);
        FUN_049b3278(unaff_x29 + -0x18,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)PTR_DAT_072970a0);
        auVar23 = FUN_049b37a4(uVar6,*(undefined8 *)PTR_DAT_072970b0);
        auVar4 = auVar23._0_12_;
        in_x12 = *(long *)(unaff_x29 + -0x58);
        *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar23;
      }
      param_1 = auVar4._0_8_;
      if (auVar4._8_4_ <= unaff_w19) goto LAB_05927ca4;
      *(int *)(param_1 + (long)(int)unaff_w19 * 4) = unaff_w27;
      if ((int)lVar18 < in_w8 + -1) {
        lVar18 = (long)(int)lVar18 + 1;
        if (*(uint *)(in_x12 + 0x18) <= (uint)lVar18) goto LAB_05927ca4;
        iVar16 = *(int *)(in_x12 + lVar18 * 4 + 0x20);
      }
      if ((iVar16 == 0) || (unaff_w27 = iVar16 + unaff_w27, in_w10 <= unaff_w27)) break;
      uVar7 = (ulong)*(uint *)(unaff_x29 + -0x10);
      unaff_w19 = unaff_w19 + 1;
    }
    unaff_x26 = *(undefined8 *)(unaff_x29 + -0x70);
  }
  uVar7 = FUN_059321b0(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar7 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar18 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_076d53fa == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07291038);
        DAT_076d53fa = '\x01';
      }
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x10) == 1) {
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) {
LAB_05927ca4:
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            lVar17 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_057a62b4(lVar18,0,0);
            *(undefined2 *)(lVar17 + (long)(int)uVar11 * 2) = uVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            goto LAB_05927100;
          }
        }
        FUN_057c5e60(unaff_x22,lVar18,0);
        goto LAB_05927100;
      }
    }
LAB_05927ca8:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
LAB_05927100:
  uVar6 = FUN_03aca200(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_07290a68)
  ;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar6;
  uVar11 = (uint)unaff_x20;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar11) {
    psVar14 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar11 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar11;
    do {
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar2 == 0x3b) || (uVar2 == 0)) break;
      iVar16 = *(int *)(unaff_x29 + -0x4c);
      uVar21 = (uint)uVar2;
      if ((iVar16 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar21 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar18 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar18 = *(long *)(unaff_x29 + -0x48);
        uVar19 = *(uint *)(unaff_x29 + -0x28);
        iVar15 = iVar16 + 1;
        *(int *)(unaff_x29 + -0x3c) = unaff_w28 - iVar16;
        do {
          sVar20 = *psVar14;
          sVar3 = 0x30;
          if (sVar20 != 0) {
            psVar14 = psVar14 + 1;
            sVar3 = sVar20;
          }
          if (DAT_076d47fe == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d47fe = '\x01';
          }
          uVar12 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_05927ca4;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          }
          else {
            FUN_057c5d34(unaff_x22,sVar3,0);
          }
          if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar19 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_05927ca4;
            if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
              if (lVar18 == 0) goto LAB_05927ca8;
              lVar17 = *(long *)(lVar18 + 0x40);
              if (DAT_076d53fa == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d53fa = '\x01';
              }
              if (lVar17 == 0) goto LAB_05927ca8;
              if (*(int *)(lVar17 + 0x10) == 1) {
                uVar19 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar19) goto LAB_059272d4;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_05927ca4;
                lVar18 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_057a62b4(lVar17,0,0);
                *(undefined2 *)(lVar18 + (long)(int)uVar19 * 2) = uVar5;
                lVar18 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
              }
              else {
LAB_059272d4:
                FUN_057c5e60(unaff_x22,lVar17,0);
              }
              uVar19 = *(uint *)(unaff_x29 + -0x28);
              unaff_w19 = unaff_w19 - 1;
            }
          }
          iVar15 = iVar15 + -1;
          unaff_w28 = unaff_w28 + -1;
        } while (1 < iVar15);
        unaff_w28 = *(int *)(unaff_x29 + -0x3c);
        iVar16 = 0;
      }
      uVar19 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar21 < 0x46) {
        switch(uVar2) {
        case 0x22:
        case 0x27:
          if ((int)uVar19 < (int)uVar11) {
            *(int *)(unaff_x29 + -0x3c) = unaff_w28;
            *(int *)(unaff_x29 + -0x4c) = iVar16;
            lVar18 = (ulong)uVar19 << 0x20;
            uVar12 = ~*(uint *)(unaff_x29 + -0x38);
            puVar22 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
            lVar17 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar19;
            while( true ) {
              uVar2 = *puVar22;
              if ((uVar2 == 0) || (uVar2 == uVar21)) break;
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar19 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_05927ca4;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,uVar2,0);
              }
              lVar18 = lVar18 + 0x100000000;
              uVar12 = uVar12 - 1;
              lVar17 = lVar17 + -1;
              puVar22 = puVar22 + 1;
              if (lVar17 == 0) goto LAB_05927b44;
            }
            iVar16 = *(int *)(unaff_x29 + -0x4c);
            unaff_w28 = *(int *)(unaff_x29 + -0x3c);
            uVar19 = (*(short *)((lVar18 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar12;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar16 < 0) {
            iVar16 = iVar16 + 1;
            if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_059277dc:
              sVar20 = 0x30;
              goto LAB_059277e0;
            }
          }
          else {
            sVar20 = *psVar14;
            if (sVar20 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_059277dc;
            }
            else {
              psVar14 = psVar14 + 1;
LAB_059277e0:
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              uVar21 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_05927ca4;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar20;
                *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,sVar20,0);
              }
              if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar21 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_05927ca4;
                if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
                {
                  if (lVar18 == 0) goto LAB_05927ca8;
                  lVar18 = *(long *)(lVar18 + 0x40);
                  if (DAT_076d53fa == '\0') {
                    thunk_FUN_032e1da0(PTR_DAT_07291038);
                    DAT_076d53fa = '\x01';
                  }
                  if (lVar18 == 0) goto LAB_05927ca8;
                  if (*(int *)(lVar18 + 0x10) == 1) {
                    uVar21 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_059278f8;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_05927ca4;
                    lVar17 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_057a62b4(lVar18,0,0);
                    *(undefined2 *)(lVar17 + (long)(int)uVar21 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                  }
                  else {
LAB_059278f8:
                    FUN_057c5e60(unaff_x22,lVar18,0);
                  }
                  unaff_w19 = unaff_w19 - 1;
                }
              }
            }
          }
          unaff_w28 = unaff_w28 + -1;
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
          uVar12 = *(uint *)(unaff_x22 + 0x18);
          uVar21 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar21 <= (int)uVar12) goto LAB_059274f8;
LAB_05927590:
          if (uVar21 <= uVar12) goto LAB_05927ca4;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          break;
        case 0x25:
          if (lVar18 == 0) goto LAB_05927ca8;
          lVar18 = *(long *)(lVar18 + 0x90);
joined_r0x05927424:
          if (DAT_076d53fa == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d53fa = '\x01';
          }
          if (lVar18 == 0) goto LAB_05927ca8;
          if (*(int *)(lVar18 + 0x10) == 1) {
            uVar21 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar21 < *(uint *)(unaff_x22 + 0x10)) {
                lVar17 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_057a62b4(lVar18,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar21 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                break;
              }
              goto LAB_05927ca4;
            }
          }
          FUN_057c5e60(unaff_x22,lVar18,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar14 != 0)))) {
              if (lVar18 == 0) goto LAB_05927ca8;
              lVar18 = *(long *)(lVar18 + 0x38);
              if (DAT_076d53fa == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d53fa = '\x01';
              }
              if (lVar18 == 0) goto LAB_05927ca8;
              if (*(int *)(lVar18 + 0x10) == 1) {
                uVar21 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar21 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar17 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_057a62b4(lVar18,0,0);
                    *(undefined2 *)(lVar17 + (long)(int)uVar21 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                    unaff_w28 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_05927ca4;
                }
              }
              FUN_057c5e60(unaff_x22,lVar18,0);
              unaff_w28 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              unaff_w28 = 0;
            }
          }
          break;
        default:
          if (uVar2 != 0x45) goto switchD_0592733c_caseD_24;
LAB_05927528:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar15 = *(int *)(unaff_x29 + -0x38);
            if (DAT_076d47fe == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07291038);
              DAT_076d47fe = '\x01';
            }
            uVar12 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_05927ca4;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            }
            else {
              FUN_057c5d34(unaff_x22,uVar21,0);
            }
            if ((int)uVar19 < (int)uVar11) {
              sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
              if ((sVar20 == 0x2d) || (sVar20 == 0x2b)) {
                if (DAT_076d47fe == '\0') {
                  thunk_FUN_032e1da0(PTR_DAT_07291038);
                  DAT_076d47fe = '\x01';
                }
                uVar21 = *(uint *)(unaff_x22 + 0x18);
                uVar19 = iVar15 + 2;
                if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_05927ca4;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar20;
                  *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                }
                else {
                  FUN_057c5d34(unaff_x22,sVar20,0);
                }
              }
              if ((int)uVar19 < (int)uVar11) {
                psVar13 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
                lVar18 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar19;
                while (*psVar13 == 0x30) {
                  if (DAT_076d47fe == '\0') {
                    thunk_FUN_032e1da0(PTR_DAT_07291038);
                    DAT_076d47fe = '\x01';
                  }
                  uVar21 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_05927ca4;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                  }
                  else {
                    FUN_057c5d34(unaff_x22,0x30,0);
                  }
                  uVar19 = uVar19 + 1;
                  lVar18 = lVar18 + -1;
                  psVar13 = psVar13 + 1;
                  if (lVar18 == 0) goto LAB_05927b44;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar15 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar19 < (int)uVar11) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2) == 0x30)) {
              uVar8 = 0;
              iVar9 = 1;
              goto LAB_05927a10;
            }
            iVar9 = iVar15 + 2;
            if ((int)uVar11 <= iVar9) {
LAB_05927a50:
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar21 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_05927ca4;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,uVar2,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
            if (sVar20 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30)
              goto LAB_05927a50;
              iVar9 = 0;
              uVar8 = 0;
            }
            else {
              if ((sVar20 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30))
              goto LAB_05927a50;
              iVar9 = 0;
              uVar8 = 1;
            }
LAB_05927a10:
            uVar21 = iVar15 + 2;
            iVar10 = iVar9;
            uVar19 = uVar21;
            if ((int)uVar21 < (int)uVar11) {
              iVar1 = *(int *)(unaff_x29 + -0x8c) + iVar9;
              do {
                iVar10 = iVar9;
                uVar19 = uVar21;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar21 * 2) != 0x30) break;
                uVar21 = uVar21 + 1;
                iVar9 = iVar9 + 1;
                iVar10 = iVar1 - iVar15;
                uVar19 = uVar11;
              } while (uVar11 != uVar21);
            }
            if (9 < iVar10) {
              iVar10 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar15 = 0;
            }
            else {
              iVar15 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar8;
              thunk_FUN_032cd7c0();
              uVar8 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0592caec(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar15,uVar2,iVar10,uVar8);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x65) goto LAB_05927528;
          if (uVar2 != 0x2030) goto switchD_0592733c_caseD_24;
          if (lVar18 != 0) {
            lVar18 = *(long *)(lVar18 + 0x98);
            goto joined_r0x05927424;
          }
          goto LAB_05927ca8;
        }
        if (((int)uVar11 <= (int)uVar19) ||
           (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2), uVar2 == 0))
        goto switchD_0592733c_caseD_2c;
        if (DAT_076d47fe == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07291038);
          DAT_076d47fe = '\x01';
        }
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        uVar21 = *(uint *)(unaff_x22 + 0x10);
        uVar19 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar12 < (int)uVar21) goto LAB_05927590;
LAB_059274f8:
        FUN_057c5d34(unaff_x22,uVar2,0);
      }
switchD_0592733c_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar16;
      *(uint *)(unaff_x29 + -0x38) = uVar19;
    } while ((int)uVar19 < (int)uVar11);
  }
LAB_05927b44:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


