/*
FUNCTION_NAME: I2.Loc.SimpleJSON.JSONArray.<get_Childs>d__13$$System.Collections.Generic.IEnumerable<I2.Loc.SimpleJSON.JSONNode>.GetEnumerator
ENTRY_POINT: 0203a414
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void I2_Loc_SimpleJSON_JSONArray_<get_Childs>d__13__System_Collections_Generic_IEnumerable<I2_Loc_SimpleJSON_JSONNode>_GetEnumerator
               (undefined1 param_1 [16],float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  FUN_0203a8fc();
  fVar3 = fStack0000000000000008;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar7 = (float)FUN_03d554d8(*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar8 = (float)FUN_03d554d8(*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_03d554d8(*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          fVar9 = param_2;
          FUN_03d554d8(*(long *)(unaff_x19 + 0x28),0);
          puVar2 = System_Collections_Generic_ICollection<Expression>_TypeInfo;
          puVar1 = PTR_DAT_04231d40;
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_03d55578(fVar7 + (fVar3 + 1.0) * (fVar8 - fVar7) * 0.5,
                         param_2 + (fStack000000000000000c + 1.0) * (fVar9 - param_2) * 0.5,0,
                         *(long *)(unaff_x19 + 0x40),0);
            plVar6 = *(long **)(unaff_x19 + 0x30);
            uVar4 = FUN_032e3f8c(&stack0x00000008,*(undefined8 *)puVar2,0);
            uVar5 = FUN_032e3f8c((ulong)&stack0x00000008 | 4,*(undefined8 *)puVar2,0);
            uVar4 = FUN_03152fb8(uVar4,*(undefined8 *)puVar1,uVar5,0);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x5f0));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


