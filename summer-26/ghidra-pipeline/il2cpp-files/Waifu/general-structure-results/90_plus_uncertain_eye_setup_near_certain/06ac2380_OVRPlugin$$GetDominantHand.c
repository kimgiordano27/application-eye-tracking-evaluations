/*
FUNCTION_NAME: OVRPlugin$$GetDominantHand
ENTRY_POINT: 06ac2380
PROGRAM: Waifu-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetDominantHand(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
  lVar2 = FUN_03398a84(param_1);
  FUN_07a0dda4(lVar2,param_2,0);
  if ((lVar2 != 0) && (lVar2 = FUN_03fa1ab4(lVar2,DAT_0840c778), lVar2 != 0)) {
    if (DAT_086f1e18 == (code *)0x0) {
      DAT_086f1e18 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::set_mass(System.Single)");
    }
    (*DAT_086f1e18)(0x3f800000,lVar2);
    if (DAT_086f1e48 == (code *)0x0) {
      DAT_086f1e48 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
    }
    (*DAT_086f1e48)(lVar2,1);
    if (DAT_086f1e28 == (code *)0x0) {
      DAT_086f1e28 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
    }
    (*DAT_086f1e28)(lVar2,0);
    if (DAT_086f1e78 == (code *)0x0) {
      DAT_086f1e78 = (code *)FUN_033d1b68(
                                         "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                         );
    }
    (*DAT_086f1e78)(lVar2,3);
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar3 = (*DAT_086ef188)(lVar2);
    if (lVar3 != 0) {
      if (DAT_086ef840 == (code *)0x0) {
        DAT_086ef840 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                           );
      }
      (*DAT_086ef840)(lVar3);
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      (*DAT_086ef188)(lVar2);
      FUN_06a5c824();
      if (DAT_086f1ed0 == (code *)0x0) {
        DAT_086f1ed0 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::Sleep()");
      }
      (*DAT_086f1ed0)(lVar2);
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar3 = (*DAT_086ef190)(lVar2);
      if (lVar3 != 0) {
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar3,0);
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        lVar3 = (*DAT_086ef190)(lVar2);
        if (lVar3 != 0) {
          uVar1 = *(undefined4 *)(unaff_x19 + 0x4c);
          if (DAT_086ef260 == (code *)0x0) {
            DAT_086ef260 = (code *)FUN_033d1b68("UnityEngine.GameObject::set_layer(System.Int32)");
          }
          (*DAT_086ef260)(lVar3,uVar1);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


