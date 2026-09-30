/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDepthTextureUpdate
ENTRY_POINT: 05ae1ad4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__OnDepthTextureUpdate(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_0367c9fc();
  lVar1 = thunk_FUN_0367fd24();
  if (lVar1 == 0) {
    FUN_05e390e4(2,0);
    return 0;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_0367ff68();
                    /* WARNING: Could not recover jumptable at 0x05ae1b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*unaff_x19 + 0x1c8))();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


