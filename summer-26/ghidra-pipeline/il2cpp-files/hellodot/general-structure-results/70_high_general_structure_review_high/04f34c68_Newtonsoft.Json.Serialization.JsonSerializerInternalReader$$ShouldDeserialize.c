/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 04f34c68
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar7;
  long lVar8;
  long unaff_x21;
  short *psVar9;
  long unaff_x22;
  short *unaff_x23;
  int unaff_w24;
  int iVar10;
  uint uVar11;
  short sVar12;
  uint unaff_w26;
  long lVar13;
  int unaff_w28;
  ushort *puVar14;
  long unaff_x29;
  
code_r0x04f34c68:
  uVar11 = *(uint *)(unaff_x29 + -0x28);
  unaff_w19 = unaff_w19 - 1;
LAB_04f34c70:
  unaff_w24 = unaff_w24 + -1;
  unaff_w28 = unaff_w28 + -1;
  if (unaff_w24 < 2) {
    unaff_w28 = *(int *)(unaff_x29 + -0x3c);
    iVar10 = 0;
    do {
      uVar11 = *(int *)(unaff_x29 + -0x38) + 1;
      if (unaff_w26 < 0x46) {
        switch(unaff_w26) {
        case 0x22:
        case 0x27:
          if ((int)uVar11 < (int)unaff_w20) {
            *(int *)(unaff_x29 + -0x3c) = unaff_w28;
            *(int *)(unaff_x29 + -0x4c) = iVar10;
            lVar13 = (ulong)uVar11 << 0x20;
            uVar7 = ~*(uint *)(unaff_x29 + -0x38);
            puVar14 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
            lVar8 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar11;
            while( true ) {
              uVar2 = *puVar14;
              if ((uVar2 == 0) || (uVar2 == unaff_w26)) break;
              if (DAT_06a6e9d0 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6e9d0 = '\x01';
              }
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_04f35628;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_04dd5298();
              }
              lVar13 = lVar13 + 0x100000000;
              uVar7 = uVar7 - 1;
              lVar8 = lVar8 + -1;
              puVar14 = puVar14 + 1;
              if (lVar8 == 0) goto LAB_04f354c8;
            }
            iVar10 = *(int *)(unaff_x29 + -0x4c);
            unaff_w28 = *(int *)(unaff_x29 + -0x3c);
            uVar11 = (*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar7;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
            if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_04f35160:
              sVar12 = 0x30;
              goto LAB_04f35164;
            }
          }
          else {
            sVar12 = *unaff_x23;
            if (sVar12 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_04f35160;
            }
            else {
              unaff_x23 = unaff_x23 + 1;
LAB_04f35164:
              if (DAT_06a6e9d0 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6e9d0 = '\x01';
              }
              uVar3 = *(uint *)(unaff_x22 + 0x18);
              uVar7 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar3 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar3) goto LAB_04f35628;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar12;
                *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
              }
              else {
                FUN_04dd5298();
              }
              if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar7 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_04f35628;
                if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
                {
                  if (unaff_x21 == 0) goto LAB_04f3562c;
                  lVar13 = *(long *)(unaff_x21 + 0x40);
                  if (DAT_06a6f6db == '\0') {
                    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                    DAT_06a6f6db = '\x01';
                  }
                  if (lVar13 == 0) goto LAB_04f3562c;
                  if (*(int *)(lVar13 + 0x10) == 1) {
                    uVar7 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_04f3527c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_04f35628;
                    lVar8 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_04db48b0(lVar13,0,0);
                    *(undefined2 *)(lVar8 + (long)(int)uVar7 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
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
          uVar3 = *(uint *)(unaff_x22 + 0x18);
          uVar7 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar3 < (int)uVar7) goto LAB_04f34f14;
LAB_04f34e7c:
          FUN_04dd5298();
          break;
        case 0x25:
          if (unaff_x21 == 0) goto LAB_04f3562c;
          lVar13 = *(long *)(unaff_x21 + 0x90);
joined_r0x04f34da8:
          if (DAT_06a6f6db == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6f6db = '\x01';
          }
          if (lVar13 == 0) goto LAB_04f3562c;
          if (*(int *)(lVar13 + 0x10) == 1) {
            uVar7 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar7 < *(uint *)(unaff_x22 + 0x10)) {
                lVar8 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_04db48b0(lVar13,0,0);
                *(undefined2 *)(lVar8 + (long)(int)uVar7 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
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
              if (unaff_x21 == 0) goto LAB_04f3562c;
              lVar13 = *(long *)(unaff_x21 + 0x38);
              if (DAT_06a6f6db == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6f6db = '\x01';
              }
              if (lVar13 == 0) goto LAB_04f3562c;
              if (*(int *)(lVar13 + 0x10) == 1) {
                uVar7 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar7 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar8 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_04db48b0(lVar13,0,0);
                    *(undefined2 *)(lVar8 + (long)(int)uVar7 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
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
            iVar1 = *(int *)(unaff_x29 + -0x38);
            if (DAT_06a6e9d0 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
              DAT_06a6e9d0 = '\x01';
            }
            uVar7 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_04f35628;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = (short)unaff_w26;
              *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
            }
            else {
              FUN_04dd5298();
            }
            if ((int)uVar11 < (int)unaff_w20) {
              sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
              if ((sVar12 == 0x2d) || (sVar12 == 0x2b)) {
                if (DAT_06a6e9d0 == '\0') {
                  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                  DAT_06a6e9d0 = '\x01';
                }
                uVar7 = *(uint *)(unaff_x22 + 0x18);
                uVar11 = iVar1 + 2;
                if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_04f35628;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar12;
                  *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                }
                else {
                  FUN_04dd5298();
                }
              }
              if ((int)uVar11 < (int)unaff_w20) {
                psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
                lVar13 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar11;
                while (*psVar9 == 0x30) {
                  if (DAT_06a6e9d0 == '\0') {
                    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                    DAT_06a6e9d0 = '\x01';
                  }
                  uVar7 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_04f35628;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                  }
                  else {
                    FUN_04dd5298();
                  }
                  uVar11 = uVar11 + 1;
                  lVar13 = lVar13 + -1;
                  psVar9 = psVar9 + 1;
                  if (lVar13 == 0) goto LAB_04f354c8;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            if (((int)uVar11 < (int)unaff_w20) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2) == 0x30)) {
              uVar6 = 0;
              goto LAB_04f35394;
            }
            iVar1 = *(int *)(unaff_x29 + -0x38) + 2;
            if ((int)unaff_w20 <= iVar1) {
LAB_04f353d4:
              if (DAT_06a6e9d0 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
                DAT_06a6e9d0 = '\x01';
              }
              uVar7 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_04f35628;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = (short)unaff_w26;
                *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
              }
              else {
                FUN_04dd5298();
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
            if (sVar12 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar1 * 2) != 0x30)
              goto LAB_04f353d4;
              uVar6 = 0;
            }
            else {
              if ((sVar12 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar1 * 2) != 0x30))
              goto LAB_04f353d4;
              uVar6 = 1;
            }
LAB_04f35394:
            uVar7 = *(int *)(unaff_x29 + -0x38) + 2;
            uVar11 = uVar7;
            if ((int)uVar7 < (int)unaff_w20) {
              do {
                uVar11 = uVar7;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2) != 0x30) break;
                uVar7 = uVar7 + 1;
                uVar11 = unaff_w20;
              } while (unaff_w20 != uVar7);
            }
            if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar6;
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
          if (unaff_x21 != 0) {
            lVar13 = *(long *)(unaff_x21 + 0x98);
            goto joined_r0x04f34da8;
          }
          goto LAB_04f3562c;
        }
        if (((int)unaff_w20 <= (int)uVar11) ||
           (unaff_w26 = (uint)*(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2),
           unaff_w26 == 0)) goto switchD_04f34cc0_caseD_2c;
        if (DAT_06a6e9d0 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
          DAT_06a6e9d0 = '\x01';
        }
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        uVar7 = *(uint *)(unaff_x22 + 0x10);
        uVar11 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar7 <= (int)uVar3) goto LAB_04f34e7c;
LAB_04f34f14:
        if (uVar7 <= uVar3) goto LAB_04f35628;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = (short)unaff_w26;
        *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
      }
switchD_04f34cc0_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar10;
      *(uint *)(unaff_x29 + -0x38) = uVar11;
      if ((int)unaff_w20 <= (int)uVar11) {
LAB_04f354c8:
        if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      unaff_w26 = (uint)uVar2;
      if ((uVar2 == 0x3b) || (uVar2 == 0)) goto LAB_04f354c8;
      iVar10 = *(int *)(unaff_x29 + -0x4c);
      if (((0 < iVar10) && (uVar2 < 0x31)) &&
         ((1L << ((ulong)(uint)uVar2 & 0x3f) & 0x1400800000000U) != 0)) goto code_r0x04f34b1c;
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
    } while( true );
  }
  goto LAB_04f34b30;
code_r0x04f34b1c:
  unaff_x21 = *(long *)(unaff_x29 + -0x48);
  uVar11 = *(uint *)(unaff_x29 + -0x28);
  unaff_w24 = iVar10 + 1;
  *(int *)(unaff_x29 + -0x3c) = unaff_w28 - iVar10;
LAB_04f34b30:
  sVar12 = *unaff_x23;
  sVar4 = 0x30;
  if (sVar12 != 0) {
    unaff_x23 = unaff_x23 + 1;
    sVar4 = sVar12;
  }
  if (DAT_06a6e9d0 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
    DAT_06a6e9d0 = '\x01';
  }
  uVar7 = *(uint *)(unaff_x22 + 0x18);
  if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_04f35628;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar4;
    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
  }
  else {
    FUN_04dd5298();
  }
  if (((int)unaff_w19 < 0) || (unaff_w28 < 2 || (uVar11 & 1) != 0)) goto LAB_04f34c70;
  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_04f35628;
  if (unaff_w28 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
  goto LAB_04f34c70;
  if (unaff_x21 != 0) {
    lVar13 = *(long *)(unaff_x21 + 0x40);
    if (DAT_06a6f6db == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
      DAT_06a6f6db = '\x01';
    }
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x10) == 1) {
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) {
LAB_04f35628:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          lVar8 = *(long *)(unaff_x22 + 8);
          uVar5 = FUN_04db48b0(lVar13,0,0);
          *(undefined2 *)(lVar8 + (long)(int)uVar11 * 2) = uVar5;
          unaff_x21 = *(long *)(unaff_x29 + -0x48);
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          goto code_r0x04f34c68;
        }
      }
      FUN_04dd53c4();
      goto code_r0x04f34c68;
    }
  }
LAB_04f3562c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


