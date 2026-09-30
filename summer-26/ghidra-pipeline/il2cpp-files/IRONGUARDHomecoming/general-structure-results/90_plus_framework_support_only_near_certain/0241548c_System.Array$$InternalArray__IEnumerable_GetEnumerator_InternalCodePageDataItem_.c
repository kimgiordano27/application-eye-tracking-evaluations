/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<InternalCodePageDataItem>
ENTRY_POINT: 0241548c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x024158a8) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<InternalCodePageDataItem>
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x23;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  puVar1 = (undefined8 *)FUN_01ecb238(param_1,param_2,0);
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_02415518;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_02415518:
    *(void **)(unaff_x29 + -0x10) = unaff_x25;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x27,unaff_x25,unaff_x23);
    memcpy(unaff_x26,unaff_x27,unaff_x23);
    uVar2 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar4 = *(long *)(unaff_x20 + 0x38);
      lVar3 = *(long *)(lVar4 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
        lVar4 = *(long *)(unaff_x20 + 0x38);
      }
      FUN_01f09244(lVar3,*(undefined8 *)(lVar4 + 0x28));
      lVar3 = *(long *)(unaff_x29 + -0x10);
    }
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_024155f8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_024155f8:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_0341ad94(0x10,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03418748(lVar4,lVar3,0);
      do {
        lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar5 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) {
              lVar3 = lVar5 + (long)*piVar6 * 0x10 + 0x138;
              goto LAB_02415690;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        lVar3 = FUN_01ecb238();
LAB_02415690:
        *(void **)(unaff_x29 + -0x10) = unaff_x25;
        (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
        memcpy(unaff_x27,unaff_x25,unaff_x23);
        FUN_034185f8(lVar4);
        memcpy(unaff_x26,unaff_x27,unaff_x23);
        uVar2 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
        if ((uVar2 & 1) != 0) {
          lVar5 = *(long *)(unaff_x20 + 0x38);
          lVar3 = *(long *)(lVar5 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01ecaf44();
            lVar5 = *(long *)(unaff_x20 + 0x38);
          }
          FUN_01f09244(lVar3,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(unaff_x29 + -0x18));
          FUN_03418748(lVar4,*(undefined8 *)(unaff_x29 + -0x10),0);
        }
        lVar3 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02415788;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02415788:
        uVar2 = (*(code *)*puVar1)();
      } while ((uVar2 & 1) != 0);
      lVar3 = FUN_0341aef0(lVar4,0);
      goto LAB_024157c4;
    }
    if (lVar3 != 0) goto LAB_024157c4;
  }
  lVar3 = **(long **)(*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                     0xb8);
LAB_024157c4:
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_02415820;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
FUN_02415820:
    (*(code *)*puVar1)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}


