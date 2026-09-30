/*
FUNCTION_NAME: Proyecto26.RequestHelper$$set_EnableDebug
ENTRY_POINT: 035b1bd4
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Proyecto26_RequestHelper__set_EnableDebug(void)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x22;
  
  uVar5 = FUN_03c89df4();
  if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870(*(long *)(unaff_x22 + 0x7d8));
  }
  uVar6 = FUN_07a119fc(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if (lVar7 == 0) goto LAB_035b2044;
    FUN_03fa1ab4(lVar7,DAT_0840c6b0);
  }
  uVar5 = FUN_03c89df4();
  if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870(*(long *)(unaff_x22 + 0x7d8));
  }
  uVar6 = FUN_07a119fc(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if (lVar7 == 0) goto LAB_035b2044;
    FUN_03fa1ab4(lVar7,DAT_0840c3b0);
  }
  uVar5 = FUN_03c89df4();
  if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870(*(long *)(unaff_x22 + 0x7d8));
  }
  uVar6 = FUN_07a119fc(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if (lVar7 == 0) goto LAB_035b2044;
    FUN_03fa1ab4(lVar7,DAT_0840c4e8);
  }
  uVar5 = FUN_03c89df4();
  if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870(*(long *)(unaff_x22 + 0x7d8));
  }
  uVar6 = FUN_07a119fc(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if (lVar7 == 0) goto LAB_035b2044;
    FUN_03fa1ab4(lVar7,DAT_0840c4e0);
  }
  uVar5 = FUN_03c89df4();
  if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870(*(long *)(unaff_x22 + 0x7d8));
  }
  uVar6 = FUN_07a119fc(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if (lVar7 == 0) goto LAB_035b2044;
    FUN_03fa1ab4(lVar7,DAT_0840c4f0);
  }
  uVar5 = FUN_03c89df4();
  if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870(*(long *)(unaff_x22 + 0x7d8));
  }
  uVar6 = FUN_07a119fc(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if (lVar7 == 0) goto LAB_035b2044;
    FUN_03fa1ab4(lVar7,DAT_0840c510);
  }
  lVar7 = FUN_03c89df4();
  *(long *)(unaff_x19 + 0x2c8) = lVar7;
  plVar1 = (long *)(unaff_x19 + 0x2c8);
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
    lVar7 = *plVar1;
  }
  if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a119fc(lVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if (lVar7 == 0) goto LAB_035b2044;
    lVar7 = FUN_03fa1ab4(lVar7,DAT_0840c508);
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
  }
  uVar5 = FUN_03c89df4();
  *(undefined8 *)(unaff_x19 + 0x420) = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + (unaff_x19 + 0x420U >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (unaff_x19 + 0x420U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03c89df4();
  *(undefined8 *)(unaff_x19 + 0xf78) = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + (unaff_x19 + 0xf78U >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (unaff_x19 + 0xf78U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*plVar1 != 0) {
    FUN_035cc6b8(*plVar1,0);
    return;
  }
LAB_035b2044:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


