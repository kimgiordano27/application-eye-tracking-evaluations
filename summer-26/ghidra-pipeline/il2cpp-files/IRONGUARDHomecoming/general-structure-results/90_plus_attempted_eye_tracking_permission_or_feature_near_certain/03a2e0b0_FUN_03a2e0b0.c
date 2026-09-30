/*
FUNCTION_NAME: FUN_03a2e0b0
ENTRY_POINT: 03a2e0b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 143
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03a2e7f4) */
/* WARNING: Removing unreachable block (ram,0x03a2e67c) */
/* WARNING: Removing unreachable block (ram,0x03a2eb8c) */
/* WARNING: Removing unreachable block (ram,0x03a2eb38) */
/* WARNING: Removing unreachable block (ram,0x03a2e4a0) */

undefined8 FUN_03a2e0b0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_54;
  
                    /* try { // try from 03a2e0d4 to 03b2e0e3 has its CatchHandler @ 03a2efd4 */
  if ((DAT_04838b9c & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7028);
                    /* try { // try from 03a2e0f4 to 03b2e0ff has its CatchHandler @ 03a2efa0 */
    thunk_FUN_01efb3a4(StringLiteral_7029);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__);
                    /* try { // try from 03a2e124 to 03b2e127 has its CatchHandler @ 03a2ef74 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 03a2e128 to 03b2e14f has its CatchHandler @ 03a2efbc */
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
                    /* try { // try from 03a2e150 to 03b2e15b has its CatchHandler @ 03a2ef9c */
    thunk_FUN_01efb3a4(Method_System_Configuration_IgnoreSection_ResetModified__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
                    /* try { // try from 03a2e170 to 03b2e17b has its CatchHandler @ 03a2efb4 */
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                      );
    thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
    thunk_FUN_01efb3a4(StringLiteral_6282);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__);
                    /* try { // try from 03a2e1a4 to 03b2e1ab has its CatchHandler @ 03a2ef7c */
    thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
                    /* try { // try from 03a2e1bc to 03b2e1c3 has its CatchHandler @ 03a2ef4c */
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ApplyUseStateFrom__
                      );
    DAT_04838b9c = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_70 = 0;
  local_54 = 0;
  local_b0 = 0;
  local_a8 = 0;
                    /* try { // try from 03a2e1e8 to 03b2e1eb has its CatchHandler @ 03a2ef40 */
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (param_2 == 0) goto LAB_03a2eb34;
  if (((*(long *)(param_2 + 0x70) != 0) &&
      (puVar14 = StringLiteral_7025, *(char *)(param_2 + 0x6a) == '\0')) ||
     ((*(long *)(param_2 + 0x78) != 0 &&
      (puVar14 = StringLiteral_7024, *(char *)(param_2 + 0x6b) == '\0')))) {
    uVar12 = thunk_FUN_01efb3a4(puVar14);
    uVar12 = FUN_033f1b08(uVar12,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar13 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar13,uVar12,0);
LAB_03a2ebfc:
    uVar12 = thunk_FUN_01efb3a4(StringLiteral_7030);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar13,uVar12);
  }
  if (*(char *)(param_1 + 200) != '\0') {
    plVar9 = (long *)thunk_FUN_01ecaf38(param_1,0);
    FUN_01bc50c0();
    uVar12 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar13 = thunk_FUN_01f117cc();
    FUN_03579608(uVar13,uVar12,0);
    goto LAB_03a2ebfc;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (*(long *)(param_2 + 0x90) != 0) {
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    FUN_030f2380(lVar8,*(undefined8 *)puVar3);
    plVar9 = (long *)FUN_03a2fd88(param_2);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      puVar6 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ApplyUseStateFrom__;
      puVar5 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
      puVar4 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
      puVar14 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar17 = *plVar9;
        lVar15 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03a2e2fc;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar15,0);
LAB_03a2e2fc:
        uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar18 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)puVar2);
          if (plVar9 == (long *)0x0) goto LAB_03a2e494;
          lVar15 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar18 == 0) goto LAB_03a2e46c;
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_03a2e454;
        }
        lVar17 = *plVar9;
        lVar15 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03a2e35c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar15,1);
LAB_03a2e35c:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        plVar11 = (long *)thunk_FUN_01f11920();
        plVar16 = (long *)plVar11[1];
        if (plVar16 != (long *)0x0) {
          plVar11 = (long *)*plVar11;
          if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar14)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          if (*plVar16 != *(long *)puVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar16);
          }
          uVar12 = FUN_0340ebc0(plVar11,*(undefined8 *)puVar6,plVar16,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = *(long *)(lVar8 + 0x10);
          lVar17 = *(long *)puVar4;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar8,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
    goto LAB_03a2eb34;
  }
  goto LAB_03a2e4d0;
LAB_03a2e60c:
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03a2e664;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03a2e664:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  if (plVar9 == (long *)0x0) goto LAB_03a2eb34;
  uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
  *(undefined8 *)(param_2 + 0x18) = uVar12;
  thunk_FUN_01f51358();
  goto LAB_03a2e6a4;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_03a2e454:
    if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03a2e488;
    }
  }
LAB_03a2e46c:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03a2e488:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03a2e494:
  if (lVar8 == 0) goto LAB_03a2eb34;
  local_90 = FUN_030f4630(lVar8,*(undefined8 *)
                                 Method_System_Configuration_IgnoreSection_ResetModified__);
  thunk_FUN_01f51358(&local_90);
LAB_03a2e4d0:
  lVar8 = FUN_03a302b4(param_2);
  if (lVar8 != 0) {
    iVar7 = FUN_029ec9f8(lVar8,*(undefined8 *)StringLiteral_7029);
    if (iVar7 < 1) {
LAB_03a2e6a4:
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      if (*(char *)(param_2 + 0x69) == '\0') {
        if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        local_a8 = thunk_FUN_01ef3bd0(0);
        local_b0 = 0;
      }
      else {
        FUN_03a2fb94(&local_a8,&local_b0,1);
      }
      if (*(char *)(param_2 + 0x6a) == '\0') {
        local_b8 = 0;
        if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        local_c0 = thunk_FUN_01ef3c24(0);
      }
      else {
        FUN_03a2fb94(&local_b8,&local_c0,0);
      }
      if (*(char *)(param_2 + 0x6b) == '\0') {
        local_c8 = 0;
        if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        local_d0 = thunk_FUN_01ef3b80(0);
      }
      else {
        FUN_03a2fb94(&local_c8,&local_d0,0);
      }
      FUN_03a2fa5c(param_2,&local_a0);
      uVar18 = FUN_01ec9b10(param_2,local_a8,local_c0,local_d0,&local_a0);
      if ((uVar18 & 1) == 0) {
        iVar7 = (int)uStack_98;
        uVar12 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                   );
        lVar8 = FUN_01f08890(uVar12,8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = thunk_FUN_01efb3a4(StringLiteral_7031);
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar8 + 0x20) = uVar12;
        thunk_FUN_01f51358();
        if ((DAT_04838ba4 & 1) == 0) {
          thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
          DAT_04838ba4 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x10);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)
                                Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                              0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(long *)(lVar8 + 0x28) = lVar15;
        thunk_FUN_01f51358();
        uVar12 = thunk_FUN_01efb3a4(StringLiteral_7032);
        if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar8 + 0x30) = uVar12;
        thunk_FUN_01f51358();
        if ((DAT_04838ba0 & 1) == 0) {
          thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
          DAT_04838ba0 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x18);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)
                                Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                              0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(long *)(lVar8 + 0x38) = lVar15;
        thunk_FUN_01f51358();
        uVar12 = thunk_FUN_01efb3a4(StringLiteral_7033);
        if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar8 + 0x40) = uVar12;
        thunk_FUN_01f51358();
        if ((DAT_04838ba5 & 1) == 0) {
          thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
          DAT_04838ba5 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x20);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)
                                Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                              0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(long *)(lVar8 + 0x48) = lVar15;
        thunk_FUN_01f51358();
        uVar12 = thunk_FUN_01efb3a4(StringLiteral_7034);
        if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar8 + 0x50) = uVar12;
        thunk_FUN_01f51358();
        uVar12 = FUN_03aac0e0(-(int)uStack_98,0);
        if (*(uint *)(lVar8 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar8 + 0x58) = uVar12;
        thunk_FUN_01f51358();
        uVar12 = FUN_0340efe8(lVar8,0);
        thunk_FUN_01efb3a4(StringLiteral_6999);
        uVar13 = thunk_FUN_01f117cc();
        FUN_03aac9d4(uVar13,-iVar7,uVar12,0);
        uVar12 = thunk_FUN_01efb3a4(StringLiteral_7030);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar13,uVar12);
      }
      uVar18 = FUN_035b51f0(local_78,0,0);
      uVar12 = local_78;
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)
                      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_034a51e8(uVar12,0);
        local_78 = 0;
      }
      uVar12 = local_a0;
      uVar13 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_6282);
      FUN_039f1620(uVar13,uVar12,1,0);
      FUN_03a2dbac(param_1,uVar13);
      uVar12 = local_a8;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(int *)(param_1 + 0x2c) = (int)uStack_98;
      if (*(char *)(param_2 + 0x69) != '\0') {
        if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        thunk_FUN_01ef4060(uVar12,&local_54,0);
        lVar8 = *(long *)(param_2 + 0xa8);
        if (lVar8 == 0) {
          lVar8 = FUN_0342809c(0);
        }
        uVar12 = local_b0;
        uVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                   );
        FUN_034de63c(uVar13,uVar12,2,1,0x2000,0);
        plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
        FUN_034ccf84(plVar9,uVar13,lVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_03a2eb34;
        (**(code **)(*plVar9 + 0x288))(plVar9,1,*(undefined8 *)(*plVar9 + 0x290));
        *(long *)(param_1 + 0xb8) = (long)plVar9;
        thunk_FUN_01f51358((long *)(param_1 + 0xb8),plVar9);
      }
      uVar12 = local_c0;
      if (*(char *)(param_2 + 0x6a) != '\0') {
        if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        thunk_FUN_01ef4060(uVar12,&local_54,0);
        puVar2 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
        lVar8 = *(long *)(param_2 + 0x70);
        if (lVar8 == 0) {
          if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (DAT_0483360a == '\0') {
            thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
            DAT_0483360a = '\x01';
          }
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
        }
        uVar12 = local_b8;
        uVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                   );
        FUN_034de63c(uVar13,uVar12,1,1,0x2000,0);
        uVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                   );
        FUN_034cb174(uVar12,uVar13,lVar8,1,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar12;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0xb0),uVar12);
      }
      uVar12 = local_d0;
      if (*(char *)(param_2 + 0x6b) != '\0') {
        if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        thunk_FUN_01ef4060(uVar12,&local_54,0);
        puVar2 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
        lVar8 = *(long *)(param_2 + 0x78);
        if (lVar8 == 0) {
          if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (DAT_0483360a == '\0') {
            thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
            DAT_0483360a = '\x01';
          }
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
        }
        uVar12 = local_c8;
        uVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                   );
        FUN_034de63c(uVar13,uVar12,1,1,0x2000,0);
        uVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                   );
        FUN_034cb174(uVar12,uVar13,lVar8,1,0);
        *(undefined8 *)(param_1 + 0xc0) = uVar12;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0xc0),uVar12);
      }
      return 1;
    }
    plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__)
    ;
    FUN_03416d98(plVar9,0);
    lVar8 = FUN_03a302b4(param_2);
    if (lVar8 != 0) {
      plVar11 = (long *)FUN_029ecfd0(lVar8,*(undefined8 *)StringLiteral_7028);
      puVar14 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03a2e590;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_03a2e590:
        uVar18 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar18 & 1) == 0) goto LAB_03a2e60c;
        lVar8 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar14) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03a2e5ec;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar14,0);
LAB_03a2e5ec:
        uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        FUN_03a08d14(plVar9,uVar12,0);
      } while( true );
    }
  }
LAB_03a2eb34:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


