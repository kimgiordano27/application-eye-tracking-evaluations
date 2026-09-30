/*
FUNCTION_NAME: SerializedJointDrive$$op_Explicit
ENTRY_POINT: 035e6f1c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void SerializedJointDrive__op_Explicit(undefined1 param_1 [16],float param_2,float param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long unaff_x21;
  long lVar10;
  long unaff_x22;
  long *plVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  lVar5 = FUN_07a84b08();
  if (lVar5 == 0) goto LAB_035e73fc;
  uVar6 = FUN_03c89df4(lVar5,*(undefined8 *)(unaff_x22 + 0x898));
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870(*(long *)(unaff_x21 + 0x7d8));
  }
  uVar7 = FUN_07a0d2c4(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    lVar5 = FUN_07a84b08(&stack0x00000050,0);
    if (((lVar5 == 0) ||
        (lVar5 = FUN_03c89df4(lVar5,*(undefined8 *)(unaff_x22 + 0x898)), lVar5 == 0)) ||
       (*(long *)(lVar5 + 0x2d0) == 0)) goto LAB_035e73fc;
    uVar6 = FUN_035aae40(*(long *)(lVar5 + 0x2d0),0);
    uVar7 = FUN_0666e380(uVar6,DAT_08438178);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar5 = FUN_07a84b08(&stack0x00000050,0);
    if (lVar5 == 0) goto LAB_035e73fc;
    uVar6 = FUN_03c89df4(lVar5,*(undefined8 *)(unaff_x22 + 0x898));
    puVar8 = (undefined8 *)(unaff_x19 + 0x38);
    *puVar8 = uVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = *(long *)(unaff_x19 + 0x28);
    if (lVar5 == 0) goto LAB_035e73fc;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar5,1);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a0d2c4(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x28);
    if (lVar5 == 0) goto LAB_035e73fc;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar5,0);
  }
  else {
    lVar5 = FUN_07a84b08(&stack0x00000050,0);
    if (lVar5 == 0) goto LAB_035e73fc;
    uVar6 = FUN_03c89df4(lVar5,*(undefined8 *)(unaff_x22 + 0x898));
    if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870(*(long *)(unaff_x21 + 0x7d8));
    }
    uVar7 = FUN_07a119fc(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x38) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x2d0), lVar5 == 0)) goto LAB_035e73fc;
      param_2 = fStack0000000000000054;
      param_3 = in_stack_00000058;
      FUN_035a8fd4(fStack0000000000000050,fStack0000000000000054,in_stack_00000058,lVar5,0);
    }
    lVar5 = FUN_07a84b08(&stack0x00000050,0);
    if (lVar5 == 0) goto LAB_035e73fc;
    uVar6 = FUN_03c89df4(lVar5,*(undefined8 *)(unaff_x22 + 0x898));
    if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870(*(long *)(unaff_x21 + 0x7d8));
    }
    uVar7 = FUN_07a119fc(uVar6,0,0);
    fVar4 = in_stack_00000058;
    fVar12 = fStack0000000000000050;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
      if (DAT_086d7c56 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7c56 = '\x01';
      }
      uVar13 = NEON_fmov(0x3e800000,4);
      uVar14 = *(undefined8 *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x18);
      param_2 = fStack0000000000000054 +
                (float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar13 >> 0x20);
      param_3 = fVar4 + *(float *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x20) * 0.25;
      if (DAT_086d7c53 == '\0') {
        FUN_0335b6c8(&DAT_083d0300,1);
        DataMemoryBarrier(2,3);
        DAT_086d7c53 = '\x01';
      }
      puVar9 = *(undefined4 **)(DAT_083d0300 + 0xb8);
      FUN_035dcb1c(CONCAT44(param_2,fVar12 + (float)uVar14 * (float)uVar13),param_2,param_3,*puVar9,
                   puVar9[1],puVar9[2],puVar9[3],0x3f800000,uVar6);
    }
  }
  plVar11 = (long *)(unaff_x19 + 0x38);
  lVar5 = *plVar11;
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a0d2c4(lVar5,0,0);
  if ((uVar7 & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x28);
    if (lVar5 == 0) goto LAB_035e73fc;
    if (DAT_086ef250 == (code *)0x0) {
      DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    }
    lVar5 = (*DAT_086ef250)(lVar5);
    lVar10 = *plVar11;
    if (lVar10 == 0) goto LAB_035e73fc;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar10 = (*DAT_086ef188)(lVar10);
    if ((lVar10 == 0) || (fVar12 = (float)FUN_07a18d2c(lVar10,0), lVar5 == 0)) goto LAB_035e73fc;
    FUN_07a18dcc(fVar12 + 0.0,param_2 + 3.5,param_3 + 0.0,lVar5,0);
    if (*plVar11 == 0) goto LAB_035e73fc;
    if (*(int *)(*plVar11 + 0x9dc) < 1) {
      *plVar11 = 0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar5 = *(long *)(unaff_x19 + 0x28);
      if (lVar5 == 0) goto LAB_035e73fc;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar5,0);
    }
  }
  if (DAT_086f09e0 == (code *)0x0) {
    DAT_086f09e0 = (code *)FUN_033d1b68("UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)");
  }
  uVar7 = (*DAT_086f09e0)(0x1b);
  if ((uVar7 & 1) != 0) {
    *plVar11 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = *(long *)(unaff_x19 + 0x28);
    if (lVar5 == 0) {
LAB_035e73fc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar5,0);
  }
  return;
}


