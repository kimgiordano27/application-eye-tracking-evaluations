/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 0718c2f8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
              (long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w25;
  long unaff_x26;
  long in_stack_00000028;
  
  while (iVar1 = FUN_070d1880(param_1,param_2,0), iVar1 == 0) {
    unaff_x23 = FUN_071c5e28(unaff_x23,1,0);
    uVar2 = FUN_071c5e1c(unaff_x23,0);
    uVar3 = FUN_071c5e1c();
    iVar1 = unaff_w25;
    if (uVar3 <= uVar2) break;
    param_2 = (ulong)*(ushort *)(unaff_x19 + unaff_x23 * 2);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_1 = unaff_x20 + unaff_x23 * 2;
  }
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00000028) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


