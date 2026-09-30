/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteEndArray
ENTRY_POINT: 054812f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonWriter__WriteEndArray(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 < 0x3e4541d9) {
    if (param_1 == 0x3e3cf313) {
      uVar1 = thunk_FUN_0536b75c();
      if ((uVar1 & 1) == 0) goto LAB_05483100;
      uVar3 = 0x43f;
    }
    else {
      if ((param_1 != 0x3e4541d8) || (uVar1 = thunk_FUN_0536b75c(), (uVar1 & 1) == 0)) {
LAB_05483100:
        thunk_FUN_02dfd288(PTR_DAT_06a204f0);
        uVar3 = FUN_05362cb4();
        thunk_FUN_02dfd288(PTR_DAT_069ff490);
        uVar2 = thunk_FUN_02dd3144();
        FUN_054ea764(uVar2,uVar3,0);
        uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a204f8);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar2,uVar3);
      }
      uVar3 = 0x442;
    }
  }
  else if (param_1 == 0x3e520dcb) {
    uVar1 = thunk_FUN_0536b75c();
    if ((uVar1 & 1) == 0) goto LAB_05483100;
    uVar3 = 0x41b;
  }
  else {
    if ((param_1 != 0x3f1a6264) || (uVar1 = thunk_FUN_0536b75c(), (uVar1 & 1) == 0))
    goto LAB_05483100;
    uVar3 = 0x408;
  }
  uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc178);
  FUN_0547fcf0(uVar2,uVar3,1,0);
  return uVar2;
}


