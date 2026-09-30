/*
FUNCTION_NAME: XRHandOffset$$GetDefaultPositionOffset
ENTRY_POINT: 035e0fe8
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2
*/


void XRHandOffset__GetDefaultPositionOffset(long param_1)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *puVar11;
  long unaff_x22;
  long lVar12;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  lVar12 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (lVar12 != 0) {
    pcVar8 = *(code **)(unaff_x24 + 0x250);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
      *(code **)(unaff_x24 + 0x250) = pcVar8;
    }
    (*pcVar8)(lVar12);
    if (unaff_x22 != 0) {
      if (DAT_086ef840 == (code *)0x0) {
        DAT_086ef840 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                           );
      }
      (*DAT_086ef840)();
      lVar12 = FUN_03fa1bc8();
      lVar9 = *unaff_x27;
      if (((lVar9 != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) && (lVar12 != 0)) {
        FUN_035c4294(*(undefined4 *)(lVar9 + 0x4c),(float)*(int *)(lVar9 + 0x54),
                     *(undefined4 *)(lVar9 + 0x88),lVar12,*(undefined8 *)(lVar9 + 0x18),
                     *(undefined4 *)(lVar9 + 0x34),*(undefined8 *)(lVar9 + 0xb8),
                     *(undefined8 *)(lVar9 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                     *(undefined8 *)(unaff_x19 + 0x38));
        lVar12 = FUN_03fa1bc8();
        uVar7 = FUN_03c89df4();
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)(lVar12 + 0x20);
          *puVar11 = uVar7;
          iVar2 = *(int *)(unaff_x29 + 0xcd0);
          if (iVar2 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar12 = DAT_083f4490;
          if (((*(long *)(unaff_x19 + 0x38) != 0) && (*unaff_x27 != 0)) &&
             (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar9 != 0)) {
            uVar7 = *(undefined8 *)(*unaff_x27 + 0x18);
            lVar10 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar3 = *(uint *)(lVar9 + 0x18);
              if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                *puVar11 = uVar7;
                if (iVar2 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              else {
                FUN_04ab0e54(lVar9,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              uVar7 = *(undefined8 *)(unaff_x19 + 0x90);
              if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
                FUN_033b9870();
              }
              uVar6 = FUN_07a0d2c4(uVar7,0,0);
              if ((uVar6 & 1) != 0) {
                lVar12 = *(long *)(unaff_x19 + 0x90);
                if (lVar12 == 0) goto LAB_035e11b0;
                if (DAT_086ef278 == (code *)0x0) {
                  DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                }
                (*DAT_086ef278)(lVar12,0);
              }
              lVar12 = *(long *)(unaff_x19 + 0x68);
              *(undefined1 *)(unaff_x19 + 100) = 1;
              if (lVar12 != 0) {
                if (DAT_086f1fd0 == (code *)0x0) {
                  DAT_086f1fd0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::set_enabled(System.Boolean)"
                                                  );
                }
                (*DAT_086f1fd0)(lVar12,0);
                FUN_035e182c();
                pcVar8 = *(code **)(unaff_x25 + 400);
                if (pcVar8 == (code *)0x0) {
                  pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                  *(code **)(unaff_x25 + 400) = pcVar8;
                }
                lVar12 = (*pcVar8)();
                if (lVar12 != 0) {
                  if (DAT_086ef280 == (code *)0x0) {
                    DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
                  }
                  uVar6 = (*DAT_086ef280)(lVar12);
                  if ((uVar6 & 1) == 0) {
                    return;
                  }
                  lVar12 = *(long *)(unaff_x19 + 0xf8);
                  if (lVar12 != 0) {
                    if (DAT_086f1e98 == (code *)0x0) {
                      DAT_086f1e98 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                                  );
                    }
                    (*DAT_086f1e98)(lVar12,0);
                    lVar12 = *(long *)(unaff_x19 + 0xf8);
                    if (lVar12 != 0) {
                      if (DAT_086f1e78 == (code *)0x0) {
                        DAT_086f1e78 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                                  );
                      }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*DAT_086f1e78)(lVar12,0);
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
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


