/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClampRayOriginToCamFrustumPlanes
ENTRY_POINT: 07703f1c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepthRaycaster__ClampRayOriginToCamFrustumPlanes
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6,float param_7,float param_8)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  
  fVar5 = (in_s18 + in_s16 + in_s17) - in_s19;
  fVar7 = (in_s20 + param_2 + unaff_s8 * param_4) - in_s22;
  fVar3 = (float)FUN_09516eb8(param_3 - param_8,fVar5,fVar7,((in_s23 - in_s21) - param_1) - in_s24,0
                              ,0,param_6 * param_7,0);
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    fVar6 = fVar5;
    fVar8 = fVar7;
    lVar1 = FUN_095258d0(*(long *)(unaff_x19 + 0xd0),0);
    if (((*(long *)(unaff_x19 + 0x40) != 0) &&
        (lVar2 = FUN_095258d0(*(long *)(unaff_x19 + 0x40),0), lVar2 != 0)) &&
       (fVar4 = (float)FUN_09539d64(lVar2,0), lVar1 != 0)) {
      FUN_09539e3c(fVar3 + fVar4,fVar5 + fVar6,fVar7 + fVar8,lVar1,0);
      if (*(long *)(unaff_x19 + 0xd0) != 0) {
        lVar1 = FUN_095258d0(*(long *)(unaff_x19 + 0xd0),0);
        if (((*(long *)(unaff_x19 + 0x40) != 0) &&
            (lVar2 = FUN_095258d0(*(long *)(unaff_x19 + 0x40),0), lVar2 != 0)) &&
           (FUN_09539d64(lVar2,0), lVar1 != 0)) {
          FUN_0953bc18(lVar1,0);
          if (*(char *)(unaff_x19 + 0xe0) != '\0') {
            if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_07704034;
            FUN_0770721c(*(long *)(unaff_x19 + 0xd0),0);
            *(undefined1 *)(unaff_x19 + 0xe0) = 0;
          }
          return;
        }
      }
    }
  }
LAB_07704034:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


