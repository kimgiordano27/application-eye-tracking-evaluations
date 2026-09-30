/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 09816d3c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void WebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long unaff_x19;
  int iVar6;
  long unaff_x20;
  int iVar7;
  int iVar8;
  int unaff_w28;
  int unaff_w29;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  int iStack0000000000000004;
  int in_stack_00000008;
  int iStack000000000000000c;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x20 + 0x723) = 1;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  iVar6 = -0x80000000;
  if ((float)(int)(unaff_s8 / unaff_s9) != INFINITY) {
    iVar6 = (int)(unaff_s8 / unaff_s9);
  }
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  uVar2 = *(uint *)(unaff_x19 + 0x60);
  if (*(int *)(unaff_x19 + 100) == 0) {
    iVar8 = unaff_w28;
    if (unaff_w29 <= unaff_w28) {
      iVar8 = unaff_w29;
    }
    if (unaff_w29 < 1) {
      iVar8 = 1;
    }
    iVar9 = unaff_w29;
    if (*(int *)(unaff_x19 + 0x78) == 2) {
      iVar7 = iVar6;
      if (unaff_w28 <= iVar6) {
        iVar7 = unaff_w28;
      }
    }
    else {
      if (DAT_0a51c737 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c737 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      iVar7 = -0x80000000;
      if ((float)(int)((float)unaff_w28 / (float)unaff_w29) != INFINITY) {
        iVar7 = (int)((float)unaff_w28 / (float)unaff_w29);
      }
      if (iVar6 < 1) {
        iVar7 = 1;
      }
      else if (iVar6 <= iVar7) {
        iVar7 = iVar6;
      }
    }
  }
  else {
    iVar7 = unaff_w28;
    if (iVar6 <= unaff_w28) {
      iVar7 = iVar6;
    }
    if (iVar6 < 1) {
      iVar7 = 1;
    }
    iVar9 = iVar6;
    if (*(int *)(unaff_x19 + 0x78) == 1) {
      iVar8 = unaff_w29;
      if (unaff_w28 <= unaff_w29) {
        iVar8 = unaff_w28;
      }
    }
    else {
      if (DAT_0a51c737 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c737 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      iVar8 = -0x80000000;
      if ((float)(int)((float)unaff_w28 / (float)iVar6) != INFINITY) {
        iVar8 = (int)((float)unaff_w28 / (float)iVar6);
      }
      if (unaff_w29 < 1) {
        iVar8 = 1;
      }
      else if (unaff_w29 <= iVar8) {
        iVar8 = unaff_w29;
      }
    }
  }
  fVar11 = *(float *)(unaff_x19 + 0x6c);
  fVar12 = *(float *)(unaff_x19 + 0x74);
  iStack000000000000000c = iVar8 + -1;
  fVar10 = (float)FUN_098171ec(*(float *)(unaff_x19 + 0x68) * (float)iVar8 +
                               *(float *)(unaff_x19 + 0x70) * (float)iStack000000000000000c);
  fVar11 = (float)FUN_098171ec(fVar11 * (float)iVar7 + fVar12 * (float)(iVar7 + -1));
  iStack0000000000000004 = 0;
  if (*(int *)(unaff_x19 + 0x7c) < unaff_w28) {
    if (DAT_0a51c737 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51c737 = '\x01';
    }
    puVar3 = PTR_DAT_09f1e748;
    fVar12 = (float)unaff_w28 / (float)iVar9;
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    iVar6 = -0x80000000;
    if ((float)(int)fVar12 != INFINITY) {
      iVar6 = (int)fVar12;
    }
    iVar8 = *(int *)(unaff_x19 + 0x7c) - iVar6;
    if (iVar8 == 0 || *(int *)(unaff_x19 + 0x7c) < iVar6) {
      iStack0000000000000004 = 0;
    }
    else {
      if (DAT_0a51c737 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c737 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (DAT_0a51c723 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c723 = '\x01';
      }
      fVar12 = (float)iVar8 / ((float)iVar9 + -1.0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = unaff_w28 / iVar9;
      }
      iStack0000000000000004 = -0x80000000;
      if ((float)(int)fVar12 != INFINITY) {
        iStack0000000000000004 = (int)fVar12;
      }
      iStack0000000000000004 = iStack0000000000000004 + iVar8;
      if (unaff_w28 - iVar6 * iVar9 == 1) {
        iStack0000000000000004 = iStack0000000000000004 + 1;
      }
    }
  }
  puVar3 = PTR_DAT_09f722b0;
  if (0 < unaff_w28) {
    iVar6 = 0;
    iVar8 = in_stack_00000008;
    do {
      if (*(int *)(unaff_x19 + 100) == 0) {
        if ((*(int *)(unaff_x19 + 0x78) == 2) && (iVar8 <= iStack0000000000000004)) {
          iVar4 = 0;
          iVar5 = *(int *)(unaff_x19 + 0x7c) - (in_stack_00000008 - iVar6);
        }
        else {
          iVar5 = 0;
          if (iVar9 != 0) {
            iVar5 = iVar6 / iVar9;
          }
          iVar4 = iVar6 - iVar5 * iVar9;
        }
      }
      else if ((*(int *)(unaff_x19 + 0x78) == 1) && (iVar8 <= iStack0000000000000004)) {
        iVar5 = 0;
        iVar4 = (iVar6 - in_stack_00000008) + *(int *)(unaff_x19 + 0x7c);
      }
      else {
        iVar4 = 0;
        if (iVar9 != 0) {
          iVar4 = iVar6 / iVar9;
        }
        iVar5 = iVar6 - iVar9 * iVar4;
      }
      iVar1 = (iVar7 + -1) - iVar5;
      if ((uVar2 & 0xfffffffe) != 2) {
        iVar1 = iVar5;
      }
      if (*(long *)(unaff_x19 + 0x58) == 0) {
LAB_098171e0:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      iVar5 = iStack000000000000000c - iVar4;
      if ((int)uVar2 % 2 != 1) {
        iVar5 = iVar4;
      }
      FUN_05badb74(*(long *)(unaff_x19 + 0x58),iVar6,*(undefined8 *)puVar3);
      FUN_09817334(fVar10 + (*(float *)(unaff_x19 + 0x68) + *(float *)(unaff_x19 + 0x70)) *
                            (float)iVar5);
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_098171e0;
      FUN_05badb74(*(long *)(unaff_x19 + 0x58),iVar6,*(undefined8 *)puVar3);
      FUN_09817334(fVar11 + (*(float *)(unaff_x19 + 0x6c) + *(float *)(unaff_x19 + 0x74)) *
                            (float)iVar1);
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar6 != in_stack_00000008);
  }
  return;
}


