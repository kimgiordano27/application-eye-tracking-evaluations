/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$Awake
ENTRY_POINT: 04e1c4d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast__Awake
               (undefined8 param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
               long param_6)

{
  ulong uVar1;
  int in_w8;
  long unaff_x21;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = (long)in_w8 - (long)(int)param_4;
  lVar2 = unaff_x21 + (long)(int)param_4 * 8 + 0x20;
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar1 = FUN_050bcf04(param_1,lVar2,
                         *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
    if ((uVar1 & 1) != 0) break;
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 8;
    param_4 = param_4 + 1;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
  }
  return param_4;
}


