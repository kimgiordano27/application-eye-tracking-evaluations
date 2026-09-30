/*
FUNCTION_NAME: VRM.VRMSerializer$$Serialize_vrm_secondaryAnimation_colliderGroups_ITEM
ENTRY_POINT: 07bef6e4
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void VRM_VRMSerializer__Serialize_vrm_secondaryAnimation_colliderGroups_ITEM(code *param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int iVar11;
  int iStack000000000000000c;
  
  *(code **)(unaff_x25 + 0x470) = param_1;
  (*param_1)();
  puVar8 = (undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0xc88) + 0xb8) + 0x38);
  *puVar8 = unaff_x19;
  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  iVar11 = *(int *)(*(long *)(*(long *)(unaff_x24 + 0x968) + 0xb8) + 0x40);
  uVar5 = FUN_03398a84(DAT_083c50f8);
  FUN_04ab0488(uVar5,iVar11 + 1,DAT_083f4488);
  puVar8 = (undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0xc88) + 0xb8) + 0x10);
  *puVar8 = uVar5;
  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  iVar11 = 0;
  while( true ) {
    lVar6 = *(long *)(unaff_x24 + 0x968);
    iStack000000000000000c = iVar11;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      FUN_033b9870();
      lVar6 = *(long *)(unaff_x24 + 0x968);
    }
    lVar9 = *(long *)(*(long *)(unaff_x23 + 0xc88) + 0xb8);
    uVar5 = *(undefined8 *)(lVar9 + 8);
    lVar9 = *(long *)(lVar9 + 0x10);
    if (*(int *)(*(long *)(lVar6 + 0xb8) + 0x40) < iVar11) break;
    uVar7 = FUN_0682c29c(&stack0x0000000c,0);
    uVar5 = FUN_06660dbc(uVar5,uVar7,0);
    lVar6 = DAT_083f4490;
    if (lVar9 == 0) goto LAB_07bef95c;
    lVar10 = *(long *)(lVar9 + 0x10);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_07bef95c;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
      puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
      *puVar8 = uVar5;
      if (*(int *)(unaff_x22 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      FUN_04ab0e54(lVar9,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    iVar11 = iVar11 + 1;
  }
  uVar5 = FUN_06660dbc(uVar5,DAT_08455520,0);
  lVar6 = DAT_083f4490;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x10);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
        *puVar8 = uVar5;
        if (*(int *)(unaff_x22 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        FUN_04ab0e54(lVar9,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_07bef95c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


