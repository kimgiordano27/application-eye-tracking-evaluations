/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_11
ENTRY_POINT: 01dc212c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_<>c__<_cctor>b__819_11(void)

{
  ushort uVar1;
  ushort *puVar2;
  ulong uVar3;
  long unaff_x19;
  int unaff_w20;
  ushort *unaff_x21;
  int unaff_w24;
  int unaff_w25;
  undefined1 *unaff_x26;
  ushort unaff_w27;
  ushort *unaff_x29;
  
  puVar2 = unaff_x21;
  if (unaff_w24 < unaff_w25) {
    FUN_01dd63d0();
    unaff_x29 = unaff_x21 + unaff_w24;
  }
  while (puVar2 < unaff_x29) {
    uVar1 = *puVar2;
    if (0x7f < *puVar2) {
      uVar1 = unaff_w27;
    }
    *unaff_x26 = (char)uVar1;
    puVar2 = puVar2 + 1;
    unaff_x26 = unaff_x26 + 1;
  }
  if (unaff_x19 != 0) {
    *(undefined2 *)(unaff_x19 + 0x20) = 0;
    uVar3 = (long)puVar2 - (long)unaff_x21;
    if ((long)uVar3 < 0) {
      uVar3 = uVar3 + 1;
    }
    *(int *)(unaff_x19 + 0x34) = (int)(uVar3 >> 1);
  }
  return (int)unaff_x26 - unaff_w20;
}


