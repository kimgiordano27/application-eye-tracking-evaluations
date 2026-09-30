/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$ApplyMaterial
ENTRY_POINT: 0774a988
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_MRUtilityKit_SpaceMapGPU__ApplyMaterial(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long in_stack_00000008;
  
  if ((DAT_0a523258 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f31e98);
    DAT_0a523258 = 1;
  }
  in_stack_00000008 = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = FUN_0952fcb8(param_2,0);
    if (lVar2 != 0) {
      FUN_0731ca6c(lVar2,uVar1,&stack0x00000008,*(undefined8 *)PTR_DAT_09f31e98);
      if (in_stack_00000008 != 0) {
        return *(undefined1 (*) [16])(in_stack_00000008 + 0x58);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


