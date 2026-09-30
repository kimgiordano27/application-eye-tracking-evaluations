/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnEnvironmentRaycasterCreated$$Invoke
ENTRY_POINT: 04dd74a0
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


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated__Invoke(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000208;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  memcpy(&stack0x00000008,unaff_x20,0x200);
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  iVar1 = FUN_04dd57c0(&stack0x00000008,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90));
  iVar1 = FUN_0609d588((long)unaff_x20 + 2,unaff_x19 + 2,(long)iVar1,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000208) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


