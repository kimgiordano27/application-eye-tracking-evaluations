/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<InternedString>
ENTRY_POINT: 024155f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x024158a8) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<InternedString>(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x23;
  long unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  uVar1 = (**(code **)(param_1 + 0x138))();
  if ((uVar1 & 1) == 0) {
    if (unaff_x24 == 0) {
      unaff_x24 = **(long **)(*(long *)
                               Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                             0xb8);
    }
  }
  else {
    lVar2 = FUN_0341ad94(0x10,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03418748(lVar2);
    do {
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *unaff_x19;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar4) {
            lVar4 = lVar5 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_02415690;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      lVar4 = FUN_01ecb238();
LAB_02415690:
      *(void **)(unaff_x29 + -0x10) = unaff_x25;
      (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
      memcpy(unaff_x27,unaff_x25,unaff_x23);
      FUN_034185f8(lVar2);
      memcpy(unaff_x26,unaff_x27,unaff_x23);
      uVar1 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
      if ((uVar1 & 1) != 0) {
        lVar5 = *(long *)(unaff_x20 + 0x38);
        lVar4 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
          lVar5 = *(long *)(unaff_x20 + 0x38);
        }
        FUN_01f09244(lVar4,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(unaff_x29 + -0x18));
        FUN_03418748(lVar2,*(undefined8 *)(unaff_x29 + -0x10),0);
      }
      lVar4 = *unaff_x19;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02415788;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02415788:
      uVar1 = (*(code *)*puVar3)();
    } while ((uVar1 & 1) != 0);
    unaff_x24 = FUN_0341aef0(lVar2,0);
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_02415820;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
FUN_02415820:
    (*(code *)*puVar3)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x24;
}


