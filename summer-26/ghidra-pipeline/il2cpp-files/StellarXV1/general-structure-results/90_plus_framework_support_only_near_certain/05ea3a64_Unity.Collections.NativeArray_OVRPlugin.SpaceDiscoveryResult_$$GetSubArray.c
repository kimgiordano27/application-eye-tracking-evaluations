/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetSubArray
ENTRY_POINT: 05ea3a64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetSubArray
               (long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_0988ba22 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_0988ba22 = 1;
  }
  puVar1 = PTR_DAT_09285ae0;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10))();
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18))
                      (param_1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar1);
    }
    FUN_0767a6c0((long)iVar2,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


