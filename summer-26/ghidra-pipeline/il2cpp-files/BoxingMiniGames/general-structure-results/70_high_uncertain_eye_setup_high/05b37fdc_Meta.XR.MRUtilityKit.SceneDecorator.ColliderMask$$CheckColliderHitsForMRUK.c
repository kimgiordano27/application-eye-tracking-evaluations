/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$CheckColliderHitsForMRUK
ENTRY_POINT: 05b37fdc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__CheckColliderHitsForMRUK(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_0367c9fc(lVar2);
  }
  lVar2 = thunk_FUN_0367fd24();
  if (lVar2 == 0) {
    FUN_05e390e4(2,0);
    return 0;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
    thunk_FUN_0367ff68();
                    /* WARNING: Could not recover jumptable at 0x05b38060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*unaff_x19 + 0x1c8))();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


