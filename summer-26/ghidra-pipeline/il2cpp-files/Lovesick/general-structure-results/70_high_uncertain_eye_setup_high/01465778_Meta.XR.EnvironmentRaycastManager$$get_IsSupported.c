/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsSupported
ENTRY_POINT: 01465778
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__get_IsSupported(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  int iVar3;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *puVar4;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar4 = *(undefined8 **)(unaff_x28 + 0x2b0);
  iVar3 = 0;
  while( true ) {
    FUN_0132138c();
    if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) break;
    uStack0000000000000008 = FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0)
    ;
    uVar1 = FUN_0129aa60();
    if ((uVar1 & 1) == 0) {
      lVar2 = thunk_FUN_00d62348(*unaff_x27);
      if (lVar2 == 0) break;
      FUN_01320e50(lVar2,*puVar4);
      FUN_0132138c();
      if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) break;
      uStack0000000000000008 =
           FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
      FUN_0129a054();
    }
    else {
      FUN_0132138c();
      if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) break;
      FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
      FUN_01299bc0();
      lVar2 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    }
    FUN_0132138c();
    if (lVar2 == 0) break;
    FUN_00ad61c4(lVar2,CONCAT44(uStack000000000000000c,uStack0000000000000008),*unaff_x26);
    iVar3 = iVar3 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= iVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


