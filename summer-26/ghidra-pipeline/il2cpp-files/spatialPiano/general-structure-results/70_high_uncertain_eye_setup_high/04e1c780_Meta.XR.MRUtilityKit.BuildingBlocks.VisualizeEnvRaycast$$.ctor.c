/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$.ctor
ENTRY_POINT: 04e1c780
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


uint Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast___ctor
               (undefined8 param_1,long param_2,undefined4 param_3,uint param_4,int param_5,
               long param_6)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar2 = FUN_0621d520(param_2 + 0x20 + (long)(int)param_4 * 4,param_3,
                           *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


