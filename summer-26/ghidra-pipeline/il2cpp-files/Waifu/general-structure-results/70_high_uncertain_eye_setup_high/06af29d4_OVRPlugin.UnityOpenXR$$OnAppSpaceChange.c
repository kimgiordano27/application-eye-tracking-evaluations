/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 06af29d4
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnAppSpaceChange(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined8 uVar13;
  
  *(undefined1 *)(unaff_x20 + 0x4c2) = unaff_w21;
  lVar6 = FUN_03398a84(DAT_083c5650);
  FUN_04ab03d4(lVar6,DAT_083f6188);
  lVar7 = FUN_03398a84(DAT_083d4dd0);
  uVar8 = DAT_012e26f8;
  *(undefined4 *)(lVar7 + 0x10) = 7;
  *(undefined8 *)(lVar7 + 0x14) = uVar8;
  lVar12 = DAT_083f6198;
  if (lVar6 == 0) {
LAB_06af2c90:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar9 = *(long *)(lVar6 + 0x10);
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_06af2c90;
  uVar2 = *(uint *)(lVar6 + 0x18);
  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
    plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
    *plVar10 = lVar7;
    if (DAT_08908cd0 == 0) {
      *(long *)(unaff_x19 + 0x40) = lVar6;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(long *)(unaff_x19 + 0x40) = lVar6;
LAB_06af2acc:
      puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x40U >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x40U >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    FUN_04ab0e54(lVar6,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    iVar5 = DAT_08908cd0;
    *(long *)(unaff_x19 + 0x40) = lVar6;
    if (iVar5 != 0) goto LAB_06af2acc;
  }
  *(undefined4 *)(unaff_x19 + 0x48) = 0x3d4ccccd;
  if (*(int *)(DAT_083d4dc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar5 = DAT_08908cd0;
  lVar12 = *(long *)(*(long *)(DAT_083d4dc8 + 0xb8) + 8);
  if (lVar12 == 0) {
    if (*(int *)(DAT_083d4dc8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar13 = **(undefined8 **)(DAT_083d4dc8 + 0xb8);
    uVar8 = FUN_03398a84(DAT_083c0f18);
    FUN_0439b060(uVar8,uVar13,DAT_08422b40,0);
    puVar11 = (undefined8 *)(*(long *)(DAT_083d4dc8 + 0xb8) + 8);
    *puVar11 = uVar8;
    if (DAT_08908cd0 == 0) {
      *(undefined8 *)(unaff_x19 + 0x50) = uVar8;
      goto LAB_06af2c00;
    }
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined8 *)(unaff_x19 + 0x50) = uVar8;
  }
  else {
    *(long *)(unaff_x19 + 0x50) = lVar12;
    if (iVar5 == 0) goto LAB_06af2c00;
  }
  puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x50U >> 0x12 & 0x7fff);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x50U >> 0xc & 0x3f);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_06af2c00:
  uVar8 = FUN_03398a84(DAT_083c0168);
  FUN_05e16830(uVar8,0,0,**(undefined8 **)(*(long *)(DAT_083e4ff8 + 0x20) + 0xc0));
  puVar11 = (undefined8 *)(unaff_x19 + 0x58);
  *puVar11 = uVar8;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_07a0900c();
  return;
}


