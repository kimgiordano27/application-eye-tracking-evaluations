/*
FUNCTION_NAME: System.Array.InternalEnumerator<MaterialPropertyVector>$$.ctor
ENTRY_POINT: 02e83930
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 140
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e83bc8) */
/* WARNING: Removing unreachable block (ram,0x02e83bd8) */

void System_Array_InternalEnumerator<MaterialPropertyVector>___ctor(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    lVar5 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02e83984;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02e83984:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_02e83b28;
      lVar5 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_02e83b00;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02e839fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238();
LAB_02e839fc:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x21);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    memcpy(unaff_x24,unaff_x25,unaff_x21);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar2 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x60) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x24;
    }
    puVar4 = *(undefined8 **)(lVar6 + 0xa0);
    uVar3 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar4[2])(uVar3,puVar4,lVar5,unaff_x29 + -0x18);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02e83b1c;
    }
  }
LAB_02e83b00:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02e83b1c:
  (*(code *)*puVar2)();
LAB_02e83b28:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x28) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
        goto LAB_02e83b80;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02e83b80:
  (*(code *)*puVar2)();
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


