/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<LocalKeyword>
ENTRY_POINT: 023fb5d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023fb72c) */

void System_Array__InternalArray__ICollection_Remove<LocalKeyword>
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        lVar1 = param_1 + (long)*in_x10 * 0x10 + 0x138;
        goto LAB_023fb60c;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      lVar1 = FUN_01ecb238();
LAB_023fb60c:
      *(void **)(unaff_x29 + -0x10) = unaff_x23;
      (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
      memcpy(unaff_x25,unaff_x23,unaff_x22);
      memcpy(unaff_x24,unaff_x25,unaff_x22);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x24;
      }
      puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
      uVar2 = *puVar3;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
      (*(code *)puVar3[2])(uVar2);
      lVar1 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_023fb598;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_023fb598:
      uVar5 = (*(code *)*puVar4)();
      if ((uVar5 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_023fb6ec;
        lVar1 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 == 0) goto LAB_023fb6c4;
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_023fb6ac;
      }
      param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_01ecaf44(param_3);
      }
      param_1 = *unaff_x19;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_023fb6ac:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_023fb6e0;
    }
  }
LAB_023fb6c4:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_023fb6e0:
  (*(code *)*puVar4)();
LAB_023fb6ec:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


