/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 0492a0cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  do {
    uStack0000000000000010 = (undefined4)param_1;
    uStack0000000000000014 = (undefined4)((ulong)param_1 >> 0x20);
    FUN_0390f090(&stack0x00000040,param_3);
    uStack0000000000000014 = uStack0000000000000054;
    uStack0000000000000010 = uStack0000000000000050;
    lVar1 = thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8)
                              );
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_02d9d438(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
    thunk_FUN_02dd37b4(unaff_x22 + (long)(int)unaff_w20 + 4,lVar1);
    unaff_w20 = unaff_w20 + 1;
    do {
      lVar1 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = lVar1 + 0x24;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0492a170 to 04a2a407 has its CatchHandler @ 0492a170
                       catch() { ... } // from try @ 0492a170 with catch @ 0492a170
                       catch() { ... } // from try @ 0492a468 with catch @ 0492a170
                       catch() { ... } // from try @ 0492a4b4 with catch @ 0492a170
                       catch() { ... } // from try @ 0492a4c8 with catch @ 0492a170
                       catch() { ... } // from try @ 0492a508 with catch @ 0492a170
                       catch() { ... } // from try @ 0492a544 with catch @ 0492a170 */
        FUN_02d60af0();
      }
    } while (*(int *)(lVar1 + 0x18) < 0);
    param_1 = *(undefined8 *)(lVar1 + 0x34);
    param_3 = (ulong)*(uint *)(lVar1 + 0x20);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
  } while( true );
}


