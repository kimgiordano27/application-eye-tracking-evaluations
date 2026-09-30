/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_CreateCustomCameraAnchor
ENTRY_POINT: 031711d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_CreateCustomCameraAnchor(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  ulong uVar3;
  long unaff_x23;
  undefined4 *puVar4;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13715);
    *(undefined1 *)(unaff_x23 + 0xf0) = 1;
  }
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= unaff_w21) {
LAB_0317129c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar1 = *(long *)(lVar1 + (long)(int)unaff_w21 * 8 + 0x20);
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
        uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        puVar4 = (undefined4 *)(unaff_x19 + 0x2c);
        do {
          if (uVar2 <= uVar3) goto LAB_0317129c;
          if (unaff_x19 == 0) goto LAB_031712a0;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar3) goto LAB_0317129c;
          FUN_031712a4(puVar4[-3],puVar4[-2],puVar4[-1],*puVar4,param_2,
                       *(undefined4 *)(lVar1 + 0x20 + uVar3 * 4));
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 4;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
      return;
    }
  }
LAB_031712a0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


