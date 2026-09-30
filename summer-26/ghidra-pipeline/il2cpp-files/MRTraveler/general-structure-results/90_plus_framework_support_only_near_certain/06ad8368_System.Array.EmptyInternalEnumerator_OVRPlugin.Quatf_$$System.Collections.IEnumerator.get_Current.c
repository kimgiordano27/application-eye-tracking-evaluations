/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06ad8368
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
               (ulong param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  int unaff_w20;
  int iVar4;
  uint uVar5;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  if (unaff_x23 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar5 = *(int *)(unaff_x22 + (param_1 & 0xffffffff) * 4 + 0x20) - 1;
    if (uVar5 < uVar1) {
      iVar4 = 0;
      do {
        if (*(int *)(unaff_x23 + (long)(int)uVar5 * 0x18 + 0x20) == unaff_w20) {
          plVar2 = (long *)FUN_041d81b8(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar5)
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose;
          if (plVar2 == (long *)0x0)
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined8 *)(unaff_x23 + (long)(int)uVar5 * 0x18 + 0x28),
                             in_stack_00000008,*(undefined8 *)(*plVar2 + 0x1c0));
          if ((uVar3 & 1) != 0) {
            return uVar5;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar5) {
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar5 = *(uint *)(unaff_x23 + (long)(int)uVar5 * 0x18 + 0x24);
        if ((int)uVar1 <= iVar4) {
          FUN_07122f08(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar4 = iVar4 + 1;
      } while (uVar5 < uVar1);
    }
    return uVar5;
  }
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


