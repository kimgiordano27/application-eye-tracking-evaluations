/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetHandNodePoseStateLatency
ENTRY_POINT: 0316e720
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_OVRP_1_18_0__ovrp_GetHandNodePoseStateLatency(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  undefined4 uVar6;
  undefined4 extraout_s0;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined8 uVar9;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  
  if ((*(byte *)(unaff_x20 + 0xd0) & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13568);
    *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  }
  lVar1 = FUN_0316e6b4(param_1);
  if (lVar1 == 0) {
    uVar6 = 0x3f800000;
    uVar8 = 0;
    uVar9 = 0;
LAB_0316e7d0:
    auVar7._4_4_ = uVar8;
    auVar7._0_4_ = uVar6;
    auVar7._8_8_ = uVar9;
    return auVar7;
  }
  plVar2 = (long *)FUN_0316e6b4(param_1);
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_13568) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0316e7b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)StringLiteral_13568,0);
LAB_0316e7b8:
    lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar1 != 0) {
      FUN_0392a7f0(lVar1,0);
      uVar6 = extraout_s0;
      uVar8 = extraout_var;
      uVar9 = extraout_var_00;
      goto LAB_0316e7d0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


