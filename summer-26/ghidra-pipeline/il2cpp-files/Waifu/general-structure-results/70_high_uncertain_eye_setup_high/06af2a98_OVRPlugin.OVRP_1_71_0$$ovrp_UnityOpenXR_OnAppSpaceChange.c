/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 06af2a98
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange(ulong *param_1)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong in_x9;
  long lVar8;
  uint in_w11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar9;
  long unaff_x22;
  long unaff_x23;
  
  while (in_w11 != 0) {
    bVar3 = 1;
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = *param_1 | in_x9;
      bVar3 = ExclusiveMonitorsStatus();
    }
    in_w11 = (uint)bVar3;
  }
  puVar7 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar7 = unaff_x20;
  puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined4 *)(unaff_x19 + 0x48) = 0x3d4ccccd;
  if (*(int *)(DAT_083d4dc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar8 = *(long *)(*(long *)(DAT_083d4dc8 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(DAT_083d4dc8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar9 = **(undefined8 **)(DAT_083d4dc8 + 0xb8);
    uVar6 = FUN_03398a84(DAT_083c0f18);
    FUN_0439b060(uVar6,uVar9,DAT_08422b40,0);
    puVar7 = (undefined8 *)(*(long *)(DAT_083d4dc8 + 0xb8) + 8);
    *puVar7 = uVar6;
    if (*(int *)(unaff_x23 + 0xcd0) == 0) {
      *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
      goto LAB_06af2c00;
    }
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
  }
  else {
    iVar2 = *(int *)(unaff_x23 + 0xcd0);
    *(long *)(unaff_x19 + 0x50) = lVar8;
    if (iVar2 == 0) goto LAB_06af2c00;
  }
  puVar1 = (ulong *)(unaff_x22 + (unaff_x19 + 0x50U >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x50U >> 0xc & 0x3f);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_06af2c00:
  uVar6 = FUN_03398a84(DAT_083c0168);
  FUN_05e16830(uVar6,0,0,**(undefined8 **)(*(long *)(DAT_083e4ff8 + 0x20) + 0xc0));
  puVar7 = (undefined8 *)(unaff_x19 + 0x58);
  *puVar7 = uVar6;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_07a0900c();
  return;
}


