/*
FUNCTION_NAME: OVRPlugin$$SetDefaultExternalCamera
ENTRY_POINT: 06abed28
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDefaultExternalCamera(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cffc8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d04f0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x203) = unaff_w22;
  uVar4 = FUN_03398188(DAT_083c7aa0,0x18);
  puVar9 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar9 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = FUN_03398188(DAT_083c7aa0,0x18);
  puVar10 = (undefined8 *)(unaff_x19 + 0x18);
  *puVar10 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = FUN_03398188(DAT_083c7aa0,0x18);
  puVar5 = (undefined8 *)(unaff_x19 + 0x20);
  *puVar5 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(unaff_x19 + 0x48) = 0xffffffff;
  lVar11 = *(long *)(unaff_x19 + 0x18);
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_07a1747c(&stack0x00000020,0);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    *(undefined8 *)(lVar11 + 0x34) = uStack0000000000000034;
    *(ulong *)(lVar11 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(ulong *)(lVar11 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(lVar11 + 0x20) = in_stack_00000020;
    uVar4 = *puVar10;
    lVar11 = FUN_03398a84(DAT_083d04f0);
    puVar10 = (undefined8 *)(lVar11 + 0x10);
    *puVar10 = uVar4;
    if (DAT_08908cd0 == 0) {
      *(long *)(unaff_x19 + 0x28) = lVar11;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)(unaff_x19 + 0x28);
      *plVar6 = lVar11;
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = *puVar9;
    lVar11 = FUN_03398a84(DAT_083d04f0);
    puVar9 = (undefined8 *)(lVar11 + 0x10);
    *puVar9 = uVar4;
    if (DAT_08908cd0 == 0) {
      *(long *)(unaff_x19 + 0x30) = lVar11;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)(unaff_x19 + 0x30);
      *plVar6 = lVar11;
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_083ccf78) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06abf018;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_0338f71c();
LAB_06abf018:
      uVar4 = (*(code *)*puVar9)();
      puVar9 = (undefined8 *)(unaff_x19 + 0x38);
      *puVar9 = uVar4;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


