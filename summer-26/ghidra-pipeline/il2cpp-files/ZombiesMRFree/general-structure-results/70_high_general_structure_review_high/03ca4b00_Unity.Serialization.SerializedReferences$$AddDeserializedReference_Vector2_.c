/*
FUNCTION_NAME: Unity.Serialization.SerializedReferences$$AddDeserializedReference<Vector2>
ENTRY_POINT: 03ca4b00
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


void Unity_Serialization_SerializedReferences__AddDeserializedReference<Vector2>(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x25;
  long in_stack_00000288;
  
  FUN_068b42bc();
  puVar1 = PTR_DAT_06f99928;
  lVar2 = *(long *)PTR_DAT_06f99928;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    FUN_065c5a7c(lVar2,&stack0x00000060,0);
    if (*(long *)(unaff_x25 + 0x28) == in_stack_00000288) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


