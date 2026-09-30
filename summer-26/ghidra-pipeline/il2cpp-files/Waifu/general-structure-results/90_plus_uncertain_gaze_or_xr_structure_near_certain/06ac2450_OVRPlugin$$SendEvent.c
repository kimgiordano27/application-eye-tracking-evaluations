/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 06ac2450
PROGRAM: Waifu-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(void)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x23;
  
  pcVar2 = (code *)FUN_033d1b68();
  *(code **)(unaff_x23 + 0xe78) = pcVar2;
  (*pcVar2)();
  if (DAT_086ef188 == (code *)0x0) {
    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
  }
  lVar3 = (*DAT_086ef188)();
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
    (*DAT_086ef188)();
    FUN_06a5c824();
    if (DAT_086f1ed0 == (code *)0x0) {
      DAT_086f1ed0 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::Sleep()");
    }
    (*DAT_086f1ed0)();
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar3 = (*DAT_086ef190)();
    if (lVar3 != 0) {
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar3,0);
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar3 = (*DAT_086ef190)();
      if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(unaff_x19 + 0x4c);
        if (DAT_086ef260 == (code *)0x0) {
          DAT_086ef260 = (code *)FUN_033d1b68("UnityEngine.GameObject::set_layer(System.Int32)");
        }
        (*DAT_086ef260)(lVar3,uVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


