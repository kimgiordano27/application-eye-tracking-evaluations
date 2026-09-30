/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04649684
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
               (long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  while( true ) {
    FUN_0373b4c8(param_2,(long)unaff_x26 + unaff_x24 * *(uint *)(param_1 + 0x104) + 0x20);
    unaff_x24 = unaff_x24 + 1;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    piVar2 = (int *)thunk_FUN_03799158();
    iVar1 = *piVar2;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    if ((long)(iVar1 + -1) <= (long)unaff_x24) {
      FUN_031b7e74();
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)thunk_FUN_03799158();
    unaff_x26 = (long *)*puVar3;
    memset(unaff_x23,0,unaff_x21);
    memcpy(unaff_x22,unaff_x23,unaff_x21);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(unaff_x26 + 3) <= unaff_x24) break;
    memcpy((void *)((long)unaff_x26 + unaff_x24 * *(uint *)(*unaff_x26 + 0x104) + 0x20),unaff_x22,
           unaff_x21);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    param_2 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_03775678();
    }
    if (*(uint *)(unaff_x26 + 3) <= unaff_x24) break;
    param_1 = *unaff_x26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


