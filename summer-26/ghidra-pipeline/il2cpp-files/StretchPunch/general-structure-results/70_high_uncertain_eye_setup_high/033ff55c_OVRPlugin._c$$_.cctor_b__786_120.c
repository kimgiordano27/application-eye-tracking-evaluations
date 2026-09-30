/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_120
ENTRY_POINT: 033ff55c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__786_120(void)

{
  uint uVar1;
  ulong uVar2;
  uint in_w8;
  int in_w9;
  uint uVar3;
  int *unaff_x19;
  ulong *unaff_x20;
  uint *unaff_x21;
  uint unaff_w22;
  ulong uVar4;
  long *unaff_x23;
  uint unaff_w24;
  
  uVar3 = unaff_w22 & 0xffff | 0x5f50000;
  uVar4 = (ulong)uVar3;
  do {
    if (in_w9 < 8) break;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      in_w8 = *unaff_x21;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = *unaff_x20 / uVar4;
    }
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = (uint)(CONCAT44((int)*unaff_x20 + (int)uVar2 * (unaff_w24 & 0xffff | 0xfa0a0000),in_w8
                             ) / uVar4);
    }
    if (in_w8 != uVar1 * uVar3) break;
    *unaff_x20 = uVar2;
    *unaff_x21 = uVar1;
    in_w9 = *unaff_x19 + -8;
    *unaff_x19 = in_w9;
    in_w8 = *unaff_x21;
  } while ((in_w8 & 0xff) == 0);
  if (((in_w8 & 0xf) == 0) && (3 < *unaff_x19)) {
    if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      in_w8 = *unaff_x21;
    }
    uVar4 = *unaff_x20 / 10000;
    uVar3 = (uint)(CONCAT44((int)*unaff_x20 + (int)uVar4 * -10000,in_w8) / 10000);
    if (in_w8 == uVar3 * 10000) {
      *unaff_x20 = uVar4;
      *unaff_x21 = uVar3;
      *unaff_x19 = *unaff_x19 + -4;
      in_w8 = *unaff_x21;
    }
  }
  if (((in_w8 & 3) == 0) && (1 < *unaff_x19)) {
    if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      in_w8 = *unaff_x21;
    }
    uVar4 = *unaff_x20 / 100;
    uVar3 = (uint)(CONCAT44((int)*unaff_x20 + (int)uVar4 * -100,in_w8) / 100);
    if (in_w8 == uVar3 * 100) {
      *unaff_x20 = uVar4;
      *unaff_x21 = uVar3;
      *unaff_x19 = *unaff_x19 + -2;
      in_w8 = *unaff_x21;
    }
  }
  if (((in_w8 & 1) == 0) && (0 < *unaff_x19)) {
    if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      in_w8 = *unaff_x21;
    }
    uVar4 = *unaff_x20 / 10;
    uVar3 = (uint)(CONCAT44((int)*unaff_x20 + (int)uVar4 * -10,in_w8) / 10);
    if (in_w8 == uVar3 * 10) {
      *unaff_x20 = uVar4;
      *unaff_x21 = uVar3;
      *unaff_x19 = *unaff_x19 + -1;
    }
  }
  return;
}


