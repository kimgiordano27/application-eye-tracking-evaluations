/*
FUNCTION_NAME: Autohand.Demo.OpenXRMover$$TurnAndHeight
ENTRY_POINT: 035df9bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_15;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2
*/


void Autohand_Demo_OpenXRMover__TurnAndHeight(ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x19;
  long lVar10;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar11;
  
  if ((param_1 & 1) != 0) {
    pcVar8 = *(code **)(unaff_x25 + 400);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x25 + 400) = pcVar8;
    }
    lVar5 = (*pcVar8)();
    if (lVar5 == 0) goto LAB_035e11b0;
    if (DAT_086ef258 == (code *)0x0) {
      DAT_086ef258 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_layer()");
    }
    iVar4 = (*DAT_086ef258)(lVar5);
    if (iVar4 != 2) {
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar5 = (*DAT_086ef188)();
      lVar10 = *(long *)(unaff_x19 + 0x30);
      if (lVar10 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar6 = (*DAT_086ef188)(lVar10);
      if (lVar5 == 0) goto LAB_035e11b0;
      if (DAT_086ef910 == (code *)0x0) {
        DAT_086ef910 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                           );
      }
      uVar7 = (*DAT_086ef910)(lVar5,uVar6);
      if ((uVar7 & 1) == 0) {
        if (DAT_086f1fe0 == (code *)0x0) {
          DAT_086f1fe0 = (code *)FUN_033d1b68("UnityEngine.Collider::get_isTrigger()");
        }
        uVar7 = (*DAT_086f1fe0)();
        if ((uVar7 & 1) == 0) {
          lVar5 = *(long *)(unaff_x19 + 0x68);
          *(undefined1 *)(unaff_x19 + 100) = 1;
          if (lVar5 == 0) goto LAB_035e11b0;
          if (DAT_086f1fd0 == (code *)0x0) {
            DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)")
            ;
          }
          (*DAT_086f1fd0)(lVar5,0);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x90);
          if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar7 = FUN_07a0d2c4(uVar6,0,0);
          if ((uVar7 & 1) != 0) {
            lVar5 = *(long *)(unaff_x19 + 0x90);
            if (lVar5 == 0) goto LAB_035e11b0;
            if (DAT_086ef278 == (code *)0x0) {
              DAT_086ef278 = (code *)FUN_033d1b68(
                                                 "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                 );
            }
            (*DAT_086ef278)(lVar5,0);
          }
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if (lVar5 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar5 + 0x100) == 1) {
            uVar6 = *(undefined8 *)(lVar5 + 200);
            if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar7 = FUN_07a0d2c4(uVar6,0,0);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_035e11b0;
              uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 200);
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              lVar5 = (*DAT_086ef188)();
              if (lVar5 == 0) goto LAB_035e11b0;
              uVar11 = FUN_07a18d2c(lVar5,0);
              if (DAT_086d7c53 == '\0') {
                FUN_0335b6c8(&DAT_083d0300,1);
                DataMemoryBarrier(2,3);
                DAT_086d7c53 = '\x01';
              }
              lVar5 = FUN_035dcb1c(uVar11,uVar6);
              plVar9 = (long *)(unaff_x19 + 0xa8);
              *plVar9 = lVar5;
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
                lVar5 = *plVar9;
              }
              if (lVar5 == 0) goto LAB_035e11b0;
              if (DAT_086ef250 == (code *)0x0) {
                DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
              }
              lVar5 = (*DAT_086ef250)(lVar5);
              if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                FUN_033b9870(DAT_083cb1e8);
              }
              lVar10 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_035e11b0;
              if (DAT_086ef250 == (code *)0x0) {
                DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
              }
              uVar6 = (*DAT_086ef250)(lVar10);
              if (lVar5 == 0) goto LAB_035e11b0;
              if (DAT_086ef840 == (code *)0x0) {
                DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
              }
              (*DAT_086ef840)(lVar5,uVar6,1);
            }
          }
          FUN_035e11c0();
          uVar6 = FUN_03c89df4();
          if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
            FUN_033b9870(*(long *)(unaff_x26 + 0x7d8));
          }
          uVar7 = FUN_07a11b14(uVar6,0);
          if ((uVar7 & 1) == 0) {
            uVar6 = FUN_03c89df4();
            if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
              FUN_033b9870(*(long *)(unaff_x26 + 0x7d8));
            }
            uVar7 = FUN_07a11b14(uVar6,0);
            if ((uVar7 & 1) == 0) {
              FUN_035e182c();
              goto LAB_035e02f4;
            }
          }
          pcVar8 = *(code **)(unaff_x25 + 400);
          if (pcVar8 == (code *)0x0) {
            pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
            *(code **)(unaff_x25 + 400) = pcVar8;
          }
          (*pcVar8)();
          FUN_035dc68c();
        }
      }
    }
  }
LAB_035e02f4:
  pcVar8 = *(code **)(unaff_x25 + 400);
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    *(code **)(unaff_x25 + 400) = pcVar8;
  }
  lVar5 = (*pcVar8)();
  if (lVar5 != 0) {
    if (DAT_086ef280 == (code *)0x0) {
      DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
    }
    uVar7 = (*DAT_086ef280)(lVar5);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(unaff_x19 + 0xf8);
    if (lVar5 != 0) {
      if (DAT_086f1e98 == (code *)0x0) {
        DAT_086f1e98 = (code *)FUN_033d1b68(
                                           "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                           );
      }
      (*DAT_086f1e98)(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0xf8);
      if (lVar5 != 0) {
        if (DAT_086f1e78 == (code *)0x0) {
          DAT_086f1e78 = (code *)FUN_033d1b68(
                                             "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_086f1e78)(lVar5,0);
        return;
      }
    }
  }
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


