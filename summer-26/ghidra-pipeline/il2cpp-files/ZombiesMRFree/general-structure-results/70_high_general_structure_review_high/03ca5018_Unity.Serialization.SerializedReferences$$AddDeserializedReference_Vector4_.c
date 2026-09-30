/*
FUNCTION_NAME: Unity.Serialization.SerializedReferences$$AddDeserializedReference<Vector4>
ENTRY_POINT: 03ca5018
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Serialization_SerializedReferences__AddDeserializedReference<Vector4>(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 in_w8;
  long unaff_x19;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined1 in_stack_00000058;
  long in_stack_00000258;
  
  uStack0000000000000030 = in_w8;
  uStack0000000000000054 = FUN_06604138(param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18))
  ;
  in_stack_00000050 = uStack0000000000000030;
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000058 = 0;
  FUN_068b42bc(&stack0x00000058);
  puVar1 = PTR_DAT_06f99928;
  lVar2 = *(long *)PTR_DAT_06f99928;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    FUN_065c5a7c(lVar2,&stack0x00000040,0);
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000258) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


