/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Equality
ENTRY_POINT: 044ec998
PROGRAM: waitwhat-libil2cpp.so
SCORE: 121
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Equality
               (long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 < *(int *)(param_1 + 0x18)) {
    LipSyncMicInput__CanStartMic(0xf,0x15,0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) != param_2) {
      lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      if (param_2 < 1) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        uVar1 = **(undefined8 **)(lVar2 + 0xb8);
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x18);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
        }
        uVar1 = FUN_03188b1c(lVar2,param_2);
        if (0 < *(int *)(param_1 + 0x18)) {
          FUN_0595261c(*(undefined8 *)(param_1 + 0x10),0,uVar1,0,*(int *)(param_1 + 0x18),0);
        }
      }
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


