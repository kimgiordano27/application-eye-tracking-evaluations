/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 015da364
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


uint System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
               undefined8 param_5,uint param_6)

{
  ulong uVar1;
  int in_w8;
  int in_w9;
  long unaff_x20;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)(unaff_x20 + (long)(int)param_6 * (long)in_w9 + 0x28);
  lVar3 = (long)in_w8 - (long)(int)param_6;
  while( true ) {
    if (*(uint *)(unaff_x20 + 0x18) <= param_6) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    uVar1 = (**(code **)(*param_4 + 0x1b8))
                      (puVar2[-2],puVar2[-1],*puVar2,param_1,param_2,param_3,param_4,
                       *(undefined8 *)(*param_4 + 0x1c0));
    if ((uVar1 & 1) != 0) break;
    param_6 = param_6 + 1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 3;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
  }
  return param_6;
}


