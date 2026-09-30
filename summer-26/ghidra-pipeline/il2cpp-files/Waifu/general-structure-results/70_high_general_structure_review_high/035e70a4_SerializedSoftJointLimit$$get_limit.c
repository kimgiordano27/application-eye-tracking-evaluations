/*
FUNCTION_NAME: SerializedSoftJointLimit$$get_limit
ENTRY_POINT: 035e70a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void SerializedSoftJointLimit__get_limit(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long unaff_x19;
  long unaff_x21;
  long lVar9;
  long unaff_x22;
  long *plVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  if (param_1 != 0) {
    fVar13 = fStack0000000000000054;
    fVar15 = in_stack_00000058;
    FUN_035a8fd4(fStack0000000000000050,fStack0000000000000054,in_stack_00000058,param_1,0);
    lVar5 = FUN_07a84b08(&stack0x00000050,0);
    if (lVar5 != 0) {
      uVar6 = FUN_03c89df4(lVar5,*(undefined8 *)(unaff_x22 + 0x898));
      if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870(*(long *)(unaff_x21 + 0x7d8));
      }
      uVar7 = FUN_07a119fc(uVar6,0,0);
      fVar4 = in_stack_00000058;
      fVar11 = fStack0000000000000050;
      if ((uVar7 & 1) != 0) {
        uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
        if (DAT_086d7c56 == '\0') {
          FUN_0335b6c8(&DAT_083d2c90,1);
          DataMemoryBarrier(2,3);
          DAT_086d7c56 = '\x01';
        }
        uVar12 = NEON_fmov(0x3e800000,4);
        uVar14 = *(undefined8 *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x18);
        fVar13 = fStack0000000000000054 +
                 (float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
        fVar15 = fVar4 + *(float *)(*(long *)(DAT_083d2c90 + 0xb8) + 0x20) * 0.25;
        if (DAT_086d7c53 == '\0') {
          FUN_0335b6c8(&DAT_083d0300,1);
          DataMemoryBarrier(2,3);
          DAT_086d7c53 = '\x01';
        }
        puVar8 = *(undefined4 **)(DAT_083d0300 + 0xb8);
        FUN_035dcb1c(CONCAT44(fVar13,fVar11 + (float)uVar14 * (float)uVar12),fVar13,fVar15,*puVar8,
                     puVar8[1],puVar8[2],puVar8[3],0x3f800000,uVar6);
      }
      plVar10 = (long *)(unaff_x19 + 0x38);
      lVar5 = *plVar10;
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
        lVar9 = *plVar10;
        if (lVar9 == 0) goto LAB_035e73fc;
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar9 = (*DAT_086ef188)(lVar9);
        if ((lVar9 == 0) || (fVar11 = (float)FUN_07a18d2c(lVar9,0), lVar5 == 0)) goto LAB_035e73fc;
        FUN_07a18dcc(fVar11 + 0.0,fVar13 + 3.5,fVar15 + 0.0,lVar5,0);
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
          lVar5 = *(long *)(unaff_x19 + 0x28);
          if (lVar5 == 0) goto LAB_035e73fc;
          if (DAT_086ef278 == (code *)0x0) {
            DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)")
            ;
          }
          (*DAT_086ef278)(lVar5,0);
        }
      }
      if (DAT_086f09e0 == (code *)0x0) {
        DAT_086f09e0 = (code *)FUN_033d1b68("UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)")
        ;
      }
      uVar7 = (*DAT_086f09e0)(0x1b);
      if ((uVar7 & 1) != 0) {
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
        lVar5 = *(long *)(unaff_x19 + 0x28);
        if (lVar5 == 0) goto LAB_035e73fc;
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar5,0);
      }
      return;
    }
  }
LAB_035e73fc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


