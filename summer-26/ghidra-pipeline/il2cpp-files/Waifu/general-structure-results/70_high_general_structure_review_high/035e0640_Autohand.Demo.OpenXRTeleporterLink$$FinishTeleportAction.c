/*
FUNCTION_NAME: Autohand.Demo.OpenXRTeleporterLink$$FinishTeleportAction
ENTRY_POINT: 035e0640
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_9;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2
*/


void Autohand_Demo_OpenXRTeleporterLink__FinishTeleportAction(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  
  FUN_035c4294();
  if ((((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xdb0), lVar6 != 0)) &&
      (lVar7 = FUN_03c89df4(lVar6,DAT_08405888), lVar6 = DAT_083f4490, lVar7 != 0)) &&
     ((*unaff_x27 != 0 && (lVar7 = *(long *)(lVar7 + 0x20), lVar7 != 0)))) {
    uVar8 = *(undefined8 *)(*unaff_x27 + 0x18);
    lVar10 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
        *puVar11 = uVar8;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        FUN_04ab0e54(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
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
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar6,0);
      }
      lVar6 = *(long *)(unaff_x19 + 0x68);
      *(undefined1 *)(unaff_x19 + 100) = 1;
      if (lVar6 != 0) {
        if (DAT_086f1fd0 == (code *)0x0) {
          DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
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
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


