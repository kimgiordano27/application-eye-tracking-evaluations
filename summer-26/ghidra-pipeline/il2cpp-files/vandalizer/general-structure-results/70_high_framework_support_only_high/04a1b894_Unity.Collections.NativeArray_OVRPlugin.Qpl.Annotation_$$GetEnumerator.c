/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 04a1b894
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator
               (long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 == param_4) {
    return;
  }
  if (param_1 == 0) {
LAB_04a1b954:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    puVar4 = (undefined4 *)(param_1 + (long)(int)param_3 * 4 + 0x20);
    uVar1 = *puVar4;
    if (param_4 < *(uint *)(param_1 + 0x18)) {
      puVar5 = (undefined4 *)(param_1 + (long)(int)param_4 * 4 + 0x20);
      uVar2 = *puVar5;
      if (param_2 != 0) {
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        iVar3 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),uVar1,uVar2,
                           *(undefined8 *)(param_2 + 0x28));
        if (0 < iVar3) {
          if ((*(uint *)(param_1 + 0x18) <= param_3) || (*(uint *)(param_1 + 0x18) <= param_4))
          goto LAB_04a1b950;
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        return;
      }
      goto LAB_04a1b954;
    }
  }
LAB_04a1b950:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


