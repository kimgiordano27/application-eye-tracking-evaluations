/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$SampleMask
ENTRY_POINT: 08a7619c
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__SampleMask(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_04980b90();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  puVar1 = PTR_DAT_0ac544a0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_053461f0(unaff_x22 | 8,&stack0x00000040,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
  FUN_08127dbc(unaff_x22 | 8,*(undefined8 *)puVar1);
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[2] = in_stack_00000010;
  return;
}


