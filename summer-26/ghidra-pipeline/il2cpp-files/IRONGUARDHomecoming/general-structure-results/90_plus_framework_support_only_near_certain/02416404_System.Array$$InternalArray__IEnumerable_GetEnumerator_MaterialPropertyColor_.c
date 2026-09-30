/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<MaterialPropertyColor>
ENTRY_POINT: 02416404
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 132
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x024164fc) */
/* WARNING: Removing unreachable block (ram,0x0241656c) */

undefined8 System_Array__InternalArray__IEnumerable_GetEnumerator<MaterialPropertyColor>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  int iVar8;
  long lVar9;
  long unaff_x22;
  long *unaff_x23;
  size_t unaff_x24;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
code_r0x02416404:
  uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar3;
  FUN_03416d98(uVar3,0);
  lVar9 = *(long *)(unaff_x29 + -0x40);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03418748(lVar9,*(undefined8 *)(unaff_x29 + -0x18),0);
  uVar3 = unaff_x20;
  do {
    iVar1 = *(int *)(unaff_x29 + -0x34);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(unaff_x29 + -0x28) = lVar9;
    FUN_03418748(lVar9,*(undefined8 *)(unaff_x29 + -0x30),0);
    unaff_x20 = *(undefined8 *)(unaff_x29 + -0x18);
    FUN_03418748(*(undefined8 *)(unaff_x29 + -0x28),uVar3,0);
    iVar1 = iVar1 + 1;
    do {
      iVar8 = iVar1;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          lVar9 = *unaff_x19;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_024162e4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_01ecb238();
LAB_024162e4:
          uVar6 = (*(code *)*puVar2)();
          if ((uVar6 & 1) == 0) {
            uVar3 = *(undefined8 *)(unaff_x29 + -0x18);
            if (unaff_x19 == (long *)0x0) goto LAB_024164f0;
            lVar9 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 == 0) goto LAB_024164c8;
            piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_024164b0;
          }
          lVar9 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar5 = *unaff_x19;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar9) {
                lVar9 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
                goto LAB_02416358;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          lVar9 = FUN_01ecb238();
LAB_02416358:
          *(void **)(unaff_x29 + -0x10) = unaff_x26;
          (**(code **)(*(long *)(lVar9 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar9 + 8) + 8));
          memcpy(unaff_x28,unaff_x26,unaff_x24);
          memcpy(unaff_x27,unaff_x28,unaff_x24);
          uVar6 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x20));
        } while ((uVar6 & 1) == 0);
        lVar5 = *(long *)(unaff_x22 + 0x38);
        lVar9 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44();
          lVar5 = *(long *)(unaff_x22 + 0x38);
        }
        FUN_01f09244(lVar9,*(undefined8 *)(lVar5 + 0x28));
        unaff_x20 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar6 = FUN_0340eec4(unaff_x20,0);
      } while ((uVar6 & 1) != 0);
      iVar1 = 1;
    } while (iVar8 == 0);
    *(int *)(unaff_x29 + -0x34) = iVar8;
    if (iVar8 == 1) goto code_r0x02416404;
    lVar9 = *(long *)(unaff_x29 + -0x28);
    uVar3 = unaff_x20;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_024164b0:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_024164e4;
    }
  }
LAB_024164c8:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_024164e4:
  (*(code *)*puVar2)();
LAB_024164f0:
  if (iVar8 == 0) {
    uVar3 = 0;
  }
  else if (iVar8 != 1) {
    plVar4 = *(long **)(unaff_x29 + -0x28);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


