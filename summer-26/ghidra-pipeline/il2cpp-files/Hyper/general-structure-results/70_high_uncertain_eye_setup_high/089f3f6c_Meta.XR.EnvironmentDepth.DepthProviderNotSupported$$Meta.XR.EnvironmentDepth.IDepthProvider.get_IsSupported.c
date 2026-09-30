/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.get_IsSupported
ENTRY_POINT: 089f3f6c
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_get_IsSupported
               (long param_1)

{
  undefined8 *puVar1;
  int in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *plVar5;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x19;
  }
  if ((**(long **)(param_1 + 0xb8) == 0) ||
     (plVar5 = *(long **)(**(long **)(param_1 + 0xb8) + 0x28), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac48740) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_089f3fe0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac48740,0);
LAB_089f3fe0:
                    /* WARNING: Could not recover jumptable at 0x089f3ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,0x42,puVar1[1]);
  return;
}


