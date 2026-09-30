/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 05598e30
PROGRAM: Untangled-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure
*/


void Newtonsoft_Json_JsonReader__Dispose
               (ulong param_1,undefined8 param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d480b8);
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    *(undefined1 *)(unaff_x22 + 0x8e1) = 1;
  }
  puVar1 = PTR_DAT_06d4f1e0;
  if (param_3 == (long *)0x0) {
    thunk_FUN_02f239f0(PTR_DAT_06d02610);
    uVar3 = thunk_FUN_02ef1808();
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d19d20);
    FUN_05558508(uVar3,uVar4,0);
  }
  else {
    if (param_4 < 0x20) {
      if (*(int *)(*(long *)PTR_DAT_06d4f1e0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (DAT_071c2924 == '\0') {
        FUN_02f07e70(PTR_DAT_06d4f1e0);
        DAT_071c2924 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar2 = *(long *)puVar1;
      }
      if (**(char **)(lVar2 + 0xb8) != '\0') {
        if ((param_4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x05598ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_3 + 0x158))(param_3,*(undefined8 *)(*param_3 + 0x160));
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_06d480b8 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_055989d0(param_3);
        return;
      }
      FUN_05598fbc(param_2,param_3,param_4);
      return;
    }
    thunk_FUN_02f239f0(PTR_DAT_06d02080);
    uVar3 = thunk_FUN_02ef1808();
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d4a210);
    uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d4e510);
    FUN_05558580(uVar3,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d4f298);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar3,uVar4);
}


