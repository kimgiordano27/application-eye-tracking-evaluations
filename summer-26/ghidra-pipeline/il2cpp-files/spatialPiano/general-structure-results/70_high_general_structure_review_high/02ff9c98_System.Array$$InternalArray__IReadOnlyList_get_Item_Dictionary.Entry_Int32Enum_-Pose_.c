/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<Dictionary.Entry<Int32Enum,-Pose>>
ENTRY_POINT: 02ff9c98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_5;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_5
*/


undefined8 *
System_Array__InternalArray__IReadOnlyList_get_Item<Dictionary_Entry<Int32Enum,_Pose>>
          (int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,uint param_5,
          long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  
  puVar3 = (undefined8 *)(long)*param_1;
  *param_3 = param_1 + 1;
  puVar2 = StringLiteral_9859;
  uVar1 = (param_5 & 0xff) >> 4 & 7;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_02ff9e0c;
      puVar3 = (undefined8 *)((long)puVar3 + unaff_x19);
    }
LAB_02ff9cc0:
    if ((param_5 >> 7 & 1) == 0) {
      return puVar3;
    }
    return (undefined8 *)*puVar3;
  }
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (param_6 == 0) {
        fprintf((FILE *)(StringLiteral_9859 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar3 = (undefined8 *)((long)puVar3 + param_6);
      goto LAB_02ff9cc0;
    }
    if (uVar1 == 2) {
      fprintf((FILE *)(StringLiteral_9859 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_textrel pointer encoding not supported");
      fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar1 == 4) {
      fprintf((FILE *)(StringLiteral_9859 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_funcrel pointer encoding not supported");
      fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar1 == 5) {
      fprintf((FILE *)(StringLiteral_9859 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_aligned pointer encoding not supported");
      fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_02ff9e0c:
  fprintf((FILE *)(StringLiteral_9859 + 0x130),"libunwind: %s - %s\n","getEncodedP",
          "unknown pointer encoding");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


