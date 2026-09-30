/*
FUNCTION_NAME: FUN_02f412c4
ENTRY_POINT: 02f412c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_5;strong_file_logging_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_02f412c4(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__;
  if ((DAT_048319fd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_FileStream_InitBuffer__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Clickable_OnMouseMove__);
    DAT_048319fd = 1;
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
  puVar4 = Method_UnityEngine_UIElements_Clickable_OnMouseMove__;
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0x1a) != '\0') {
    if (*(int *)(*(long *)Method_System_Collections_CollectionBase_System_Collections_IList_Remove__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar1 = FUN_03ec8718(*(undefined8 *)puVar4,0);
    if ((lVar1 == 0) ||
       (FUN_022df844(lVar1,param_2,*(undefined8 *)Method_System_IO_FileStream_InitBuffer__),
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
      uVar2 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      lVar1 = *(long *)puVar4;
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar1);
      }
      uVar6 = FUN_03579868(uVar6,0);
      uVar3 = FUN_03583338(uVar2,uVar6,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_03eece8c(param_2,0);
        if ((uVar3 & 1) == 0) goto LAB_02f414c4;
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar2 = thunk_FUN_01f117cc();
        puVar4 = Method_System_IO_FileStream_ReadByte__;
      }
      else {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar2 = thunk_FUN_01f117cc();
        puVar4 = 
        Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_IInput>>__
        ;
      }
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar2 = thunk_FUN_01f117cc();
      puVar4 = Method_System_IO_FileStream_Read__;
    }
    uVar6 = thunk_FUN_01efb3a4(puVar4);
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Clickable_OnMouseMove__);
    FUN_034efd98(uVar2,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,param_3);
  }
LAB_02f414c4:
  *(long *)(param_1 + 0x10) = (long)param_2;
  thunk_FUN_01f51358((long *)(param_1 + 0x10),param_2);
  return;
}


