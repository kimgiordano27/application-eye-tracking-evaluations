/*
FUNCTION_NAME: Unity.Mathematics.double2$$.ctor
ENTRY_POINT: 03b5dde8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_3
*/


void Unity_Mathematics_double2___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000038;
  
  thunk_FUN_01efb3a4();
                    /* try { // try from 03b5ddf0 to 03c5de13 has its CatchHandler @ 03b5df04 */
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
  *(undefined1 *)(unaff_x21 + 0x59d) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  if (**(char **)(*unaff_x20 + 0xb8) != '\0') {
    iVar3 = (**(code **)(*unaff_x19 + 0x228))();
    if ((int)unaff_x19[0x1b] != iVar3) {
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
      uVar5 = FUN_03b41740(unaff_x19[4],unaff_x19[5],0);
      if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28),uVar5);
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)StringLiteral_12462;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x30));
      uVar5 = FUN_03b5cc20();
      if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x38) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x38),uVar5);
      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_03b5e0d8;
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)StringLiteral_12463;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x40));
      puVar1 = Method_System_Globalization_CompareInfo_IndexOfCore__;
      in_stack_00000038 = (undefined4)unaff_x19[0x1b];
      uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_System_Globalization_CompareInfo_IndexOfCore__,
                                 &stack0x00000038);
      uVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar1);
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
      *(int *)(unaff_x19 + 0x1b) = iVar3;
    }
    if (0 < (int)unaff_x19[0x13]) {
      _in_stack_00000008 = FUN_03b5cd90();
      FUN_02617978(&stack0x00000018,&stack0x00000008,
                   *(undefined8 *)Method_System_IO_FileStream__ctor__);
      puVar2 = Method_System_IO_FileStream__ctor__;
      puVar1 = Method_System_IO_FileStatus_EnsureStatInitialized__;
      while (uVar7 = FUN_02c7bc78(&stack0x00000018,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
        FUN_02c7bca4(&stack0x00000018,*(undefined8 *)puVar2);
      }
      FUN_02c7bc74(&stack0x00000018,*(undefined8 *)Method_System_IO_FileInfo_get_Length__);
    }
  }
  return;
}


