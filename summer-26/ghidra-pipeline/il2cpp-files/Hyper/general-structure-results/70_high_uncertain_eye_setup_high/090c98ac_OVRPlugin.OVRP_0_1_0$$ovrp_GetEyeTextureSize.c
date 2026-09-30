/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$ovrp_GetEyeTextureSize
ENTRY_POINT: 090c98ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint *unaff_x22;
  long *unaff_x23;
  ulong uVar3;
  long unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac76fb8);
    *(undefined1 *)(unaff_x24 + 0x4d9) = 1;
  }
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar1 = *unaff_x23;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= *unaff_x22) {
LAB_090c995c:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar1 = *(long *)(lVar1 + (long)(int)*unaff_x22 * 8 + 0x20);
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
        uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        do {
          if (uVar2 <= uVar3) goto LAB_090c995c;
          FUN_090c9a58(param_2,*(undefined4 *)(lVar1 + 0x20 + uVar3 * 4));
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


