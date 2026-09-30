/*
FUNCTION_NAME: AnalyticsManagerScript.<TrainingPostRequest>d__74$$System.IDisposable.Dispose
ENTRY_POINT: 03d34df4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void AnalyticsManagerScript_<TrainingPostRequest>d__74__System_IDisposable_Dispose(void)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  ulong unaff_x19;
  long *unaff_x20;
  void *in_stack_00000000;
  
  if (in_stack_00000000 != (void *)0x0) {
    free(in_stack_00000000);
  }
  if (unaff_x19 < (ulong)unaff_x20[3]) {
    if (unaff_x19 % 0x30 != 0) {
      lVar2 = unaff_x20[1] + -0x10;
      FUN_03d3432c(lVar2,lVar2,unaff_x19 % 0x30,lVar2,0x30);
    }
    lVar2 = *unaff_x20;
    unaff_x20[4] = 0;
    if (lVar2 != unaff_x20[1]) {
      lVar3 = 0;
      do {
        puVar1 = (ushort *)(lVar2 + 8);
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + (ulong)*puVar1;
      } while (unaff_x20[1] != lVar2);
      unaff_x20[4] = lVar3;
    }
  }
  unaff_x20[3] = unaff_x19;
  return;
}


