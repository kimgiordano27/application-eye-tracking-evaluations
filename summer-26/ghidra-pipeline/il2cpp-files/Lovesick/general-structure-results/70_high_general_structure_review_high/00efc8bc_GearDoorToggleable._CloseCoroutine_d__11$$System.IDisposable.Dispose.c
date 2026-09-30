/*
FUNCTION_NAME: GearDoorToggleable.<CloseCoroutine>d__11$$System.IDisposable.Dispose
ENTRY_POINT: 00efc8bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void GearDoorToggleable_<CloseCoroutine>d__11__System_IDisposable_Dispose
               (undefined4 param_1,float param_2,float param_3)

{
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (unaff_x21 != 0) {
    if (*(int *)(unaff_x21 + 0x18) == 0) {
LAB_00efc984:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined4 *)(unaff_x21 + 0x20) = param_1;
    *(float *)(unaff_x21 + 0x24) = param_2;
    *(float *)(unaff_x21 + 0x28) = param_3;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      lVar1 = *(long *)(unaff_x19 + 0x38);
      fVar2 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x40),0);
      if ((*unaff_x20 != 0) &&
         (fVar4 = param_2, fVar5 = param_3, fVar3 = (float)FUN_0269fa60(*unaff_x20,0), lVar1 != 0))
      {
        if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_00efc984;
        fVar6 = *(float *)(unaff_x19 + 0x2c);
        *(float *)(lVar1 + 0x2c) = fVar2 + fVar3 * fVar6;
        *(float *)(lVar1 + 0x30) = param_2 + fVar4 * fVar6;
        *(float *)(lVar1 + 0x34) = param_3 + fVar5 * fVar6;
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_0266971c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x38),0);
          if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) {
            FUN_02669328(*(long *)(unaff_x19 + 0x30),
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


