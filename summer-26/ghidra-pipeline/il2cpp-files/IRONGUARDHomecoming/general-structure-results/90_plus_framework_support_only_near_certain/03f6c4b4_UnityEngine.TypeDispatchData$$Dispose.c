/*
FUNCTION_NAME: UnityEngine.TypeDispatchData$$Dispose
ENTRY_POINT: 03f6c4b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f6cb88) */
/* WARNING: Removing unreachable block (ram,0x03f6ca4c) */
/* WARNING: Removing unreachable block (ram,0x03f6cb80) */

void UnityEngine_TypeDispatchData__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar18;
  undefined8 uVar19;
  long unaff_x23;
  long *plVar20;
  ulong uVar21;
  char cStack000000000000001c;
  
  puVar9 = StringLiteral_3396;
  puVar8 = StringLiteral_3395;
  puVar7 = Method_Unity_VisualScripting_GetVariable_IsDefined__;
  puVar6 = Method_Unity_VisualScripting_GetMember_Value__;
  puVar5 = Method_UnityEngine_GameObject_GetComponent<OVRSkeletonRenderer>__;
  puVar4 = Method_UnityEngine_GameObject_GetComponent<OVRMesh>__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<Variables>__;
  puVar2 = Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__;
  puVar18 = *(undefined8 **)(unaff_x21 + 0xe08);
  plVar20 = *(long **)(unaff_x23 + 0x720);
  if ((*(byte *)(unaff_x19 + 0x56c) & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04581078);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRMesh>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRSkeletonRenderer>__);
    thunk_FUN_01efb3a4(PTR_DAT_04581080);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<Variables>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5819);
    thunk_FUN_01efb3a4(StringLiteral_5820);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3393);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__);
    thunk_FUN_01efb3a4(StringLiteral_3395);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GetMember_Value__);
    thunk_FUN_01efb3a4(StringLiteral_3396);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GetVariable_IsDefined__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
    *(undefined1 *)(unaff_x19 + 0x56c) = 1;
  }
  uVar10 = thunk_FUN_01f117cc(*puVar18);
  FUN_035ac8e8(uVar10,0);
  **(undefined8 **)(*plVar20 + 0xb8) = uVar10;
  thunk_FUN_01f51358(*(undefined8 *)(*plVar20 + 0xb8),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
  FUN_030f2380(uVar10,*(undefined8 *)puVar6);
  puVar18 = (undefined8 *)(*(long *)(*plVar20 + 0xb8) + 8);
  *puVar18 = uVar10;
  thunk_FUN_01f51358(puVar18,uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar9);
  FUN_030f2380(uVar10,*(undefined8 *)puVar8);
  puVar18 = (undefined8 *)(*(long *)(*plVar20 + 0xb8) + 0x10);
  *puVar18 = uVar10;
  thunk_FUN_01f51358(puVar18,uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_02ee7c10(uVar10,*(undefined8 *)puVar3);
  puVar18 = (undefined8 *)(*(long *)(*plVar20 + 0xb8) + 0x18);
  *puVar18 = uVar10;
  thunk_FUN_01f51358(puVar18,uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_02b6aa68(uVar10,*(undefined8 *)puVar4);
  puVar18 = (undefined8 *)(*(long *)(*plVar20 + 0xb8) + 0x20);
  *puVar18 = uVar10;
  thunk_FUN_01f51358(puVar18,uVar10);
  puVar18 = (undefined8 *)(*(long *)(*plVar20 + 0xb8) + 0x28);
  *puVar18 = 0;
  thunk_FUN_01f51358(puVar18,0);
  puVar18 = (undefined8 *)(*(long *)(*plVar20 + 0xb8) + 0x30);
  *puVar18 = 0;
  thunk_FUN_01f51358(puVar18,0);
  puVar18 = (undefined8 *)(*(long *)(*plVar20 + 0xb8) + 0x38);
  *puVar18 = 0;
  thunk_FUN_01f51358(puVar18,0);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04581080);
  FUN_02b6aa68(uVar10,*(undefined8 *)PTR_DAT_04581078);
  puVar18 = (undefined8 *)(*(long *)(*plVar20 + 0xb8) + 0x40);
  *puVar18 = uVar10;
  thunk_FUN_01f51358(puVar18,uVar10);
  uVar10 = **(undefined8 **)(*plVar20 + 0xb8);
  cStack000000000000001c = '\0';
  FUN_035ce230(uVar10,&stack0x0000001c,0);
  lVar11 = thunk_FUN_01ec9ab0(0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = FUN_035aee10(lVar11,0);
  puVar6 = StringLiteral_5820;
  puVar5 = StringLiteral_5819;
  puVar4 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__;
  puVar3 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
    uVar21 = 0;
    uVar14 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    do {
      if (uVar14 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar12 = *(long *)(*(long *)(*plVar20 + 0xb8) + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar19 = *(undefined8 *)(lVar11 + uVar21 * 8 + 0x20);
      lVar15 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)StringLiteral_3393;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        puVar18 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
        *puVar18 = uVar19;
        thunk_FUN_01f51358(puVar18,uVar19);
      }
      else {
        FUN_030f2bb4(lVar12,uVar19,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar13 = (long *)FUN_03f6cc30(uVar19);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
            puVar18 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1;
          }
          uVar14 = uVar14 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar14 != 0);
      }
      puVar18 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar5,0);
UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1:
      plVar13 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f6c8b4:
      lVar12 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar18 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03f6c900;
          }
          uVar14 = uVar14 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar14 != 0);
      }
      puVar18 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_03f6c900:
      uVar14 = (*(code *)*puVar18)(plVar13,puVar18[1]);
      if ((uVar14 & 1) != 0) {
        lVar12 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
              puVar18 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03f6c95c;
            }
            uVar14 = uVar14 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar14 != 0);
        }
        puVar18 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar6,0);
LAB_03f6c95c:
        uVar19 = (*(code *)*puVar18)(plVar13,puVar18[1]);
        lVar12 = *(long *)(*(long *)(*plVar20 + 0xb8) + 8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar15 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          puVar18 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
          *puVar18 = uVar19;
          thunk_FUN_01f51358(puVar18);
        }
        else {
          FUN_030f2bb4(lVar12,uVar19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03f6c8b4;
      }
      if (plVar13 != (long *)0x0) {
        lVar12 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar18 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03f6ca34;
            }
            uVar14 = uVar14 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar14 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_01ecb238(plVar13,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03f6ca34:
        (*(code *)*puVar18)(plVar13,puVar18[1]);
      }
      uVar14 = (ulong)*(uint *)(lVar11 + 0x18);
      uVar21 = uVar21 + 1;
    } while ((long)uVar21 < (long)(int)*(uint *)(lVar11 + 0x18));
  }
  if (cStack000000000000001c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar10,0);
  }
  return;
}


