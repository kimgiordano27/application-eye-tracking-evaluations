/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<TextProcessingStack<float>>
ENTRY_POINT: 02384420
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02384588) */

void System_Array__InternalArray__ICollection_Add<TextProcessingStack<float>>(void *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  undefined8 *puVar5;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    memcpy(param_1,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = *(long *)(unaff_x20 + 0x38);
    lVar1 = *(long *)(lVar2 + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44(lVar1);
      lVar2 = *(long *)(unaff_x20 + 0x38);
    }
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar1) {
          lVar1 = lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138;
          goto LAB_02384340;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    lVar1 = FUN_01ecb238();
LAB_02384340:
    *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
    (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    lVar1 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0238438c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0238438c:
    uVar3 = (*(code *)*puVar5)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02384548;
      lVar1 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 == 0) goto LAB_02384520;
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44(lVar1);
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar1) {
          lVar1 = lVar2 + (long)*piVar4 * 0x10 + 0x138;
          goto LAB_02384400;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    lVar1 = FUN_01ecb238();
LAB_02384400:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
    (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    param_1 = unaff_x25;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0238453c;
    }
  }
LAB_02384520:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0238453c:
  (*(code *)*puVar5)();
LAB_02384548:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


