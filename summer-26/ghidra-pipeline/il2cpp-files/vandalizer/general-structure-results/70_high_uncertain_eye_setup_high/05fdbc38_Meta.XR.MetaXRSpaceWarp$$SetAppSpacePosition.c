/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpacePosition
ENTRY_POINT: 05fdbc38
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__SetAppSpacePosition(void)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  
  fVar2 = (float)FUN_05fddf5c();
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = unaff_s8, fVar5 = unaff_s9, lVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0),
     lVar1 != 0)) {
    fVar3 = (float)FUN_06e6a5c4(lVar1,0);
    FUN_06e6a69c(fVar2 + fVar3,unaff_s8 + fVar4,unaff_s9 + fVar5,lVar1,0);
    FUN_05fdd668();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


