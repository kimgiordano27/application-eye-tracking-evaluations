/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 04f34a3c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue(void)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar6;
  short *psVar7;
  long unaff_x22;
  short *psVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  long unaff_x27;
  long lVar15;
  int unaff_w28;
  ushort *puVar16;
  long unaff_x29;
  
  uVar14 = (uint)unaff_x27;
  if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar14) {
LAB_04f35628:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar11 = *(long *)(unaff_x22 + 8);
    uVar3 = FUN_04db48b0();
    *(undefined2 *)(lVar11 + unaff_x27 * 2) = uVar3;
    *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
  }
  else {
    FUN_04dd53c4();
  }
  uVar4 = FUN_034754ac(*(undefined8 *)(unaff_x29 + -0x28));
  *(undefined8 *)(unaff_x29 + -0x58) = uVar4;
  if (*(int *)(unaff_x29 + -0x38) < (int)unaff_w20) {
    psVar8 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = unaff_w20 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)unaff_w20;
    do {
      uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar1 == 0x3b) || (uVar1 == 0)) break;
      iVar10 = *(int *)(unaff_x29 + -0x4c);
      uVar14 = (uint)uVar1;
      if ((iVar10 < 1) ||
         ((0x30 < uVar1 || ((1L << ((ulong)uVar14 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar11 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar11 = *(long *)(unaff_x29 + -0x48);
        uVar12 = *(uint *)(unaff_x29 + -0x28);
        iVar9 = iVar10 + 1;
        *(int *)(unaff_x29 + -0x3c) = unaff_w28 - iVar10;
        do {
          sVar13 = *psVar8;
          sVar2 = 0x30;
          if (sVar13 != 0) {
            psVar8 = psVar8 + 1;
            sVar2 = sVar13;
          }
          if (DAT_06a6e9d0 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6e9d0 = '\x01';
          }
          uVar6 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_04f35628;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = sVar2;
            *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
          }
          else {
            FUN_04dd5298();
          }
          if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar12 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_04f35628;
            if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
              if (lVar11 == 0) goto LAB_04f3562c;
              lVar15 = *(long *)(lVar11 + 0x40);
              if (DAT_06a6f6db == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6f6db = '\x01';
              }
              if (lVar15 == 0) goto LAB_04f3562c;
              if (*(int *)(lVar15 + 0x10) == 1) {
                uVar12 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_04f34c58;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_04f35628;
                lVar11 = *(long *)(unaff_x22 + 8);
                uVar3 = FUN_04db48b0(lVar15,0,0);
                *(undefined2 *)(lVar11 + (long)(int)uVar12 * 2) = uVar3;
                lVar11 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
              }
              else {
LAB_04f34c58:
                FUN_04dd53c4();
              }
              uVar12 = *(uint *)(unaff_x29 + -0x28);
              unaff_w19 = unaff_w19 - 1;
            }
          }
          iVar9 = iVar9 + -1;
          unaff_w28 = unaff_w28 + -1;
        } while (1 < iVar9);
        unaff_w28 = *(int *)(unaff_x29 + -0x3c);
        iVar10 = 0;
      }
      uVar12 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar14 < 0x46) {
        switch(uVar1) {
        case 0x22:
        case 0x27:
          if ((int)uVar12 < (int)unaff_w20) {
            *(int *)(unaff_x29 + -0x3c) = unaff_w28;
            *(int *)(unaff_x29 + -0x4c) = iVar10;
            lVar11 = (ulong)uVar12 << 0x20;
            uVar6 = ~*(uint *)(unaff_x29 + -0x38);
            puVar16 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
            lVar15 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar12;
            while( true ) {
              uVar1 = *puVar16;
              if ((uVar1 == 0) || (uVar1 == uVar14)) break;
              if (DAT_06a6e9d0 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6e9d0 = '\x01';
              }
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_04f35628;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar1;
                *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
              }
              else {
                FUN_04dd5298();
              }
              lVar11 = lVar11 + 0x100000000;
              uVar6 = uVar6 - 1;
              lVar15 = lVar15 + -1;
              puVar16 = puVar16 + 1;
              if (lVar15 == 0) goto LAB_04f354c8;
            }
            iVar10 = *(int *)(unaff_x29 + -0x4c);
            unaff_w28 = *(int *)(unaff_x29 + -0x3c);
            uVar12 = (*(short *)((lVar11 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar6;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
            if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_04f35160:
              sVar13 = 0x30;
              goto LAB_04f35164;
            }
          }
          else {
            sVar13 = *psVar8;
            if (sVar13 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_04f35160;
            }
            else {
              psVar8 = psVar8 + 1;
LAB_04f35164:
              if (DAT_06a6e9d0 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6e9d0 = '\x01';
              }
              uVar6 = *(uint *)(unaff_x22 + 0x18);
              uVar14 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_04f35628;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = sVar13;
                *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
              }
              else {
                FUN_04dd5298();
              }
              if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar14 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_04f35628;
                if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
                {
                  if (lVar11 == 0) {
LAB_04f3562c:
                    /* WARNING: Subroutine does not return */
                    FUN_02ce7c7c();
                  }
                  lVar11 = *(long *)(lVar11 + 0x40);
                  if (DAT_06a6f6db == '\0') {
                    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                    DAT_06a6f6db = '\x01';
                  }
                  if (lVar11 == 0) goto LAB_04f3562c;
                  if (*(int *)(lVar11 + 0x10) == 1) {
                    uVar14 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar14) goto LAB_04f3527c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_04f35628;
                    lVar15 = *(long *)(unaff_x22 + 8);
                    uVar3 = FUN_04db48b0(lVar11,0,0);
                    *(undefined2 *)(lVar15 + (long)(int)uVar14 * 2) = uVar3;
                    *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
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
          uVar6 = *(uint *)(unaff_x22 + 0x18);
          uVar14 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar6 < (int)uVar14) goto LAB_04f34f14;
LAB_04f34e7c:
          FUN_04dd5298();
          break;
        case 0x25:
          if (lVar11 == 0) goto LAB_04f3562c;
          lVar11 = *(long *)(lVar11 + 0x90);
joined_r0x04f34da8:
          if (DAT_06a6f6db == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6f6db = '\x01';
          }
          if (lVar11 == 0) goto LAB_04f3562c;
          if (*(int *)(lVar11 + 0x10) == 1) {
            uVar14 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar14 < *(uint *)(unaff_x22 + 0x10)) {
                lVar15 = *(long *)(unaff_x22 + 8);
                uVar3 = FUN_04db48b0(lVar11,0,0);
                *(undefined2 *)(lVar15 + (long)(int)uVar14 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
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
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar8 != 0)))) {
              if (lVar11 == 0) goto LAB_04f3562c;
              lVar11 = *(long *)(lVar11 + 0x38);
              if (DAT_06a6f6db == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6f6db = '\x01';
              }
              if (lVar11 == 0) goto LAB_04f3562c;
              if (*(int *)(lVar11 + 0x10) == 1) {
                uVar14 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar14 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar15 = *(long *)(unaff_x22 + 8);
                    uVar3 = FUN_04db48b0(lVar11,0,0);
                    *(undefined2 *)(lVar15 + (long)(int)uVar14 * 2) = uVar3;
                    *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
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
          if (uVar1 != 0x45) goto switchD_04f34cc0_caseD_24;
LAB_04f34eac:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar9 = *(int *)(unaff_x29 + -0x38);
            if (DAT_06a6e9d0 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
              DAT_06a6e9d0 = '\x01';
            }
            uVar14 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_04f35628;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar1;
              *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
            }
            else {
              FUN_04dd5298();
            }
            if ((int)uVar12 < (int)unaff_w20) {
              sVar13 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
              if ((sVar13 == 0x2d) || (sVar13 == 0x2b)) {
                if (DAT_06a6e9d0 == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                  DAT_06a6e9d0 = '\x01';
                }
                uVar14 = *(uint *)(unaff_x22 + 0x18);
                uVar12 = iVar9 + 2;
                if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_04f35628;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = sVar13;
                  *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                }
                else {
                  FUN_04dd5298();
                }
              }
              if ((int)uVar12 < (int)unaff_w20) {
                psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
                lVar11 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar12;
                while (*psVar7 == 0x30) {
                  if (DAT_06a6e9d0 == '\0') {
                    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                    DAT_06a6e9d0 = '\x01';
                  }
                  uVar14 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_04f35628;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                  }
                  else {
                    FUN_04dd5298();
                  }
                  uVar12 = uVar12 + 1;
                  lVar11 = lVar11 + -1;
                  psVar7 = psVar7 + 1;
                  if (lVar11 == 0) goto LAB_04f354c8;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            if (((int)uVar12 < (int)unaff_w20) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) == 0x30)) {
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
              uVar14 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_04f35628;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar1;
                *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
              }
              else {
                FUN_04dd5298();
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar13 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
            if (sVar13 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30)
              goto LAB_04f353d4;
              uVar5 = 0;
            }
            else {
              if ((sVar13 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30))
              goto LAB_04f353d4;
              uVar5 = 1;
            }
LAB_04f35394:
            uVar14 = *(int *)(unaff_x29 + -0x38) + 2;
            uVar12 = uVar14;
            if ((int)uVar14 < (int)unaff_w20) {
              do {
                uVar12 = uVar14;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar14 * 2) != 0x30) break;
                uVar14 = uVar14 + 1;
                uVar12 = unaff_w20;
              } while (unaff_w20 != uVar14);
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
        if (uVar1 != 0x5c) {
          if (uVar1 == 0x65) goto LAB_04f34eac;
          if (uVar1 == 0x2030) {
            if (lVar11 == 0) goto LAB_04f3562c;
            lVar11 = *(long *)(lVar11 + 0x98);
            goto joined_r0x04f34da8;
          }
          goto switchD_04f34cc0_caseD_24;
        }
        if (((int)unaff_w20 <= (int)uVar12) ||
           (uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2), uVar1 == 0))
        goto switchD_04f34cc0_caseD_2c;
        if (DAT_06a6e9d0 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
          DAT_06a6e9d0 = '\x01';
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        uVar14 = *(uint *)(unaff_x22 + 0x10);
        uVar12 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar14 <= (int)uVar6) goto LAB_04f34e7c;
LAB_04f34f14:
        if (uVar14 <= uVar6) goto LAB_04f35628;
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar1;
        *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
      }
switchD_04f34cc0_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar10;
      *(uint *)(unaff_x29 + -0x38) = uVar12;
    } while ((int)uVar12 < (int)unaff_w20);
  }
LAB_04f354c8:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


