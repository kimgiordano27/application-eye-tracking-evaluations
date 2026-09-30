/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 033ec058
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(void)

{
  bool bVar1;
  int in_w8;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  
  uVar3 = (uint)unaff_x20;
  if ((7 < in_w8) && ((unaff_x20 & 0xff) == 0)) {
    uVar5 = (uint)(unaff_x20 / 100000000);
    if (uVar5 * 100000000 == uVar3) {
      unaff_w23 = unaff_w23 + -8;
      unaff_x20 = unaff_x20 / 100000000;
      in_w8 = in_w8 + -8;
      uVar3 = uVar5;
    }
  }
  if (((in_w8 < 4) || ((uVar3 & 0xf) != 0)) ||
     (uVar2 = unaff_x20 / 10000, (int)uVar2 * 10000 != uVar3)) {
    uVar2 = (ulong)uVar3;
  }
  else {
    unaff_w23 = unaff_w23 + -4;
    unaff_x20 = uVar2;
    in_w8 = in_w8 + -4;
  }
  if (((in_w8 < 2) || ((uVar2 & 3) != 0)) ||
     (uVar4 = unaff_x20 / 100, (int)uVar4 * 100 != (int)uVar2)) {
    uVar4 = uVar2 & 0xffffffff;
  }
  else {
    unaff_w23 = unaff_w23 + -2;
    in_w8 = in_w8 + -2;
    unaff_x20 = uVar4;
  }
  uVar2 = unaff_x20;
  if ((0 < in_w8) && ((uVar4 & 1) == 0)) {
    bVar1 = (int)(unaff_x20 / 10) * 10 == (int)uVar4;
    uVar2 = unaff_x20 / 10;
    if (!bVar1) {
      uVar2 = unaff_x20;
    }
    unaff_w23 = unaff_w23 - (uint)bVar1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  *(ulong *)(unaff_x19 + 2) = uVar2;
  *unaff_x19 = unaff_w22 | unaff_w23 << 0x10;
  return;
}


