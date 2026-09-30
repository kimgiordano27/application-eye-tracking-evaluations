/*
FUNCTION_NAME: VRM.VRMSerializer$$Serialize_vrm_secondaryAnimation_boneGroups__colliderGroups
ENTRY_POINT: 07bef65c
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


void VRM_VRMSerializer__Serialize_vrm_secondaryAnimation_boneGroups__colliderGroups(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int iVar13;
  long unaff_x26;
  int iStack000000000000000c;
  
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0xb8) + 0x30);
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
  lVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x3b8));
  pcVar9 = *(code **)(unaff_x20 + 0x490);
  if (pcVar9 == (code *)0x0) {
    pcVar9 = (code *)FUN_033d1b68("UnityEngine.Event::Internal_Create(System.Int32)");
    *(code **)(unaff_x20 + 0x490) = pcVar9;
  }
  uVar6 = (*pcVar9)(0);
  *(undefined8 *)(lVar5 + 0x10) = uVar6;
  pcVar9 = *(code **)(unaff_x25 + 0x470);
  if (pcVar9 == (code *)0x0) {
    pcVar9 = (code *)FUN_033d1b68("UnityEngine.Event::set_type(UnityEngine.EventType)");
    *(code **)(unaff_x25 + 0x470) = pcVar9;
  }
  (*pcVar9)(lVar5,8);
  plVar10 = (long *)(*(long *)(*(long *)(unaff_x23 + 0xc88) + 0xb8) + 0x38);
  *plVar10 = lVar5;
  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  iVar13 = *(int *)(*(long *)(*(long *)(unaff_x24 + 0x968) + 0xb8) + 0x40);
  uVar6 = FUN_03398a84(DAT_083c50f8);
  FUN_04ab0488(uVar6,iVar13 + 1,DAT_083f4488);
  puVar8 = (undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0xc88) + 0xb8) + 0x10);
  *puVar8 = uVar6;
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
  iVar13 = 0;
  while( true ) {
    lVar5 = *(long *)(unaff_x24 + 0x968);
    iStack000000000000000c = iVar13;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      FUN_033b9870();
      lVar5 = *(long *)(unaff_x24 + 0x968);
    }
    lVar11 = *(long *)(*(long *)(unaff_x23 + 0xc88) + 0xb8);
    uVar6 = *(undefined8 *)(lVar11 + 8);
    lVar11 = *(long *)(lVar11 + 0x10);
    if (*(int *)(*(long *)(lVar5 + 0xb8) + 0x40) < iVar13) break;
    uVar7 = FUN_0682c29c(&stack0x0000000c,0);
    uVar6 = FUN_06660dbc(uVar6,uVar7,0);
    lVar5 = DAT_083f4490;
    if (lVar11 == 0) goto LAB_07bef95c;
    lVar12 = *(long *)(lVar11 + 0x10);
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_07bef95c;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      puVar8 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
      *puVar8 = uVar6;
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
      FUN_04ab0e54(lVar11,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    iVar13 = iVar13 + 1;
  }
  uVar6 = FUN_06660dbc(uVar6,DAT_08455520,0);
  lVar5 = DAT_083f4490;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar11 + 0x10);
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar2 = *(uint *)(lVar11 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
        puVar8 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *puVar8 = uVar6;
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
        FUN_04ab0e54(lVar11,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
        ;
      }
      return;
    }
  }
LAB_07bef95c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


