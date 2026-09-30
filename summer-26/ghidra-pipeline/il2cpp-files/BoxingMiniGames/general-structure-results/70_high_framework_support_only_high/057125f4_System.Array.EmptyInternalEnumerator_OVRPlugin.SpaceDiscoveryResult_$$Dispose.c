/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 057125f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  long unaff_x29;
  
  while (unaff_x24 < unaff_w26) {
    memset((void *)(unaff_x25 + unaff_x24 * *(uint *)(*unaff_x20 + 0x104)),0,unaff_x21);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    if (*(uint *)(unaff_x20 + 3) <= unaff_x24) break;
    FUN_03642914(lVar1,unaff_x25 + unaff_x24 * *(uint *)(*unaff_x20 + 0x104));
    unaff_w26 = *(uint *)(unaff_x20 + 3);
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)unaff_w26 <= (long)unaff_x24) {
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_057126cc;
    }
    memset(unaff_x22,0,unaff_x21);
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_057126cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


