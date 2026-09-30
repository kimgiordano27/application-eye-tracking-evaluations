/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 04d56fac
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d571d0) */
/* WARNING: Removing unreachable block (ram,0x04d571ac) */

undefined4 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>___ctor(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
                    /* try { // try from 04d56fb8 to 04e56fcf has its CatchHandler @ 04d57050 */
  thunk_FUN_02f411dc(*(long *)(param_1 + 0xb8) + 8);
  uVar1 = FUN_03a32588();
  lVar3 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar3);
  }
  lVar3 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar4 = *(long *)(*unaff_x19 + 0xc0);
    lVar3 = *(long *)(lVar4 + 0xd8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
      lVar4 = *(long *)(*unaff_x19 + 0xc0);
    }
    lVar4 = *(long *)(lVar4 + 0x100);
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768(lVar4);
    }
    lVar3 = thunk_FUN_02ef1808(lVar4);
    FUN_05134270(lVar3,uVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x108),
                 *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x110));
    lVar5 = *(long *)(*unaff_x19 + 0xc0);
    lVar4 = *(long *)(lVar5 + 0xd8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
      lVar5 = *(long *)(*unaff_x19 + 0xc0);
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x10) = lVar3;
    lVar4 = *(long *)(lVar5 + 0xd8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    thunk_FUN_02f411dc(*(long *)(lVar4 + 0xb8) + 0x10,lVar3);
  }
  uVar1 = FUN_03a22d48(uVar1,lVar3,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
  lVar3 = FUN_03a31888(uVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x128));
  if (lVar3 != 0) {
    FUN_03fd16fc(&stack0x00000008,lVar3,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x130));
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      uVar2 = FUN_04df6d30(&stack0x00000020,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x158));
      if ((uVar2 & 1) == 0) {
        FUN_04df6d2c(&stack0x00000020,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x160));
        return *(undefined4 *)(lVar3 + 0x18);
      }
      if (unaff_x20 == 0) break;
      FUN_04c72884();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


