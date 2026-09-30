/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Dictionary.Entry<object,-OVRPassthroughLayer.PassthroughMeshInstance>>
ENTRY_POINT: 02380958
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

void System_Array__InternalArray__ICollection_Add<Dictionary_Entry<object,_OVRPassthroughLayer_PassthroughMeshInstance>>
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
  long in_x11;
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
    if (in_x11 == param_3) {
      lVar1 = param_1 + (long)*in_x10 * 0x10 + 0x138;
      goto LAB_02380988;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        lVar1 = FUN_01ecb238();
LAB_02380988:
        *(void **)(unaff_x29 + -0x10) = unaff_x24;
        (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
        memcpy(unaff_x26,unaff_x24,unaff_x23);
        memcpy(unaff_x25,unaff_x26,unaff_x23);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar4 = unaff_x25;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x20) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x25;
        }
        puVar3 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x30);
        uVar2 = *puVar3;
        *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
        (*(code *)puVar3[2])(uVar2);
        lVar1 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x28) {
              puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02380914;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02380914:
        uVar5 = (*(code *)*puVar4)();
        if ((uVar5 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) goto LAB_02380a68;
          lVar1 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
          if (uVar5 == 0) goto LAB_02380a40;
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          goto LAB_02380a28;
        }
        param_3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01ecaf44(param_3);
        }
        param_1 = *unaff_x20;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_02380a28:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_02380a5c;
    }
  }
LAB_02380a40:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02380a5c:
  (*(code *)*puVar4)();
LAB_02380a68:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


