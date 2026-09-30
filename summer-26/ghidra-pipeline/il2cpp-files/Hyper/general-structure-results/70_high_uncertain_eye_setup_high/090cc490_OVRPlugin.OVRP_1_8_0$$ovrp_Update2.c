/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_Update2
ENTRY_POINT: 090cc490
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_Update2(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  uint uVar3;
  ulong uVar4;
  
  while( true ) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x20);
    while( true ) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        param_2 = *unaff_x20;
      }
      lVar1 = *(long *)(param_2 + 0xb8);
      lVar2 = *(long *)(lVar1 + 8);
      if (lVar2 == 0) goto LAB_090cc4d8;
      uVar3 = (uint)uVar4;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_090cc4d4;
      if (*(int *)(lVar2 + (long)(int)uVar3 * 4 + 0x20) != -1) break;
      if (unaff_x19 == 0) goto LAB_090cc4d8;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_090cc4d4;
      lVar1 = unaff_x21 * 4;
      unaff_x21 = unaff_x21 + 1;
      *(int *)(unaff_x19 + lVar1 + 0x20) = unaff_w22;
      if (unaff_x21 == 0x1a) {
        return;
      }
      unaff_w22 = -1;
      uVar4 = unaff_x21 & 0xffffffff;
    }
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      param_2 = *unaff_x20;
      lVar1 = *(long *)(param_2 + 0xb8);
    }
    param_1 = *(long *)(lVar1 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= uVar3) {
LAB_090cc4d4:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    param_1 = param_1 + (long)(int)uVar3 * 4;
    unaff_w22 = unaff_w22 + 1;
  }
LAB_090cc4d8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


