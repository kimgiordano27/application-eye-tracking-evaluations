/*
FUNCTION_NAME: SerializedJointDrive$$get_maxForce
ENTRY_POINT: 035e6fcc
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void SerializedJointDrive__get_maxForce
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong in_x9;
  long in_x10;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  long unaff_x21;
  long lVar9;
  long unaff_x22;
  long *plVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  puVar1 = (ulong *)(in_x10 + param_1 * 8 + 0x46cb0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar7 = *(long *)(unaff_x19 + 0x28);
  if (lVar7 == 0) goto LAB_035e73fc;
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)(lVar7,1);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) goto LAB_035e73fc;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar7,0);
  }
  else {
    lVar7 = FUN_07a84b08(&stack0x00000050,0);
    if (lVar7 == 0) goto LAB_035e73fc;
    uVar8 = FUN_03c89df4(lVar7,*(undefined8 *)(unaff_x22 + 0x898));
    if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870(*(long *)(unaff_x21 + 0x7d8));
    }
    uVar5 = FUN_07a119fc(uVar8,0,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x38) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x2d0), lVar7 == 0)) goto LAB_035e73fc;
      param_3 = fStack0000000000000054;
      param_4 = in_stack_00000058;
      FUN_035a8fd4(fStack0000000000000050,fStack0000000000000054,in_stack_00000058,lVar7,0);
    }
    lVar7 = FUN_07a84b08(&stack0x00000050,0);
    if (lVar7 == 0) goto LAB_035e73fc;
    uVar8 = FUN_03c89df4(lVar7,*(undefined8 *)(unaff_x22 + 0x898));
    if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870(*(long *)(unaff_x21 + 0x7d8));
    }
    uVar5 = FUN_07a119fc(uVar8,0,0);
    fVar4 = in_stack_00000058;
    fVar11 = fStack0000000000000050;
    if ((uVar5 & 1) != 0) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
      if (DAT_086d7c56 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7c56 = '\x01';
      }
      uVar12 = NEON_fmov(0x3e800000,4);
      uVar13 = *(undefined8 *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x18);
      param_3 = fStack0000000000000054 +
                (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
      param_4 = fVar4 + *(float *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x20) * 0.25;
      if (DAT_086d7c53 == '\0') {
        FUN_0335b6c8(&DAT_083d0300,1);
        DataMemoryBarrier(2,3);
        DAT_086d7c53 = '\x01';
      }
      puVar6 = *(undefined4 **)(DAT_083d0300 + 0xb8);
      FUN_035dcb1c(CONCAT44(param_3,fVar11 + (float)uVar13 * (float)uVar12),param_3,param_4,*puVar6,
                   puVar6[1],puVar6[2],puVar6[3],0x3f800000,uVar8);
    }
  }
  plVar10 = (long *)(unaff_x19 + 0x38);
  lVar7 = *plVar10;
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(lVar7,0,0);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) goto LAB_035e73fc;
    if (DAT_086ef250 == (code *)0x0) {
      DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    }
    lVar7 = (*DAT_086ef250)(lVar7);
    lVar9 = *plVar10;
    if (lVar9 == 0) goto LAB_035e73fc;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar9 = (*DAT_086ef188)(lVar9);
    if ((lVar9 == 0) || (fVar11 = (float)FUN_07a18d2c(lVar9,0), lVar7 == 0)) goto LAB_035e73fc;
    FUN_07a18dcc(fVar11 + 0.0,param_3 + 3.5,param_4 + 0.0,lVar7,0);
    if (*plVar10 == 0) goto LAB_035e73fc;
    if (*(int *)(*plVar10 + 0x9dc) < 1) {
      *plVar10 = 0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar7 = *(long *)(unaff_x19 + 0x28);
      if (lVar7 == 0) goto LAB_035e73fc;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar7,0);
    }
  }
  if (DAT_086f09e0 == (code *)0x0) {
    DAT_086f09e0 = (code *)FUN_033d1b68("UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)");
  }
  uVar5 = (*DAT_086f09e0)(0x1b);
  if ((uVar5 & 1) != 0) {
    *plVar10 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) {
LAB_035e73fc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar7,0);
  }
  return;
}


