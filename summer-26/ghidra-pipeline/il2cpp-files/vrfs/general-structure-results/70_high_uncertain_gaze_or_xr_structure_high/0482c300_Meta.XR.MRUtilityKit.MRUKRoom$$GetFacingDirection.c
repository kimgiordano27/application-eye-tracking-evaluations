/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetFacingDirection
ENTRY_POINT: 0482c300
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float Meta_XR_MRUtilityKit_MRUKRoom__GetFacingDirection
                (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (unaff_x20 != 0) {
    fVar2 = (float)FUN_049afb50();
    lVar1 = FUN_051e5130();
    if (lVar1 != 0) {
      fVar3 = (float)FUN_04f1cc5c(lVar1,0);
      fVar5 = ABS(param_2);
      if (ABS(param_2) <= ABS(param_3)) {
        fVar5 = ABS(param_3);
      }
      fVar4 = ABS(fVar3);
      if (ABS(fVar3) <= fVar5) {
        fVar4 = fVar5;
      }
      return fVar2 * fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


