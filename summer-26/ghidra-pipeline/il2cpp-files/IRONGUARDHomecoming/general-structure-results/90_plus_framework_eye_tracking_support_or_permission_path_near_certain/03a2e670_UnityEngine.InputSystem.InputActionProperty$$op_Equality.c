/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionProperty$$op_Equality
ENTRY_POINT: 03a2e670
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03a2e7f4) */
/* WARNING: Removing unreachable block (ram,0x03a2eb8c) */

undefined8 UnityEngine_InputSystem_InputActionProperty__op_Equality(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int in_stack_00000048;
  undefined8 in_stack_00000068;
  
                    /* try { // try from 03a2e670 to 03b2e673 has its CatchHandler @ 03a2eef0 */
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
                    /* try { // try from 03a2e674 to 03b2e68f has its CatchHandler @ 03a2ef14 */
  if ((unaff_w25 == 0x12) || (unaff_w25 == 0)) {
    if (unaff_x22 == (long *)0x0) {
LAB_03a2eb34:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = (**(code **)(*unaff_x22 + 0x168))();
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    thunk_FUN_01f51358();
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    if (*(char *)(unaff_x20 + 0x69) == '\0') {
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      in_stack_00000038 = thunk_FUN_01ef3bd0(0);
      in_stack_00000030 = 0;
    }
    else {
      FUN_03a2fb94(&stack0x00000038,&stack0x00000030,1);
    }
    if (*(char *)(unaff_x20 + 0x6a) == '\0') {
      in_stack_00000028 = 0;
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      in_stack_00000020 = thunk_FUN_01ef3c24(0);
    }
    else {
      FUN_03a2fb94(&stack0x00000028,&stack0x00000020,0);
    }
    if (*(char *)(unaff_x20 + 0x6b) == '\0') {
      in_stack_00000018 = 0;
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      in_stack_00000010 = thunk_FUN_01ef3b80(0);
    }
    else {
      FUN_03a2fb94(&stack0x00000018,&stack0x00000010,0);
    }
    FUN_03a2fa5c();
    uVar4 = FUN_01ec9b10();
    iVar2 = in_stack_00000048;
    if ((uVar4 & 1) == 0) {
      uVar3 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                );
      lVar8 = FUN_01f08890(uVar3,8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = thunk_FUN_01efb3a4(StringLiteral_7031);
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x20) = uVar3;
      thunk_FUN_01f51358();
      if ((DAT_04838ba4 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
        DAT_04838ba4 = 1;
      }
      lVar7 = *(long *)(unaff_x20 + 0x10);
      if (lVar7 == 0) {
        lVar7 = **(long **)(*(long *)
                             Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                           0xb8);
      }
      if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(long *)(lVar8 + 0x28) = lVar7;
      thunk_FUN_01f51358();
      uVar3 = thunk_FUN_01efb3a4(StringLiteral_7032);
      if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x30) = uVar3;
      thunk_FUN_01f51358();
      if ((DAT_04838ba0 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
        DAT_04838ba0 = 1;
      }
      lVar7 = *(long *)(unaff_x20 + 0x18);
      if (lVar7 == 0) {
        lVar7 = **(long **)(*(long *)
                             Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                           0xb8);
      }
      if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(long *)(lVar8 + 0x38) = lVar7;
      thunk_FUN_01f51358();
      uVar3 = thunk_FUN_01efb3a4(StringLiteral_7033);
      if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x40) = uVar3;
      thunk_FUN_01f51358();
      if ((DAT_04838ba5 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
        DAT_04838ba5 = 1;
      }
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if (lVar7 == 0) {
        lVar7 = **(long **)(*(long *)
                             Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                           0xb8);
      }
      if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(long *)(lVar8 + 0x48) = lVar7;
      thunk_FUN_01f51358();
      uVar3 = thunk_FUN_01efb3a4(StringLiteral_7034);
      if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x50) = uVar3;
      thunk_FUN_01f51358();
      uVar3 = FUN_03aac0e0(-in_stack_00000048,0);
      if (*(uint *)(lVar8 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x58) = uVar3;
      thunk_FUN_01f51358();
      uVar3 = FUN_0340efe8(lVar8,0);
      thunk_FUN_01efb3a4(StringLiteral_6999);
      uVar5 = thunk_FUN_01f117cc();
      FUN_03aac9d4(uVar5,-iVar2,uVar3,0);
      uVar3 = thunk_FUN_01efb3a4(StringLiteral_7030);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar3);
    }
    uVar4 = FUN_035b51f0(in_stack_00000068,0,0);
    uVar3 = in_stack_00000068;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_034a51e8(uVar3,0);
      in_stack_00000068 = 0;
    }
    uVar3 = in_stack_00000040;
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_6282);
    FUN_039f1620(uVar5,uVar3,1,0);
    FUN_03a2dbac();
    uVar3 = in_stack_00000038;
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    *(int *)(unaff_x19 + 0x2c) = in_stack_00000048;
    if (*(char *)(unaff_x20 + 0x69) != '\0') {
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      thunk_FUN_01ef4060(uVar3,&stack0x0000008c,0);
      lVar8 = *(long *)(unaff_x20 + 0xa8);
      if (lVar8 == 0) {
        lVar8 = FUN_0342809c(0);
      }
      uVar3 = in_stack_00000030;
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                );
      FUN_034de63c(uVar5,uVar3,2,1,0x2000,0);
      plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
      FUN_034ccf84(plVar6,uVar5,lVar8,0);
      if (plVar6 == (long *)0x0) goto LAB_03a2eb34;
      (**(code **)(*plVar6 + 0x288))(plVar6,1,*(undefined8 *)(*plVar6 + 0x290));
      *(long *)(unaff_x19 + 0xb8) = (long)plVar6;
      thunk_FUN_01f51358((long *)(unaff_x19 + 0xb8),plVar6);
    }
    uVar3 = in_stack_00000020;
    if (*(char *)(unaff_x20 + 0x6a) != '\0') {
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      thunk_FUN_01ef4060(uVar3,&stack0x0000008c,0);
      puVar1 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
      lVar8 = *(long *)(unaff_x20 + 0x70);
      if (lVar8 == 0) {
        if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (DAT_0483360a == '\0') {
          thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
          DAT_0483360a = '\x01';
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
      }
      uVar3 = in_stack_00000028;
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                );
      FUN_034de63c(uVar5,uVar3,1,1,0x2000,0);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                );
      FUN_034cb174(uVar3,uVar5,lVar8,1,0);
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xb0),uVar3);
    }
    uVar3 = in_stack_00000010;
    if (*(char *)(unaff_x20 + 0x6b) != '\0') {
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      thunk_FUN_01ef4060(uVar3,&stack0x0000008c,0);
      puVar1 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
      lVar8 = *(long *)(unaff_x20 + 0x78);
      if (lVar8 == 0) {
        if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (DAT_0483360a == '\0') {
          thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
          DAT_0483360a = '\x01';
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
      }
      uVar3 = in_stack_00000018;
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                );
      FUN_034de63c(uVar5,uVar3,1,1,0x2000,0);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                );
      FUN_034cb174(uVar3,uVar5,lVar8,1,0);
      *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xc0),uVar3);
    }
  }
  return 1;
}


