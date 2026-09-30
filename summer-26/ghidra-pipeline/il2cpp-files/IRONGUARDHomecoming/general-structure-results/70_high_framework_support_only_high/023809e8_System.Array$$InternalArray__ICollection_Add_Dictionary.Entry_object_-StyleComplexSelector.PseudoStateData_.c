/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Dictionary.Entry<object,-StyleComplexSelector.PseudoStateData>>
ENTRY_POINT: 023809e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02380aac) */

void System_Array__InternalArray__ICollection_Add<Dictionary_Entry<object,_StyleComplexSelector_PseudoStateData>>
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    *(undefined8 **)(unaff_x29 + -0x10) = param_5;
    (*(code *)param_2[2])(param_1);
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02380914;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02380914:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_02380a68;
      lVar2 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_02380a40;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_02380988;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_01ecb238();
LAB_02380988:
    *(void **)(unaff_x29 + -0x10) = unaff_x24;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    memcpy(unaff_x26,unaff_x24,unaff_x23);
    memcpy(unaff_x25,unaff_x26,unaff_x23);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_5 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x20) + 0x28)) {
      param_5 = (undefined8 *)*unaff_x25;
    }
    param_2 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x30);
    param_1 = *param_2;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02380a5c;
    }
  }
LAB_02380a40:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02380a5c:
  (*(code *)*puVar1)();
LAB_02380a68:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


