/*
FUNCTION_NAME: OVRPlugin$$GetHeadPoseModifier
ENTRY_POINT: 06ac26c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


long OVRPlugin__GetHeadPoseModifier
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5
               ,float param_6,undefined1 param_7 [16],float param_8,long param_9,undefined8 param_10
               ,undefined8 param_11)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_4;
  if ((DAT_086e2218 & 1) == 0) {
    FUN_0335b6c8(&DAT_0840c448,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cbb78,1);
    DataMemoryBarrier(2,3);
    DAT_086e2218 = 1;
  }
  lVar2 = FUN_03398a84(DAT_083cbb78);
  FUN_07a0dda4(lVar2,param_10,0);
  if ((lVar2 != 0) && (lVar2 = FUN_03fa1ab4(lVar2,DAT_0840c448), lVar2 != 0)) {
    cVar1 = *(char *)(param_9 + 0x48);
    if (DAT_086f1fe8 == (code *)0x0) {
      DAT_086f1fe8 = (code *)FUN_033d1b68("UnityEngine.Collider::set_isTrigger(System.Boolean)");
    }
    (*DAT_086f1fe8)(lVar2,cVar1 != '\0');
    param_4 = param_4 - (float)param_1;
    param_5 = param_5 - (float)param_2;
    param_6 = param_6 - (float)param_3;
    fVar5 = param_5;
    fVar6 = param_6;
    uVar4 = FUN_07a00a64(param_4,0);
    if (DAT_086d7cc9 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc9 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar8 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5) - ABS(param_8);
    if (DAT_086f20b8 == (code *)0x0) {
      DAT_086f20b8 = (code *)FUN_033d1b68("UnityEngine.CapsuleCollider::set_radius(System.Single)");
    }
    (*DAT_086f20b8)(param_7._0_8_,lVar2);
    if (DAT_086f20c8 == (code *)0x0) {
      DAT_086f20c8 = (code *)FUN_033d1b68("UnityEngine.CapsuleCollider::set_height(System.Single)");
    }
    (*DAT_086f20c8)(param_7._0_4_ + param_7._0_4_ + fVar8,lVar2);
    if (DAT_086f20d8 == (code *)0x0) {
      DAT_086f20d8 = (code *)FUN_033d1b68("UnityEngine.CapsuleCollider::set_direction(System.Int32)"
                                         );
    }
    (*DAT_086f20d8)(lVar2,2);
    if (DAT_086d7c55 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c55 = '\x01';
    }
    lVar3 = *(long *)(DAT_083d2c90 + 0xb8);
    param_8 = param_8 + fVar8 * 0.5;
    FUN_07a873d8(param_8 * *(float *)(lVar3 + 0x48),param_8 * *(float *)(lVar3 + 0x4c),
                 param_8 * *(float *)(lVar3 + 0x50),lVar2,0);
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
      (*DAT_086ef840)(lVar3,param_11,0);
      FUN_07a19be8(param_1,param_2,param_3,uVar4,fVar5,fVar6,fVar7,lVar3,0);
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar3 = (*DAT_086ef190)(lVar2);
      if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(param_9 + 0x4c);
        if (DAT_086ef260 == (code *)0x0) {
          DAT_086ef260 = (code *)FUN_033d1b68("UnityEngine.GameObject::set_layer(System.Int32)");
        }
        (*DAT_086ef260)(lVar3,uVar4);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


