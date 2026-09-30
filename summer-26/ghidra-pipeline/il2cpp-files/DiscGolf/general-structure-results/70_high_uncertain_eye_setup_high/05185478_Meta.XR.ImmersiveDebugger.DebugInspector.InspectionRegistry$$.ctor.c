/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector.InspectionRegistry$$.ctor
ENTRY_POINT: 05185478
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry___ctor(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
LAB_0518550c:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)param_1 + 0xc) == *(int *)(lVar2 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
          lVar3 = *(long *)(lVar2 + 0x20);
          param_1[3] = *(long *)(lVar2 + 0x28);
          param_1[2] = lVar3;
          LeanTween__value(param_1 + 2,0);
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_0518550c;
    }
  }
  if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  FUN_05185514(param_1);
  return 0;
}


