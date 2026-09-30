/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_34
ENTRY_POINT: 0697e300
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0697e3b8) */

void OVRPlugin_<>c__<_cctor>b__810_34(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  puVar1 = PTR_DAT_08491688;
  if (unaff_x19 == 0) goto LAB_0697e480;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    /* try { // try from 0697e314 to 06a7e31b has its CatchHandler @ 0697e60c */
    lVar2 = *(long *)PTR_DAT_08491688;
    if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* try { // try from 0697e320 to 06a7e32b has its CatchHandler @ 0697e5f0 */
      thunk_FUN_03ae8be4();
      lVar2 = *(long *)puVar1;
    }
                    /* try { // try from 0697e330 to 06a7e33b has its CatchHandler @ 0697e5ec */
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0697e480;
                    /* try { // try from 0697e340 to 06a7e34b has its CatchHandler @ 0697e604 */
    uVar3 = FUN_06051ad8(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                         &stack0x00000018,*(undefined8 *)PTR_DAT_084b76a0);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
                    /* try { // try from 0697e360 to 06a7e363 has its CatchHandler @ 0697e5fc */
                    /* try { // try from 0697e364 to 06a7e3a7 has its CatchHandler @ 0697e184 */
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar2 = *(long *)puVar1;
      }
      if ((in_stack_00000028 != 0) && (**(long **)(lVar2 + 0xb8) != 0)) {
        FUN_060514b0(**(long **)(lVar2 + 0xb8),*(undefined8 *)(in_stack_00000028 + 0x18),
                     *(undefined8 *)PTR_DAT_084b7690);
        return;
      }
      goto LAB_0697e480;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_0697e480:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar3 = FUN_06043e44(lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000010,
                       *(undefined8 *)PTR_DAT_084b7698);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = unaff_x19;
      thunk_FUN_03afed3c((long *)(lVar4 + 0x18));
    }
  }
  else {
    if (in_stack_00000010 == (long *)0x0) goto LAB_0697e480;
    (**(code **)(*in_stack_00000010 + 0x178))();
  }
  return;
}


