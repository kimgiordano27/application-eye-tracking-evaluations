/*
FUNCTION_NAME: VRM.VRMSerializer$$Serialize_vrm_secondaryAnimation_colliderGroups__colliders__offset
ENTRY_POINT: 07bef9e0
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void VRM_VRMSerializer__Serialize_vrm_secondaryAnimation_colliderGroups__colliders__offset(void)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x21;
  undefined1 unaff_w22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_0335b6c8(&DAT_083d2df0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x56e) = unaff_w22;
  *(undefined2 *)(unaff_x19 + 0x3ec) = 0;
  *(undefined8 *)(unaff_x19 + 0x3f0) = 0;
  *(undefined1 *)(unaff_x19 + 0x3ee) = 1;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + (unaff_x19 + 0x3f0U >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x3f0U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined8 *)(unaff_x19 + 0x400) = 0;
  *(undefined8 *)(unaff_x19 + 0x3f8) = 0;
  if (DAT_086de461 == '\0') {
    FUN_0335b6c8(&DAT_083ce8e8,1);
    DataMemoryBarrier(2,3);
    DAT_086de461 = '\x01';
  }
  lVar7 = *(long *)(DAT_083ce8e8 + 0xb8);
  uVar5 = *(undefined8 *)(lVar7 + 0x60);
  uVar9 = *(undefined8 *)(lVar7 + 0x78);
  uVar8 = *(undefined8 *)(lVar7 + 0x70);
  uVar11 = *(undefined8 *)(lVar7 + 0x48);
  uVar10 = *(undefined8 *)(lVar7 + 0x40);
  uVar13 = *(undefined8 *)(lVar7 + 0x58);
  uVar12 = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x430) = *(undefined8 *)(lVar7 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x428) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x440) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x438) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x410) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x408) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x420) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x418) = uVar12;
  *(undefined2 *)(unaff_x19 + 0x44c) = 0;
  if (*(int *)(DAT_083cb918 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086d9d31 == '\0') {
    FUN_0335b6c8(&DAT_083cb918,1);
    DataMemoryBarrier(2,3);
    DAT_086d9d31 = '\x01';
  }
  if (*(int *)(DAT_083cb918 + 0xe0) == 0) {
    FUN_033b9870();
  }
  *(undefined8 *)(unaff_x19 + 0x450) = **(undefined8 **)(DAT_083cb918 + 0xb8);
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + (unaff_x19 + 0x450U >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x450U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(unaff_x19 + 0x458) = 0;
  *(undefined4 *)(unaff_x19 + 0x45c) = 0;
  *(undefined1 *)(unaff_x19 + 0x460) = 1;
  if (*(int *)(DAT_083d2df0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_07c2bebc();
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  FUN_07c32fb4();
  if (*(int *)(DAT_083ccc88 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_07c2ea24();
  FUN_07beef5c();
  *(undefined4 *)(unaff_x19 + 0x448) = 1;
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
  FUN_07c2f808();
  uVar8 = *(undefined8 *)(unaff_x19 + 0x338);
  uVar5 = FUN_03398a84(DAT_083be258);
  FUN_0603bdb4();
  lVar6 = FUN_0687a9b0(uVar8,uVar5,0);
  uVar5 = DAT_083be258;
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_0339898c(lVar6,DAT_083be258);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(lVar6,uVar5);
    }
  }
  plVar1 = (long *)(unaff_x19 + 0x338);
  *plVar1 = lVar7;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar1 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


