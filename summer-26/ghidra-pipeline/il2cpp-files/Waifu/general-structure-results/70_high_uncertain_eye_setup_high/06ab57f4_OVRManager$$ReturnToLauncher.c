/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 06ab57f4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ReturnToLauncher(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  if ((*(byte *)(unaff_x20 + 0x18a) & 1) == 0) {
    FUN_0335b6c8(&DAT_083be228,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842a390,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083da398,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0x18a) = 1;
  }
  *(undefined4 *)(param_1 + 0x44) = 0x42340000;
  uVar5 = FUN_079c3100(0,0,0x3f800000,0x42c80000,0);
  puVar6 = (undefined8 *)(param_1 + 0x48);
  *puVar6 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  if (*(int *)(DAT_083da398 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar4 = DAT_08908cd0;
  lVar7 = *(long *)(*(long *)(DAT_083da398 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(DAT_083da398 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = **(undefined8 **)(DAT_083da398 + 0xb8);
    uVar5 = FUN_03398a84(DAT_083be228);
    FUN_06039da8(uVar5,uVar8,DAT_0842a390,0);
    puVar6 = (undefined8 *)(*(long *)(DAT_083da398 + 0xb8) + 8);
    *puVar6 = uVar5;
    if (DAT_08908cd0 == 0) {
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      goto LAB_06ab59ac;
    }
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined8 *)(param_1 + 0x68) = uVar5;
  }
  else {
    *(long *)(param_1 + 0x68) = lVar7;
    if (iVar4 == 0) goto LAB_06ab59ac;
  }
  puVar1 = &DAT_0873ccb0 + (param_1 + 0x68U >> 0x12 & 0x7fff);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (param_1 + 0x68U >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_06ab59ac:
  FUN_07a0900c(param_1);
  return;
}


