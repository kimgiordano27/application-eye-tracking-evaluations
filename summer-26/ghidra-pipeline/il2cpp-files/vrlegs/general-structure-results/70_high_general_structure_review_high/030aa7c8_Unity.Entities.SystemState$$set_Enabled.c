/*
FUNCTION_NAME: Unity.Entities.SystemState$$set_Enabled
ENTRY_POINT: 030aa7c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined1  [16] Unity_Entities_SystemState__set_Enabled(long param_1)

{
  undefined1 auVar1 [16];
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x840));
  FUN_01ab69ac(System_Action<PointerUpEvent>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x5b9) = 1;
  FUN_01b5f2c8(&stack0x00000008,(long)&stack0x00000028 + 4,*unaff_x22);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  FUN_01b5f3b4(&stack0x00000008,(long)&stack0x00000028 + 4,*unaff_x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (in_stack_00000028._4_4_ < *(uint *)(lVar2 + 0x18)) {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_02207c1c(&stack0x00000010,(long)&stack0x00000028 + 4,
                 *(undefined8 *)(lVar2 + (long)(int)in_stack_00000028._4_4_ * 8 + 0x20),
                 *(undefined8 *)System_Action<Pose>_TypeInfo);
    auVar1._8_8_ = in_stack_00000018;
    auVar1._0_8_ = in_stack_00000010;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


