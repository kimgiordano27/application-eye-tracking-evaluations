/*
FUNCTION_NAME: FUN_02f3ff98
ENTRY_POINT: 02f3ff98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


void FUN_02f3ff98(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__;
  if ((DAT_048319f6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048319f6 = 1;
  }
  FUN_03f64f98(param_1,param_2,0);
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
  puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0x1a) == '\0') {
    return;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
  uVar6 = **(undefined8 **)(*(long *)(param_3 + 0x20) + 0xc0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar4);
  }
  uVar6 = FUN_03579868(uVar6,0);
  uVar3 = FUN_03583338(uVar2,uVar6,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_034b2ac0(param_2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar4 = Method_System_IO_FileStream_Init__;
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar4 = Method_System_IO_FileStream_FlushBuffer__;
  }
  uVar6 = thunk_FUN_01efb3a4(puVar4);
  uVar5 = thunk_FUN_01efb3a4(Method_CharacterCameraConstraint_CameraUpdate__);
  FUN_034efd98(uVar2,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,param_3);
}


