/*
FUNCTION_NAME: UnityEngine.ObjectDispatcher.<>c$$.ctor
ENTRY_POINT: 03f6c790
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f6cb88) */
/* WARNING: Removing unreachable block (ram,0x03f6ca4c) */
/* WARNING: Removing unreachable block (ram,0x03f6cb80) */

void UnityEngine_ObjectDispatcher_<>c___ctor(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  long *unaff_x23;
  ulong uVar12;
  long unaff_x27;
  long *plVar13;
  long unaff_x28;
  long *plVar14;
  long unaff_x29;
  long *plVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar2 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__;
  plVar13 = *(long **)(unaff_x27 + 0xa98);
  plVar14 = *(long **)(unaff_x28 + 0x1b0);
  plVar15 = *(long **)(unaff_x29 + 0xe08);
  plVar10 = *(long **)(unaff_x19 + 0x1b8);
  uVar12 = 0;
  param_1 = param_1 & 0xffffffff;
  do {
    if (param_1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar3 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = *(undefined8 *)(unaff_x20 + uVar12 * 8 + 0x20);
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)StringLiteral_3393;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar11;
      thunk_FUN_01f51358(puVar6,uVar11);
    }
    else {
      FUN_030f2bb4(lVar3,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_03f6cc30(uVar11);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar14) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*plVar14,0);
UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1:
    plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03f6c8b4:
    lVar3 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar15) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f6c900;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*plVar15,0);
LAB_03f6c900:
    uVar8 = (*(code *)*puVar6)(plVar4,puVar6[1]);
    if ((uVar8 & 1) != 0) {
      lVar3 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *plVar10) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03f6c95c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*plVar10,0);
LAB_03f6c95c:
      uVar11 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      lVar3 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar11;
        thunk_FUN_01f51358(puVar6);
      }
      else {
        FUN_030f2bb4(lVar3,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
        ;
      }
      goto LAB_03f6c8b4;
    }
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03f6ca34;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f6ca34:
      (*(code *)*puVar6)(plVar4,puVar6[1]);
    }
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar12 = uVar12 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)uVar12) {
      if (in_stack_00000018._4_1_ != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000010,0);
      }
      return;
    }
  } while( true );
}


