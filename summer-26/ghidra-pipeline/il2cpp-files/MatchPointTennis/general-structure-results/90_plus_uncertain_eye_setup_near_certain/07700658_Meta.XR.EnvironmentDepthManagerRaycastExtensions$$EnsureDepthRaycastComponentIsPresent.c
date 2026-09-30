/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$EnsureDepthRaycastComponentIsPresent
ENTRY_POINT: 07700658
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__EnsureDepthRaycastComponentIsPresent
               (long param_1,ulong param_2)

{
  long *plVar1;
  int in_w8;
  long lVar2;
  long lVar3;
  
  if ((param_2 & 1) == 0) {
    if (in_w8 == *(int *)(param_1 + 0x34)) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_077006c4;
    lVar3 = *(long *)(param_1 + 0x48);
  }
  else {
    if (in_w8 == *(int *)(param_1 + 0x30)) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_077006c4;
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if ((lVar3 != 0) && (plVar1 = *(long **)(lVar3 + 0x48), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x077006c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
               *(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),plVar1,
               *(undefined8 *)(*plVar1 + 0x2b0));
    return;
  }
LAB_077006c4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


