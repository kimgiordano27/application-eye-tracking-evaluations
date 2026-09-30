/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionProperty$$get_serializedAction
ENTRY_POINT: 03a2e368
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 184
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03a2e7f4) */
/* WARNING: Removing unreachable block (ram,0x03a2eb38) */
/* WARNING: Removing unreachable block (ram,0x03a2e67c) */
/* WARNING: Removing unreachable block (ram,0x03a2eb8c) */
/* WARNING: Removing unreachable block (ram,0x03a2e4a0) */

undefined8 UnityEngine_InputSystem_InputActionProperty__get_serializedAction(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
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
  
  do {
                    /* try { // try from 03a2e368 to 03b2e36b has its CatchHandler @ 03a2ef28 */
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 03a2e36c to 03b2e39f has its CatchHandler @ 03a2ef94 */
    if (*(long *)(*param_1 + 0x40) != *(long *)(*unaff_x25 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar6 = (long *)thunk_FUN_01f11920();
    plVar10 = (long *)plVar6[1];
    if (plVar10 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if ((plVar6 != (long *)0x0) && (*plVar6 != *unaff_x26)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      if (*plVar10 != *unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar10);
      }
      uVar7 = FUN_0340ebc0(plVar6,*unaff_x27,plVar10,0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
    }
    lVar11 = *unaff_x22;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03a2e2fc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03a2e2fc:
    uVar12 = (*(code *)*puVar5)();
    if ((uVar12 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01f116d0();
      if (plVar6 == (long *)0x0) goto LAB_03a2e494;
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_03a2e46c;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *unaff_x22;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03a2e35c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03a2e35c:
    param_1 = (long *)(*(code *)*puVar5)();
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *unaff_x24) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03a2e488;
    }
  }
LAB_03a2e46c:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x24,0);
LAB_03a2e488:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_03a2e494:
  if (unaff_x21 == 0) goto LAB_03a2eb34;
  in_stack_00000050 = FUN_030f4630();
  thunk_FUN_01f51358(&stack0x00000050);
  lVar11 = FUN_03a302b4();
  if (lVar11 == 0) goto LAB_03a2eb34;
  iVar4 = FUN_029ec9f8(lVar11,*(undefined8 *)StringLiteral_7029);
  if (0 < iVar4) {
    plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__)
    ;
    FUN_03416d98(plVar6,0);
    lVar11 = FUN_03a302b4();
    if (lVar11 != 0) {
      plVar10 = (long *)FUN_029ecfd0(lVar11,*(undefined8 *)StringLiteral_7028);
      puVar3 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03a2e590;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03a2e590:
        uVar12 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if ((uVar12 & 1) == 0) goto LAB_03a2e60c;
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03a2e5ec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_03a2e5ec:
        uVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        FUN_03a08d14(plVar6,uVar7,0);
      } while( true );
    }
    goto LAB_03a2eb34;
  }
  goto LAB_03a2e6a4;
LAB_03a2e60c:
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03a2e664;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x24,0);
LAB_03a2e664:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  if (plVar6 == (long *)0x0) goto LAB_03a2eb34;
  uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
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
  uVar12 = FUN_01ec9b10();
  iVar4 = in_stack_00000048;
  if ((uVar12 & 1) == 0) {
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              );
    lVar11 = FUN_01f08890(uVar7,8);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_7031);
    if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x20) = uVar7;
    thunk_FUN_01f51358();
    if ((DAT_04838ba4 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
      DAT_04838ba4 = 1;
    }
    lVar9 = *(long *)(unaff_x20 + 0x10);
    if (lVar9 == 0) {
      lVar9 = **(long **)(*(long *)
                           Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8
                         );
    }
    if (*(uint *)(lVar11 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(long *)(lVar11 + 0x28) = lVar9;
    thunk_FUN_01f51358();
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_7032);
    if (*(uint *)(lVar11 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x30) = uVar7;
    thunk_FUN_01f51358();
    if ((DAT_04838ba0 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
      DAT_04838ba0 = 1;
    }
    lVar9 = *(long *)(unaff_x20 + 0x18);
    if (lVar9 == 0) {
      lVar9 = **(long **)(*(long *)
                           Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8
                         );
    }
    if (*(uint *)(lVar11 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(long *)(lVar11 + 0x38) = lVar9;
    thunk_FUN_01f51358();
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_7033);
    if (*(uint *)(lVar11 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x40) = uVar7;
    thunk_FUN_01f51358();
    if ((DAT_04838ba5 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
      DAT_04838ba5 = 1;
    }
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if (lVar9 == 0) {
      lVar9 = **(long **)(*(long *)
                           Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8
                         );
    }
    if (*(uint *)(lVar11 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(long *)(lVar11 + 0x48) = lVar9;
    thunk_FUN_01f51358();
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_7034);
    if (*(uint *)(lVar11 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar11 + 0x50) = uVar7;
    thunk_FUN_01f51358();
    uVar7 = FUN_03aac0e0(-in_stack_00000048,0);
    if (7 < *(uint *)(lVar11 + 0x18)) {
      *(undefined8 *)(lVar11 + 0x58) = uVar7;
      thunk_FUN_01f51358();
      uVar7 = FUN_0340efe8(lVar11,0);
      thunk_FUN_01efb3a4(StringLiteral_6999);
      uVar8 = thunk_FUN_01f117cc();
      FUN_03aac9d4(uVar8,-iVar4,uVar7,0);
      uVar7 = thunk_FUN_01efb3a4(StringLiteral_7030);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  uVar12 = FUN_035b51f0(in_stack_00000068,0,0);
  uVar7 = in_stack_00000068;
  if ((uVar12 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_034a51e8(uVar7,0);
    in_stack_00000068 = 0;
  }
  uVar7 = in_stack_00000040;
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_6282);
  FUN_039f1620(uVar8,uVar7,1,0);
  FUN_03a2dbac();
  uVar7 = in_stack_00000038;
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  *(int *)(unaff_x19 + 0x2c) = in_stack_00000048;
  if (*(char *)(unaff_x20 + 0x69) != '\0') {
    if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01ef4060(uVar7,&stack0x0000008c,0);
    lVar11 = *(long *)(unaff_x20 + 0xa8);
    if (lVar11 == 0) {
      lVar11 = FUN_0342809c(0);
    }
    uVar7 = in_stack_00000030;
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                              );
    FUN_034de63c(uVar8,uVar7,2,1,0x2000,0);
    plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
    FUN_034ccf84(plVar6,uVar8,lVar11,0);
    if (plVar6 == (long *)0x0) {
LAB_03a2eb34:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x288))(plVar6,1,*(undefined8 *)(*plVar6 + 0x290));
    *(long *)(unaff_x19 + 0xb8) = (long)plVar6;
    thunk_FUN_01f51358((long *)(unaff_x19 + 0xb8),plVar6);
  }
  uVar7 = in_stack_00000020;
  if (*(char *)(unaff_x20 + 0x6a) != '\0') {
    if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01ef4060(uVar7,&stack0x0000008c,0);
    puVar2 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
    lVar11 = *(long *)(unaff_x20 + 0x70);
    if (lVar11 == 0) {
      if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0483360a == '\0') {
        thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
        DAT_0483360a = '\x01';
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)puVar2;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
    }
    uVar7 = in_stack_00000028;
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                              );
    FUN_034de63c(uVar8,uVar7,1,1,0x2000,0);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                              );
    FUN_034cb174(uVar7,uVar8,lVar11,1,0);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xb0),uVar7);
  }
  uVar7 = in_stack_00000010;
  if (*(char *)(unaff_x20 + 0x6b) != '\0') {
    if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01ef4060(uVar7,&stack0x0000008c,0);
    puVar2 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
    lVar11 = *(long *)(unaff_x20 + 0x78);
    if (lVar11 == 0) {
      if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0483360a == '\0') {
        thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
        DAT_0483360a = '\x01';
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)puVar2;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
    }
    uVar7 = in_stack_00000018;
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                              );
    FUN_034de63c(uVar8,uVar7,1,1,0x2000,0);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                              );
    FUN_034cb174(uVar7,uVar8,lVar11,1,0);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xc0),uVar7);
  }
  return 1;
}


