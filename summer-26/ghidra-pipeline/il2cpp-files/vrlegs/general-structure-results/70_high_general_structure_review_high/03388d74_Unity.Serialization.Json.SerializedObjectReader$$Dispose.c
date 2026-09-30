/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedObjectReader$$Dispose
ENTRY_POINT: 03388d74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Serialization_Json_SerializedObjectReader__Dispose(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  int iVar2;
  long unaff_x22;
  undefined8 *puVar3;
  long unaff_x23;
  undefined8 *puVar4;
  undefined8 in_stack_00000008;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0xdb8);
  puVar4 = *(undefined8 **)(unaff_x23 + 0xe30);
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar2) {
      return;
    }
    uVar1 = FUN_021a228c(param_1,iVar2,*puVar3);
    if (*(long *)(unaff_x19 + 0x20) == 0) break;
    FUN_02215a88(*(long *)(unaff_x19 + 0x20),iVar2,&stack0x00000008,*puVar4);
    FUN_03388dfc(uVar1,in_stack_00000008);
    param_1 = *(long *)(unaff_x19 + 0x80);
    iVar2 = iVar2 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


