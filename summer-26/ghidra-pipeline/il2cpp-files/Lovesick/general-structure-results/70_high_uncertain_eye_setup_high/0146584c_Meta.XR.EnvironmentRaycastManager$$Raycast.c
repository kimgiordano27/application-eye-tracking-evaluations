/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$Raycast
ENTRY_POINT: 0146584c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__Raycast(void)

{
  ulong uVar1;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  while( true ) {
    FUN_0129a054();
    while( true ) {
      FUN_0132138c();
      if (unaff_x22 == 0) goto LAB_014658b4;
      FUN_00ad61c4(unaff_x22,CONCAT44(uStack000000000000000c,uStack0000000000000008),*unaff_x26);
      unaff_w21 = unaff_w21 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w21) {
        return;
      }
      FUN_0132138c();
      if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) goto LAB_014658b4;
      uStack0000000000000008 =
           FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
      uVar1 = FUN_0129aa60();
      if ((uVar1 & 1) == 0) break;
      FUN_0132138c();
      if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) goto LAB_014658b4;
      FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
      FUN_01299bc0();
      unaff_x22 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    }
    unaff_x22 = thunk_FUN_00d62348(*unaff_x27);
    if (unaff_x22 == 0) break;
    FUN_01320e50(unaff_x22,*unaff_x28);
    FUN_0132138c();
    if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) break;
    uStack0000000000000008 = FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0)
    ;
  }
LAB_014658b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


