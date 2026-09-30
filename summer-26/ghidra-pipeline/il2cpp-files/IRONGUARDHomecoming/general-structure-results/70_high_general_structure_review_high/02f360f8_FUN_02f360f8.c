/*
FUNCTION_NAME: FUN_02f360f8
ENTRY_POINT: 02f360f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_02f360f8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_048319b0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_FileInfo_get_Length__);
    thunk_FUN_01efb3a4(Method_System_IO_FileStatus_EnsureStatInitialized__);
    thunk_FUN_01efb3a4(Method_System_IO_FileStream__ctor__);
    thunk_FUN_01efb3a4(Method_System_IO_FileStream__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048319b0 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  UnityEngine_Rendering_DebugUI_FloatField__ValidateValue(param_1,param_2,0);
  puVar5 = Method_System_IO_FileStream__ctor__;
  puVar4 = Method_System_IO_FileStream__ctor__;
  puVar3 = Method_System_IO_FileStatus_EnsureStatInitialized__;
  puVar2 = Method_System_IO_FileInfo_get_Length__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  local_80 = FUN_03bfef14(param_1,0);
  FUN_02617978(&local_98,local_80,*(undefined8 *)puVar5);
  uStack_68 = uStack_90;
  local_70 = local_98;
  local_60 = local_88;
  do {
    uVar6 = FUN_02c7bc78(&local_70,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) {
      FUN_02c7bc74(&local_70,*(undefined8 *)puVar2);
      return;
    }
    plVar7 = (long *)FUN_02c7bca4(&local_70,*(undefined8 *)puVar4);
    uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar8 = (long *)FUN_03579868(uVar12,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar12,uVar12);
    }
    uVar6 = (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar12,*(undefined8 *)(*plVar8 + 0x2b0));
  } while ((uVar6 & 1) != 0);
  uVar12 = thunk_FUN_01efb3a4(
                             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                             );
  plVar8 = (long *)FUN_01f08890(uVar12,4);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = thunk_FUN_01f116d0(plVar7,*(undefined8 *)(*plVar8 + 0x40));
  if (lVar9 == 0) {
    uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,0);
  }
  if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar8[4] = (long)plVar7;
  thunk_FUN_01f51358(plVar8 + 4,plVar7);
  if ((param_2 != 0) &&
     (lVar9 = thunk_FUN_01f116d0(param_2,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
    uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,0);
  }
  if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar8[5] = param_2;
  thunk_FUN_01f51358(plVar8 + 5,param_2);
  uVar12 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
  lVar9 = FUN_03b53780(uVar12,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
    uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,0);
  }
  if (*(uint *)(plVar8 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar8[6] = lVar9;
  thunk_FUN_01f51358(plVar8 + 6,lVar9);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  lVar9 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = FUN_03579868(uVar12,0);
  lVar9 = FUN_03b53780(uVar12,0);
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
    uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,0);
  }
  if (3 < *(uint *)(plVar8 + 3)) {
    plVar8[7] = lVar9;
    thunk_FUN_01f51358(plVar8 + 7,lVar9);
    uVar12 = thunk_FUN_01efb3a4(Method_System_IO_FileStream_BeginRead__);
    uVar12 = FUN_0340f378(uVar12,plVar8,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar11 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar11,uVar12,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


