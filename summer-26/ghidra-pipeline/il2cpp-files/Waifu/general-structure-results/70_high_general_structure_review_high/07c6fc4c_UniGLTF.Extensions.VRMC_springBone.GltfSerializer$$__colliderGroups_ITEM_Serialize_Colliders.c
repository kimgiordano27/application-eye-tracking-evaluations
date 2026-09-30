/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$__colliderGroups_ITEM_Serialize_Colliders
ENTRY_POINT: 07c6fc4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer____colliderGroups_ITEM_Serialize_Colliders
               (long param_1)

{
  int *piVar1;
  ulong *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long *unaff_x19;
  long unaff_x20;
  long lVar12;
  long unaff_x22;
  long *unaff_x23;
  ulong *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (unaff_x28 = unaff_x28 + 1, unaff_x28 < param_1) {
    if ((int)param_1 <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
      FUN_06850b80(0);
    }
    uVar3 = *(ushort *)(unaff_x29 + unaff_x28 * 2);
    uVar6 = unaff_w27;
    if (uVar3 != 3 && uVar3 != 0xd) {
      uVar6 = (uint)uVar3;
    }
    in_stack_00000018._4_2_ = (undefined2)uVar6;
    lVar9 = unaff_x19[0x2a];
    if (lVar9 == 0) {
      if ((int)unaff_x19[0x26] != 0) {
        if (*unaff_x23 != 0) {
          uVar6 = FUN_07c70988();
          goto LAB_07c6fbd0;
        }
        goto LAB_07c6fecc;
      }
    }
    else {
      lVar12 = *unaff_x23;
      if (lVar12 == 0) goto LAB_07c6fecc;
      uVar6 = (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),lVar12,*(undefined4 *)(lVar12 + 0x10),uVar6,
                         *(undefined8 *)(lVar9 + 0x28));
LAB_07c6fbd0:
      in_stack_00000018._4_2_ = (undefined2)uVar6;
    }
    if (((uVar6 & 0xffff) == 10) && ((int)unaff_x19[0x25] == 1)) {
      lVar9 = unaff_x19[0x20];
      if (lVar9 == 0) goto LAB_07c6fecc;
      lVar12 = *unaff_x23;
      if (DAT_086ef750 == (code *)0x0) {
        DAT_086ef750 = (code *)FUN_033d1b68(
                                           "UnityEngine.TouchScreenKeyboard::set_text(System.String)"
                                           );
      }
      (*DAT_086ef750)(lVar9,lVar12);
      goto LAB_07c6fe8c;
    }
    if ((uVar6 & 0xffff) != 0) {
      lVar9 = *unaff_x23;
      if (*(int *)(*(long *)(unaff_x26 + 2000) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = FUN_0677b114((long)&stack0x00000018 + 4,0);
      lVar9 = FUN_06660dbc(lVar9,uVar8,0);
      *unaff_x23 = lVar9;
      if (DAT_08908cd0 != 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
          if (bVar5) {
            *unaff_x24 = *unaff_x24 | unaff_x25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    param_1 = (long)*(int *)(unaff_x20 + 0x10);
  }
  iVar7 = *(int *)((long)unaff_x19 + 0x134);
  if (0 < iVar7) {
    lVar9 = *unaff_x23;
    if (lVar9 == 0) goto LAB_07c6fecc;
    if (iVar7 < *(int *)(lVar9 + 0x10)) {
      lVar9 = FUN_066706f8(lVar9,0,iVar7,0);
      *unaff_x23 = lVar9;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + in_stack_00000008;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = *puVar2 | 1L << (in_stack_00000010 & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
  }
  lVar9 = unaff_x19[0x20];
  if (lVar9 != 0) {
    if (DAT_086ef780 == (code *)0x0) {
      DAT_086ef780 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_canGetSelection()");
    }
    uVar10 = (*DAT_086ef780)(lVar9);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x23;
      if (lVar9 == 0) goto LAB_07c6fecc;
      iVar7 = *(int *)(lVar9 + 0x10);
      piVar1 = (int *)((long)unaff_x19 + 0x194);
      *(int *)(unaff_x19 + 0x33) = iVar7;
      if (iVar7 < 0) {
        piVar1[0] = 0;
        piVar1[1] = 0;
      }
      else {
        *piVar1 = iVar7;
      }
    }
    else {
      FUN_07c6f59c();
      lVar9 = unaff_x19[0x30];
    }
    uVar10 = FUN_0666e380(lVar9);
    if ((uVar10 & 1) == 0) {
      lVar9 = unaff_x19[0x20];
      if (lVar9 == 0) goto LAB_07c6fecc;
      lVar12 = *unaff_x23;
      if (DAT_086ef750 == (code *)0x0) {
        DAT_086ef750 = (code *)FUN_033d1b68(
                                           "UnityEngine.TouchScreenKeyboard::set_text(System.String)"
                                           );
      }
      (*DAT_086ef750)(lVar9,lVar12);
    }
    FUN_07c6d004();
    FUN_07c6d0ac();
    lVar9 = unaff_x19[0x20];
    if (lVar9 != 0) {
      pcVar11 = *(code **)(unaff_x22 + 0x770);
      if (pcVar11 == (code *)0x0) {
        pcVar11 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
        *(code **)(unaff_x22 + 0x770) = pcVar11;
      }
      iVar7 = (*pcVar11)(lVar9);
      if (iVar7 != 0) {
        lVar9 = unaff_x19[0x20];
        if (lVar9 == 0) goto LAB_07c6fecc;
        pcVar11 = *(code **)(unaff_x22 + 0x770);
        if (pcVar11 == (code *)0x0) {
          pcVar11 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
          *(code **)(unaff_x22 + 0x770) = pcVar11;
        }
        iVar7 = (*pcVar11)(lVar9);
        if (iVar7 == 2) {
          *(undefined1 *)(unaff_x19 + 0x40) = 1;
        }
        else {
          lVar9 = unaff_x19[0x20];
          if (lVar9 == 0) goto LAB_07c6fecc;
          pcVar11 = *(code **)(unaff_x22 + 0x770);
          if (pcVar11 == (code *)0x0) {
            pcVar11 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
            *(code **)(unaff_x22 + 0x770) = pcVar11;
          }
          iVar7 = (*pcVar11)(lVar9);
          if (iVar7 == 1) {
LAB_07c6fe8c:
            FUN_07c708e0();
          }
        }
        (**(code **)(*unaff_x19 + 0x388))();
      }
      return;
    }
  }
LAB_07c6fecc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


