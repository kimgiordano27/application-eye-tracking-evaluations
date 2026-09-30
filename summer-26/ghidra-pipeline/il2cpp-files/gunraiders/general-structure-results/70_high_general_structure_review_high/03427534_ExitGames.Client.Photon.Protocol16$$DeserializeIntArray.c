/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeIntArray
ENTRY_POINT: 03427534
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeIntArray(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  long *unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_List<AggregateException>_get_Count__);
    FUN_01c5d288(Method_System_Collections_Generic_List<GOAPWorldState_Vehicle>_get_Count__);
    FUN_01c5d288(Method_System_Collections_Generic_List<GOAPWorldState_Vehicle>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_List<GOAPWorldState_Vehicle>_get_Item__);
    FUN_01c5d288(Method_System_Collections_Generic_List<GUIContent>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_List<GUIContent>_Add__);
    *(undefined1 *)(unaff_x22 + 0xc3) = 1;
  }
  puVar3 = Method_System_Collections_Generic_List<GUIContent>_Add__;
  puVar2 = Method_System_Collections_Generic_List<GUIContent>__ctor__;
  FUN_0284346c();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar5 = FUN_033f1e64();
  uVar4 = FUN_0332aed4(uVar5,0);
  lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02d4f8ec(lVar6,(ulong)uVar4,*(undefined8 *)puVar2);
  *(long *)(unaff_x20 + 0x10) = lVar6;
  puVar3 = Method_System_Collections_Generic_List<GOAPWorldState_Vehicle>_get_Item__;
  puVar2 = Method_System_Collections_Generic_List<GOAPWorldState_Vehicle>_get_Count__;
  if ((int)uVar4 < 1) {
    return;
  }
  lVar10 = 0;
  while( true ) {
    FUN_0332aed8(lVar10,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x25);
    }
    uVar5 = FUN_033f1de0();
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_03427474(uVar7,uVar5);
    if (lVar6 == 0) break;
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)puVar3;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
    }
    else {
      FUN_02d5004c(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if ((ulong)uVar4 - 1 == lVar10) {
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 0x10);
    lVar10 = lVar10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


