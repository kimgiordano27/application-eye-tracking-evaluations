/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$get_MaxRaycastDistance
ENTRY_POINT: 04e1af90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;weak_vector_component_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__get_MaxRaycastDistance
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6,uint param_7,int param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((int)param_7 < (int)(param_8 + param_7)) {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = (long)(int)(param_8 + param_7) - (long)(int)param_7;
    lVar2 = param_6 + (long)(int)param_7 * 0x10 + 0x20;
    do {
      if (*(uint *)(param_6 + 0x18) <= param_7) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar1 = FUN_050e7ab4(param_1,lVar2,0);
      if (((((uVar1 & 1) != 0) && (uVar1 = FUN_050e7ab4(param_2,lVar2 + 4,0), (uVar1 & 1) != 0)) &&
          (uVar1 = FUN_050e7ab4(param_3,lVar2 + 8,0), (uVar1 & 1) != 0)) &&
         (uVar1 = FUN_050e7ab4(param_4,lVar2 + 0xc,0), (uVar1 & 1) != 0)) {
        return param_7;
      }
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 0x10;
      param_7 = param_7 + 1;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


