/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 015da4b4
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


undefined8
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
          (long *param_1,long *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  lVar3 = thunk_FUN_0103ffe0(param_2,lVar3);
  if (lVar3 == 0) {
    FUN_01d68ae8(2,0);
    return 0;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
    puVar1 = (undefined4 *)thunk_FUN_01040230();
                    /* WARNING: Could not recover jumptable at 0x015da544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x1c8))
                      (*puVar1,puVar1[1],puVar1[2],param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0(param_2);
}


