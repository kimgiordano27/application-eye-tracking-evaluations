/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 07a6872c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose
               (long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  float unaff_w22;
  
code_r0x07a6872c:
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_0899be20(*(float *)(param_1 + unaff_x21 * 4) * unaff_w22,*(long *)(unaff_x19 + 0x20),param_3
                 ,0);
    lVar2 = *(long *)(unaff_x19 + 0x28);
    lVar4 = unaff_x21;
    do {
      unaff_x21 = lVar4 + 1;
      if (lVar2 == 0) goto LAB_07a68754;
      uVar3 = lVar4 - 7;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar3) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_07a68768;
      uVar1 = *(uint *)(lVar2 + unaff_x21 * 4);
      param_3 = (ulong)uVar1;
      lVar4 = unaff_x21;
    } while (uVar1 == 0xffffffff);
    if ((unaff_x20 != 0) && (param_1 = *(long *)(unaff_x20 + 0x18), param_1 != 0))
    goto code_r0x07a68720;
  }
LAB_07a68754:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
code_r0x07a68720:
  if (*(uint *)(param_1 + 0x18) <= uVar3) {
LAB_07a68768:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  goto code_r0x07a6872c;
}


