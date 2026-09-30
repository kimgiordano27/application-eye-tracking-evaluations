/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory
ENTRY_POINT: 051dee74
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxLoadFromMemory(long param_1)

{
  int in_w8;
  long lVar1;
  ulong uVar2;
  uint unaff_w20;
  long *unaff_x21;
  ulong uVar3;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
    param_1 = *unaff_x21;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= unaff_w20) {
LAB_051deef0:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar1 = *(long *)(lVar1 + (long)(int)unaff_w20 * 8 + 0x20);
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
        uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        do {
          if (uVar2 <= uVar3) goto LAB_051deef0;
          FUN_051dee14();
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


