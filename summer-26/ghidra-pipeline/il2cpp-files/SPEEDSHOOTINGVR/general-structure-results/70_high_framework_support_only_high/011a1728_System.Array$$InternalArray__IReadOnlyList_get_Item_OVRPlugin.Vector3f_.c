/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 011a1728
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector3f>(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
                    /* try { // try from 011a1728 to 012a172f has its CatchHandler @ 011a29f4 */
  FUN_0103c2a0();
  in_stack_00000028 = 0;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar2 = FUN_01dadfcc();
  if ((uVar2 & 1) == 0) {
    FUN_01dadf90();
  }
  lVar3 = FUN_01dad0a4(0);
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_01cbf284(0);
  if (lVar3 != 0) {
    in_stack_00000028 = FUN_01dada70(lVar3,0);
    uVar2 = FUN_01dae408(&stack0x00000028,0);
                    /* try { // try from 011a17a8 to 012a17bf has its CatchHandler @ 011a2a94 */
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = FUN_01dae418(&stack0x00000028,unaff_w21 & 1,0), (uVar2 & 1) == 0)) ||
        (uVar2 = FUN_01dae434(), (uVar2 & 1) == 0)) ||
       (uVar2 = FUN_01dae484(&stack0x00000028), (uVar2 & 1) == 0)) {
      uVar2 = FUN_01dadfcc();
      puVar1 = PTR_DAT_0234bbd8;
      if ((uVar2 & 1) != 0) {
        unaff_x22 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234bbd8);
        FUN_01dadfd8(unaff_x22,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dae518(&stack0x00000008,unaff_x22,unaff_w21 & 1,0);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0234bbd8 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dae4ac(lVar3,1,&stack0x00000030,0);
    }
    if (unaff_x20 != 0) {
      (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
      FUN_01dad9b4(&stack0x00000030,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


