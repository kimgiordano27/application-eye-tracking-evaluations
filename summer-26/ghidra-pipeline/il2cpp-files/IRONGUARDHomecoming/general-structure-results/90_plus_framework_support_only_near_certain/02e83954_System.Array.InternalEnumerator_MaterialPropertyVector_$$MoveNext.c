/*
FUNCTION_NAME: System.Array.InternalEnumerator<MaterialPropertyVector>$$MoveNext
ENTRY_POINT: 02e83954
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


/* WARNING: Removing unreachable block (ram,0x02e83bc8) */
/* WARNING: Removing unreachable block (ram,0x02e83bd8) */

void System_Array_InternalEnumerator<MaterialPropertyVector>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02e83984;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02e83984:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          if (unaff_x22 == (long *)0x0) goto LAB_02e83b28;
          lVar4 = *unaff_x22;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 == 0) goto LAB_02e83b00;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_02e83ae8;
        }
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x90);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        lVar6 = *unaff_x22;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              lVar4 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
              goto LAB_02e839fc;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        lVar4 = FUN_01ecb238();
LAB_02e839fc:
        *(void **)(unaff_x29 + -0x18) = unaff_x23;
        (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
        memcpy(unaff_x25,unaff_x23,unaff_x21);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        lVar4 = **(long **)(lVar4 + 0xb8);
        memcpy(unaff_x24,unaff_x25,unaff_x21);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        puVar1 = unaff_x24;
        if (-1 < *(int *)(*(long *)(lVar6 + 0x60) + 0x28)) {
          puVar1 = (undefined8 *)*unaff_x24;
        }
        puVar5 = *(undefined8 **)(lVar6 + 0xa0);
        uVar3 = *puVar5;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
        *(long **)(unaff_x29 + -0x10) = unaff_x19;
        (*(code *)puVar5[2])(uVar3,puVar5,lVar4,unaff_x29 + -0x18);
        param_1 = *unaff_x22;
        param_3 = *unaff_x27;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_02e83ae8:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02e83b1c;
    }
  }
LAB_02e83b00:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02e83b1c:
  (*(code *)*puVar1)();
LAB_02e83b28:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *unaff_x19;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x28) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
        goto LAB_02e83b80;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02e83b80:
  (*(code *)*puVar1)();
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


