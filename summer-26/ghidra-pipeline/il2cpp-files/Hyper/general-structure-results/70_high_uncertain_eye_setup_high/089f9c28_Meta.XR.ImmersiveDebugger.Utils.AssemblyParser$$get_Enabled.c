/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$get_Enabled
ENTRY_POINT: 089f9c28
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__get_Enabled(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((DAT_0b32c02d & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac4cec0);
    DAT_0b32c02d = 1;
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 != 0) {
      plVar5 = (long *)(param_1 + 0x18);
      lVar1 = *plVar5;
      if (lVar1 == 0) {
        lVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4cec0);
        FUN_0897522c(lVar3,0);
        *plVar5 = lVar3;
        thunk_FUN_049ee3d8(plVar5,lVar3);
        lVar1 = *plVar5;
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar3 = *(long *)(param_2 + 0x18);
      }
      FUN_089758c8(lVar1,lVar3,0);
    }
    puVar4 = (undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_088edab4(*puVar4,*(undefined8 *)(param_2 + 0x10),0);
    *puVar4 = uVar2;
    thunk_FUN_049ee3d8(puVar4);
    return;
  }
  return;
}


