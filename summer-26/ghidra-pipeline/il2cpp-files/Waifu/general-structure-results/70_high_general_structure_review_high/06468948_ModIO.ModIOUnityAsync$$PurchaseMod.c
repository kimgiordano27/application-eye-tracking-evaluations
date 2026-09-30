/*
FUNCTION_NAME: ModIO.ModIOUnityAsync$$PurchaseMod
ENTRY_POINT: 06468948
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void ModIO_ModIOUnityAsync__PurchaseMod(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  if ((param_1 == 0) || (*(long *)(unaff_x19 + 0x48) == 0)) goto LAB_06468c48;
  FUN_07a17db8((float)(*(int *)(param_1 + 0x24) % 3) * 0.5,
               1.0 - (float)(*(int *)(param_1 + 0x24) / 3) * 0.5,*(long *)(unaff_x19 + 0x48),0);
  lVar10 = *(long *)(unaff_x19 + 0x28);
  if (lVar10 == 0) goto LAB_06468c48;
  iVar5 = *(int *)(lVar10 + 0x20);
  if (iVar5 == 3) {
    lVar10 = *(long *)(unaff_x19 + 0x48);
    if (lVar10 == 0) goto LAB_06468c48;
    uVar9 = FUN_07a17c0c(lVar10,0);
    FUN_07a17c9c(uVar9,0,lVar10,0);
    lVar10 = *(long *)(unaff_x19 + 0x48);
    if (lVar10 == 0) goto LAB_06468c48;
    uVar9 = FUN_07a17d28(lVar10,0);
LAB_06468ac4:
    FUN_07a17db8(uVar9,lVar10,0);
LAB_06468ad0:
    lVar10 = *(long *)(unaff_x19 + 0x28);
    if (lVar10 == 0) goto LAB_06468c48;
  }
  else {
    if (iVar5 == 2) {
      lVar10 = *(long *)(unaff_x19 + 0x48);
      if (lVar10 == 0) goto LAB_06468c48;
      FUN_07a17c0c(lVar10,0);
      FUN_07a17c9c(0,lVar10,0);
      lVar10 = *(long *)(unaff_x19 + 0x48);
      if (lVar10 == 0) goto LAB_06468c48;
      FUN_07a17d28(lVar10,0);
      uVar9 = 0x3f800000;
      goto LAB_06468ac4;
    }
    if (iVar5 == 1) {
      lVar10 = *(long *)(unaff_x19 + 0x48);
      if (lVar10 == 0) goto LAB_06468c48;
      in_stack_00000008 = 0;
      if (DAT_086ef7d8 == (code *)0x0) {
        DAT_086ef7d8 = (code *)FUN_033d1b68(
                                           "UnityEngine.RectTransform::set_anchorMin_Injected(UnityEngine.Vector2&)"
                                           );
      }
      (*DAT_086ef7d8)(lVar10,&stack0x00000008);
      lVar10 = *(long *)(unaff_x19 + 0x48);
      if (lVar10 == 0) goto LAB_06468c48;
      in_stack_00000008 = NEON_fmov(0x3f800000,4);
      if (DAT_086ef7e8 == (code *)0x0) {
        DAT_086ef7e8 = (code *)FUN_033d1b68(
                                           "UnityEngine.RectTransform::set_anchorMax_Injected(UnityEngine.Vector2&)"
                                           );
      }
      (*DAT_086ef7e8)(lVar10,&stack0x00000008);
      goto LAB_06468ad0;
    }
  }
  plVar1 = (long *)(unaff_x19 + 0x58);
  if (*(char *)(lVar10 + 0x4c) == '\0') {
    lVar10 = *plVar1;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = FUN_07a0d2c4(lVar10,0,0);
    if ((uVar8 & 1) != 0) {
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_06468c48;
      if (DAT_086ef168 == (code *)0x0) {
        DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
      uVar9 = 0;
      goto LAB_06468be4;
    }
  }
  else {
    lVar10 = *plVar1;
    if (lVar10 == 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06468c48;
      lVar10 = FUN_03fa1ab4(*(long *)(unaff_x19 + 0x50),DAT_0840c760);
      *plVar1 = lVar10;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar1 >> 0x12 & 0x7fff);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar10 = *plVar1;
      }
      if (lVar10 == 0) goto LAB_06468c48;
    }
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
    uVar9 = 1;
LAB_06468be4:
    (*DAT_086ef168)(lVar10,uVar9);
  }
  lVar10 = *(long *)(unaff_x19 + 0x28);
  if (lVar10 != 0) {
    bVar7 = *(char *)(lVar10 + 0x3c) != '\0';
    lVar3 = 0x38;
    if (bVar7) {
      lVar3 = 0x44;
    }
    lVar4 = 0x34;
    if (bVar7) {
      lVar4 = 0x40;
    }
    FUN_06468070(*(undefined4 *)(lVar10 + 0x34),*(undefined4 *)(lVar10 + lVar3),
                 -*(float *)(lVar10 + lVar4),-*(float *)(lVar10 + 0x38),
                 *(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30),
                 *(undefined8 *)(unaff_x19 + 0x48),*(char *)(lVar10 + 0x4f) == '\0');
    return;
  }
LAB_06468c48:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


