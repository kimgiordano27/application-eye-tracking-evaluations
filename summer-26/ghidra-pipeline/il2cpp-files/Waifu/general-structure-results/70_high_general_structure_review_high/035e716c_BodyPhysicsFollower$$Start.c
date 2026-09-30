/*
FUNCTION_NAME: BodyPhysicsFollower$$Start
ENTRY_POINT: 035e716c
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void BodyPhysicsFollower__Start(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x21;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
  FUN_0335b6c8(param_2 + 0x300,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0xc53) = 1;
  fVar9 = (float)((ulong)uStack0000000000000000 >> 0x20);
  FUN_035dcb1c(uStack0000000000000000,fVar9);
  plVar7 = (long *)(unaff_x19 + 0x38);
  lVar5 = *plVar7;
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a0d2c4(lVar5,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x28);
    if (lVar5 == 0) goto LAB_035e73fc;
    if (DAT_086ef250 == (code *)0x0) {
      DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    }
    lVar5 = (*DAT_086ef250)(lVar5);
    lVar6 = *plVar7;
    if (lVar6 == 0) goto LAB_035e73fc;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar6 = (*DAT_086ef188)(lVar6);
    if ((lVar6 == 0) || (fVar8 = (float)FUN_07a18d2c(lVar6,0), lVar5 == 0)) goto LAB_035e73fc;
    FUN_07a18dcc(fVar8 + 0.0,fVar9 + 3.5,unaff_s8 + 0.0,lVar5,0);
    if (*plVar7 == 0) goto LAB_035e73fc;
    if (*(int *)(*plVar7 + 0x9dc) < 1) {
      *plVar7 = 0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
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
  uVar4 = (*DAT_086f09e0)(0x1b);
  if ((uVar4 & 1) != 0) {
    *plVar7 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
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


