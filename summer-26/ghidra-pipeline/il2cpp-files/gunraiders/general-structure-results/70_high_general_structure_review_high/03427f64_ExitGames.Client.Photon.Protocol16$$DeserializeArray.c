/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeArray
ENTRY_POINT: 03427f64
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x25;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xd88));
  FUN_01c5d288(Method_System_Collections_Generic_List<GameObject>__ctor__);
  FUN_01c5d288(Method_System_Collections_Generic_List<GameObject>_Clear__);
  FUN_01c5d288(Method_System_Collections_Generic_List<GameObject>_Contains__);
  FUN_01c5d288(Method_System_Collections_Generic_List<GameObject>_Find__);
  *(undefined1 *)(unaff_x22 + 199) = 1;
  puVar2 = Method_System_Collections_Generic_List<GameObject>_Find__;
  puVar1 = Method_System_Collections_Generic_List<GameObject>_Contains__;
  FUN_0284346c();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar4 = FUN_033f30e8();
  iVar3 = FUN_0332aed4(uVar4,0);
  uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_02d4f8ec(uVar4,iVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
  if (0 < iVar3) {
    FUN_040218e8();
    return;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar4 = FUN_033f3164();
  *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
  uVar4 = FUN_033f3014();
  *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
  uVar4 = FUN_033f2f40();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  return;
}


