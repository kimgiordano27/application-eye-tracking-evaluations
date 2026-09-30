/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 01d806f4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d80774) */

void OVRPlugin__GetActionStatePose(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000028;
  
  do {
    param_1[4] = (long)unaff_x21;
                    /* try { // try from 01d80700 to 01e80737 has its CatchHandler @ 01d80a10 */
    thunk_FUN_0106e12c((long)unaff_x19 + unaff_x24,unaff_x21);
    unaff_x20 = unaff_x20 + 1;
    unaff_x24 = unaff_x24 + 8;
    if (unaff_x23 == unaff_x20) {
      FUN_01c43f5c(&stack0x00000008,0);
      FUN_01c44000(&stack0x00000010,0);
                    /* try { // try from 01d80738 to 01e8081f has its CatchHandler @ 01d80528 */
      return;
    }
    uVar2 = thunk_FUN_01c43c34(&stack0x00000008,unaff_x20 & 0xffffffff,0);
    unaff_x21 = (long *)FUN_01cd87b4(uVar2,in_stack_00000028,0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (unaff_x21 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(unaff_x21);
      }
      lVar3 = thunk_FUN_0103ffe0(unaff_x21,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar3 == 0) {
        uVar2 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar2,0);
      }
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(unaff_x21);
      }
    }
    if (*(uint *)(unaff_x19 + 3) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    param_1 = unaff_x19 + unaff_x20;
  } while( true );
}


