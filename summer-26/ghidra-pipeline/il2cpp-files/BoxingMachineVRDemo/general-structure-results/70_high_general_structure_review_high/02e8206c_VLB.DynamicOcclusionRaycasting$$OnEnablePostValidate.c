/*
FUNCTION_NAME: VLB.DynamicOcclusionRaycasting$$OnEnablePostValidate
ENTRY_POINT: 02e8206c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void VLB_DynamicOcclusionRaycasting__OnEnablePostValidate(void)

{
  int iVar1;
  long unaff_x19;
  float in_s3;
  float unaff_s8;
  
  if (unaff_s8 < in_s3) {
    iVar1 = *(int *)(unaff_x19 + 0x40) + 1;
    *(int *)(unaff_x19 + 0x40) = iVar1;
    if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar1) {
      FUN_02e828ac();
      return;
    }
  }
  return;
}


