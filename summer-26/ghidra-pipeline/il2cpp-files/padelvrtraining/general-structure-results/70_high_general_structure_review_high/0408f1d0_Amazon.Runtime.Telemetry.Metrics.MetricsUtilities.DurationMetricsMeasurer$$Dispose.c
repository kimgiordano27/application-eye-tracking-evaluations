/*
FUNCTION_NAME: Amazon.Runtime.Telemetry.Metrics.MetricsUtilities.DurationMetricsMeasurer$$Dispose
ENTRY_POINT: 0408f1d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Amazon_Runtime_Telemetry_Metrics_MetricsUtilities_DurationMetricsMeasurer__Dispose
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w22;
  int iVar2;
  undefined8 *unaff_x23;
  
  while (param_1 != 0) {
    while (*(int *)(param_1 + 0x18) <= unaff_w22) {
      lVar1 = *(long *)(unaff_x19 + 0x40);
      if (lVar1 == 0) goto LAB_0408f224;
      iVar2 = 0;
      while (iVar2 < *(int *)(lVar1 + 0x18)) {
        FUN_05a39464(lVar1,iVar2,*unaff_x23);
        FUN_0408f2dc();
        lVar1 = *(long *)(unaff_x19 + 0x40);
        iVar2 = iVar2 + 1;
        if (lVar1 == 0) goto LAB_0408f224;
      }
      lVar1 = *(long *)(unaff_x19 + 0x38);
      if (lVar1 == 0) goto LAB_0408f224;
      if (*(int *)(lVar1 + 0x18) <= unaff_w20) {
        return;
      }
      FUN_05a39464(lVar1,unaff_w20,*unaff_x23);
      param_1 = *(long *)(unaff_x19 + 0x38);
      if (param_1 == 0) goto LAB_0408f224;
      unaff_w20 = unaff_w20 + 1;
      unaff_w22 = unaff_w20;
    }
    FUN_05a39464(param_1,unaff_w22,*unaff_x23);
    FUN_0408f2dc();
    unaff_w22 = unaff_w22 + 1;
    param_1 = *(long *)(unaff_x19 + 0x38);
  }
LAB_0408f224:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


