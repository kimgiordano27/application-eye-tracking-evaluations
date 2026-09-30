/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$__springs_ITEM_Serialize_ColliderGroups
ENTRY_POINT: 07c700dc
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer____springs_ITEM_Serialize_ColliderGroups
               (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  code *pcVar11;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  uVar6 = FUN_07a0d2c4();
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x23 + 0x460) + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar7 = FUN_07c9f3c4(0);
    pcVar11 = *(code **)(unaff_x24 + 400);
    if (pcVar11 == (code *)0x0) {
      pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x24 + 400) = pcVar11;
    }
    uVar8 = (*pcVar11)();
    if (lVar7 == 0) goto LAB_07c703d8;
    uVar9 = FUN_07c9f928(lVar7);
    FUN_07c9d610(lVar7,uVar8,uVar9);
  }
  if (*(int *)(DAT_083cd920 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (*(char *)(*(long *)(DAT_083cd920 + 0xb8) + 9) == '\0') {
    bVar4 = FUN_07a15bec(0);
    bVar4 = bVar4 & 1;
  }
  else {
    bVar4 = 0;
  }
  if (unaff_x19 != 0) {
    *(byte *)(unaff_x19 + 0x210) = bVar4;
    uVar6 = FUN_07c6f244();
    if ((uVar6 & 1) != 0) {
      uVar8 = FUN_07c6c12c();
      if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870(*(long *)(unaff_x22 + 0x7d8));
      }
      uVar6 = FUN_07a0d2c4(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        plVar10 = (long *)FUN_07c6c12c();
        if (plVar10 == (long *)0x0) goto LAB_07c703d8;
        uVar6 = (**(code **)(*plVar10 + 0x2f8))(plVar10,*(undefined8 *)(*plVar10 + 0x300));
        if ((uVar6 & 1) != 0) {
          uVar5 = FUN_07c6c99c();
          if (DAT_086ef758 == (code *)0x0) {
            DAT_086ef758 = (code *)FUN_033d1b68(
                                               "UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)"
                                               );
          }
          (*DAT_086ef758)(uVar5 & 1);
        }
      }
      uVar8 = FUN_07a15ce0(*(undefined8 *)(unaff_x19 + 0x180),*(undefined4 *)(unaff_x19 + 0x124),
                           *(int *)(unaff_x19 + 0x11c) == 1,*(int *)(unaff_x19 + 0x128) - 1U < 2,
                           *(int *)(unaff_x19 + 0x11c) == 2,0,DAT_0842d1f0,
                           *(undefined4 *)(unaff_x19 + 0x134));
      *(undefined8 *)(unaff_x19 + 0x100) = uVar8;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x100U >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x100U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(char *)(unaff_x19 + 0x210) == '\0') {
        FUN_07c6f084();
      }
    }
    uVar6 = FUN_07a15ad4(0);
    if (((uVar6 & 1) == 0) || (*(char *)(unaff_x19 + 0x210) != '\0')) {
      uVar8 = FUN_07c6c12c();
      if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870(*(long *)(unaff_x22 + 0x7d8));
      }
      uVar6 = FUN_07a0d2c4(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        plVar10 = (long *)FUN_07c6c12c();
        if (plVar10 == (long *)0x0) goto LAB_07c703d8;
        (**(code **)(*plVar10 + 0x268))(plVar10,1,*(undefined8 *)(*plVar10 + 0x270));
      }
      lVar7 = *(long *)(unaff_x19 + 0x180);
      if (lVar7 == 0) goto LAB_07c703d8;
      *(uint *)(unaff_x19 + 0x194) =
           *(uint *)(lVar7 + 0x10) & ((int)*(uint *)(lVar7 + 0x10) >> 0x1f ^ 0xffffffffU);
      *(uint *)(unaff_x19 + 0x198) = *(uint *)(lVar7 + 0x10) & (int)*(uint *)(lVar7 + 0x10) >> 0x1f;
    }
    else {
      lVar7 = *(long *)(unaff_x19 + 0x180);
    }
    *(undefined1 *)(unaff_x19 + 0x1d0) = 1;
    *(long *)(unaff_x19 + 0x1f8) = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x1f8U >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x1f8U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(unaff_x19 + 0x200) = 0;
    FUN_07c6ee94();
    FUN_07c6d0ac();
    return;
  }
LAB_07c703d8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


