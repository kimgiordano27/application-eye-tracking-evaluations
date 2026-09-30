/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$Awake
ENTRY_POINT: 0581c024
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast__Awake(void)

{
  ulong uVar1;
  uint uVar2;
  uint unaff_w19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  
  while (uVar2 = *(uint *)(unaff_x22 + 0x18), unaff_w19 < uVar2) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      uVar2 = *(uint *)(unaff_x22 + 0x18);
    }
    if (uVar2 <= unaff_w19) break;
    uVar1 = FUN_06902d20(unaff_x23);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = unaff_x23 + 0x1c;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


