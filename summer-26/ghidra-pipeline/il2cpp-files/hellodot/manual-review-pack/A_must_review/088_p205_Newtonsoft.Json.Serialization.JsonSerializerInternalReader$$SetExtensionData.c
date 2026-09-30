/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 04f34af8
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar6;
  long lVar7;
  short *psVar8;
  long unaff_x22;
  short *unaff_x23;
  int unaff_w24;
  int iVar9;
  uint uVar10;
  short sVar11;
  uint unaff_w26;
  long lVar12;
  int unaff_w28;
  ushort *puVar13;
  long unaff_x29;
  
code_r0x04f34af8:
  if (0x30 < unaff_w26) goto LAB_04f34c8c;
  if ((1L << ((ulong)unaff_w26 & 0x3f) & 0x1400800000000U) == 0) goto LAB_04f34c8c;
  lVar7 = *(long *)(unaff_x29 + -0x48);
  uVar10 = *(uint *)(unaff_x29 + -0x28);
  iVar9 = unaff_w24 + 1;
  *(int *)(unaff_x29 + -0x3c) = unaff_w28 - unaff_w24;
  do {
    sVar11 = *unaff_x23;
    sVar3 = 0x30;
    if (sVar11 != 0) {
      unaff_x23 = unaff_x23 + 1;
      sVar3 = sVar11;
    }
    if (DAT_06a6e9d0 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
      DAT_06a6e9d0 = '\x01';
    }
    uVar6 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_04f35628;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = sVar3;
      *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
    }
    else {
      FUN_04dd5298();
    }
    if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar10 & 1) == 0)) {
      if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_04f35628;
      if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
        if (lVar7 == 0) goto LAB_04f3562c;
        lVar12 = *(long *)(lVar7 + 0x40);
        if (DAT_06a6f6db == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
          DAT_06a6f6db = '\x01';
        }
        if (lVar12 == 0) goto LAB_04f3562c;
        if (*(int *)(lVar12 + 0x10) == 1) {
          uVar10 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_04f34c58;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_04f35628;
          lVar7 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_04db48b0(lVar12,0,0);
          *(undefined2 *)(lVar7 + (long)(int)uVar10 * 2) = uVar4;
          lVar7 = *(long *)(unaff_x29 + -0x48);
          *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
        }
        else {
LAB_04f34c58:
          FUN_04dd53c4();
        }
        uVar10 = *(uint *)(unaff_x29 + -0x28);
        unaff_w19 = unaff_w19 - 1;
      }
    }
    iVar9 = iVar9 + -1;
    unaff_w28 = unaff_w28 + -1;
  } while (1 < iVar9);
  unaff_w28 = *(int *)(unaff_x29 + -0x3c);
  unaff_w24 = 0;
  do {
    uVar10 = *(int *)(unaff_x29 + -0x38) + 1;
    if (unaff_w26 < 0x46) {
      switch(unaff_w26) {
      case 0x22:
      case 0x27:
        if ((int)uVar10 < (int)unaff_w20) {
          *(int *)(unaff_x29 + -0x3c) = unaff_w28;
          *(int *)(unaff_x29 + -0x4c) = unaff_w24;
          lVar7 = (ulong)uVar10 << 0x20;
          uVar6 = ~*(uint *)(unaff_x29 + -0x38);
          puVar13 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
          lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar10;
          while( true ) {
            uVar1 = *puVar13;
            if ((uVar1 == 0) || (uVar1 == unaff_w26)) break;
            if (DAT_06a6e9d0 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
              DAT_06a6e9d0 = '\x01';
            }
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_04f35628;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar1;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
              FUN_04dd5298();
            }
            lVar7 = lVar7 + 0x100000000;
            uVar6 = uVar6 - 1;
            lVar12 = lVar12 + -1;
            puVar13 = puVar13 + 1;
            if (lVar12 == 0) goto LAB_04f354c8;
          }
          unaff_w24 = *(int *)(unaff_x29 + -0x4c);
          unaff_w28 = *(int *)(unaff_x29 + -0x3c);
          uVar10 = (*(short *)((lVar7 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar6;
        }
        break;
      case 0x23:
      case 0x30:
        if (unaff_w24 < 0) {
          unaff_w24 = unaff_w24 + 1;
          if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_04f35160:
            sVar11 = 0x30;
            goto LAB_04f35164;
          }
        }
        else {
          sVar11 = *unaff_x23;
          if (sVar11 == 0) {
            if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_04f35160;
          }
          else {
            unaff_x23 = unaff_x23 + 1;
LAB_04f35164:
            if (DAT_06a6e9d0 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
              DAT_06a6e9d0 = '\x01';
            }
            uVar2 = *(uint *)(unaff_x22 + 0x18);
            uVar6 = *(uint *)(unaff_x29 + -0x28);
            if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_04f35628;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar11;
              *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
            }
            else {
              FUN_04dd5298();
            }
            if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar6 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_04f35628;
              if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
                if (lVar7 == 0) {
LAB_04f3562c:
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c7c();
                }
                lVar7 = *(long *)(lVar7 + 0x40);
                if (DAT_06a6f6db == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                  DAT_06a6f6db = '\x01';
                }
                if (lVar7 == 0) goto LAB_04f3562c;
                if (*(int *)(lVar7 + 0x10) == 1) {
                  uVar6 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar6) goto LAB_04f3527c;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar6) {
LAB_04f35628:
                    /* WARNING: Subroutine does not return */
                    FUN_02ce7c84();
                  }
                  lVar12 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_04db48b0(lVar7,0,0);
                  *(undefined2 *)(lVar12 + (long)(int)uVar6 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                }
                else {
LAB_04f3527c:
                  FUN_04dd53c4();
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
switchD_04f34cc0_caseD_24:
        if (DAT_06a6e9d0 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
          DAT_06a6e9d0 = '\x01';
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        uVar6 = *(uint *)(unaff_x22 + 0x10);
        if ((int)uVar2 < (int)uVar6) goto LAB_04f34f14;
LAB_04f34e7c:
        FUN_04dd5298();
        break;
      case 0x25:
        if (lVar7 == 0) goto LAB_04f3562c;
        lVar7 = *(long *)(lVar7 + 0x90);
joined_r0x04f34da8:
        if (DAT_06a6f6db == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
          DAT_06a6f6db = '\x01';
        }
        if (lVar7 == 0) goto LAB_04f3562c;
        if (*(int *)(lVar7 + 0x10) == 1) {
          uVar6 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar6 < *(uint *)(unaff_x22 + 0x10)) {
              lVar12 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_04db48b0(lVar7,0,0);
              *(undefined2 *)(lVar12 + (long)(int)uVar6 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
              break;
            }
            goto LAB_04f35628;
          }
        }
        FUN_04dd53c4();
        break;
      case 0x2c:
        break;
      case 0x2e:
        if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
          if ((*(int *)(unaff_x29 + -0x74) < 0) ||
             ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*unaff_x23 != 0)))) {
            if (lVar7 == 0) goto LAB_04f3562c;
            lVar7 = *(long *)(lVar7 + 0x38);
            if (DAT_06a6f6db == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
              DAT_06a6f6db = '\x01';
            }
            if (lVar7 == 0) goto LAB_04f3562c;
            if (*(int *)(lVar7 + 0x10) == 1) {
              uVar6 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (uVar6 < *(uint *)(unaff_x22 + 0x10)) {
                  lVar12 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_04db48b0(lVar7,0,0);
                  *(undefined2 *)(lVar12 + (long)(int)uVar6 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                  unaff_w28 = 0;
                  *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                  break;
                }
                goto LAB_04f35628;
              }
            }
            FUN_04dd53c4();
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
        if (unaff_w26 != 0x45) goto switchD_04f34cc0_caseD_24;
LAB_04f34eac:
        if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
          iVar9 = *(int *)(unaff_x29 + -0x38);
          if (DAT_06a6e9d0 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6e9d0 = '\x01';
          }
          uVar6 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_04f35628;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = (short)unaff_w26;
            *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
          }
          else {
            FUN_04dd5298();
          }
          if ((int)uVar10 < (int)unaff_w20) {
            sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
            if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
              if (DAT_06a6e9d0 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6e9d0 = '\x01';
              }
              uVar6 = *(uint *)(unaff_x22 + 0x18);
              uVar10 = iVar9 + 2;
              if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_04f35628;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = sVar11;
                *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
              }
              else {
                FUN_04dd5298();
              }
            }
            if ((int)uVar10 < (int)unaff_w20) {
              psVar8 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
              lVar7 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar10;
              while (*psVar8 == 0x30) {
                if (DAT_06a6e9d0 == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                  DAT_06a6e9d0 = '\x01';
                }
                uVar6 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_04f35628;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = 0x30;
                  *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                }
                else {
                  FUN_04dd5298();
                }
                uVar10 = uVar10 + 1;
                lVar7 = lVar7 + -1;
                psVar8 = psVar8 + 1;
                if (lVar7 == 0) goto LAB_04f354c8;
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 0;
              break;
            }
          }
        }
        else {
          if (((int)uVar10 < (int)unaff_w20) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2) == 0x30)) {
            uVar5 = 0;
            goto LAB_04f35394;
          }
          iVar9 = *(int *)(unaff_x29 + -0x38) + 2;
          if ((int)unaff_w20 <= iVar9) {
LAB_04f353d4:
            if (DAT_06a6e9d0 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
              DAT_06a6e9d0 = '\x01';
            }
            uVar6 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_04f35628;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = (short)unaff_w26;
              *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
            }
            else {
              FUN_04dd5298();
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 1;
            break;
          }
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
          if (sVar11 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30)
            goto LAB_04f353d4;
            uVar5 = 0;
          }
          else {
            if ((sVar11 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30))
            goto LAB_04f353d4;
            uVar5 = 1;
          }
LAB_04f35394:
          uVar6 = *(int *)(unaff_x29 + -0x38) + 2;
          uVar10 = uVar6;
          if ((int)uVar6 < (int)unaff_w20) {
            do {
              uVar10 = uVar6;
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) != 0x30) break;
              uVar6 = uVar6 + 1;
              uVar10 = unaff_w20;
            } while (unaff_w20 != uVar6);
          }
          if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
            *(undefined4 *)(unaff_x29 + -0x38) = uVar5;
            thunk_FUN_02cd038c();
          }
          FUN_04f3a470();
        }
        *(undefined4 *)(unaff_x29 + -0x5c) = 0;
      }
    }
    else {
      if (unaff_w26 != 0x5c) {
        if (unaff_w26 == 0x65) goto LAB_04f34eac;
        if (unaff_w26 != 0x2030) goto switchD_04f34cc0_caseD_24;
        if (lVar7 != 0) {
          lVar7 = *(long *)(lVar7 + 0x98);
          goto joined_r0x04f34da8;
        }
        goto LAB_04f3562c;
      }
      if (((int)unaff_w20 <= (int)uVar10) ||
         (unaff_w26 = (uint)*(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2),
         unaff_w26 == 0)) goto switchD_04f34cc0_caseD_2c;
      if (DAT_06a6e9d0 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
        DAT_06a6e9d0 = '\x01';
      }
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      uVar6 = *(uint *)(unaff_x22 + 0x10);
      uVar10 = *(int *)(unaff_x29 + -0x38) + 2;
      if ((int)uVar6 <= (int)uVar2) goto LAB_04f34e7c;
LAB_04f34f14:
      if (uVar6 <= uVar2) goto LAB_04f35628;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = (short)unaff_w26;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
    }
switchD_04f34cc0_caseD_2c:
    *(int *)(unaff_x29 + -0x4c) = unaff_w24;
    *(uint *)(unaff_x29 + -0x38) = uVar10;
    if ((int)unaff_w20 <= (int)uVar10) {
LAB_04f354c8:
      if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
    unaff_w26 = (uint)uVar1;
    if ((uVar1 == 0x3b) || (uVar1 == 0)) goto LAB_04f354c8;
    unaff_w24 = *(int *)(unaff_x29 + -0x4c);
    if (0 < unaff_w24) goto code_r0x04f34af8;
LAB_04f34c8c:
    lVar7 = *(long *)(unaff_x29 + -0x48);
  } while( true );
}


