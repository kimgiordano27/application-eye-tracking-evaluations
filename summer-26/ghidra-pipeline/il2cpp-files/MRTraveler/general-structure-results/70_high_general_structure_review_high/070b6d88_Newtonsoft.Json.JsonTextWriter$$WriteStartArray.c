/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 070b6d88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(void)

{
  short sVar1;
  undefined4 uVar2;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x25;
  
  do {
    sVar1 = FUN_06f6fafc();
    if (sVar1 == 0x5c) {
      if (unaff_x22 == (long *)0x0) {
        unaff_x22 = (long *)thunk_FUN_03cf5234(*unaff_x25);
        FUN_06f82d7c();
      }
      unaff_w23 = unaff_w23 + 1;
      if (unaff_w23 < *(int *)(unaff_x21 + 0x10)) {
        uVar2 = FUN_06f6fafc();
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
LAB_070b6e38:
        FUN_06f7c2a0(unaff_x22,uVar2,0);
      }
    }
    else if (sVar1 == 0x27) {
      if (unaff_x22 == (long *)0x0) {
        unaff_x22 = (long *)thunk_FUN_03cf5234(*unaff_x25);
        FUN_06f82d7c();
      }
    }
    else if (unaff_x22 != (long *)0x0) {
      uVar2 = FUN_06f6fafc();
      goto LAB_070b6e38;
    }
    unaff_w23 = unaff_w23 + 1;
    if ((unaff_w20 < unaff_w23) || (*(int *)(unaff_x21 + 0x10) <= unaff_w23)) {
      if (unaff_x22 == (long *)0x0) {
        FUN_06f764fc();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x070b6e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x22 + 0x168))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
      return;
    }
  } while( true );
}


