/*
FUNCTION_NAME: Autohand.Demo.OpenXRMover$$SetControllerHeight
ENTRY_POINT: 035e01c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2
*/


void Autohand_Demo_OpenXRMover__SetControllerHeight(code *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x25;
  long unaff_x26;
  
  (*param_1)();
  if ((*(long *)(unaff_x19 + 0x30) != 0) && (unaff_x21 != 0)) {
    FUN_035afb18();
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar1 != 0)) {
      FUN_07a22574(lVar1,0);
      if (*(char *)(unaff_x19 + 0x81) != '\0') {
        if ((*(long *)(unaff_x19 + 0x30) == 0) ||
           (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x560), lVar1 == 0)) goto LAB_035e11b0;
        FUN_07a22574(lVar1,0);
      }
      uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(int *)(*(long *)(unaff_x26 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar2 = FUN_07a0d2c4(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        lVar1 = *(long *)(unaff_x19 + 0x90);
        if (lVar1 == 0) goto LAB_035e11b0;
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar1,0);
      }
      lVar1 = *(long *)(unaff_x19 + 0x68);
      *(undefined1 *)(unaff_x19 + 100) = 1;
      if (lVar1 != 0) {
        if (DAT_086f1fd0 == (code *)0x0) {
          DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
        }
        (*DAT_086f1fd0)(lVar1,0);
        FUN_035e182c();
        pcVar3 = *(code **)(unaff_x25 + 400);
        if (pcVar3 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          *(code **)(unaff_x25 + 400) = pcVar3;
        }
        lVar1 = (*pcVar3)();
        if (lVar1 != 0) {
          if (DAT_086ef280 == (code *)0x0) {
            DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
          }
          uVar2 = (*DAT_086ef280)(lVar1);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar1 = *(long *)(unaff_x19 + 0xf8);
          if (lVar1 != 0) {
            if (DAT_086f1e98 == (code *)0x0) {
              DAT_086f1e98 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                                 );
            }
            (*DAT_086f1e98)(lVar1,0);
            lVar1 = *(long *)(unaff_x19 + 0xf8);
            if (lVar1 != 0) {
              if (DAT_086f1e78 == (code *)0x0) {
                DAT_086f1e78 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                                  );
              }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*DAT_086f1e78)(lVar1,0);
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


