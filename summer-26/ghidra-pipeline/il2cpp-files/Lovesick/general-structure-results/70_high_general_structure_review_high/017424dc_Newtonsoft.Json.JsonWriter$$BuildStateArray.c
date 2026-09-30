/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 017424dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__BuildStateArray(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  
  while( true ) {
    if (param_1 <= unaff_x21) {
      return;
    }
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar1 = (int)param_1 + unaff_w24;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) break;
    lVar4 = *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    if ((lVar4 != 0) &&
       (lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,0);
    }
    if ((ulong)*(uint *)(unaff_x22 + 3) <= (ulong)(unaff_x23 + unaff_x21)) break;
    *(long *)((long)unaff_x22 + (unaff_x25 >> 0x1d) + 0x20) = lVar4;
    param_1 = (long)*(int *)(unaff_x19 + 0x18);
    unaff_x21 = unaff_x21 + 1;
    unaff_w24 = unaff_w24 + -1;
    unaff_x25 = unaff_x25 + unaff_x26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


