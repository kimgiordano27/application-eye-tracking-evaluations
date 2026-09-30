/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_131
ENTRY_POINT: 01dc5484
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


undefined2 OVRPlugin_<>c__<_cctor>b__819_131(long param_1,undefined8 param_2,ushort param_3)

{
  ulong uVar1;
  ushort uVar2;
  undefined1 in_CY;
  uint in_w9;
  uint in_w10;
  uint uVar3;
  uint in_w11;
  uint in_w12;
  
  while (!(bool)in_CY) {
    uVar2 = *(ushort *)(param_1 + (ulong)in_w12 * 2 + 0x20);
    if (uVar2 == param_3) {
                    /* try { // try from 01dc54e8 to 01ec54f7 has its CatchHandler @ 01dc56bc */
      if ((in_w12 | 1) < in_w9) {
        uVar1 = (ulong)(in_w12 | 1);
        goto LAB_01dc550c;
      }
      break;
    }
    uVar3 = in_w12;
    if (param_3 <= uVar2) {
      uVar3 = in_w10;
      in_w11 = in_w12;
    }
    if ((int)(in_w11 - uVar3) < 7) goto LAB_01dc54d8;
    in_w12 = uVar3 + (in_w11 - uVar3 >> 1) & 0xfffe;
    in_w10 = uVar3;
    in_CY = in_w9 <= in_w12;
  }
LAB_01dc5518:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
LAB_01dc54d8:
  if ((int)in_w11 <= (int)uVar3) {
    return 0;
  }
  if (in_w9 <= uVar3) goto LAB_01dc5518;
                    /* try { // try from 01dc54c8 to 01ec54d7 has its CatchHandler @ 01dc572c */
  if (*(ushort *)(param_1 + (long)(int)uVar3 * 2 + 0x20) == param_3) {
    if (uVar3 + 1 < in_w9) {
      uVar1 = (ulong)(int)(uVar3 + 1);
LAB_01dc550c:
      return *(undefined2 *)(param_1 + uVar1 * 2 + 0x20);
    }
    goto LAB_01dc5518;
  }
  uVar3 = uVar3 + 2;
  goto LAB_01dc54d8;
}


