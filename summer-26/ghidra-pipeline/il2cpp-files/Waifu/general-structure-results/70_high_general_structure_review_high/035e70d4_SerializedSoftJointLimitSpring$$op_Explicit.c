/*
FUNCTION_NAME: SerializedSoftJointLimitSpring$$op_Explicit
ENTRY_POINT: 035e70d4
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void SerializedSoftJointLimitSpring__op_Explicit
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long unaff_x19;
  undefined8 uVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000050;
  float in_stack_00000058;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_033b9870(param_1);
  }
  uVar4 = FUN_07a119fc(param_5,0,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
    if (DAT_086d7c56 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c56 = '\x01';
    }
    uVar11 = NEON_fmov(0x3e800000,4);
    uVar12 = *(undefined8 *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x18);
    param_3 = (float)((ulong)in_stack_00000050 >> 0x20) +
              (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar11 >> 0x20);
    param_4 = in_stack_00000058 + *(float *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x20) * 0.25;
    if (DAT_086d7c53 == '\0') {
      FUN_0335b6c8(&DAT_083d0300,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c53 = '\x01';
    }
    puVar5 = *(undefined4 **)(DAT_083d0300 + 0xb8);
    FUN_035dcb1c(CONCAT44(param_3,(float)in_stack_00000050 + (float)uVar12 * (float)uVar11),param_3,
                 param_4,*puVar5,puVar5[1],puVar5[2],puVar5[3],0x3f800000,uVar6);
  }
  plVar9 = (long *)(unaff_x19 + 0x38);
  lVar7 = *plVar9;
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a0d2c4(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) goto LAB_035e73fc;
    if (DAT_086ef250 == (code *)0x0) {
      DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    }
    lVar7 = (*DAT_086ef250)(lVar7);
    lVar8 = *plVar9;
    if (lVar8 == 0) goto LAB_035e73fc;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar8 = (*DAT_086ef188)(lVar8);
    if ((lVar8 == 0) || (fVar10 = (float)FUN_07a18d2c(lVar8,0), lVar7 == 0)) goto LAB_035e73fc;
    FUN_07a18dcc(fVar10 + 0.0,param_3 + 3.5,param_4 + 0.0,lVar7,0);
    if (*plVar9 == 0) goto LAB_035e73fc;
    if (*(int *)(*plVar9 + 0x9dc) < 1) {
      *plVar9 = 0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar9 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
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
  uVar4 = (*DAT_086f09e0)(0x1b);
  if ((uVar4 & 1) != 0) {
    *plVar9 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar9 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
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


