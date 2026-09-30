/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 04718130
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long in_stack_00000008;
  
  if (param_1 == 0) {
    FUN_03ac40ec();
  }
  puVar1 = PTR_DAT_08491798;
  if (*unaff_x22 == 0) {
    lVar2 = *(long *)PTR_DAT_08491798;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar2 = *(long *)puVar1;
    }
    in_stack_00000008 = 0;
    FUN_05222368(&stack0x00000008,unaff_w20,*(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x10),
                 *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x20));
    *unaff_x22 = in_stack_00000008;
  }
  FUN_05222f90();
  return;
}


