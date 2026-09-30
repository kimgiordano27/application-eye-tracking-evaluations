/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 015da340
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5,
               uint param_6,int param_7)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  if ((int)param_6 < (int)(param_7 + param_6)) {
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    puVar2 = (undefined4 *)(param_5 + (long)(int)param_6 * 0xc + 0x28);
    lVar3 = (long)(int)(param_7 + param_6) - (long)(int)param_6;
    do {
      if (*(uint *)(param_5 + 0x18) <= param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      uVar1 = (**(code **)(*param_4 + 0x1b8))
                        (puVar2[-2],puVar2[-1],*puVar2,param_1,param_2,param_3,param_4,
                         *(undefined8 *)(*param_4 + 0x1c0));
      if ((uVar1 & 1) != 0) {
        return param_6;
      }
      param_6 = param_6 + 1;
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


