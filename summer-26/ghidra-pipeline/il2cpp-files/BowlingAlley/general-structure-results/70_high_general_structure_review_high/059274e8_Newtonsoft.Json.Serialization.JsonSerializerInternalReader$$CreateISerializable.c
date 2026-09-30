/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 059274e8
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(long param_1)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint in_w9;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar5;
  long lVar6;
  short *psVar7;
  long unaff_x22;
  short *unaff_x23;
  int iVar8;
  int unaff_w24;
  uint uVar9;
  ushort unaff_w26;
  short sVar10;
  uint uVar11;
  long lVar12;
  int unaff_w28;
  ushort *puVar13;
  long unaff_x29;
  
code_r0x059274e8:
  uVar9 = *(int *)(unaff_x29 + -0x38) + 2;
  if ((int)param_1 < (int)in_w9) goto LAB_05927590;
  do {
    FUN_057c5d34();
switchD_0592733c_caseD_2c:
    *(int *)(unaff_x29 + -0x4c) = unaff_w24;
    *(uint *)(unaff_x29 + -0x38) = uVar9;
    if ((((int)unaff_w20 <= (int)uVar9) ||
        (unaff_w26 = *(ushort *)
                      (*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2),
        unaff_w26 == 0x3b)) || (unaff_w26 == 0)) {
LAB_05927b44:
      if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    unaff_w24 = *(int *)(unaff_x29 + -0x4c);
    uVar11 = (uint)unaff_w26;
    if (((unaff_w24 < 1) || (0x30 < unaff_w26)) ||
       ((1L << ((ulong)uVar11 & 0x3f) & 0x1400800000000U) == 0)) {
      lVar6 = *(long *)(unaff_x29 + -0x48);
    }
    else {
      lVar6 = *(long *)(unaff_x29 + -0x48);
      uVar9 = *(uint *)(unaff_x29 + -0x28);
      iVar8 = unaff_w24 + 1;
      *(int *)(unaff_x29 + -0x3c) = unaff_w28 - unaff_w24;
      do {
        sVar10 = *unaff_x23;
        sVar2 = 0x30;
        if (sVar10 != 0) {
          unaff_x23 = unaff_x23 + 1;
          sVar2 = sVar10;
        }
        if (DAT_076d47fe == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07291038);
          DAT_076d47fe = '\x01';
        }
        uVar5 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_05927ca4;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
        }
        else {
          FUN_057c5d34();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar9 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_05927ca4;
          if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
            if (lVar6 == 0) goto LAB_05927ca8;
            lVar12 = *(long *)(lVar6 + 0x40);
            if (DAT_076d53fa == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07291038);
              DAT_076d53fa = '\x01';
            }
            if (lVar12 == 0) goto LAB_05927ca8;
            if (*(int *)(lVar12 + 0x10) == 1) {
              uVar9 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_059272d4;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_05927ca4;
              lVar6 = *(long *)(unaff_x22 + 8);
              uVar3 = FUN_057a62b4(lVar12,0,0);
              *(undefined2 *)(lVar6 + (long)(int)uVar9 * 2) = uVar3;
              lVar6 = *(long *)(unaff_x29 + -0x48);
              *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
            }
            else {
LAB_059272d4:
              FUN_057c5e60();
            }
            uVar9 = *(uint *)(unaff_x29 + -0x28);
            unaff_w19 = unaff_w19 - 1;
          }
        }
        iVar8 = iVar8 + -1;
        unaff_w28 = unaff_w28 + -1;
      } while (1 < iVar8);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      unaff_w24 = 0;
    }
    uVar9 = *(int *)(unaff_x29 + -0x38) + 1;
    if (0x45 < uVar11) {
      if (unaff_w26 != 0x5c) {
        if (unaff_w26 == 0x65) goto LAB_05927528;
        if (unaff_w26 == 0x2030) {
          if (lVar6 == 0) goto LAB_05927ca8;
          lVar6 = *(long *)(lVar6 + 0x98);
          goto joined_r0x05927424;
        }
        goto switchD_0592733c_caseD_24;
      }
      if (((int)uVar9 < (int)unaff_w20) &&
         (unaff_w26 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2),
         unaff_w26 != 0)) {
        if (DAT_076d47fe == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07291038);
          DAT_076d47fe = '\x01';
        }
        param_1 = (long)*(int *)(unaff_x22 + 0x18);
        in_w9 = *(uint *)(unaff_x22 + 0x10);
        goto code_r0x059274e8;
      }
      goto switchD_0592733c_caseD_2c;
    }
    switch(unaff_w26) {
    case 0x22:
    case 0x27:
      if ((int)uVar9 < (int)unaff_w20) {
        *(int *)(unaff_x29 + -0x3c) = unaff_w28;
        *(int *)(unaff_x29 + -0x4c) = unaff_w24;
        lVar6 = (ulong)uVar9 << 0x20;
        uVar5 = ~*(uint *)(unaff_x29 + -0x38);
        puVar13 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
        lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar9;
        while( true ) {
          uVar1 = *puVar13;
          if ((uVar1 == 0) || (uVar1 == uVar11)) break;
          if (DAT_076d47fe == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d47fe = '\x01';
          }
          uVar9 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_05927ca4;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = uVar1;
            *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          }
          else {
            FUN_057c5d34();
          }
          lVar6 = lVar6 + 0x100000000;
          uVar5 = uVar5 - 1;
          lVar12 = lVar12 + -1;
          puVar13 = puVar13 + 1;
          if (lVar12 == 0) goto LAB_05927b44;
        }
        unaff_w24 = *(int *)(unaff_x29 + -0x4c);
        unaff_w28 = *(int *)(unaff_x29 + -0x3c);
        uVar9 = (*(short *)((lVar6 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar5;
      }
      goto switchD_0592733c_caseD_2c;
    case 0x23:
    case 0x30:
      if (unaff_w24 < 0) {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_059277dc:
          sVar10 = 0x30;
          goto LAB_059277e0;
        }
      }
      else {
        sVar10 = *unaff_x23;
        if (sVar10 == 0) {
          if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_059277dc;
        }
        else {
          unaff_x23 = unaff_x23 + 1;
LAB_059277e0:
          if (DAT_076d47fe == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d47fe = '\x01';
          }
          uVar5 = *(uint *)(unaff_x22 + 0x18);
          uVar11 = *(uint *)(unaff_x29 + -0x28);
          if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_05927ca4;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar10;
            *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
          }
          else {
            FUN_057c5d34();
          }
          if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar11 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_05927ca4;
            if (unaff_w28 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
            goto LAB_0592790c;
            if (lVar6 == 0) {
LAB_05927ca8:
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar6 = *(long *)(lVar6 + 0x40);
            if (DAT_076d53fa == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07291038);
              DAT_076d53fa = '\x01';
            }
            if (lVar6 == 0) goto LAB_05927ca8;
            if (*(int *)(lVar6 + 0x10) == 1) {
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_059278f8;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_05927ca4;
              lVar12 = *(long *)(unaff_x22 + 8);
              uVar3 = FUN_057a62b4(lVar6,0,0);
              *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
LAB_059278f8:
              FUN_057c5e60();
            }
            unaff_w19 = unaff_w19 - 1;
          }
        }
      }
LAB_0592790c:
      unaff_w28 = unaff_w28 + -1;
      goto switchD_0592733c_caseD_2c;
    case 0x25:
      if (lVar6 == 0) goto LAB_05927ca8;
      lVar6 = *(long *)(lVar6 + 0x90);
joined_r0x05927424:
      if (DAT_076d53fa == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07291038);
        DAT_076d53fa = '\x01';
      }
      if (lVar6 == 0) goto LAB_05927ca8;
      if (*(int *)(lVar6 + 0x10) == 1) {
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_05927ca4;
          lVar12 = *(long *)(unaff_x22 + 8);
          uVar3 = FUN_057a62b4(lVar6,0,0);
          *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar3;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          goto switchD_0592733c_caseD_2c;
        }
      }
      FUN_057c5e60();
      goto switchD_0592733c_caseD_2c;
    case 0x2c:
      goto switchD_0592733c_caseD_2c;
    case 0x2e:
      if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
        if ((-1 < *(int *)(unaff_x29 + -0x74)) &&
           ((*(int *)(unaff_x29 + -0x1c) <= *(int *)(unaff_x29 + -0x34) || (*unaff_x23 == 0)))) {
          *(undefined4 *)(unaff_x29 + -0x7c) = 0;
          unaff_w28 = 0;
          goto switchD_0592733c_caseD_2c;
        }
        if (lVar6 == 0) goto LAB_05927ca8;
        lVar6 = *(long *)(lVar6 + 0x38);
        if (DAT_076d53fa == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07291038);
          DAT_076d53fa = '\x01';
        }
        if (lVar6 == 0) goto LAB_05927ca8;
        if (*(int *)(lVar6 + 0x10) == 1) {
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_05927ca4;
            lVar12 = *(long *)(unaff_x22 + 8);
            uVar3 = FUN_057a62b4(lVar6,0,0);
            *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            unaff_w28 = 0;
            *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            goto switchD_0592733c_caseD_2c;
          }
        }
        FUN_057c5e60();
        unaff_w28 = 0;
        *(undefined4 *)(unaff_x29 + -0x7c) = 1;
      }
      goto switchD_0592733c_caseD_2c;
    default:
      if (unaff_w26 == 0x45) {
LAB_05927528:
        if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
          iVar8 = *(int *)(unaff_x29 + -0x38);
          if (DAT_076d47fe == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d47fe = '\x01';
          }
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_05927ca4;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = unaff_w26;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          }
          else {
            FUN_057c5d34();
          }
          if ((int)uVar9 < (int)unaff_w20) {
            sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
            if ((sVar10 == 0x2d) || (sVar10 == 0x2b)) {
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              uVar9 = iVar8 + 2;
              if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_05927ca4;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar10;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_057c5d34();
              }
            }
            if ((int)uVar9 < (int)unaff_w20) {
              psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
              lVar6 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar9;
              while (*psVar7 == 0x30) {
                if (DAT_076d47fe == '\0') {
                  thunk_FUN_032e1da0(PTR_DAT_07291038);
                  DAT_076d47fe = '\x01';
                }
                uVar11 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_05927ca4;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = 0x30;
                  *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
                }
                else {
                  FUN_057c5d34();
                }
                uVar9 = uVar9 + 1;
                lVar6 = lVar6 + -1;
                psVar7 = psVar7 + 1;
                if (lVar6 == 0) goto LAB_05927b44;
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 0;
              goto switchD_0592733c_caseD_2c;
            }
          }
        }
        else {
          if (((int)uVar9 < (int)unaff_w20) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2) == 0x30)) {
            uVar4 = 0;
            goto LAB_05927a10;
          }
          iVar8 = *(int *)(unaff_x29 + -0x38) + 2;
          if ((int)unaff_w20 <= iVar8) {
LAB_05927a50:
            if (DAT_076d47fe == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07291038);
              DAT_076d47fe = '\x01';
            }
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_05927ca4;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = unaff_w26;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_057c5d34();
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 1;
            goto switchD_0592733c_caseD_2c;
          }
          sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
          if (sVar10 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30)
            goto LAB_05927a50;
            uVar4 = 0;
          }
          else {
            if ((sVar10 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30))
            goto LAB_05927a50;
            uVar4 = 1;
          }
LAB_05927a10:
          uVar11 = *(int *)(unaff_x29 + -0x38) + 2;
          uVar9 = uVar11;
          if ((int)uVar11 < (int)unaff_w20) {
            do {
              uVar9 = uVar11;
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2) != 0x30) break;
              uVar11 = uVar11 + 1;
              uVar9 = unaff_w20;
            } while (unaff_w20 != uVar11);
          }
          if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
            *(undefined4 *)(unaff_x29 + -0x38) = uVar4;
            thunk_FUN_032cd7c0();
          }
          FUN_0592caec();
        }
        *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        goto switchD_0592733c_caseD_2c;
      }
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
      param_1 = (long)*(int *)(unaff_x22 + 0x18);
      in_w9 = *(uint *)(unaff_x22 + 0x10);
      if (*(int *)(unaff_x22 + 0x18) < (int)in_w9) {
LAB_05927590:
        if (in_w9 <= (uint)param_1) {
LAB_05927ca4:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(ushort *)(*(long *)(unaff_x22 + 8) + param_1 * 2) = unaff_w26;
        *(uint *)(unaff_x22 + 0x18) = (uint)param_1 + 1;
        goto switchD_0592733c_caseD_2c;
      }
    }
  } while( true );
}


