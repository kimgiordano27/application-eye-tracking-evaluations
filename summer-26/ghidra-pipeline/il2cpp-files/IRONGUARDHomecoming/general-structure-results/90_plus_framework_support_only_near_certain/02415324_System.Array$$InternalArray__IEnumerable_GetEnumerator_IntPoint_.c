/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<IntPoint>
ENTRY_POINT: 02415324
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_9;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_18;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x024158a8) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<IntPoint>(ushort *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar12;
  undefined8 unaff_x24;
  void *__src;
  void *__dest;
  void *__s;
  long unaff_x29;
  
  uVar1 = *param_1;
  uVar9 = *(uint *)(param_2 + 0xfc);
  uVar12 = (ulong)uVar9;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_01ecaf44();
    param_2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    uVar9 = *(uint *)(lVar2 + 0xfc);
    uVar1 = *(ushort *)(param_2 + 0x135);
  }
  lVar2 = (long)&stack0x00000000 - ((ulong)(uVar9 + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    param_2 = FUN_01ecaf44();
  }
  lVar7 = lVar2 - ((ulong)(*(int *)(param_2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x18) = lVar7;
  uVar10 = uVar12 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar7 - uVar10);
  __dest = (void *)((long)__src - uVar10);
  __s = (void *)((long)__dest - uVar10);
  memset(__s,0,uVar12);
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ContractUtils_RequiresNotNull__);
    FUN_034efd20(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5);
  }
  lVar7 = **(long **)(unaff_x20 + 0x38);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar7) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02415438;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02415438:
  plVar4 = (long *)(*(code *)*puVar3)();
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_024154a4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_024154a4:
  uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
  if ((uVar10 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_02415518;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar7 = FUN_01ecb238(plVar4,lVar7,0);
LAB_02415518:
    *(void **)(unaff_x29 + -0x10) = __src;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar4,unaff_x29 + -0x10,__src);
    memcpy(__s,__src,uVar12);
    memcpy(__dest,__s,uVar12);
    uVar10 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20),__dest);
    if ((uVar10 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar8 = *(long *)(unaff_x20 + 0x38);
      lVar7 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
        lVar8 = *(long *)(unaff_x20 + 0x38);
      }
      FUN_01f09244(lVar7,*(undefined8 *)(lVar8 + 0x28),lVar2,__s,0,unaff_x29 + -0x10);
      lVar2 = *(long *)(unaff_x29 + -0x10);
    }
    lVar7 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_024155f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_024155f8:
    uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar10 & 1) != 0) {
      lVar7 = FUN_0341ad94(0x10,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03418748(lVar7,lVar2,0);
      do {
        lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44(lVar2);
        }
        lVar8 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar2) {
              lVar2 = lVar8 + (long)*piVar11 * 0x10 + 0x138;
              goto LAB_02415690;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        lVar2 = FUN_01ecb238(plVar4,lVar2,0);
LAB_02415690:
        *(void **)(unaff_x29 + -0x10) = __src;
        lVar2 = *(long *)(lVar2 + 8);
        (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar4,unaff_x29 + -0x10,__src)
        ;
        memcpy(__s,__src,uVar12);
        FUN_034185f8(lVar7);
        memcpy(__dest,__s,uVar12);
        uVar10 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20),__dest);
        if ((uVar10 & 1) != 0) {
          lVar8 = *(long *)(unaff_x20 + 0x38);
          lVar2 = *(long *)(lVar8 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01ecaf44();
            lVar8 = *(long *)(unaff_x20 + 0x38);
          }
          FUN_01f09244(lVar2,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(unaff_x29 + -0x18),__s,0,
                       unaff_x29 + -0x10);
          FUN_03418748(lVar7,*(undefined8 *)(unaff_x29 + -0x10),0);
        }
        lVar2 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02415788;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar4,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_02415788:
        uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      } while ((uVar10 & 1) != 0);
      lVar2 = FUN_0341aef0(lVar7,0);
      goto LAB_024157c4;
    }
    if (lVar2 != 0) goto LAB_024157c4;
  }
  lVar2 = **(long **)(*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                     0xb8);
LAB_024157c4:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_02415820;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_02415820:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


