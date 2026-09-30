/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 090d241c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_68_0__ovrp_SetInsightPassthroughKeyboardHandsIntensity(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x21;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac759b0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
        goto LAB_090d247c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_090d247c:
  (*(code *)*puVar1)();
  OVRPlugin_OVRP_1_68_0___cctor();
  return;
}


