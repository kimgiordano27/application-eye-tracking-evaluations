/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_CreateVirtualKeyboardSpace
ENTRY_POINT: 0516e4c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboardSpace(ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067828f0);
    *(undefined1 *)(unaff_x21 + 0xe96) = 1;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = unaff_x19;
        thunk_FUN_02dd37b4(plVar4);
      }
      else {
        FUN_03aac494();
      }
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x10) = param_2;
        thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x10),param_2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


