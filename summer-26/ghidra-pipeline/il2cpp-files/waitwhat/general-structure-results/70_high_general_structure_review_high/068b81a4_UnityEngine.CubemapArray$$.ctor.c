/*
FUNCTION_NAME: UnityEngine.CubemapArray$$.ctor
ENTRY_POINT: 068b81a4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_CubemapArray___ctor(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 unaff_x21;
  float fVar4;
  float unaff_s8;
  float fVar5;
  
  fVar4 = *(float *)(unaff_x19 + 0x4d4);
  if (unaff_s8 <= *(float *)(unaff_x19 + 0x4d4)) {
    fVar4 = unaff_s8;
  }
  fVar5 = 0.0;
  if (0.0 <= unaff_s8) {
    fVar5 = fVar4;
  }
  if ((*(long *)(unaff_x19 + 0x4c8) != 0) &&
     (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x4c8),0), lVar2 != 0)) {
    FUN_069e7098(lVar2,0);
    FUN_069e77e4(fVar5,fVar5,fVar5,lVar2,0);
    if (*(long *)(unaff_x19 + 0x4c8) != 0) {
      plVar3 = *(long **)(*(long *)(unaff_x19 + 0x4c8) + 0x30);
      if (plVar3 != (long *)0x0) {
        lVar2 = *plVar3;
        bVar1 = *(byte *)(*(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo + 0x130);
        if ((*(byte *)(lVar2 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo)) {
          bVar1 = *(byte *)(*(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo
                           + 0x130);
          if ((bVar1 <= *(byte *)(lVar2 + 0x130)) &&
             (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo)) {
            FUN_06a573b4(plVar3,0);
          }
        }
        else {
          FUN_06a64eb4(plVar3,0);
        }
      }
      if (*(long *)(unaff_x19 + 0x4c8) != 0) {
        FUN_068e4fc4();
        if (*(long *)(unaff_x19 + 0x4c8) != 0) {
          *(undefined8 *)(*(long *)(unaff_x19 + 0x4c8) + 0x40) = unaff_x21;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


