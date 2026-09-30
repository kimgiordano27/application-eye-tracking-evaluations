/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 01f9f6e0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


/* WARNING: Removing unreachable block (ram,0x01f9f80c) */

void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(void)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long lVar5;
  undefined8 in_stack_00000028;
  
  lVar5 = 0x20;
  do {
    uVar2 = thunk_FUN_01e5b420(&stack0x00000008,unaff_x20 & 0xffffffff,0);
    plVar3 = (long *)FUN_01ef5cd8(uVar2,in_stack_00000028,0);
                    /* try { // try from 01f9f704 to 0209f71b has its CatchHandler @ 01f9f3e8 */
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 01f9f71c to 0209f72b has its CatchHandler @ 01f9f734 */
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
                    /* catch() { ... } // from try @ 01f9f6a4 with catch @ 01f9f72c */
                    /* catch() { ... } // from try @ 01f9f684 with catch @ 01f9f734
                       catch() { ... } // from try @ 01f9f71c with catch @ 01f9f734 */
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar3);
      }
                    /* try { // try from 01f9f73c to 0209f73f has its CatchHandler @ 01f9f7ac */
                    /* try { // try from 01f9f740 to 0209f763 has its CatchHandler @ 01f9f3e8 */
      lVar4 = thunk_FUN_0124baac(plVar3,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar4 == 0) {
        uVar2 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar2,0);
      }
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar3);
      }
    }
    if (*(uint *)(unaff_x19 + 3) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    unaff_x19[unaff_x20 + 4] = (long)plVar3;
    thunk_FUN_01286abc((long)unaff_x19 + lVar5,plVar3);
    unaff_x20 = unaff_x20 + 1;
    lVar5 = lVar5 + 8;
    if ((unaff_x21 & 0xffffffff) == unaff_x20) {
      FUN_01e5b748(&stack0x00000008,0);
      FUN_01e5b7ec(&stack0x00000010,0);
      return;
    }
  } while( true );
}


