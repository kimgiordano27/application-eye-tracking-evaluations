/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05ce456c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ce46c4) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x24;
  long lVar6;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar2 = FUN_06b6f910();
                    /* try { // try from 05ce4580 to 05de45bf has its CatchHandler @ 05ce4580
                       catch() { ... } // from try @ 05ce4580 with catch @ 05ce4580
                       catch() { ... } // from try @ 05ce45d4 with catch @ 05ce4580
                       catch() { ... } // from try @ 05ce4610 with catch @ 05ce4580
                       catch() { ... } // from try @ 05ce4650 with catch @ 05ce4580 */
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 05ce45c0 to 05de45d3 has its CatchHandler @ 05ce45e0 */
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40) + 0x135) & 1) ==
        0) {
      FUN_03d8f26c();
    }
    uVar3 = thunk_FUN_03d2ef40();
                    /* try { // try from 05ce45d4 to 05de45f7 has its CatchHandler @ 05ce4580 */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 05ce45c0 with catch @ 05ce45e0
                        */
    FUN_05ce4bdc();
    while( true ) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
                    /* try { // try from 05ce45f8 to 05de460f has its CatchHandler @ 05ce4648 */
      iVar1 = FUN_06b6daac(*(long *)(unaff_x21 + 0x18),
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if (iVar1 < *(int *)(unaff_x21 + 0x28)) break;
      if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = *(long *)(unaff_x21 + 0x18);
      uVar4 = FUN_05d0f570(*(long *)(unaff_x21 + 0x20),*(undefined8 *)(lVar5 + 0xa8));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548(uVar4,uVar4);
      }
      FUN_06b6f2d8(lVar6,uVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb0)
                  );
    }
    if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05d0f350(*(long *)(unaff_x21 + 0x20),uVar3,*(undefined8 *)(lVar5 + 0xc0));
    if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dddc();
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *(undefined8 *)(in_stack_00000008 + 0x10) = unaff_x24;
    thunk_FUN_03d1023c();
    if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05d0f52c(*(long *)(unaff_x21 + 0x20),in_stack_00000008,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98));
  }
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


