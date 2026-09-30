/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 02bf069c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03051bf4(0x21);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    lVar4 = 0;
    uVar5 = 0;
    iVar2 = iVar1;
    do {
      if (iVar1 != iVar2) break;
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
LAB_02bf074c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (param_2 == 0) goto LAB_02bf074c;
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar3 + lVar4 + 0x20),
                 *(undefined8 *)(lVar3 + lVar4 + 0x28),*(undefined8 *)(param_2 + 0x28));
      iVar2 = *(int *)(param_1 + 0x1c);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x18));
    if (iVar1 != iVar2) {
      FUN_03060a50(0);
      return;
    }
  }
  return;
}


