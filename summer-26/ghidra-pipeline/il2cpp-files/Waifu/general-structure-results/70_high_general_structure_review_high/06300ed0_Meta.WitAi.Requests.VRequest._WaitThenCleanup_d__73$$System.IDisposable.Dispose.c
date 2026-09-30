/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest.<WaitThenCleanup>d__73$$System.IDisposable.Dispose
ENTRY_POINT: 06300ed0
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest_<WaitThenCleanup>d__73__System_IDisposable_Dispose(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ea938,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eaa28,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eaa88,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eab90,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ea990,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eab30,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ea940,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eaac8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eab08,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ea908,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eab68,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ea910,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c0880,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c08a8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c08b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c08b0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f8db0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x719) = unaff_w22;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar3 = *(undefined4 *)(unaff_x20 + 0x8c);
  plVar11 = (long *)(unaff_x19 + 0x30);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    FUN_04db5e34((long *)(lVar8 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083ea938 + 0x20) + 0xc0) + 0x80));
  }
  *(undefined8 *)(lVar8 + 0x20) = 0;
  lVar8 = FUN_03398a84(DAT_083c0880);
  *(undefined8 *)(lVar8 + 0x20) = 0;
  FUN_04db5b30();
  *(undefined4 *)(lVar8 + 0x20) = uVar3;
  *(undefined4 *)(lVar8 + 0x24) = uVar3;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *plVar11 = lVar8;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = *plVar11;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  FUN_062e9194(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18),uVar3);
  plVar11 = (long *)(unaff_x19 + 0x38);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    FUN_04de6984((long *)(lVar8 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083ea990 + 0x20) + 0xc0) + 0x80));
  }
  *(undefined8 *)(lVar8 + 0x20) = 0;
  plVar7 = (long *)(unaff_x20 + 0x98);
  *plVar11 = *plVar7;
  iVar6 = DAT_08908cd0;
  if (DAT_08908cd0 == 0) {
    *plVar7 = 0;
  }
  else {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *plVar7 = 0;
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(unaff_x19 + 0x40);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    FUN_04deed44((long *)(lVar8 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa88 + 0x20) + 0xc0) + 0x80));
    iVar6 = DAT_08908cd0;
  }
  *(undefined8 *)(lVar8 + 0x20) = 0;
  plVar7 = (long *)(unaff_x20 + 0xa0);
  *plVar11 = *plVar7;
  if (iVar6 == 0) {
    *plVar7 = 0;
  }
  else {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *plVar7 = 0;
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(unaff_x19 + 0x48);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    FUN_04deed44((long *)(lVar8 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa88 + 0x20) + 0xc0) + 0x80));
    iVar6 = DAT_08908cd0;
  }
  *(undefined8 *)(lVar8 + 0x20) = 0;
  plVar7 = (long *)(unaff_x20 + 0xa8);
  *plVar11 = *plVar7;
  if (iVar6 == 0) {
    *plVar7 = 0;
  }
  else {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *plVar7 = 0;
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(unaff_x19 + 0x50);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    FUN_04deed44((long *)(lVar8 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa88 + 0x20) + 0xc0) + 0x80));
    iVar6 = DAT_08908cd0;
  }
  *(undefined8 *)(lVar8 + 0x20) = 0;
  plVar7 = (long *)(unaff_x20 + 0xb0);
  *plVar11 = *plVar7;
  if (iVar6 == 0) {
    *plVar7 = 0;
  }
  else {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *plVar7 = 0;
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(unaff_x19 + 0x58);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    FUN_04dedce0((long *)(lVar8 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa28 + 0x20) + 0xc0) + 0x80));
    iVar6 = DAT_08908cd0;
  }
  *(undefined8 *)(lVar8 + 0x20) = 0;
  plVar7 = (long *)(unaff_x20 + 0xb8);
  *plVar11 = *plVar7;
  if (iVar6 == 0) {
    *plVar7 = 0;
  }
  else {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *plVar7 = 0;
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(unaff_x19 + 0x60);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    FUN_04de8a68((long *)(lVar8 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083ea9e8 + 0x20) + 0xc0) + 0x80));
    iVar6 = DAT_08908cd0;
  }
  *(undefined8 *)(lVar8 + 0x20) = 0;
  plVar7 = (long *)(unaff_x20 + 0xc0);
  *plVar11 = *plVar7;
  if (iVar6 == 0) {
    *plVar7 = 0;
  }
  else {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *plVar7 = 0;
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(unaff_x19 + 0x70);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    FUN_04df1ebc((long *)(lVar8 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eab30 + 0x20) + 0xc0) + 0x80));
  }
  *(undefined8 *)(lVar8 + 0x20) = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + 0xe8);
  lVar8 = FUN_03398a84(DAT_083c08b0);
  FUN_042679fc(lVar8,uVar9,DAT_083eab08);
  *plVar11 = lVar8;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(unaff_x19 + 0x68);
  lVar8 = *plVar11;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x10) != 0) {
      FUN_04df2f14((long *)(lVar8 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab90 + 0x20) + 0xc0) + 0x80));
    }
    *(undefined8 *)(lVar8 + 0x20) = 0;
    uVar9 = *(undefined8 *)(unaff_x20 + 0xf0);
    lVar8 = FUN_03398a84(DAT_083c08b8);
    FUN_0426879c(lVar8,uVar9,DAT_083eab68);
    *plVar11 = lVar8;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_062d29cc();
    lVar8 = *(long *)(unaff_x19 + 0x130);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(long *)(lVar8 + 0x10) != 0) {
      FUN_04db5e34((long *)(lVar8 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083ea938 + 0x20) + 0xc0) + 0x80));
    }
    *(undefined8 *)(lVar8 + 0x20) = 0;
    uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar9 = FUN_03398a84(DAT_083c0880);
    FUN_0425c6d8(uVar9,uVar10,DAT_083ea908);
    puVar1 = (undefined8 *)(unaff_x19 + 0x130);
    *puVar1 = uVar9;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)puVar1 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar8 = *(long *)(unaff_x19 + 0x138);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(long *)(lVar8 + 0x10) != 0) {
      FUN_04df0e5c((long *)(lVar8 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eaae8 + 0x20) + 0xc0) + 0x80));
    }
    *(undefined8 *)(lVar8 + 0x20) = 0;
    uVar10 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar9 = FUN_03398a84(DAT_083c08a8);
    FUN_04266cbc(uVar9,uVar10,DAT_083eaac8);
    puVar1 = (undefined8 *)(unaff_x19 + 0x138);
    *puVar1 = uVar9;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)puVar1 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_04db5c74();
    *(undefined8 *)(unaff_x19 + 0x188) = 0;
    *(undefined8 *)(unaff_x19 + 0x180) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


