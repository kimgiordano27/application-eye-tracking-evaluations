/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsData$$Cast<object>
ENTRY_POINT: 02363b4c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsData__Cast<object>(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar5;
  
  lVar1 = thunk_FUN_01f116d0();
  if (lVar1 == 0) {
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  if (2 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
    thunk_FUN_01f51358();
    uVar5 = **(undefined8 **)(unaff_x19 + 0x38);
    lVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar5,0);
    FUN_01bc56ec();
    FUN_01bc5408();
    uVar5 = FUN_0340f378();
    FUN_01bc50c0();
    uVar2 = (**(code **)(*unaff_x21 + 0x248))();
    FUN_01bc50c0();
    plVar3 = (long *)FUN_01bc5c58(uVar2,(long)unaff_w20);
    FUN_01bc50c0();
    uVar2 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034efd98(uVar4,uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


