/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionProperty$$Equals
ENTRY_POINT: 03a2e49c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03a2e7f4) */
/* WARNING: Removing unreachable block (ram,0x03a2e67c) */
/* WARNING: Removing unreachable block (ram,0x03a2eb8c) */
/* WARNING: Removing unreachable block (ram,0x03a2eb38) */

undefined8 UnityEngine_InputSystem_InputActionProperty__Equals(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  if ((!in_ZR) && (unaff_w25 != 0)) {
    return 1;
  }
  if (unaff_x21 == 0) goto LAB_03a2eb34;
                    /* try { // try from 03a2e4ac to 03b2e4d7 has its CatchHandler @ 03a2efdc */
  in_stack_00000050 = FUN_030f4630();
  thunk_FUN_01f51358(&stack0x00000050);
  lVar4 = FUN_03a302b4();
                    /* try { // try from 03a2e4d8 to 03b2e4e3 has its CatchHandler @ 03a2efc8 */
  if (lVar4 == 0) goto LAB_03a2eb34;
  iVar3 = FUN_029ec9f8(lVar4,*(undefined8 *)StringLiteral_7029);
  if (0 < iVar3) {
                    /* try { // try from 03a2e500 to 03b2e51b has its CatchHandler @ 03a2efc4 */
    plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__)
    ;
    FUN_03416d98(plVar5,0);
    lVar4 = FUN_03a302b4();
    if (lVar4 != 0) {
      plVar6 = (long *)FUN_029ecfd0(lVar4,*(undefined8 *)StringLiteral_7028);
      puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar4 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03a2e590;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03a2e590:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) goto LAB_03a2e60c;
        lVar4 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03a2e5ec;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03a2e5ec:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        FUN_03a08d14(plVar5,uVar8,0);
      } while( true );
    }
    goto LAB_03a2eb34;
  }
  goto LAB_03a2e6a4;
LAB_03a2e60c:
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03a2e664;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x24,0);
LAB_03a2e664:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  if (plVar5 == (long *)0x0) goto LAB_03a2eb34;
  uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  *(undefined8 *)(unaff_x20 + 0x18) = uVar8;
  thunk_FUN_01f51358();
LAB_03a2e6a4:
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
  uVar11 = FUN_01ec9b10();
  iVar3 = in_stack_00000048;
  if ((uVar11 & 1) == 0) {
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              );
    lVar4 = FUN_01f08890(uVar8,8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_7031);
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar4 + 0x20) = uVar8;
    thunk_FUN_01f51358();
    if ((DAT_04838ba4 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
      DAT_04838ba4 = 1;
    }
    lVar10 = *(long *)(unaff_x20 + 0x10);
    if (lVar10 == 0) {
      lVar10 = **(long **)(*(long *)
                            Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                          0xb8);
    }
    if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(long *)(lVar4 + 0x28) = lVar10;
    thunk_FUN_01f51358();
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_7032);
    if (*(uint *)(lVar4 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    thunk_FUN_01f51358();
    if ((DAT_04838ba0 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
      DAT_04838ba0 = 1;
    }
    lVar10 = *(long *)(unaff_x20 + 0x18);
    if (lVar10 == 0) {
      lVar10 = **(long **)(*(long *)
                            Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                          0xb8);
    }
    if (*(uint *)(lVar4 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(long *)(lVar4 + 0x38) = lVar10;
    thunk_FUN_01f51358();
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_7033);
    if (*(uint *)(lVar4 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar4 + 0x40) = uVar8;
    thunk_FUN_01f51358();
    if ((DAT_04838ba5 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
      DAT_04838ba5 = 1;
    }
    lVar10 = *(long *)(unaff_x20 + 0x20);
    if (lVar10 == 0) {
      lVar10 = **(long **)(*(long *)
                            Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                          0xb8);
    }
    if (*(uint *)(lVar4 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(long *)(lVar4 + 0x48) = lVar10;
    thunk_FUN_01f51358();
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_7034);
    if (*(uint *)(lVar4 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar4 + 0x50) = uVar8;
    thunk_FUN_01f51358();
    uVar8 = FUN_03aac0e0(-in_stack_00000048,0);
    if (*(uint *)(lVar4 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar4 + 0x58) = uVar8;
    thunk_FUN_01f51358();
    uVar8 = FUN_0340efe8(lVar4,0);
    thunk_FUN_01efb3a4(StringLiteral_6999);
    uVar9 = thunk_FUN_01f117cc();
    FUN_03aac9d4(uVar9,-iVar3,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_7030);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar8);
  }
  uVar11 = FUN_035b51f0(in_stack_00000068,0,0);
  uVar8 = in_stack_00000068;
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_034a51e8(uVar8,0);
    in_stack_00000068 = 0;
  }
  uVar8 = in_stack_00000040;
  uVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_6282);
  FUN_039f1620(uVar9,uVar8,1,0);
  FUN_03a2dbac();
  uVar8 = in_stack_00000038;
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  *(int *)(unaff_x19 + 0x2c) = in_stack_00000048;
  if (*(char *)(unaff_x20 + 0x69) != '\0') {
    if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01ef4060(uVar8,&stack0x0000008c,0);
    lVar4 = *(long *)(unaff_x20 + 0xa8);
    if (lVar4 == 0) {
      lVar4 = FUN_0342809c(0);
    }
    uVar8 = in_stack_00000030;
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                              );
    FUN_034de63c(uVar9,uVar8,2,1,0x2000,0);
    plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
    FUN_034ccf84(plVar5,uVar9,lVar4,0);
    if (plVar5 == (long *)0x0) {
LAB_03a2eb34:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar5 + 0x288))(plVar5,1,*(undefined8 *)(*plVar5 + 0x290));
    *(long *)(unaff_x19 + 0xb8) = (long)plVar5;
    thunk_FUN_01f51358((long *)(unaff_x19 + 0xb8),plVar5);
  }
  uVar8 = in_stack_00000020;
  if (*(char *)(unaff_x20 + 0x6a) != '\0') {
    if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01ef4060(uVar8,&stack0x0000008c,0);
    puVar1 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
    lVar4 = *(long *)(unaff_x20 + 0x70);
    if (lVar4 == 0) {
      if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0483360a == '\0') {
        thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
        DAT_0483360a = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    }
    uVar8 = in_stack_00000028;
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                              );
    FUN_034de63c(uVar9,uVar8,1,1,0x2000,0);
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                              );
    FUN_034cb174(uVar8,uVar9,lVar4,1,0);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar8;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xb0),uVar8);
  }
  uVar8 = in_stack_00000010;
  if (*(char *)(unaff_x20 + 0x6b) != '\0') {
    if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01ef4060(uVar8,&stack0x0000008c,0);
    puVar1 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
    lVar4 = *(long *)(unaff_x20 + 0x78);
    if (lVar4 == 0) {
      if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0483360a == '\0') {
        thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
        DAT_0483360a = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    }
    uVar8 = in_stack_00000018;
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                              );
    FUN_034de63c(uVar9,uVar8,1,1,0x2000,0);
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                              );
    FUN_034cb174(uVar8,uVar9,lVar4,1,0);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar8;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xc0),uVar8);
  }
  return 1;
}


