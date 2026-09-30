/*
FUNCTION_NAME: FUN_06127e5c
ENTRY_POINT: 06127e5c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_06127e5c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DAT_06a83440 == (code *)0x0) {
    DAT_06a83440 = (code *)FUN_02ce79f8("UnityEngine.Networking.UnityWebRequest::get_isModifiable()"
                                       );
  }
  uVar2 = (*DAT_06a83440)(param_1);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
    uVar3 = thunk_FUN_02cea894();
    uVar4 = thunk_FUN_02c7737c(DoorModule_<SpawnInitialVisitor>d__78_TypeInfo);
    FUN_04f30dfc(uVar3,uVar4,0);
    uVar4 = thunk_FUN_02c7737c(DoorPhysics_<OnHandlePull>d__11_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar3,uVar4);
  }
  if (DAT_06a83468 == (code *)0x0) {
    DAT_06a83468 = (code *)FUN_02ce79f8(
                                       "UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)"
                                       );
  }
  iVar1 = (*DAT_06a83468)(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return;
  }
  uVar3 = FUN_061277f0();
  thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
  uVar4 = thunk_FUN_02cea894();
  FUN_04f30dfc(uVar4,uVar3,0);
  uVar3 = thunk_FUN_02c7737c(DoorPhysics_<OnHandlePull>d__11_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar4,uVar3);
}


