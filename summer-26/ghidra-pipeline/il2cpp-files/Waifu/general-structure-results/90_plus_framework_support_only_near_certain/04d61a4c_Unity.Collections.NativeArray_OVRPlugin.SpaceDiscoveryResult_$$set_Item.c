/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 04d61a4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cb4e8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ce7a0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0xb77) = 1;
  }
  if ((char)unaff_x19[4] != '\0') {
    if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
      FUN_033b9870();
    }
                    /* WARNING: Subroutine does not return */
    FUN_068befc0(0);
  }
  *(undefined1 *)(unaff_x19 + 4) = 1;
  if (*unaff_x19 == 0) {
    if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar7 = **(long **)(DAT_083ce7a0 + 0xb8);
    do {
      if (*unaff_x19 != 0) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_04d61ad8;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
      if (bVar5) {
        *unaff_x19 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_04d61ad8:
    DataMemoryBarrier(2,3);
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (bVar5) {
      return;
    }
  }
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar10 = unaff_x19[2];
  if (lVar10 == 0) {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    FUN_04d61dbc();
    return;
  }
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar8 = *(long *)(unaff_x20 + 0x20);
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618(lVar8);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    lVar7 = FUN_03398a84();
    lVar9 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *(ushort *)(lVar9 + 0x135);
    lVar8 = lVar9;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_0338f618(lVar9);
      uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar8 = *(long *)(unaff_x20 + 0x20);
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_0338f618(lVar8);
    }
    FUN_05b897d8(lVar7,uVar11,uVar12,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x50));
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    *(long *)(*(long *)(lVar8 + 0xb8) + 0x10) = lVar7;
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    if (DAT_08908cd0 != 0) {
      uVar1 = *(long *)(lVar8 + 0xb8) + 0x10;
      puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  if (*(int *)(DAT_083cb4e8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  FUN_03f6ce5c(lVar10,lVar7);
  return;
}


