/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 05d6e730
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition(void)

{
  long lVar1;
  ulong in_x9;
  long in_x10;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(long *)(in_x10 + 0x20);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar1 = 0;
    fVar7 = -INFINITY;
    uVar4 = uVar5;
    fVar6 = *(float *)(lVar2 + 0x28);
    while( true ) {
      if ((in_x9 & 0xffffffff) * 8 + -8 == lVar1) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                  (uVar4,uVar5,fVar6);
      }
      lVar3 = *(long *)(in_x10 + 0x28 + lVar1);
      if (lVar3 == 0) break;
      if (fVar7 < *(float *)(lVar3 + 0x18)) {
        uVar4 = CONCAT44(((float)((ulong)uVar5 >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20)) * 0.5,
                         ((float)uVar5 + (float)*(undefined8 *)(lVar3 + 0x20)) * 0.5);
        fVar6 = (*(float *)(lVar2 + 0x28) + *(float *)(lVar3 + 0x28)) * 0.5;
        fVar7 = *(float *)(lVar3 + 0x18);
      }
      lVar1 = lVar1 + 8;
      if (lVar1 == 0x20) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


