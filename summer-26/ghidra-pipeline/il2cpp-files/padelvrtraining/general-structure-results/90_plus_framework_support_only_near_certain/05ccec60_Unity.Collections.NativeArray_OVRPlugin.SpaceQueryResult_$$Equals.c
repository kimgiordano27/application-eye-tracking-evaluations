/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 05ccec60
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a50e8);
    FUN_03d2d2b0(PTR_DAT_091fcbd0);
    *(undefined1 *)(unaff_x20 + 0x4ee) = 1;
  }
  if ((param_2 != 0) &&
     (plVar3 = (long *)thunk_FUN_03d9f2a8(param_2,0), puVar2 = PTR_DAT_091fcbd0,
     puVar1 = PTR_DAT_091a50e8, plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    uVar6 = *(undefined8 *)(param_2 + 0x130);
    uVar5 = thunk_FUN_03d2eb70(*(undefined8 *)puVar1);
    FUN_06fd28dc(*(undefined8 *)puVar2,uVar4,uVar6,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


