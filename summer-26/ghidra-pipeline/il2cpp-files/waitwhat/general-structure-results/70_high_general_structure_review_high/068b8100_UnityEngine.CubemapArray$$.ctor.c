/*
FUNCTION_NAME: UnityEngine.CubemapArray$$.ctor
ENTRY_POINT: 068b8100
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_CubemapArray___ctor(undefined1 param_1 [16],float param_2,float param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  
  if (*(char *)(unaff_x19 + 0x4d0) != '\0') {
    lVar2 = FUN_069d3a80();
    if (lVar2 == 0) goto LAB_068b8384;
    fVar4 = (float)FUN_069e6fbc(lVar2,0);
    if (DAT_075457b7 == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_075457b7 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar4 = unaff_s8 *
            SQRT((param_3 - unaff_s12) * (param_3 - unaff_s12) +
                 (fVar4 - unaff_s9) * (fVar4 - unaff_s9) +
                 (param_2 - unaff_s10) * (param_2 - unaff_s10));
    unaff_s8 = fVar4;
    if (*(char *)(unaff_x19 + 0x4d1) != '\0') {
      fVar5 = *(float *)(unaff_x19 + 0x4d4);
      if (fVar4 <= *(float *)(unaff_x19 + 0x4d4)) {
        fVar5 = fVar4;
      }
      unaff_s8 = 0.0;
      if (0.0 <= fVar4) {
        unaff_s8 = fVar5;
      }
    }
  }
  if ((*(long *)(unaff_x19 + 0x4c8) != 0) &&
     (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x4c8),0), lVar2 != 0)) {
    FUN_069e7098(lVar2,0);
    FUN_069e77e4(unaff_s8,unaff_s8,unaff_s8,lVar2,0);
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
        FUN_068e4fc4(*(long *)(unaff_x19 + 0x4c8),0,0);
        if (*(long *)(unaff_x19 + 0x4c8) != 0) {
          *(undefined8 *)(*(long *)(unaff_x19 + 0x4c8) + 0x40) = 0;
          return;
        }
      }
    }
  }
LAB_068b8384:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


