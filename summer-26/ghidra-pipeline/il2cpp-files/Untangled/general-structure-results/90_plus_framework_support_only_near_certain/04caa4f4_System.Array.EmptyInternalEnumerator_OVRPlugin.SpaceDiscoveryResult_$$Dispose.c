/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 04caa4f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack0000000000000018;
  
  lVar1 = tpidr_el0;
  lStack0000000000000018 = *(long *)(lVar1 + 0x28);
  uVar3 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
                    (param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1f0));
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768(lVar6);
    }
    if (param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02ef170c(param_2,lVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(param_2,lVar6);
      }
    }
    uVar2 = FUN_04ca89d0(param_1,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108));
    if (-1 < (int)uVar2) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(*(long *)(param_1 + 0x18) + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      uVar5 = thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78)
                                );
      goto LAB_04caa5d4;
    }
  }
  uVar5 = 0;
LAB_04caa5d4:
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


