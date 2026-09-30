/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Player$$Equals
ENTRY_POINT: 072f85e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Player__Equals(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 072f85e8 to 073f8607 has its CatchHandler @ 072f862c */
  FUN_05670d6c();
  if (unaff_x20[7] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 072f8744 to 073f8747 has its CatchHandler @ 072f8750 */
    FUN_04077830();
  }
                    /* try { // try from 072f860c to 073f860f has its CatchHandler @ 072f8680 */
                    /* try { // try from 072f8610 to 073f8613 has its CatchHandler @ 072f8668 */
  lVar2 = FUN_0730291c(unaff_w21);
                    /* try { // try from 072f8614 to 073f8617 has its CatchHandler @ 072f8688 */
  if (lVar2 != 0) {
                    /* try { // try from 072f8618 to 073f861b has its CatchHandler @ 072f8684 */
                    /* try { // try from 072f861c to 073f861f has its CatchHandler @ 072f866c */
    in_stack_00000018 = FUN_076f1ee4(lVar2,0);
    uVar3 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      UnityEngine_Rendering_CullingResults__GetNativeArray<VisibleReflectionProbe>
                (unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_07591f7c(&stack0x00000018,0);
      puVar1 = PTR_DAT_092a8ae0;
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(char *)((long)unaff_x20 + 0x32) == '\0') {
        FUN_072f7d90();
        in_stack_00000010._4_4_ = 0xe;
        lVar2 = FUN_07676bc4((long)&stack0x00000010 + 4,0);
        unaff_x20[8] = lVar2;
        thunk_FUN_040ec700();
        unaff_x20[9] = *(long *)puVar1;
        thunk_FUN_040ec700();
        (**(code **)(*unaff_x20 + 0x358))();
      }
      lVar2 = *unaff_x23;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 072f8748 to 073f8753 has its CatchHandler @ 072f8184 */
  FUN_04077830();
}


