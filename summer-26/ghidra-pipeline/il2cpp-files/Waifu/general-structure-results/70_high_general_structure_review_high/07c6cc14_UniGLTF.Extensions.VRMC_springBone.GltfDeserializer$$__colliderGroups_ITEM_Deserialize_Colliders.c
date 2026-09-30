/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfDeserializer$$__colliderGroups_ITEM_Deserialize_Colliders
ENTRY_POINT: 07c6cc14
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_springBone_GltfDeserializer____colliderGroups_ITEM_Deserialize_Colliders
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  uint uVar10;
  long unaff_x20;
  long lVar11;
  uint unaff_w23;
  ulong uVar12;
  ulong uVar13;
  undefined8 in_stack_00000008;
  
  lVar7 = FUN_06670990(param_2,param_3,**(undefined8 **)(param_1 + 0xb8),0);
  if (*(int *)(unaff_x19 + 0x128) == 0) {
    if ((lVar7 == 0) ||
       (lVar7 = FUN_06670990(lVar7,DAT_0842d3f8,*(undefined8 *)(unaff_x20 + 0x1f0),0), lVar7 == 0))
    goto LAB_07c6cf18;
    lVar7 = FUN_06670990(lVar7,DAT_0842d318,*(undefined8 *)(unaff_x20 + 0x1f0),0);
  }
  lVar11 = *(long *)(unaff_x19 + 0x150);
  plVar1 = (long *)(unaff_x19 + 0x180);
  if ((lVar11 == 0) && (*(int *)(unaff_x19 + 0x130) == 0)) {
    iVar4 = *(int *)(unaff_x19 + 0x134);
    if (0 < iVar4) {
      if (lVar7 == 0) goto LAB_07c6cf18;
      if (iVar4 < *(int *)(lVar7 + 0x10)) {
        lVar7 = FUN_066706f8(lVar7,0,iVar4,0);
      }
    }
    *plVar1 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar1 >> 0x12 & 0x7fff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    uVar13 = (ulong)plVar1 >> 0x12 & 0x7fff;
    *plVar1 = *(long *)(unaff_x20 + 0x1f0);
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + uVar13;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar11 = *(long *)(unaff_x19 + 0x150);
    }
    if (lVar11 == 0) {
      lVar11 = FUN_03398a84(DAT_083d73b0);
      FUN_07c6cf2c();
    }
    if (lVar7 == 0) goto LAB_07c6cf18;
    uVar10 = *(uint *)(unaff_x19 + 0x134);
    uVar3 = *(uint *)(lVar7 + 0x10);
    *(uint *)(unaff_x19 + 0x198) = uVar3;
    *(uint *)(unaff_x19 + 0x194) = uVar3;
    if ((int)uVar10 < 1) {
LAB_07c6cd2c:
      uVar10 = uVar3;
      if ((int)uVar3 < 1) goto LAB_07c6cdf8;
    }
    else {
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if ((int)uVar3 < (int)uVar10) goto LAB_07c6cd2c;
    }
    uVar12 = 0;
    puVar2 = &DAT_0873ccb0 + uVar13;
    do {
      lVar9 = *plVar1;
      if (lVar9 == 0) goto LAB_07c6cf18;
      if ((long)*(int *)(lVar7 + 0x10) <= (long)uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_06850b80(0);
      }
      if (lVar11 == 0) goto LAB_07c6cf18;
      in_stack_00000008._4_2_ =
           (**(code **)(lVar11 + 0x18))
                     (*(undefined8 *)(lVar11 + 0x40),lVar9,*(undefined4 *)(lVar9 + 0x10),
                      *(undefined2 *)(lVar7 + 0x14 + uVar12 * 2),*(undefined8 *)(lVar11 + 0x28));
      if (in_stack_00000008._4_2_ != 0) {
        lVar9 = *plVar1;
        if (*(int *)(DAT_083c97d0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar8 = FUN_0677b114((long)&stack0x00000008 + 4,0);
        lVar9 = FUN_06660dbc(lVar9,uVar8,0);
        *plVar1 = lVar9;
        if (DAT_08908cd0 != 0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
  }
LAB_07c6cdf8:
  lVar7 = *(long *)(unaff_x19 + 0x100);
  if (lVar7 != 0) {
    lVar11 = *plVar1;
    if (DAT_086ef750 == (code *)0x0) {
      DAT_086ef750 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::set_text(System.String)"
                                         );
    }
    (*DAT_086ef750)(lVar7,lVar11);
  }
  if (*(long *)(unaff_x19 + 0x180) != 0) {
    iVar4 = *(int *)(*(long *)(unaff_x19 + 0x180) + 0x10);
    if (iVar4 < *(int *)(unaff_x19 + 0x194)) {
      *(int *)(unaff_x19 + 0x198) = iVar4;
      *(int *)(unaff_x19 + 0x194) = iVar4;
    }
    else if (iVar4 < *(int *)(unaff_x19 + 0x198)) {
      *(int *)(unaff_x19 + 0x198) = iVar4;
    }
    if ((unaff_w23 & 1) != 0) {
      FUN_07c6d004();
    }
    FUN_07c6d0ac();
    return;
  }
LAB_07c6cf18:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


