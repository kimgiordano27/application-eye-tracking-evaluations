/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 079d8988
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0
          (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  
  iVar1 = (**(code **)(param_1 + 0x2a8))(param_2,*(undefined8 *)(param_1 + 0x2b0));
  if (iVar1 <= (int)unaff_w19) {
    thunk_FUN_044adef4(PTR_DAT_09f25200);
    uVar2 = thunk_FUN_0448520c();
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f251f8);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f25228);
    FUN_0799a4bc(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f42e20);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2,uVar3);
  }
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 != 0) {
    if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
      return *(undefined8 *)(lVar5 + (ulong)unaff_w19 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


