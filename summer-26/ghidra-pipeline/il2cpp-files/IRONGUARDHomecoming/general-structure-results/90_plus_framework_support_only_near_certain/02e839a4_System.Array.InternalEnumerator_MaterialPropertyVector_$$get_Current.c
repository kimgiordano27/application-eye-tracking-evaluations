/*
FUNCTION_NAME: System.Array.InternalEnumerator<MaterialPropertyVector>$$get_Current
ENTRY_POINT: 02e839a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 132
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e83bc8) */
/* WARNING: Removing unreachable block (ram,0x02e83bd8) */

void System_Array_InternalEnumerator<MaterialPropertyVector>__get_Current
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte in_w8;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
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
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_01ecaf44(param_2);
    }
    lVar3 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_2) {
          lVar3 = lVar3 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02e839fc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_02e839fc:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x21);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    memcpy(unaff_x24,unaff_x25,unaff_x21);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar6 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x60) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x24;
    }
    puVar2 = *(undefined8 **)(lVar4 + 0xa0);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar2[2])(uVar1,puVar2,lVar3,unaff_x29 + -0x18);
    lVar3 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02e83984;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02e83984:
    uVar5 = (*(code *)*puVar6)();
    if ((uVar5 & 1) == 0) break;
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x90);
    in_w8 = *(byte *)(param_2 + 0x135);
  } while( true );
  if (unaff_x22 != (long *)0x0) {
    lVar3 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02e83b1c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02e83b1c:
    (*(code *)*puVar6)();
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x28) {
        puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
        goto LAB_02e83b80;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02e83b80:
  (*(code *)*puVar6)();
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


