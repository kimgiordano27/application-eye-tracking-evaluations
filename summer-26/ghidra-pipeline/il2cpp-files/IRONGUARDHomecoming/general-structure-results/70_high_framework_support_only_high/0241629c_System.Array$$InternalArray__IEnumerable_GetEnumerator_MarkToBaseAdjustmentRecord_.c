/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<MarkToBaseAdjustmentRecord>
ENTRY_POINT: 0241629c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x024164fc) */
/* WARNING: Removing unreachable block (ram,0x0241656c) */

undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<MarkToBaseAdjustmentRecord>(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 uVar9;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  size_t unaff_x24;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_024162e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_024162e4:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) {
      uVar9 = *(undefined8 *)(unaff_x29 + -0x18);
      if (unaff_x19 == (long *)0x0) goto LAB_024164f0;
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_024164c8;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02416358;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238();
LAB_02416358:
    *(void **)(unaff_x29 + -0x10) = unaff_x26;
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    memcpy(unaff_x28,unaff_x26,unaff_x24);
    memcpy(unaff_x27,unaff_x28,unaff_x24);
    uVar7 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x20));
    if ((uVar7 & 1) != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x38);
      lVar5 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
        lVar6 = *(long *)(unaff_x22 + 0x38);
      }
      FUN_01f09244(lVar5,*(undefined8 *)(lVar6 + 0x28));
      uVar9 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar7 = FUN_0340eec4(uVar9,0);
      if ((uVar7 & 1) == 0) {
        uVar3 = uVar9;
        iVar1 = 1;
        if (unaff_w21 != 0) {
          *(int *)(unaff_x29 + -0x34) = unaff_w21;
          if (unaff_w21 == 1) {
            uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
            *(undefined8 *)(unaff_x29 + -0x40) = uVar3;
            FUN_03416d98(uVar3,0);
            lVar5 = *(long *)(unaff_x29 + -0x40);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03418748(lVar5,*(undefined8 *)(unaff_x29 + -0x18),0);
          }
          else {
            lVar5 = *(long *)(unaff_x29 + -0x28);
          }
          iVar1 = *(int *)(unaff_x29 + -0x34);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(long *)(unaff_x29 + -0x28) = lVar5;
          FUN_03418748(lVar5,*(undefined8 *)(unaff_x29 + -0x30),0);
          uVar3 = *(undefined8 *)(unaff_x29 + -0x18);
          FUN_03418748(*(undefined8 *)(unaff_x29 + -0x28),uVar9,0);
          iVar1 = iVar1 + 1;
        }
        unaff_w21 = iVar1;
        *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
    }
    param_1 = *unaff_x19;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_024164e4;
    }
  }
LAB_024164c8:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_024164e4:
  (*(code *)*puVar2)();
LAB_024164f0:
  if (unaff_w21 == 0) {
    uVar9 = 0;
  }
  else if (unaff_w21 != 1) {
    plVar4 = *(long **)(unaff_x29 + -0x28);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


