/*
FUNCTION_NAME: FUN_035765a0
ENTRY_POINT: 035765a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_035765a0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_086d83d3 & 1) == 0) {
    FUN_0335b6c8(&DAT_083c89c0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cfc50,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0844c560,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0844c558,1);
    DataMemoryBarrier(2,3);
    DAT_086d83d3 = 1;
  }
  if (*(int *)(DAT_083c89c0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086ed358 == (code *)0x0) {
    DAT_086ed358 = (code *)FUN_033d1b68("UnityEngine.Application::get_persistentDataPath()");
  }
  uVar4 = (*DAT_086ed358)();
  if (*(int *)(DAT_083cfc50 + 0xe0) == 0) {
    FUN_033b9870(DAT_083cfc50);
  }
  uVar4 = FUN_067a4224(uVar4,DAT_0844c560,0);
  puVar6 = (undefined8 *)(param_1 + 0x38);
  *puVar6 = uVar4;
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
  if (DAT_086ed358 == (code *)0x0) {
    DAT_086ed358 = (code *)FUN_033d1b68("UnityEngine.Application::get_persistentDataPath()");
  }
  uVar4 = (*DAT_086ed358)();
  uVar4 = FUN_067a4224(uVar4,DAT_0844c558,0);
  puVar6 = (undefined8 *)(param_1 + 0x40);
  *puVar6 = uVar4;
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
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 == 0) goto LAB_0357693c;
    plVar8 = *(long **)(lVar7 + 0x138);
    *(undefined1 *)(lVar7 + 0x230) = 1;
    if (plVar8 == (long *)0x0) goto LAB_0357693c;
    if ((char)plVar8[0x5b] != '\x01') {
      *(undefined1 *)(plVar8 + 0x6e) = 1;
      *(undefined1 *)(plVar8 + 0x5b) = 1;
      (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
      (**(code **)(*plVar8 + 0x2e8))(plVar8,*(undefined8 *)(*plVar8 + 0x2f0));
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 == 0) goto LAB_0357693c;
    }
    lVar7 = *(long *)(lVar7 + 0x150);
    if (lVar7 != 0) {
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar7 = (*DAT_086ef190)(lVar7);
      if (lVar7 != 0) {
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar7,1);
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      plVar8 = *(long **)(lVar7 + 0x138);
      *(undefined1 *)(lVar7 + 0x230) = 1;
      if (plVar8 != (long *)0x0) {
        if ((char)plVar8[0x5b] != '\x01') {
          *(undefined1 *)(plVar8 + 0x6e) = 1;
          *(undefined1 *)(plVar8 + 0x5b) = 1;
          (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
          (**(code **)(*plVar8 + 0x2e8))(plVar8,*(undefined8 *)(*plVar8 + 0x2f0));
          lVar7 = *(long *)(param_1 + 0x28);
          if (lVar7 == 0) goto LAB_0357693c;
        }
        lVar7 = *(long *)(lVar7 + 0x150);
        if (lVar7 != 0) {
          if (DAT_086ef190 == (code *)0x0) {
            DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          }
          lVar7 = (*DAT_086ef190)(lVar7);
          if (lVar7 != 0) {
            if (DAT_086ef278 == (code *)0x0) {
              DAT_086ef278 = (code *)FUN_033d1b68(
                                                 "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                 );
            }
            (*DAT_086ef278)(lVar7,1);
          }
        }
        goto LAB_03576928;
      }
    }
LAB_0357693c:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
LAB_03576928:
  FUN_03576940(param_1);
  return;
}


