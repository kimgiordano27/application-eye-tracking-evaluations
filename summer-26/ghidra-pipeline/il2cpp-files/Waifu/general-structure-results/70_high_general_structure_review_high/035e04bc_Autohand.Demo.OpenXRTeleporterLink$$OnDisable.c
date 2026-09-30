/*
FUNCTION_NAME: Autohand.Demo.OpenXRTeleporterLink$$OnDisable
ENTRY_POINT: 035e04bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_15;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2
*/


void Autohand_Demo_OpenXRTeleporterLink__OnDisable
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  long lVar12;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 uVar13;
  
  if (param_4 != 0) {
    uVar11 = *(undefined8 *)(unaff_x19 + 200);
    uVar13 = FUN_07a18d2c(param_4,0);
    if (DAT_086d7c53 == '\0') {
      FUN_0335b6c8(&DAT_083d0300,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c53 = '\x01';
    }
    puVar9 = *(undefined4 **)(DAT_083d0300 + 0xb8);
    lVar6 = FUN_035dc5a8(uVar13,param_2,param_3,*puVar9,puVar9[1],puVar9[2],puVar9[3],uVar11);
    if (lVar6 != 0) {
      if (DAT_086ef250 == (code *)0x0) {
        DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
      }
      lVar7 = (*DAT_086ef250)(lVar6);
      if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083cb1e8);
      }
      lVar12 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
      if (lVar12 != 0) {
        if (DAT_086ef250 == (code *)0x0) {
          DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        }
        uVar11 = (*DAT_086ef250)(lVar12);
        if (lVar7 != 0) {
          if (DAT_086ef840 == (code *)0x0) {
            DAT_086ef840 = (code *)FUN_033d1b68(
                                               "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                               );
          }
          (*DAT_086ef840)(lVar7,uVar11,1);
          lVar6 = FUN_03fa1bc8(lVar6,DAT_0840cb20);
          lVar7 = *unaff_x27;
          if (((lVar7 != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) && (lVar6 != 0)) {
            FUN_035c4294(*(undefined4 *)(lVar7 + 0x4c),(float)*(int *)(lVar7 + 0x54),
                         *(undefined4 *)(lVar7 + 0x88),lVar6,*(undefined8 *)(lVar7 + 0x18),
                         *(undefined4 *)(lVar7 + 0x34),*(undefined8 *)(lVar7 + 0xb8),
                         *(undefined8 *)(lVar7 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                         *(undefined8 *)(unaff_x19 + 0x38));
            if (((*(long *)(unaff_x19 + 0x30) != 0) &&
                (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xdb0), lVar6 != 0)) &&
               ((lVar7 = FUN_03c89df4(lVar6,DAT_08405888), lVar6 = DAT_083f4490, lVar7 != 0 &&
                ((*unaff_x27 != 0 && (lVar7 = *(long *)(lVar7 + 0x20), lVar7 != 0)))))) {
              uVar11 = *(undefined8 *)(*unaff_x27 + 0x18);
              lVar12 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar12 != 0) {
                uVar2 = *(uint *)(lVar7 + 0x18);
                if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                  puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar10 = uVar11;
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
                  FUN_04ab0e54(lVar7,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                uVar11 = *(undefined8 *)(unaff_x19 + 0x90);
                if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
                  FUN_033b9870();
                }
                uVar5 = FUN_07a0d2c4(uVar11,0,0);
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
                  pcVar8 = *(code **)(unaff_x25 + 400);
                  if (pcVar8 == (code *)0x0) {
                    pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                    *(code **)(unaff_x25 + 400) = pcVar8;
                  }
                  lVar6 = (*pcVar8)();
                  if (lVar6 != 0) {
                    if (DAT_086ef280 == (code *)0x0) {
                      DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()"
                                                         );
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
    }
  }
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


