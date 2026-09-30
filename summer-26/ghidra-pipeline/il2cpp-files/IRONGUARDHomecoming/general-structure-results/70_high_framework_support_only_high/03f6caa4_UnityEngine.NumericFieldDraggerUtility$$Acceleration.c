/*
FUNCTION_NAME: UnityEngine.NumericFieldDraggerUtility$$Acceleration
ENTRY_POINT: 03f6caa4
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

void UnityEngine_NumericFieldDraggerUtility__Acceleration(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (unaff_x21 != (long *)0x0) {
      lVar2 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f6ca34;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03f6ca34:
      (*(code *)*puVar5)(unaff_x21,puVar5[1]);
    }
    if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(unaff_x22);
    }
    if ((unaff_w26 != 6) && (unaff_w26 != 0)) {
LAB_03f6caac:
      if (in_stack_00000018._4_1_ != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000010,0);
      }
      return;
    }
    unaff_x25 = unaff_x25 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x25) goto LAB_03f6caac;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar2 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = *(undefined8 *)(unaff_x20 + unaff_x25 * 8 + 0x20);
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)StringLiteral_3393;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *puVar5 = uVar9;
      thunk_FUN_01f51358(puVar5,uVar9);
    }
    else {
      FUN_030f2bb4(lVar2,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_03f6cc30(uVar9);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x28,0);
UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1:
    unaff_x21 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03f6c8b4:
    lVar2 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f6c900;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x29,0);
LAB_03f6c900:
    uVar7 = (*(code *)*puVar5)(unaff_x21,puVar5[1]);
    if ((uVar7 & 1) != 0) {
      lVar2 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x19) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03f6c95c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x19,0);
LAB_03f6c95c:
      uVar9 = (*(code *)*puVar5)(unaff_x21,puVar5[1]);
      lVar2 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *(long *)(lVar2 + 0x10);
      lVar6 = *unaff_x24;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = uVar9;
        thunk_FUN_01f51358(puVar5);
      }
      else {
        FUN_030f2bb4(lVar2,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_03f6c8b4;
    }
    unaff_x22 = 0;
    unaff_w26 = 6;
  } while( true );
}


