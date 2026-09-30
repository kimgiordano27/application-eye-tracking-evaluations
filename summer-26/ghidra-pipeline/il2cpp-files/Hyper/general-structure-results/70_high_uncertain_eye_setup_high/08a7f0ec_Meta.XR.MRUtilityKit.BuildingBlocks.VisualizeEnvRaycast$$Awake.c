/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$Awake
ENTRY_POINT: 08a7f0ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast__Awake
               (undefined1 param_1 [16],undefined8 param_2)

{
  long lVar1;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 in_stack_00000020;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000038 = param_2;
  thunk_FUN_049ee3d8();
  thunk_FUN_049ee3d8(unaff_x21 + 0x28);
  thunk_FUN_049ee3d8(unaff_x21 + 0x30,0);
  lVar1 = *unaff_x22;
  in_stack_00000020 = 0xffffffff;
  if (*(long *)(lVar1 + 0x38) == 0) {
    FUN_04947ee4(PTR_DAT_0ac111a0);
    if (*(long *)(lVar1 + 0x38) == 0) {
      FUN_04980b90(lVar1);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0ac111a0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_05a4a81c(unaff_x21 | 8,&stack0x00000020,*(undefined8 *)(*(long *)(lVar1 + 0x38) + 8));
  FUN_08c7f818(unaff_x21 | 8,0);
  return;
}


