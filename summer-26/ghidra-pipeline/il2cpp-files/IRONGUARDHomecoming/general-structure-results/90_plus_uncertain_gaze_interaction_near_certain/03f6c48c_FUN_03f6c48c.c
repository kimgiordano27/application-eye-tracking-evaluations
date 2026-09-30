/*
FUNCTION_NAME: FUN_03f6c48c
ENTRY_POINT: 03f6c48c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f6cb88) */
/* WARNING: Removing unreachable block (ram,0x03f6ca4c) */
/* WARNING: Removing unreachable block (ram,0x03f6cb80) */

void FUN_03f6c48c(void)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  ulong uVar22;
  char local_64 [4];
  
  puVar11 = StringLiteral_3396;
  puVar10 = StringLiteral_3395;
  puVar9 = Method_Unity_VisualScripting_GetVariable_IsDefined__;
  puVar8 = Method_Unity_VisualScripting_GetMember_Value__;
  puVar7 = Method_UnityEngine_GameObject_GetComponent<OVRSkeletonRenderer>__;
  puVar6 = Method_UnityEngine_GameObject_GetComponent<OVRMesh>__;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<Variables>__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__;
  puVar5 = Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
  puVar2 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__;
  if ((DAT_0483b56c & 1) == 0) {
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
    DAT_0483b56c = 1;
  }
  uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_035ac8e8(uVar12,0);
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar12;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar12);
  uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar9);
  FUN_030f2380(uVar12,*(undefined8 *)puVar8);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
  *puVar13 = uVar12;
  thunk_FUN_01f51358(puVar13,uVar12);
  uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar11);
  FUN_030f2380(uVar12,*(undefined8 *)puVar10);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
  *puVar13 = uVar12;
  thunk_FUN_01f51358(puVar13,uVar12);
  uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_02ee7c10(uVar12,*(undefined8 *)puVar4);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
  *puVar13 = uVar12;
  thunk_FUN_01f51358(puVar13,uVar12);
  uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
  FUN_02b6aa68(uVar12,*(undefined8 *)puVar6);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
  *puVar13 = uVar12;
  thunk_FUN_01f51358(puVar13,uVar12);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
  *puVar13 = 0;
  thunk_FUN_01f51358(puVar13,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
  *puVar13 = 0;
  thunk_FUN_01f51358(puVar13,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
  *puVar13 = 0;
  thunk_FUN_01f51358(puVar13,0);
  uVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04581080);
  FUN_02b6aa68(uVar12,*(undefined8 *)PTR_DAT_04581078);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
  *puVar13 = uVar12;
  thunk_FUN_01f51358(puVar13,uVar12);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  local_64[0] = '\0';
  FUN_035ce230(uVar12,local_64,0);
  lVar14 = thunk_FUN_01ec9ab0(0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar14 = FUN_035aee10(lVar14,0);
  puVar7 = StringLiteral_5820;
  puVar6 = StringLiteral_5819;
  puVar4 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__;
  puVar3 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
    uVar22 = 0;
    uVar17 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
    do {
      if (uVar17 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar15 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar21 = *(undefined8 *)(lVar14 + uVar22 * 8 + 0x20);
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)StringLiteral_3393;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar15 + 0x18);
      if (uVar1 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
        puVar13 = (undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
        *puVar13 = uVar21;
        thunk_FUN_01f51358(puVar13,uVar21);
      }
      else {
        FUN_030f2bb4(lVar15,uVar21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar16 = (long *)FUN_03f6cc30(uVar21);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = *plVar16;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar6,0);
UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1:
      plVar16 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f6c8b4:
      lVar15 = *plVar16;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03f6c900;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar2,0);
LAB_03f6c900:
      uVar17 = (*(code *)*puVar13)(plVar16,puVar13[1]);
      if ((uVar17 & 1) != 0) {
        lVar15 = *plVar16;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03f6c95c;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar7,0);
LAB_03f6c95c:
        uVar21 = (*(code *)*puVar13)(plVar16,puVar13[1]);
        lVar15 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar18 = *(long *)(lVar15 + 0x10);
        lVar19 = *(long *)puVar4;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar15 + 0x18);
        if (uVar1 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
          puVar13 = (undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
          *puVar13 = uVar21;
          thunk_FUN_01f51358(puVar13);
        }
        else {
          FUN_030f2bb4(lVar15,uVar21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03f6c8b4;
      }
      if (plVar16 != (long *)0x0) {
        lVar15 = *plVar16;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03f6ca34;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01ecb238(plVar16,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03f6ca34:
        (*(code *)*puVar13)(plVar16,puVar13[1]);
      }
      uVar17 = (ulong)*(uint *)(lVar14 + 0x18);
      uVar22 = uVar22 + 1;
    } while ((long)uVar22 < (long)(int)*(uint *)(lVar14 + 0x18));
  }
  if (local_64[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar12,0);
  }
  return;
}


