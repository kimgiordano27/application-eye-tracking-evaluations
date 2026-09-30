/*
FUNCTION_NAME: SerializedSoftJointLimitSpring$$.ctor
ENTRY_POINT: 035e7140
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


void SerializedSoftJointLimitSpring___ctor(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x21;
  long lVar7;
  long unaff_x22;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 unaff_d8;
  float unaff_s9;
  
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  fVar10 = (float)((ulong)unaff_d8 >> 0x20) +
           (float)((ulong)uVar11 >> 0x20) * (float)((ulong)param_2 >> 0x20);
  fVar12 = unaff_s9 + *(float *)(*(long *)(param_1 + 0xb8) + 0x20) * 0.25;
  if (*(char *)(unaff_x22 + 0xc53) == '\0') {
    FUN_0335b6c8(&DAT_083d0300,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x22 + 0xc53) = 1;
  }
  puVar5 = *(undefined4 **)(DAT_083d0300 + 0xb8);
  FUN_035dcb1c(CONCAT44(fVar10,(float)unaff_d8 + (float)uVar11 * (float)param_2),fVar10,fVar12,
               *puVar5,puVar5[1],puVar5[2],puVar5[3],0x3f800000);
  plVar8 = (long *)(unaff_x19 + 0x38);
  lVar6 = *plVar8;
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a0d2c4(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x28);
    if (lVar6 == 0) goto LAB_035e73fc;
    if (DAT_086ef250 == (code *)0x0) {
      DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    }
    lVar6 = (*DAT_086ef250)(lVar6);
    lVar7 = *plVar8;
    if (lVar7 == 0) goto LAB_035e73fc;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar7 = (*DAT_086ef188)(lVar7);
    if ((lVar7 == 0) || (fVar9 = (float)FUN_07a18d2c(lVar7,0), lVar6 == 0)) goto LAB_035e73fc;
    FUN_07a18dcc(fVar9 + 0.0,fVar10 + 3.5,fVar12 + 0.0,lVar6,0);
    if (*plVar8 == 0) goto LAB_035e73fc;
    if (*(int *)(*plVar8 + 0x9dc) < 1) {
      *plVar8 = 0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar6 = *(long *)(unaff_x19 + 0x28);
      if (lVar6 == 0) goto LAB_035e73fc;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar6,0);
    }
  }
  if (DAT_086f09e0 == (code *)0x0) {
    DAT_086f09e0 = (code *)FUN_033d1b68("UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)");
  }
  uVar4 = (*DAT_086f09e0)(0x1b);
  if ((uVar4 & 1) != 0) {
    *plVar8 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar6 = *(long *)(unaff_x19 + 0x28);
    if (lVar6 == 0) {
LAB_035e73fc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar6,0);
  }
  return;
}


