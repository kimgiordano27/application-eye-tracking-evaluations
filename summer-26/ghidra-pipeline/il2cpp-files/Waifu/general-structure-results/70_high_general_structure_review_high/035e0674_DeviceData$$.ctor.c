/*
FUNCTION_NAME: DeviceData$$.ctor
ENTRY_POINT: 035e0674
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2
*/


void DeviceData___ctor(long param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long lVar10;
  long unaff_x25;
  long unaff_x26;
  
  lVar10 = DAT_083f4490;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar8 = *(long *)(param_2 + 0x10);
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (lVar8 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
      *puVar9 = uVar6;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      FUN_04ab0e54(param_2,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      lVar10 = *(long *)(unaff_x19 + 0x90);
      if (lVar10 == 0) goto LAB_035e11b0;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar10,0);
    }
    lVar10 = *(long *)(unaff_x19 + 0x68);
    *(undefined1 *)(unaff_x19 + 100) = 1;
    if (lVar10 != 0) {
      if (DAT_086f1fd0 == (code *)0x0) {
        DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
      }
      (*DAT_086f1fd0)(lVar10,0);
      FUN_035e182c();
      pcVar7 = *(code **)(unaff_x25 + 400);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x25 + 400) = pcVar7;
      }
      lVar10 = (*pcVar7)();
      if (lVar10 != 0) {
        if (DAT_086ef280 == (code *)0x0) {
          DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
        }
        uVar5 = (*DAT_086ef280)(lVar10);
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar10 = *(long *)(unaff_x19 + 0xf8);
        if (lVar10 != 0) {
          if (DAT_086f1e98 == (code *)0x0) {
            DAT_086f1e98 = (code *)FUN_033d1b68(
                                               "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                               );
          }
          (*DAT_086f1e98)(lVar10,0);
          lVar10 = *(long *)(unaff_x19 + 0xf8);
          if (lVar10 != 0) {
            if (DAT_086f1e78 == (code *)0x0) {
              DAT_086f1e78 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                                 );
            }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*DAT_086f1e78)(lVar10,0);
            return;
          }
        }
      }
    }
  }
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


