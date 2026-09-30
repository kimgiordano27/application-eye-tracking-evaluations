/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 0148b4c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(float param_1,float param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  int unaff_w20;
  long unaff_x21;
  
  if (0 < unaff_w20) {
    lVar2 = *(long *)(unaff_x21 + 0x188);
    if (lVar2 == 0) {
LAB_0148b5c0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = *(int *)(lVar2 + 0x18);
    iVar3 = unaff_w20 + 1;
    do {
      if (iVar1 == 0) {
LAB_0148b5bc:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) goto LAB_0148b5c0;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_0148b5bc;
      lVar4 = lVar4 + (long)(int)unaff_w19 * 4;
      iVar3 = iVar3 + -1;
      unaff_w19 = unaff_w19 + 1;
      *(float *)(lVar4 + 0x20) = (1.0 / (param_1 + param_2)) * *(float *)(lVar4 + 0x20);
    } while (1 < iVar3);
  }
  return;
}


