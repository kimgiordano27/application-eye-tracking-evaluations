/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceRoomLayout
ENTRY_POINT: 03173c3c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceRoomLayout(long param_1)

{
  long lVar1;
  uint in_w9;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  long unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (unaff_w19 < in_w9) {
    FUN_031370b8(param_1 + unaff_x24 * 0x1c + 0x20);
    *(uint *)(unaff_x21 + 0x40) = *(uint *)(unaff_x21 + 0x40) & (unaff_w23 ^ 0xffffffff);
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)unaff_w19 * 0x1c;
      uVar2 = *(undefined8 *)(lVar1 + 0x2c);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)((long)unaff_x20 + 0x14) = *(undefined8 *)(lVar1 + 0x34);
      *(undefined8 *)((long)unaff_x20 + 0xc) = uVar2;
      unaff_x20[1] = uVar4;
      *unaff_x20 = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


