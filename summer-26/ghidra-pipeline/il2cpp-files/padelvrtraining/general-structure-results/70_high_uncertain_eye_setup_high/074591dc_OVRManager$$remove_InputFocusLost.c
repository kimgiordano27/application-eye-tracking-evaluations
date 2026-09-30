/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 074591dc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusLost(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000006c;
  undefined8 uStack0000000000000074;
  
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
                    /* try { // try from 074591f4 to 075591fb has its CatchHandler @ 07459620 */
  FUN_08a5b7d0(param_1,0);
  uStack0000000000000074 = CONCAT44(uStack0000000000000058,uStack0000000000000054);
  uStack000000000000006c = uStack000000000000004c;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 07459230 to 07559237 has its CatchHandler @ 07459600 */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09220378) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_07459264;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 0745924c to 07559267 has its CatchHandler @ 074595c8 */
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_07459264:
  (*(code *)*puVar1)();
                    /* try { // try from 07459294 to 0755929f has its CatchHandler @ 07459604 */
  *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
                    /* try { // try from 074592a4 to 075592ab has its CatchHandler @ 074595fc */
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return;
}


