/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$EndInvoke
ENTRY_POINT: 057d3d20
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__EndInvoke(void *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x22;
  long in_stack_000022e8;
  
  memcpy(&stack0x00001200,param_1,0x80);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  memcpy(&stack0x000012e0,&stack0x00001200,0x80);
  uVar1 = FUN_057d3520();
  if (*(long *)(unaff_x22 + 0x28) == in_stack_000022e8) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


