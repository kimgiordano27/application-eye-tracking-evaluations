/*
FUNCTION_NAME: FUN_03727810
ENTRY_POINT: 03727810
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_21;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x03727cac) */
/* WARNING: Removing unreachable block (ram,0x03727b1c) */
/* WARNING: Removing unreachable block (ram,0x03727ccc) */
/* WARNING: Removing unreachable block (ram,0x03727c80) */

undefined8 FUN_03727810(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_74 [4];
  undefined8 local_70;
  long lStack_68;
  undefined8 local_58;
  
  puVar2 = Method_System_IO_FileStream_ReadByte__;
  puVar1 = Method_System_IO_FileStream_EndWrite__;
  if ((DAT_04538a56 & 1) == 0) {
    FUN_01c5d288(Method_System_IO_FileStream_ReadData__);
    FUN_01c5d288(Method_System_IO_FileStream_ReadInternal__);
    FUN_01c5d288(Method_System_IO_FileStream_Seek__);
    FUN_01c5d288(Method_System_IO_FileStream_SetLength__);
    FUN_01c5d288(Method_System_IO_FileStream_Write__);
    FUN_01c5d288(Method_System_IO_FileStream_WriteByte__);
    FUN_01c5d288(Method_System_IO_FileStream_WriteInternal__);
    FUN_01c5d288(Method_System_IO_FileStream_get_Length__);
    FUN_01c5d288(Method_System_IO_FileStream_get_Position__);
    FUN_01c5d288(Method_System_IO_FileStream_set_Position__);
    FUN_01c5d288(Method_System_IO_FileStream_ReadByte__);
    FUN_01c5d288(Method_System_IO_FileStreamAsyncResult_CBWrapper__);
    FUN_01c5d288(Method_System_IO_FileSystem_CopyDanglingSymlink__);
    FUN_01c5d288(Method_System_IO_FileSystem_CreateDirectory__);
    FUN_01c5d288(Method_System_IO_FileStream_EndWrite__);
    FUN_01c5d288(Method_System_IO_FileSystem_DeleteFile__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Vector4>__);
    DAT_04538a56 = 1;
  }
  local_70 = 0;
  lStack_68 = 0;
  local_74[0] = '\0';
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  local_58 = 0;
  FUN_02c6ebe8(&local_70,param_1,param_2,*(undefined8 *)puVar2);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = Method_System_IO_FileStream_Seek__;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    uVar8 = FUN_0284cb58(lVar9,local_70,lStack_68,&local_58,
                         *(undefined8 *)Method_System_IO_FileStream_Seek__);
    if ((uVar8 & 1) != 0) {
      return local_58;
    }
    lVar7 = *(long *)puVar1;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar7 = *(long *)puVar1;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  local_74[0] = '\0';
  FUN_0333497c(uVar10,local_74,0);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(lVar7);
    lVar7 = *(long *)puVar1;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    uVar8 = FUN_0284cb58(lVar9,local_70,lStack_68,&local_58,*(undefined8 *)puVar3);
    if ((uVar8 & 1) != 0) goto LAB_03727c60;
    lVar7 = *(long *)puVar1;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(lVar7);
  }
  FUN_037289ac(param_1);
  puVar3 = Method_System_IO_FileSystem_DeleteFile__;
  if (lVar9 == 0) {
    lVar7 = *(long *)Method_System_IO_FileSystem_DeleteFile__;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar7 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar7 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_IO_FileStream_WriteInternal__);
    FUN_0284aac8(lVar7,uVar11,*(undefined8 *)Method_System_IO_FileStream_Write__);
  }
  else {
    iVar6 = FUN_0284b128(lVar9,*(undefined8 *)Method_System_IO_FileStream_WriteByte__);
    puVar3 = Method_System_IO_FileSystem_DeleteFile__;
    lVar7 = *(long *)Method_System_IO_FileSystem_DeleteFile__;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar7 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar7 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_IO_FileStream_WriteInternal__);
    FUN_0284aae4(lVar7,iVar6 + 1,uVar11,*(undefined8 *)Method_System_IO_FileStream_SetLength__);
    FUN_0284b890(&local_e0,lVar9,*(undefined8 *)Method_System_IO_FileStream_ReadInternal__);
    puVar4 = Method_System_IO_FileStream_get_Position__;
    puVar3 = Method_System_IO_FileStream_ReadData__;
    lStack_a8 = lStack_d8;
    local_b0 = local_e0;
    uStack_98 = uStack_c8;
    local_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    while (uVar8 = FUN_02a1b174(&local_b0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_0284b424(lVar7,local_a0,uStack_98,local_90,*(undefined8 *)puVar3);
    }
    FUN_02a1b29c(&local_b0,*(undefined8 *)Method_System_IO_FileStream_get_Length__);
  }
  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Vector4>__);
  FUN_038b3a78(uVar11,0);
  local_e0 = 0;
  lStack_d8 = 0;
  FUN_02c6ebe8(&local_e0,param_1,uVar11,*(undefined8 *)puVar2);
  lVar9 = lStack_d8;
  lStack_68 = lStack_d8;
  local_70 = local_e0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar11 = FUN_038afc80(param_2,0);
  lVar5 = lStack_68;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  *(undefined8 *)(lVar9 + 0x18) = uVar11;
  if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  *(undefined8 *)(lStack_68 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar11 = FUN_038b3ab8(param_2,0);
  *(undefined8 *)(lVar5 + 0x10) = uVar11;
  if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  *(undefined1 *)(lStack_68 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar9 = *(long *)puVar1;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  local_58 = FUN_038c8ca8(lVar9,param_1,param_2,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_0284b424(lVar7,local_70,lStack_68,local_58,
               *(undefined8 *)Method_System_IO_FileStream_ReadData__);
  *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar7;
LAB_03727c60:
  if (local_74[0] != '\0') {
    thunk_FUN_01c216e8(uVar10,0);
  }
  return local_58;
}


