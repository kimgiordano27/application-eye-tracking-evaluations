/*
FUNCTION_NAME: OVRPlugin$$IsPerfMetricsSupported
ENTRY_POINT: 06ac2820
PROGRAM: Waifu-libil2cpp.so
SCORE: 154
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3
*/


void OVRPlugin__IsPerfMetricsSupported(code *param_1,float param_2)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x22;
  float fVar3;
  float unaff_s11;
  float unaff_s12;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_033d1b68("UnityEngine.CapsuleCollider::set_radius(System.Single)");
    *(code **)(unaff_x22 + 0xb8) = param_1;
  }
  (*param_1)();
  if (DAT_086f20c8 == (code *)0x0) {
    DAT_086f20c8 = (code *)FUN_033d1b68("UnityEngine.CapsuleCollider::set_height(System.Single)");
  }
  (*DAT_086f20c8)(unaff_s12 + unaff_s12 + (param_2 - ABS(unaff_s11)));
  if (DAT_086f20d8 == (code *)0x0) {
    DAT_086f20d8 = (code *)FUN_033d1b68("UnityEngine.CapsuleCollider::set_direction(System.Int32)");
  }
  (*DAT_086f20d8)();
  if (DAT_086d7c55 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c55 = '\x01';
  }
  lVar2 = *(long *)(DAT_083d2c90 + 0xb8);
  fVar3 = unaff_s11 + (param_2 - ABS(unaff_s11)) * 0.5;
  FUN_07a873d8(fVar3 * *(float *)(lVar2 + 0x48),fVar3 * *(float *)(lVar2 + 0x4c),
               fVar3 * *(float *)(lVar2 + 0x50));
  if (DAT_086ef188 == (code *)0x0) {
    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
  }
  lVar2 = (*DAT_086ef188)();
  if (lVar2 != 0) {
    if (DAT_086ef840 == (code *)0x0) {
      DAT_086ef840 = (code *)FUN_033d1b68(
                                         "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                         );
    }
    (*DAT_086ef840)(lVar2);
    FUN_07a19be8(lVar2,0);
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar2 = (*DAT_086ef190)();
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(unaff_x19 + 0x4c);
      if (DAT_086ef260 == (code *)0x0) {
        DAT_086ef260 = (code *)FUN_033d1b68("UnityEngine.GameObject::set_layer(System.Int32)");
      }
      (*DAT_086ef260)(lVar2,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


