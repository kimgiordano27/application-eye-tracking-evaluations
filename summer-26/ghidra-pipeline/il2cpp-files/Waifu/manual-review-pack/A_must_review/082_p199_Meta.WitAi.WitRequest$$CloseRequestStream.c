/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseRequestStream
ENTRY_POINT: 062c02d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRequest__CloseRequestStream(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  int in_w8;
  int iVar3;
  int iVar4;
  long in_x9;
  int *piVar5;
  long lVar6;
  uint in_w10;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint in_w11;
  int in_w12;
  undefined1 *in_x13;
  int unaff_w21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  int iVar10;
  long unaff_x26;
  uint unaff_w27;
  int unaff_w28;
  uint unaff_w29;
  int in_stack_00000000;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  long in_stack_00000018;
  
  while( true ) {
    *(uint *)(in_x9 + (long)in_w8 * 4) = in_w11;
    in_w8 = in_w8 + 1;
    if ((bool)in_ZR) break;
    in_w11 = unaff_w29 & 0xfffff | in_w10;
    unaff_w29 = unaff_w29 + 1;
    unaff_x25 = unaff_x25 + -1;
    in_ZR = unaff_x25 == 0;
  }
  iVar10 = (int)unaff_x26;
  if (((in_w12 == 2) && (0 < in_stack_00000000)) && (0 < iVar10)) {
    if (in_x13[0x61b] == '\0') {
      FUN_0335b6c8(&DAT_08413190,1);
      DataMemoryBarrier(2,3);
      in_x13 = &DAT_086de000;
      DAT_086de61b = 1;
      param_1 = in_stack_00000018;
    }
    piVar5 = *(int **)(param_1 + 0x80);
    do {
      iVar3 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar3 + iVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if (0 < iVar10) {
      lVar6 = *(long *)(param_1 + 0x90);
      lVar9 = unaff_x26;
      do {
        *(int *)(lVar6 + (long)iVar3 * 4) = unaff_w28;
        lVar9 = lVar9 + -1;
        iVar3 = iVar3 + 1;
        unaff_w28 = unaff_w28 + 1;
      } while (lVar9 != 0);
    }
  }
  iVar3 = (int)unaff_x22;
  if (((uStack0000000000000008 | uStack000000000000000c) & 1) != 0) {
    if (in_x13[0x61b] == '\0') {
      FUN_0335b6c8(&DAT_08413190,1);
      DataMemoryBarrier(2,3);
      in_x13 = &DAT_086de000;
      DAT_086de61b = 1;
      param_1 = in_stack_00000018;
    }
    piVar5 = *(int **)(param_1 + 0xa0);
    do {
      iVar4 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar4 + iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if (0 < iVar3) {
      lVar6 = *(long *)(param_1 + 0xb0);
      lVar9 = unaff_x22;
      iVar7 = unaff_w21;
      do {
        *(int *)(lVar6 + (long)iVar4 * 4) = iVar7;
        lVar9 = lVar9 + -1;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 1;
      } while (lVar9 != 0);
    }
  }
  if ((in_stack_00000010 & 0x3800000000) != 0) {
    if (in_x13[0x61b] == '\0') {
      FUN_0335b6c8(&DAT_08413190,1);
      DataMemoryBarrier(2,3);
      in_x13 = &DAT_086de000;
      DAT_086de61b = 1;
      param_1 = in_stack_00000018;
    }
    piVar5 = *(int **)(param_1 + 0x100);
    do {
      iVar4 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar4 + iVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if (0 < iVar10) {
      lVar6 = *(long *)(param_1 + 0x110);
      lVar9 = 0;
      do {
        uVar8 = (uint)lVar9;
        lVar9 = lVar9 + 1;
        *(uint *)(lVar6 + (long)(int)(iVar4 + uVar8) * 4) = uVar8 & 0xffff | unaff_w27;
      } while (unaff_x26 != lVar9);
    }
  }
  if ((in_stack_00000010 & 0x1c000000000) != 0) {
    if (in_x13[0x61b] == '\0') {
      FUN_0335b6c8(&DAT_08413190,1);
      DataMemoryBarrier(2,3);
      in_x13 = &DAT_086de000;
      DAT_086de61b = 1;
      param_1 = in_stack_00000018;
    }
    piVar5 = *(int **)(param_1 + 0xe0);
    do {
      iVar10 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar10 + iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if (0 < iVar3) {
      lVar6 = *(long *)(param_1 + 0xf0);
      lVar9 = 0;
      do {
        uVar8 = (uint)lVar9;
        lVar9 = lVar9 + 1;
        *(uint *)(lVar6 + (long)(int)(iVar10 + uVar8) * 4) = uVar8 & 0xffff | unaff_w27;
      } while (unaff_x22 != lVar9);
    }
  }
  if ((in_stack_00000010 & 0xe0000000000) != 0) {
    if (in_x13[0x61b] == '\0') {
      FUN_0335b6c8(&DAT_08413190,1);
      DataMemoryBarrier(2,3);
      in_x13 = &DAT_086de000;
      DAT_086de61b = 1;
      param_1 = in_stack_00000018;
    }
    piVar5 = *(int **)(param_1 + 0x120);
    do {
      iVar10 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar10 + (int)unaff_x24;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if ((int)unaff_x24 < 1) goto LAB_062c054c;
    lVar6 = *(long *)(param_1 + 0x130);
    lVar9 = 0;
    do {
      uVar8 = (uint)lVar9;
      lVar9 = lVar9 + 1;
      *(uint *)(lVar6 + (long)(int)(iVar10 + uVar8) * 4) = uVar8 & 0xffff | unaff_w27;
    } while (unaff_x24 != lVar9);
  }
  if ((in_stack_00000010 & 0xff800000000) == 0) {
    return;
  }
LAB_062c054c:
  if (in_x13[0x61b] == '\0') {
    FUN_0335b6c8(&DAT_08413190,1);
    DataMemoryBarrier(2,3);
    in_x13[0x61b] = 1;
    param_1 = in_stack_00000018;
  }
  piVar5 = *(int **)(param_1 + 0xc0);
  do {
    iVar10 = *piVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar2) {
      *piVar5 = iVar10 + iVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  DataMemoryBarrier(2,3);
  if (0 < iVar3) {
    lVar9 = *(long *)(param_1 + 0xd0);
    do {
      *(int *)(lVar9 + (long)iVar10 * 4) = unaff_w21;
      unaff_x22 = unaff_x22 + -1;
      iVar10 = iVar10 + 1;
      unaff_w21 = unaff_w21 + 1;
    } while (unaff_x22 != 0);
  }
  return;
}


