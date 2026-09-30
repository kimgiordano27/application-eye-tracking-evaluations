/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<JNINativeMethod>
ENTRY_POINT: 0241575c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x024158a8) */

undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<JNINativeMethod>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x23;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02415788;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02415788:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          uVar3 = FUN_0341aef0();
          if (unaff_x19 == (long *)0x0) goto LAB_0241582c;
          lVar5 = *unaff_x19;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 == 0) goto LAB_02415804;
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_024157ec;
        }
        lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar4 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar5) {
              lVar5 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
              goto LAB_02415690;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        lVar5 = FUN_01ecb238();
LAB_02415690:
        *(void **)(unaff_x29 + -0x10) = unaff_x25;
        (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
        memcpy(unaff_x27,unaff_x25,unaff_x23);
        FUN_034185f8();
        memcpy(unaff_x26,unaff_x27,unaff_x23);
        uVar2 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar2 & 1) != 0) {
          lVar4 = *(long *)(unaff_x20 + 0x38);
          lVar5 = *(long *)(lVar4 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
            lVar4 = *(long *)(unaff_x20 + 0x38);
          }
          FUN_01f09244(lVar5,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(unaff_x29 + -0x18));
          FUN_03418748();
        }
        param_1 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        param_3 = *(long *)
                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_024157ec:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto FUN_02415820;
    }
  }
LAB_02415804:
  puVar1 = (undefined8 *)FUN_01ecb238();
FUN_02415820:
  (*(code *)*puVar1)();
LAB_0241582c:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


