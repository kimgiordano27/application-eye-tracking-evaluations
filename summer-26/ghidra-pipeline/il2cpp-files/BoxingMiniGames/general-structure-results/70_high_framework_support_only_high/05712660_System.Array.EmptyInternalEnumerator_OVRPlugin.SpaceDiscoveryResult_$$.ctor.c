/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 05712660
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor
               (ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  do {
    FUN_03642914(param_2,unaff_x25 + unaff_x24 * param_1);
    uVar1 = *(uint *)(unaff_x20 + 3);
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)uVar1 <= (long)unaff_x24) {
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
LAB_057126cc:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    memset(unaff_x22,0,unaff_x21);
    if (uVar1 <= unaff_x24) {
LAB_057126a4:
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      goto LAB_057126cc;
    }
    memset((void *)(unaff_x25 + unaff_x24 * *(uint *)(*unaff_x20 + 0x104)),0,unaff_x21);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    param_2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_0367c9fc();
    }
    if (*(uint *)(unaff_x20 + 3) <= unaff_x24) goto LAB_057126a4;
    param_1 = (ulong)*(uint *)(*unaff_x20 + 0x104);
  } while( true );
}


