/*
FUNCTION_NAME: FUN_02102658
ENTRY_POINT: 02102658
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_02102658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  
  puVar1 = Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__47_0__;
  if ((DAT_0482fbb4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseListView_OnItemsRemoved__);
    thunk_FUN_01efb3a4(Method_Shapes_PointPath<PolylinePoint>_get_Count__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseTreeView_OnTreeViewPointerUp__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__47_0__
                      );
    DAT_0482fbb4 = 1;
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar8,0);
  puVar7 = Method_UnityEngine_UIElements_BaseTreeView_OnTreeViewPointerUp__;
  puVar6 = Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__;
  puVar3 = Method_Unity_Collections_NativeSlice<Vector3>_get_Length__;
  puVar2 = Method_Unity_Collections_NativeSlice<Vector3>_get_Item__;
  puVar1 = Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
  if (lVar8 != 0) {
    puVar11 = (undefined8 *)(lVar8 + 0x20);
    *puVar11 = param_5;
    thunk_FUN_01f51358(puVar11,param_5);
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    uVar12 = *(undefined4 *)
              (*(undefined8 **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8) +
              1);
    *(undefined8 *)(lVar8 + 0x10) =
         **(undefined8 **)
           (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    *(undefined4 *)(lVar8 + 0x18) = uVar12;
    puVar5 = Method_UnityEngine_UIElements_BaseListView_OnItemsRemoved__;
    puVar4 = Method_Shapes_PointPath<PolylinePoint>_get_Count__;
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_02a72630(uVar9,lVar8,*(undefined8 *)puVar6,0);
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_02a7391c(uVar10,lVar8,*(undefined8 *)puVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_020f0668(param_1,param_2,param_3,param_4,uVar9,uVar10);
    uVar9 = FUN_02316aac(uVar9,*(undefined8 *)puVar5);
    FUN_0242d544(uVar9,*puVar11,*(undefined8 *)puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


