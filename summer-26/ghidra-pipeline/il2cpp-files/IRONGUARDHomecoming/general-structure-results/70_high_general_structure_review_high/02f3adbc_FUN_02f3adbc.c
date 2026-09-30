/*
FUNCTION_NAME: FUN_02f3adbc
ENTRY_POINT: 02f3adbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02f3adbc(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__;
  if ((DAT_048319d1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_FileStream_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_CharEnumerator_get_Current__);
    DAT_048319d1 = 1;
  }
  FUN_035ac8e8(param_1,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_048303a6 == '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__);
    DAT_048303a6 = '\x01';
  }
  lVar1 = *(long *)puVar4;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar1 = *(long *)puVar4;
  }
  puVar4 = Method_System_CharEnumerator_get_Current__;
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0x1a) != '\0') {
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_System_Collections_IList_Remove__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar1 = FUN_03ec8718(*(undefined8 *)puVar4,0);
    if ((lVar1 == 0) ||
       (FUN_022df844(lVar1,param_2,*(undefined8 *)Method_System_IO_FileStream_Dispose__),
       puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__, param_2 == (long *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    lVar1 = *(long *)puVar4;
    uVar6 = **(undefined8 **)(*(long *)(param_3 + 0x20) + 0xc0);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar1);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar3 = FUN_03583338(uVar2,uVar6,0);
    if ((uVar3 & 1) == 0) {
      uVar2 = (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
      lVar1 = *(long *)puVar4;
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar1);
      }
      uVar6 = FUN_03579868(uVar6,0);
      uVar3 = FUN_03583338(uVar2,uVar6,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_034b140c(param_2,0);
        if ((uVar3 & 1) == 0) goto LAB_02f3af98;
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar2 = thunk_FUN_01f117cc();
        puVar4 = Method_System_IO_FileStream_EndWrite__;
      }
      else {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar2 = thunk_FUN_01f117cc();
        puVar4 = Method_System_DefaultBinder_BindToMethod__;
      }
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar2 = thunk_FUN_01f117cc();
      puVar4 = Method_System_IO_FileStream_EndRead__;
    }
    uVar6 = thunk_FUN_01efb3a4(puVar4);
    uVar5 = thunk_FUN_01efb3a4(Method_System_CharEnumerator_get_Current__);
    FUN_034efd98(uVar2,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,param_3);
  }
LAB_02f3af98:
  *(long *)(param_1 + 0x10) = (long)param_2;
  thunk_FUN_01f51358((long *)(param_1 + 0x10),param_2);
  return;
}


