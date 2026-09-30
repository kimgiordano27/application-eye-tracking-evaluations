/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_RotateOverride
ENTRY_POINT: 05a9dbe0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_RuntimeSettings__set_RotateOverride(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_05e229e0(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar5 = uVar2;
      if (uVar1 <= uVar5) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_05a9dc7c;
      }
      lVar4 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar5 + 1;
      if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      uVar2 = uVar5 + 1;
    } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x60 + 0x20) < 0);
    lVar4 = lVar4 + (long)(int)uVar5 * 0x60;
    lVar3 = *(long *)(lVar4 + 0x28);
    param_1[3] = *(long *)(lVar4 + 0x30);
    param_1[2] = lVar3;
LAB_05a9dc7c:
    return uVar5 < uVar1;
  }
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


