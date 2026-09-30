/*
FUNCTION_NAME: XRHandOffset$$GetDefaultRotationOffset
ENTRY_POINT: 035e110c
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2
*/


void XRHandOffset__GetDefaultRotationOffset(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int in_w8;
  code *pcVar8;
  ulong *in_x9;
  long lVar9;
  undefined8 *puVar10;
  ulong in_x10;
  ulong in_x11;
  long unaff_x19;
  long lVar11;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  
  while( true ) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(in_x9,0x10);
    if (bVar4) {
      *in_x9 = in_x11 | in_x10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    lVar11 = DAT_083f4490;
    if (cVar3 == '\0') break;
    in_x11 = *in_x9;
  }
  if (((*(long *)(unaff_x19 + 0x38) != 0) && (*unaff_x27 != 0)) &&
     (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar6 != 0)) {
    uVar7 = *(undefined8 *)(*unaff_x27 + 0x18);
    lVar9 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
        *puVar10 = uVar7;
        if (in_w8 != 0) {
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
        FUN_04ab0e54(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar7 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_07a0d2c4(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
        lVar11 = *(long *)(unaff_x19 + 0x90);
        if (lVar11 == 0) goto LAB_035e11b0;
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar11,0);
      }
      lVar11 = *(long *)(unaff_x19 + 0x68);
      *(undefined1 *)(unaff_x19 + 100) = 1;
      if (lVar11 != 0) {
        if (DAT_086f1fd0 == (code *)0x0) {
          DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
        }
        (*DAT_086f1fd0)(lVar11,0);
        FUN_035e182c();
        pcVar8 = *(code **)(unaff_x25 + 400);
        if (pcVar8 == (code *)0x0) {
          pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          *(code **)(unaff_x25 + 400) = pcVar8;
        }
        lVar11 = (*pcVar8)();
        if (lVar11 != 0) {
          if (DAT_086ef280 == (code *)0x0) {
            DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
          }
          uVar5 = (*DAT_086ef280)(lVar11);
          if ((uVar5 & 1) == 0) {
            return;
          }
          lVar11 = *(long *)(unaff_x19 + 0xf8);
          if (lVar11 != 0) {
            if (DAT_086f1e98 == (code *)0x0) {
              DAT_086f1e98 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                                 );
            }
            (*DAT_086f1e98)(lVar11,0);
            lVar11 = *(long *)(unaff_x19 + 0xf8);
            if (lVar11 != 0) {
              if (DAT_086f1e78 == (code *)0x0) {
                DAT_086f1e78 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                                  );
              }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*DAT_086f1e78)(lVar11,0);
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


