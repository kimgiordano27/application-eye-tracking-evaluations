/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 06940b64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_1[2] != 0) {
    fVar4 = (float)FUN_06926524(param_1[2],0);
    if (((param_1[2] != 0) && (lVar3 = *(long *)(param_1[2] + 0xe8), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
      fVar8 = *(float *)(param_1 + 8);
      iVar2 = FUN_0694a438(lVar3,0);
      if (iVar2 != 0) {
        fVar5 = fVar4 / *(float *)(param_1 + 7);
        fVar7 = 1.0;
        if (fVar5 <= 1.0) {
          fVar7 = fVar5;
        }
        fVar6 = 0.0;
        if (0.0 <= fVar5) {
          fVar6 = fVar7;
        }
        fVar8 = fVar8 + *(float *)((long)param_1 + 0x44) * fVar6;
      }
      (**(code **)(*param_1 + 0x308))(fVar8,param_1,*(undefined8 *)(*param_1 + 0x310));
      if (((param_1[2] != 0) && (lVar3 = *(long *)(param_1[2] + 0xe8), lVar3 != 0)) &&
         (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
                    /* try { // try from 06940c0c to 06a40c33 has its CatchHandler @ 0694146c */
        fVar8 = ABS(fVar4) * DAT_015c5798;
        fVar4 = 1.0;
        if (fVar8 <= 1.0) {
          fVar4 = fVar8;
        }
        fVar7 = 0.0;
        if (0.0 <= fVar8) {
          fVar7 = fVar4;
        }
        fVar7 = fVar7 * (*(float *)((long)param_1 + 0x24) +
                        *(float *)(lVar3 + 0x13c) * *(float *)((long)param_1 + 0x3c));
        (**(code **)(*param_1 + 0x318))(fVar7,param_1,*(undefined8 *)(*param_1 + 800));
                    /* try { // try from 06940c70 to 06a40c97 has its CatchHandler @ 06941418 */
        lVar3 = 0x2f0;
        if (fVar7 <= DAT_015c5994) {
          lVar3 = 0x330;
        }
        lVar1 = 0x2e8;
        if (fVar7 <= DAT_015c5994) {
          lVar1 = 0x328;
        }
                    /* WARNING: Could not recover jumptable at 0x06940c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + lVar1))(param_1,*(undefined8 *)(*param_1 + lVar3));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


