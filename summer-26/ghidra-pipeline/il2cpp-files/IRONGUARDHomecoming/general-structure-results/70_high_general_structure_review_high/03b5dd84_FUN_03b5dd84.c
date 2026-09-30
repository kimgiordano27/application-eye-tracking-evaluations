/*
FUNCTION_NAME: FUN_03b5dd84
ENTRY_POINT: 03b5dd84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_4
*/


void FUN_03b5dd84(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38 [2];
  
  puVar1 = Method_System_Reflection_FieldInfo_GetFieldOffset__;
  if ((DAT_0483959d & 1) == 0) {
                    /* try { // try from 03b5ddb8 to 03c5ddc7 has its CatchHandler @ 03b5def4 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_IO_FileInfo_get_Length__);
    thunk_FUN_01efb3a4(Method_System_IO_FileStatus_EnsureStatInitialized__);
                    /* try { // try from 03b5ddd4 to 03c5dde3 has its CatchHandler @ 03b5def8 */
    thunk_FUN_01efb3a4(Method_System_IO_FileStream__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_IndexOfCore__);
    thunk_FUN_01efb3a4(Method_System_Reflection_FieldInfo_GetFieldOffset__);
    thunk_FUN_01efb3a4(Method_System_IO_FileStream__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(StringLiteral_12460);
    thunk_FUN_01efb3a4(StringLiteral_12461);
    thunk_FUN_01efb3a4(StringLiteral_12462);
    thunk_FUN_01efb3a4(StringLiteral_12463);
    thunk_FUN_01efb3a4(StringLiteral_12464);
    DAT_0483959d = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  if (**(char **)(*(long *)puVar1 + 0xb8) != '\0') {
    iVar3 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    if ((int)param_1[0x1b] != iVar3) {
      lVar4 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,7);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_03b5e0d8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)StringLiteral_12460;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x20));
      uVar5 = FUN_03b41740(param_1[4],param_1[5],0);
      if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28),uVar5);
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)StringLiteral_12462;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x30));
      uVar5 = FUN_03b5cc20(param_1);
      if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x38) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x38),uVar5);
      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)StringLiteral_12463;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x40));
      puVar1 = Method_System_Globalization_CompareInfo_IndexOfCore__;
      local_38[0] = (undefined4)param_1[0x1b];
      uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_System_Globalization_CompareInfo_IndexOfCore__,local_38);
      local_70[0] = iVar3;
      uVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_70);
      uVar5 = FUN_0340f2f0(*(undefined8 *)StringLiteral_12461,uVar5,uVar6,0);
      if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x48) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x48),uVar5);
      if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)StringLiteral_12464;
      thunk_FUN_01f51358();
      uVar5 = FUN_0340efe8(lVar4,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
      }
      FUN_0403ed64(uVar5,0);
      *(int *)(param_1 + 0x1b) = iVar3;
    }
    if (0 < (int)param_1[0x13]) {
      local_68 = FUN_03b5cd90(param_1);
      FUN_02617978(&local_58,local_68,*(undefined8 *)Method_System_IO_FileStream__ctor__);
      puVar2 = Method_System_IO_FileStream__ctor__;
      puVar1 = Method_System_IO_FileStatus_EnsureStatInitialized__;
      while (uVar7 = FUN_02c7bc78(&local_58,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
        FUN_02c7bca4(&local_58,*(undefined8 *)puVar2);
      }
      FUN_02c7bc74(&local_58,*(undefined8 *)Method_System_IO_FileInfo_get_Length__);
    }
  }
  return;
}


