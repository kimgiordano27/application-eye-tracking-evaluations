/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 067cbf28
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined1 unaff_w20;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bdd8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084441d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0843c0d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08447198,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bda0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bdc8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bd98,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bda8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bd90,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bdd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0843fd80,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bd70,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845bd68,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x9c6) = unaff_w20;
  if (*(int *)(DAT_083cddd0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  DataMemoryBarrier(2,3);
  if (*(long *)(*(long *)(DAT_083cddd0 + 0xb8) + 8) != 0) {
LAB_067cc05c:
    if (*(int *)(DAT_083cddd0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    DataMemoryBarrier(2,3);
    return *(undefined8 *)(*(long *)(DAT_083cddd0 + 0xb8) + 8);
  }
  if (*(int *)(DAT_083cddd0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar5 = DAT_083cddd0;
  DataMemoryBarrier(2,3);
  puVar9 = (undefined8 *)(*(long *)(DAT_083cddd0 + 0xb8) + 8);
  *puVar9 = 0;
  if (DAT_08908cd0 == 0) {
    DataMemoryBarrier(2,3);
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
    DataMemoryBarrier(2,3);
    if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) != 0) goto LAB_067cc05c;
  }
  plVar4 = (long *)FUN_03398188(DAT_083c7570,5);
  lVar5 = FUN_03398a84(DAT_083cb380);
  FUN_067c8e54(lVar5,5,0x7e3,5,1,0x7e2,1,0x1f2d);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_067cc4fc:
    uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar8 = plVar4 + 4;
    *plVar8 = lVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = FUN_03398a84(DAT_083cb380);
    FUN_067c8e54(lVar5,4,0x7c5,1,8,0x7c4,1,0x1f);
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_067cc4fc;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar8 = plVar4 + 5;
      *plVar8 = lVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar5 = FUN_03398a84(DAT_083cb380);
      FUN_067c8e54(lVar5,3,0x786,0xc,0x19,0x785,1,0x40);
      if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_067cc4fc;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar8 = plVar4 + 6;
        *plVar8 = lVar5;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar5 = FUN_03398a84(DAT_083cb380);
        FUN_067c8e54(lVar5,2,0x778,7,0x1e,0x777,1,0xf);
        if ((lVar5 != 0) &&
           (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_067cc4fc;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar8 = plVar4 + 7;
          *plVar8 = lVar5;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lVar5 = FUN_03398a84(DAT_083cb380);
          FUN_067c8e54(lVar5,1,0x74c,1,1,0x74b,1,0x2d);
          if ((lVar5 != 0) &&
             (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_067cc4fc;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar8 = plVar4 + 8;
            *plVar8 = lVar5;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(int *)(DAT_083cddd0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            DataMemoryBarrier(2,3);
            plVar8 = (long *)(*(long *)(DAT_083cddd0 + 0xb8) + 8);
            *plVar8 = (long)plVar4;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            goto LAB_067cc05c;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


