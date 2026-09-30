/*
FUNCTION_NAME: DeviceData$$.ctor
ENTRY_POINT: 035e07a8
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2
*/


void DeviceData___ctor(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int in_w8;
  code *pcVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x23;
  long lVar11;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  
  if (in_w8 == 0) {
    FUN_0335b6c8(&DAT_083d0300,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0xc53) = 1;
  }
  lVar6 = FUN_035dc5a8();
  if (lVar6 != 0) {
    if (DAT_086ef250 == (code *)0x0) {
      DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    }
    lVar7 = (*DAT_086ef250)(lVar6);
    if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cb1e8);
    }
    lVar11 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
    if (lVar11 != 0) {
      if (DAT_086ef250 == (code *)0x0) {
        DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
      }
      uVar8 = (*DAT_086ef250)(lVar11);
      if (lVar7 != 0) {
        if (DAT_086ef840 == (code *)0x0) {
          DAT_086ef840 = (code *)FUN_033d1b68(
                                             "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                             );
        }
        (*DAT_086ef840)(lVar7,uVar8,1);
        lVar6 = FUN_03fa1bc8(lVar6,DAT_0840cb20);
        lVar7 = *unaff_x27;
        if ((((lVar7 != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) && (lVar6 != 0)) &&
           (((FUN_035c4294(*(undefined4 *)(lVar7 + 0x4c),(float)*(int *)(lVar7 + 0x54),
                           *(undefined4 *)(lVar7 + 0x88),lVar6,*(undefined8 *)(lVar7 + 0x18),
                           *(undefined4 *)(lVar7 + 0x34),*(undefined8 *)(lVar7 + 0xb8),
                           *(undefined8 *)(lVar7 + 0xc0)), lVar6 = DAT_083f4490, unaff_x21 != 0 &&
             (*unaff_x27 != 0)) && (lVar7 = *(long *)(unaff_x21 + 0x28), lVar7 != 0)))) {
          uVar8 = *(undefined8 *)(*unaff_x27 + 0x18);
          lVar11 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *puVar10 = uVar8;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
            }
            else {
              FUN_04ab0e54(lVar7,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = *(undefined8 *)(unaff_x19 + 0x90);
            if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar5 = FUN_07a0d2c4(uVar8,0,0);
            if ((uVar5 & 1) != 0) {
              lVar6 = *(long *)(unaff_x19 + 0x90);
              if (lVar6 == 0) goto LAB_035e11b0;
              if (DAT_086ef278 == (code *)0x0) {
                DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
              }
              (*DAT_086ef278)(lVar6,0);
            }
            lVar6 = *(long *)(unaff_x19 + 0x68);
            *(undefined1 *)(unaff_x19 + 100) = 1;
            if (lVar6 != 0) {
              if (DAT_086f1fd0 == (code *)0x0) {
                DAT_086f1fd0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::set_enabled(System.Boolean)"
                                                  );
              }
              (*DAT_086f1fd0)(lVar6,0);
              FUN_035e182c();
              pcVar9 = *(code **)(unaff_x25 + 400);
              if (pcVar9 == (code *)0x0) {
                pcVar9 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                *(code **)(unaff_x25 + 400) = pcVar9;
              }
              lVar6 = (*pcVar9)();
              if (lVar6 != 0) {
                if (DAT_086ef280 == (code *)0x0) {
                  DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
                }
                uVar5 = (*DAT_086ef280)(lVar6);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                lVar6 = *(long *)(unaff_x19 + 0xf8);
                if (lVar6 != 0) {
                  if (DAT_086f1e98 == (code *)0x0) {
                    DAT_086f1e98 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                                  );
                  }
                  (*DAT_086f1e98)(lVar6,0);
                  lVar6 = *(long *)(unaff_x19 + 0xf8);
                  if (lVar6 != 0) {
                    if (DAT_086f1e78 == (code *)0x0) {
                      DAT_086f1e78 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                                  );
                    }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*DAT_086f1e78)(lVar6,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


