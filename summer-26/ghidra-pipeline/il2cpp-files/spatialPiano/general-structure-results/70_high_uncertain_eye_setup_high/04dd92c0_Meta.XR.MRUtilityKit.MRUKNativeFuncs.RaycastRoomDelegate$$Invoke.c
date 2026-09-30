/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastRoomDelegate$$Invoke
ENTRY_POINT: 04dd92c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastRoomDelegate__Invoke(long param_1)

{
  uint uVar1;
  void *__src;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long in_stack_000012e8;
  
  lVar2 = **(long **)(param_1 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c(lVar2);
  }
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar2 + 0x40)) {
    __src = (void *)thunk_FUN_02f453b8();
    memcpy(&stack0x00001000,__src,0x200);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    uVar1 = FUN_04dd8730();
    if (*(long *)(unaff_x22 + 0x28) == in_stack_000012e8) {
      return uVar1 & 1;
    }
  }
  else if (*(long *)(unaff_x22 + 0x28) == in_stack_000012e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


