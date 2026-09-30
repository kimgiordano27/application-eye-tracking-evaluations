/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodePositionTracked
ENTRY_POINT: 0281304c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodePositionTracked(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  FUN_02811d54();
  uVar2 = FUN_0282933c(param_2 & 0xffffffff,0);
  if ((param_3 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 == 0) goto LAB_028130f0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 == 0) {
LAB_028130f0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_028130ec;
    uVar2 = uVar2 + 1;
    *(undefined2 *)(lVar3 + 0x20) = 0x2d;
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  uVar5 = param_2 & 0xffffffff;
  while (uVar2 = uVar2 - 1, uVar2 < uVar1) {
    uVar4 = (uint)uVar5;
    *(short *)(lVar3 + (long)(int)uVar2 * 2 + 0x20) =
         (short)uVar5 + (short)(uVar5 / 10) * -10 + 0x30;
    uVar5 = uVar5 / 10;
    if (uVar4 < 10) {
      return;
    }
  }
LAB_028130ec:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


