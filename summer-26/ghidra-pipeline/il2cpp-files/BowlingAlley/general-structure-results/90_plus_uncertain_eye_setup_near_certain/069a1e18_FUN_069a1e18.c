/*
FUNCTION_NAME: FUN_069a1e18
ENTRY_POINT: 069a1e18
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_069a1e18(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_07279558;
  if ((DAT_076e1e4d & 1) == 0) {
    thunk_FUN_032e1da0(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__)
    ;
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(PTR_DAT_072a83a8);
    DAT_076e1e4d = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  local_34 = param_3;
  uVar2 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_34);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
  if (param_2 != 0) {
    FUN_0698c1bc(param_2,uVar4,uVar2,0);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    lVar3 = FUN_039eedfc(param_2,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)puVar1);
    if (((lVar3 != 0) && (lVar3 = FUN_06c8ef80(lVar3,0), lVar3 != 0)) &&
       (lVar3 = FUN_041e29a8(lVar3,param_3,*(undefined8 *)PTR_DAT_072a83a8), lVar3 != 0)) {
      FUN_0698c1bc(param_2,uVar2,*(undefined8 *)(lVar3 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


