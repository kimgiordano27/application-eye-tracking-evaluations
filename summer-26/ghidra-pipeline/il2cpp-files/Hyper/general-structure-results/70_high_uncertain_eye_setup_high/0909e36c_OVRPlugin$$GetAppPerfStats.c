/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 0909e36c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetAppPerfStats(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == **(long **)(in_x10 + 0x968)) {
                    /* try { // try from 0909e3b4 to 0919e3cb has its CatchHandler @ 0909e664 */
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
        goto LAB_0909e3c0;
      }
                    /* try { // try from 0909e394 to 0919e39f has its CatchHandler @ 0909e634 */
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_0909e3c0:
  (*(code *)*puVar2)(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (unaff_x21 != 0) {
                    /* try { // try from 0909e3ec to 0919e3f3 has its CatchHandler @ 0909e658 */
    uVar4 = OVRPassthroughLayer_ColorLutHandler__set_IsValid();
    uVar1 = unaff_w22 | 2;
    if ((uVar4 & 1) == 0) {
      uVar1 = unaff_w22;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


