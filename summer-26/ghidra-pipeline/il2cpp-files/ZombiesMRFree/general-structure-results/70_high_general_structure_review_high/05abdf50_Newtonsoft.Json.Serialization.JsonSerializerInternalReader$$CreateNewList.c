/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 05abdf50
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList
               (long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x2c0));
  plVar2 = (long *)param_1[2];
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x398))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x3a0));
    if (iVar1 < 0) {
                    /* try { // try from 05abdff8 to 05bbe00f has its CatchHandler @ 05abe110 */
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar3 = thunk_FUN_0301080c();
      uVar4 = thunk_FUN_03037804(PTR_DAT_06fac698);
                    /* try { // try from 05abe01c to 05bbe01f has its CatchHandler @ 05abe10c */
                    /* try { // try from 05abe020 to 05bbe0e3 has its CatchHandler @ 05abde38 */
      FUN_05a64d00(uVar3,uVar4,0);
      uVar4 = thunk_FUN_03037804(PTR_DAT_06fac6a0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,uVar4);
    }
    (**(code **)(*param_1 + 0x2a8))(param_1,iVar1,param_2,*(undefined8 *)(*param_1 + 0x2b0));
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x3d8))(plVar2,iVar1,*(undefined8 *)(*plVar2 + 0x3e0));
      (**(code **)(*param_1 + 0x2f8))(param_1,iVar1,param_2,*(undefined8 *)(*param_1 + 0x300));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


