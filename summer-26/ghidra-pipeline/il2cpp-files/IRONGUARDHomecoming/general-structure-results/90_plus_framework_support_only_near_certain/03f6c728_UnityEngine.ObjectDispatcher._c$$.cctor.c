/*
FUNCTION_NAME: UnityEngine.ObjectDispatcher.<>c$$.cctor
ENTRY_POINT: 03f6c728
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f6cb88) */
/* WARNING: Removing unreachable block (ram,0x03f6ca4c) */
/* WARNING: Removing unreachable block (ram,0x03f6cb80) */

void UnityEngine_ObjectDispatcher_<>c___cctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  undefined8 unaff_x19;
  undefined8 uVar15;
  undefined8 uVar16;
  long *unaff_x23;
  ulong uVar17;
  char cStack000000000000001c;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x40) = unaff_x19;
  thunk_FUN_01f51358();
  uVar15 = **(undefined8 **)(*unaff_x23 + 0xb8);
  cStack000000000000001c = '\0';
  FUN_035ce230(uVar15,&stack0x0000001c,0);
  lVar7 = thunk_FUN_01ec9ab0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = FUN_035aee10(lVar7,0);
  puVar6 = StringLiteral_5820;
  puVar5 = StringLiteral_5819;
  puVar4 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__;
  puVar3 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar17 = 0;
    uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar8 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar16 = *(undefined8 *)(lVar7 + uVar17 * 8 + 0x20);
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar13 = *(long *)StringLiteral_3393;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar12 = uVar16;
        thunk_FUN_01f51358(puVar12,uVar16);
      }
      else {
        FUN_030f2bb4(lVar8,uVar16,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar9 = (long *)FUN_03f6cc30(uVar16);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1:
      plVar9 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f6c8b4:
      lVar8 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03f6c900;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03f6c900:
      uVar10 = (*(code *)*puVar12)(plVar9,puVar12[1]);
      if ((uVar10 & 1) != 0) {
        lVar8 = *plVar9;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03f6c95c;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar6,0);
LAB_03f6c95c:
        uVar16 = (*(code *)*puVar12)(plVar9,puVar12[1]);
        lVar8 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)puVar4;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar12 = uVar16;
          thunk_FUN_01f51358(puVar12);
        }
        else {
          FUN_030f2bb4(lVar8,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03f6c8b4;
      }
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03f6ca34;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_01ecb238(plVar9,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03f6ca34:
        (*(code *)*puVar12)(plVar9,puVar12[1]);
      }
      uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  if (cStack000000000000001c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar15,0);
  }
  return;
}


