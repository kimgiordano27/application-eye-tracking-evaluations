/*
FUNCTION_NAME: VRM.VRMSerializer$$Serialize_vrm_meta
ENTRY_POINT: 07beca44
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_20;telemetry_or_network_hits_4
*/


void VRM_VRMSerializer__Serialize_vrm_meta(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 unaff_w21;
  long *plVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_0335b6c8(param_1 + 0x7c0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f4f18,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f4f20,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f4f28,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f4f08,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c52c0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d1d08,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08430918,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084480c0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x55c) = unaff_w21;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  plVar11 = (long *)(unaff_x19 + 0x58);
  if (*plVar11 != 0) {
    FUN_07bed744();
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a0d2c4(uVar10,0,0);
  if ((uVar6 & 1) == 0) {
LAB_07becc28:
    lVar7 = *plVar11;
    if (lVar7 != 0) goto LAB_07becc30;
    lVar7 = FUN_03398a84(DAT_083d1d08);
    FUN_07c49a44(lVar7,0);
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar8 = (*DAT_086ef190)();
    if (lVar8 == 0) goto LAB_07becf84;
    uVar10 = FUN_07a11ba4(lVar8,0);
    uVar10 = FUN_06660dbc(uVar10,DAT_08430918,0);
    if (lVar7 == 0) goto LAB_07becf84;
    FUN_07c2ba90(lVar7,uVar10,0);
    *plVar11 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_07becc84;
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_07becf84;
    lVar7 = FUN_07c66d44(*(long *)(unaff_x19 + 0x50),0);
    *plVar11 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar7 = *plVar11;
    }
    if (lVar7 == 0) {
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_079ca0b0(DAT_084480c0,0);
      goto LAB_07becc28;
    }
LAB_07becc30:
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar8 = (*DAT_086ef190)();
    if (lVar8 == 0) goto LAB_07becf84;
    uVar10 = FUN_07a11ba4(lVar8,0);
    uVar10 = FUN_06660dbc(uVar10,DAT_08430918,0);
    FUN_07c2ba90(lVar7,uVar10,0);
LAB_07becc84:
    lVar7 = *plVar11;
  }
  if (lVar7 == 0) goto LAB_07becf84;
  if (*(int *)(lVar7 + 0x2b4) != 1) {
    plVar9 = *(long **)(lVar7 + 0x3a0);
    *(undefined4 *)(lVar7 + 0x2b4) = 1;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x338))(plVar9,lVar7,0x100000,*(undefined8 *)(*plVar9 + 0x340));
    }
  }
  if (DAT_086ef170 == (code *)0x0) {
    DAT_086ef170 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_isActiveAndEnabled()");
  }
  uVar6 = (*DAT_086ef170)();
  if ((uVar6 & 1) != 0) {
    FUN_07becfd0();
  }
  if (*plVar11 == 0) goto LAB_07becf84;
  uVar5 = FUN_07c335e8(*plVar11,0);
  *(undefined4 *)(unaff_x19 + 0x60) = uVar5;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07becf64;
  plVar11 = (long *)(unaff_x19 + 0x48);
  lVar7 = *plVar11;
  uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x10);
  if (lVar7 == 0) {
    lVar7 = FUN_03398a84(DAT_083c52c0);
    FUN_04ab05b0(lVar7,uVar10,DAT_083f4f08);
    *plVar11 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_07bece60;
    }
  }
  else {
    FUN_04ab1d60(lVar7,*(undefined4 *)(lVar7 + 0x18),uVar10,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f4f18 + 0x20) + 0xc0) + 0x90));
LAB_07bece60:
    lVar7 = *plVar11;
  }
  if (lVar7 != 0) {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000008 = 0;
    FUN_05fd5ad4(&stack0x00000008,lVar7,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f4f28 + 0x20) + 0xc0) + 0x138));
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar6 = FUN_05fd5b44(&stack0x00000020,DAT_083e77b8), lVar7 = in_stack_00000030,
          (uVar6 & 1) != 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (DAT_086ef170 == (code *)0x0) {
        DAT_086ef170 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_isActiveAndEnabled()");
      }
      uVar6 = (*DAT_086ef170)(lVar7);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(lVar7 + 0x58) == 0) {
          FUN_07bec9dc(lVar7);
        }
        else {
          FUN_07bed668();
        }
      }
    }
    lVar7 = *plVar11;
    if (lVar7 != 0) {
      iVar2 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar2) {
        FUN_06853510(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0);
      }
LAB_07becf64:
      FUN_07bed818();
      return;
    }
  }
LAB_07becf84:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


