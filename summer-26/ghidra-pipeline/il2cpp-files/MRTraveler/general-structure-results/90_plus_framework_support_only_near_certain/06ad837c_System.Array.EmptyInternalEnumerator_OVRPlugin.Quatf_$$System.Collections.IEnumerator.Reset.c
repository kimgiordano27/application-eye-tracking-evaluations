/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06ad837c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_Reset
               (void)

{
  long *plVar1;
  ulong uVar2;
  uint in_w8;
  long unaff_x19;
  int unaff_w20;
  int iVar3;
  uint unaff_w22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  if (unaff_w22 < in_w8) {
    iVar3 = 0;
    do {
      if (*(int *)(unaff_x23 + (long)(int)unaff_w22 * 0x18 + 0x20) == unaff_w20) {
        plVar1 = (long *)FUN_041d81b8(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose;
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = (**(code **)(*plVar1 + 0x1b8))
                          (plVar1,*(undefined8 *)(unaff_x23 + (long)(int)unaff_w22 * 0x18 + 0x28),
                           in_stack_00000008,*(undefined8 *)(*plVar1 + 0x1c0));
        if ((uVar2 & 1) != 0) {
          return unaff_w22;
        }
        in_w8 = *(uint *)(unaff_x23 + 0x18);
      }
      if (in_w8 <= unaff_w22) {
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      unaff_w22 = *(uint *)(unaff_x23 + (long)(int)unaff_w22 * 0x18 + 0x24);
      if ((int)in_w8 <= iVar3) {
        FUN_07122f08(0);
      }
      in_w8 = *(uint *)(unaff_x23 + 0x18);
      iVar3 = iVar3 + 1;
    } while (unaff_w22 < in_w8);
  }
  return unaff_w22;
}


