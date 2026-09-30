/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 04f353d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference(void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 in_w5;
  uint unaff_w19;
  uint unaff_w20;
  long lVar5;
  short *psVar6;
  long unaff_x22;
  short *unaff_x23;
  int iVar7;
  int unaff_w24;
  uint uVar8;
  short sVar9;
  uint uVar10;
  uint unaff_w27;
  long lVar11;
  int unaff_w28;
  ushort *puVar12;
  long unaff_x29;
  
FUN_04f35444:
  if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
    *(undefined4 *)(unaff_x29 + -0x38) = in_w5;
    thunk_FUN_02cd038c();
  }
  FUN_04f3a470();
LAB_04f354b0:
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
switchD_04f34cc0_caseD_2c:
  *(int *)(unaff_x29 + -0x4c) = unaff_w24;
  *(uint *)(unaff_x29 + -0x38) = unaff_w27;
  if ((((int)unaff_w20 <= (int)unaff_w27) ||
      (uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2),
      uVar1 == 0x3b)) || (uVar1 == 0)) {
LAB_04f354c8:
    if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  unaff_w24 = *(int *)(unaff_x29 + -0x4c);
  uVar10 = (uint)uVar1;
  if (((unaff_w24 < 1) || (0x30 < uVar1)) ||
     ((1L << ((ulong)uVar10 & 0x3f) & 0x1400800000000U) == 0)) {
    lVar5 = *(long *)(unaff_x29 + -0x48);
  }
  else {
    lVar5 = *(long *)(unaff_x29 + -0x48);
    uVar8 = *(uint *)(unaff_x29 + -0x28);
    iVar7 = unaff_w24 + 1;
    *(int *)(unaff_x29 + -0x3c) = unaff_w28 - unaff_w24;
    do {
      sVar9 = *unaff_x23;
      sVar3 = 0x30;
      if (sVar9 != 0) {
        unaff_x23 = unaff_x23 + 1;
        sVar3 = sVar9;
      }
      if (DAT_06a6e9d0 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
        DAT_06a6e9d0 = '\x01';
      }
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_04f35628;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_04dd5298();
      }
      if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar8 & 1) == 0)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_04f35628;
        if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
          if (lVar5 == 0) goto LAB_04f3562c;
          lVar11 = *(long *)(lVar5 + 0x40);
          if (DAT_06a6f6db == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6f6db = '\x01';
          }
          if (lVar11 == 0) goto LAB_04f3562c;
          if (*(int *)(lVar11 + 0x10) == 1) {
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_04f34c58;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_04f35628;
            lVar5 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_04db48b0(lVar11,0,0);
            *(undefined2 *)(lVar5 + (long)(int)uVar8 * 2) = uVar4;
            lVar5 = *(long *)(unaff_x29 + -0x48);
            *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          }
          else {
LAB_04f34c58:
            FUN_04dd53c4();
          }
          uVar8 = *(uint *)(unaff_x29 + -0x28);
          unaff_w19 = unaff_w19 - 1;
        }
      }
      iVar7 = iVar7 + -1;
      unaff_w28 = unaff_w28 + -1;
    } while (1 < iVar7);
    unaff_w28 = *(int *)(unaff_x29 + -0x3c);
    unaff_w24 = 0;
  }
  unaff_w27 = *(int *)(unaff_x29 + -0x38) + 1;
  if (0x45 < uVar10) {
    if (uVar1 != 0x5c) {
      if (uVar1 == 0x65) goto LAB_04f34eac;
      if (uVar1 == 0x2030) {
        if (lVar5 == 0) goto LAB_04f3562c;
        lVar5 = *(long *)(lVar5 + 0x98);
        goto joined_r0x04f34da8;
      }
      goto switchD_04f34cc0_caseD_24;
    }
    if (((int)unaff_w27 < (int)unaff_w20) &&
       (uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2), uVar1 != 0)) {
      if (DAT_06a6e9d0 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
        DAT_06a6e9d0 = '\x01';
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      uVar10 = *(uint *)(unaff_x22 + 0x10);
      unaff_w27 = *(int *)(unaff_x29 + -0x38) + 2;
      if ((int)uVar8 < (int)uVar10) {
LAB_04f34f14:
        if (uVar10 <= uVar8) {
LAB_04f35628:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = uVar1;
        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
      }
      else {
LAB_04f34e7c:
        FUN_04dd5298();
      }
    }
    goto switchD_04f34cc0_caseD_2c;
  }
  switch(uVar1) {
  case 0x22:
  case 0x27:
    if ((int)unaff_w27 < (int)unaff_w20) {
      *(int *)(unaff_x29 + -0x3c) = unaff_w28;
      *(int *)(unaff_x29 + -0x4c) = unaff_w24;
      lVar5 = (ulong)unaff_w27 << 0x20;
      uVar8 = ~*(uint *)(unaff_x29 + -0x38);
      puVar12 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
      lVar11 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
      while( true ) {
        uVar1 = *puVar12;
        if ((uVar1 == 0) || (uVar1 == uVar10)) break;
        if (DAT_06a6e9d0 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
          DAT_06a6e9d0 = '\x01';
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_04f35628;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = uVar1;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        }
        else {
          FUN_04dd5298();
        }
        lVar5 = lVar5 + 0x100000000;
        uVar8 = uVar8 - 1;
        lVar11 = lVar11 + -1;
        puVar12 = puVar12 + 1;
        if (lVar11 == 0) goto LAB_04f354c8;
      }
      unaff_w24 = *(int *)(unaff_x29 + -0x4c);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      unaff_w27 = (*(short *)((lVar5 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar8;
    }
    goto switchD_04f34cc0_caseD_2c;
  case 0x23:
  case 0x30:
    if (unaff_w24 < 0) {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_04f35160:
        sVar9 = 0x30;
        goto LAB_04f35164;
      }
    }
    else {
      sVar9 = *unaff_x23;
      if (sVar9 == 0) {
        if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_04f35160;
      }
      else {
        unaff_x23 = unaff_x23 + 1;
LAB_04f35164:
        if (DAT_06a6e9d0 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
          DAT_06a6e9d0 = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        uVar10 = *(uint *)(unaff_x29 + -0x28);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_04f35628;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar9;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        }
        else {
          FUN_04dd5298();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar10 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_04f35628;
          if (unaff_w28 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
          goto FUN_04f35290;
          if (lVar5 == 0) {
LAB_04f3562c:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar5 = *(long *)(lVar5 + 0x40);
          if (DAT_06a6f6db == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6f6db = '\x01';
          }
          if (lVar5 == 0) goto LAB_04f3562c;
          if (*(int *)(lVar5 + 0x10) == 1) {
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_04f3527c;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_04f35628;
            lVar11 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_04db48b0(lVar5,0,0);
            *(undefined2 *)(lVar11 + (long)(int)uVar10 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          }
          else {
LAB_04f3527c:
            FUN_04dd53c4();
          }
          unaff_w19 = unaff_w19 - 1;
        }
      }
    }
FUN_04f35290:
    unaff_w28 = unaff_w28 + -1;
    goto switchD_04f34cc0_caseD_2c;
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2f:
    goto switchD_04f34cc0_caseD_24;
  case 0x25:
    if (lVar5 == 0) goto LAB_04f3562c;
    lVar5 = *(long *)(lVar5 + 0x90);
joined_r0x04f34da8:
    if (DAT_06a6f6db == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
      DAT_06a6f6db = '\x01';
    }
    if (lVar5 == 0) goto LAB_04f3562c;
    if (*(int *)(lVar5 + 0x10) == 1) {
      uVar10 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_04f35628;
        lVar11 = *(long *)(unaff_x22 + 8);
        uVar4 = FUN_04db48b0(lVar5,0,0);
        *(undefined2 *)(lVar11 + (long)(int)uVar10 * 2) = uVar4;
        *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
        goto switchD_04f34cc0_caseD_2c;
      }
    }
    FUN_04dd53c4();
    goto switchD_04f34cc0_caseD_2c;
  case 0x2c:
    goto switchD_04f34cc0_caseD_2c;
  case 0x2e:
    if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
      if ((-1 < *(int *)(unaff_x29 + -0x74)) &&
         ((*(int *)(unaff_x29 + -0x1c) <= *(int *)(unaff_x29 + -0x34) || (*unaff_x23 == 0)))) {
        *(undefined4 *)(unaff_x29 + -0x7c) = 0;
        unaff_w28 = 0;
        goto switchD_04f34cc0_caseD_2c;
      }
      if (lVar5 == 0) goto LAB_04f3562c;
      lVar5 = *(long *)(lVar5 + 0x38);
      if (DAT_06a6f6db == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
        DAT_06a6f6db = '\x01';
      }
      if (lVar5 == 0) goto LAB_04f3562c;
      if (*(int *)(lVar5 + 0x10) == 1) {
        uVar10 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_04f35628;
          lVar11 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_04db48b0(lVar5,0,0);
          *(undefined2 *)(lVar11 + (long)(int)uVar10 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          unaff_w28 = 0;
          *(undefined4 *)(unaff_x29 + -0x7c) = 1;
          goto switchD_04f34cc0_caseD_2c;
        }
      }
      FUN_04dd53c4();
      unaff_w28 = 0;
      *(undefined4 *)(unaff_x29 + -0x7c) = 1;
    }
    goto switchD_04f34cc0_caseD_2c;
  default:
    if (uVar1 == 0x45) {
LAB_04f34eac:
      if ((*(uint *)(unaff_x29 + -0x5c) & 1) != 0) {
        if (((int)unaff_w27 < (int)unaff_w20) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2) == 0x30)) {
          in_w5 = 0;
          goto LAB_04f35394;
        }
        iVar7 = *(int *)(unaff_x29 + -0x38) + 2;
        if (iVar7 < (int)unaff_w20) {
          sVar9 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if (sVar9 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar7 * 2) == 0x30) {
              in_w5 = 0;
              goto LAB_04f35394;
            }
          }
          else if ((sVar9 == 0x2b) &&
                  (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar7 * 2) == 0x30)) {
            in_w5 = 1;
LAB_04f35394:
            uVar10 = *(int *)(unaff_x29 + -0x38) + 2;
            unaff_w27 = uVar10;
            if ((int)uVar10 < (int)unaff_w20) break;
            goto FUN_04f35444;
          }
        }
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
        *(undefined4 *)(unaff_x29 + -0x5c) = 1;
        goto switchD_04f34cc0_caseD_2c;
      }
      iVar7 = *(int *)(unaff_x29 + -0x38);
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
      if ((int)unaff_w27 < (int)unaff_w20) {
        sVar9 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
        if ((sVar9 == 0x2d) || (sVar9 == 0x2b)) {
          if (DAT_06a6e9d0 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6e9d0 = '\x01';
          }
          uVar10 = *(uint *)(unaff_x22 + 0x18);
          unaff_w27 = iVar7 + 2;
          if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_04f35628;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar9;
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          }
          else {
            FUN_04dd5298();
          }
        }
        if ((int)unaff_w20 <= (int)unaff_w27) goto LAB_04f354b0;
        psVar6 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
        lVar5 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
        while (*psVar6 == 0x30) {
          if (DAT_06a6e9d0 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
            DAT_06a6e9d0 = '\x01';
          }
          uVar10 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_04f35628;
            *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = 0x30;
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          }
          else {
            FUN_04dd5298();
          }
          unaff_w27 = unaff_w27 + 1;
          lVar5 = lVar5 + -1;
          psVar6 = psVar6 + 1;
          if (lVar5 == 0) goto LAB_04f354c8;
        }
        *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        goto switchD_04f34cc0_caseD_2c;
      }
      goto LAB_04f354b0;
    }
switchD_04f34cc0_caseD_24:
    if (DAT_06a6e9d0 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1cf0);
      DAT_06a6e9d0 = '\x01';
    }
    uVar8 = *(uint *)(unaff_x22 + 0x18);
    uVar10 = *(uint *)(unaff_x22 + 0x10);
    if ((int)uVar10 <= (int)uVar8) goto LAB_04f34e7c;
    goto LAB_04f34f14;
  }
  while (uVar10 = uVar10 + 1, unaff_w27 = unaff_w20, unaff_w20 != uVar10) {
    unaff_w27 = uVar10;
    if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2) != 0x30) break;
  }
  goto FUN_04f35444;
}


