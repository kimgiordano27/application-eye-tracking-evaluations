/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$GetColorAtPosition
ENTRY_POINT: 05b2ff80
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_SpaceMapGPU__GetColorAtPosition
               (long *param_1,long param_2,undefined8 param_3,uint param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((int)param_4 < (int)(param_5 + param_4)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = (long)(int)(param_5 + param_4) - (long)(int)param_4;
    puVar3 = (undefined8 *)(param_2 + (long)(int)param_4 * 0x18 + 0x20);
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      in_stack_00000030 = puVar3[2];
      in_stack_00000028 = puVar3[1];
      in_stack_00000020 = *puVar3;
      uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,&stack0x00000020);
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
      param_4 = param_4 + 1;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}


