/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 04e7ae44
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 114
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  while( true ) {
    FUN_04e77a20();
    do {
      do {
        unaff_x23 = unaff_x23 + 1;
        unaff_x24 = unaff_x24 + 0x18;
        if (unaff_x21 == unaff_x23) {
          if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        lVar2 = *(long *)(unaff_x20 + 0x18);
        if (lVar2 == 0) goto LAB_04e7ae94;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x23)
        goto System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current;
      } while (*(int *)(lVar2 + unaff_x24) < 0);
      if (unaff_x22 == 0) goto LAB_04e7ae94;
      uVar1 = FUN_077e9ba0();
    } while ((uVar1 & 1) != 0);
    if (*(long *)(unaff_x20 + 0x18) == 0) break;
    if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= unaff_x23) {
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
LAB_04e7ae94:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


