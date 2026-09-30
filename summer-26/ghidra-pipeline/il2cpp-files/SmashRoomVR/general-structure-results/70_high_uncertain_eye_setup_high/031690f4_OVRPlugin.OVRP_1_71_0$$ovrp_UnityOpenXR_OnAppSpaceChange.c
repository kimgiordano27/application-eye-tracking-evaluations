/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 031690f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange(long param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *in_x9;
  long lVar4;
  int unaff_w19;
  uint unaff_w20;
  ulong unaff_x21;
  long *unaff_x23;
  ulong unaff_x24;
  undefined1 auVar5 [16];
  float unaff_s8;
  float fVar6;
  
  while( true ) {
    if ((bool)in_ZR) break;
    if ((*in_x9 <= unaff_x21) || ((int)*(long *)(in_x9 + 4) == 0)) goto LAB_03169254;
    if (*(float *)(param_1 + *(long *)(in_x9 + 4) * unaff_x21 * 4 + 0x20) <= unaff_s8) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *unaff_x23;
      }
      lVar3 = **(long **)(param_2 + 0xb8);
      if (lVar3 == 0) goto LAB_03169258;
      uVar2 = unaff_x21 + 1;
      if ((**(uint **)(lVar3 + 0x10) <= uVar2) ||
         (lVar4 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar4 == 0)) goto LAB_03169254;
      if (unaff_s8 < *(float *)(lVar3 + lVar4 * (int)uVar2 * 4 + 0x20)) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar1 = unaff_x21 & 0xffffffff;
        uVar2 = uVar2 & 0xffffffff;
        goto LAB_03169220;
      }
    }
    unaff_x21 = unaff_x21 + 1;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *unaff_x23;
    }
    param_1 = **(long **)(param_2 + 0xb8);
    if (param_1 == 0) goto LAB_03169258;
    in_x9 = *(uint **)(param_1 + 0x10);
    in_ZR = unaff_x21 == unaff_x24;
  }
  if ((*in_x9 != 0) && (in_x9[4] != 0)) {
    fVar6 = *(float *)(param_1 + 0x20);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (unaff_s8 <= fVar6) {
      lVar3 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar3 == 0) {
LAB_03169258:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if ((**(uint **)(lVar3 + 0x10) <= unaff_w20) ||
         (lVar4 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar4 == 0)) goto LAB_03169254;
      if (unaff_s8 <= *(float *)(lVar3 + lVar4 * (int)unaff_w20 * 4 + 0x20)) {
        return ZEXT416(0x3f000000);
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar1 = (ulong)(unaff_w19 - 2);
      uVar2 = (ulong)unaff_w20;
    }
    else {
      uVar2 = 1;
      uVar1 = 0;
    }
LAB_03169220:
    auVar5 = FUN_031692d0(uVar1,uVar2);
    return auVar5;
  }
LAB_03169254:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


