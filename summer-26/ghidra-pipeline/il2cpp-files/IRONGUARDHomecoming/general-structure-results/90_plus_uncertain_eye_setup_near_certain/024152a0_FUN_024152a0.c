/*
FUNCTION_NAME: FUN_024152a0
ENTRY_POINT: 024152a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_20;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x024158a8) */

void * FUN_024152a0(undefined8 param_1,undefined4 param_2,long *param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  void *__src;
  void *__dest;
  void *__s;
  long local_80;
  long local_78;
  void *local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
                    /* try { // try from 024152c4 to 025152eb has its CatchHandler @ 02415300 */
  local_68 = *(long *)(lVar10 + 0x28);
  lVar8 = *(long *)(param_4 + 0x38);
  if (lVar8 == 0) {
                    /* try { // try from 024152ec to 025152f7 has its CatchHandler @ 02415010 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 024152f8 to 025152ff has its CatchHandler @ 02415300 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024152c4 with catch @ 02415300
                       catch(type#2 @ 00000000) { ... } // from try @ 024152f8 with catch @ 02415300
                        */
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    lVar8 = *(long *)(param_4 + 0x38);
    if (lVar8 == 0) {
      FUN_01ecafa0(param_4);
      lVar8 = *(long *)(param_4 + 0x38);
    }
  }
  lVar8 = *(long *)(lVar8 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  uVar11 = *(uint *)(lVar8 + 0xfc);
  uVar14 = (ulong)uVar11;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_01ecaf44();
    lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
    uVar11 = *(uint *)(lVar2 + 0xfc);
    uVar1 = *(ushort *)(lVar8 + 0x135);
  }
  lVar2 = (long)&local_80 - ((ulong)(uVar11 + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_01ecaf44();
  }
  local_78 = lVar2 - ((ulong)(*(int *)(lVar8 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar12 = uVar14 + 0xf & 0x1fffffff0;
  __src = (void *)(local_78 - uVar12);
  __dest = (void *)((long)__src - uVar12);
  __s = (void *)((long)__dest - uVar12);
  memset(__s,0,uVar14);
  if (param_3 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ContractUtils_RequiresNotNull__);
    FUN_034efd20(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  lVar8 = **(long **)(param_4 + 0x38);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *param_3;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar8) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02415438;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_3,lVar8,0);
LAB_02415438:
  plVar4 = (long *)(*(code *)*puVar3)(param_3,puVar3[1]);
  local_80 = lVar10;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *plVar4;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_024154a4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_024154a4:
  uVar12 = (*(code *)*puVar3)(plVar4,puVar3[1]);
  if ((uVar12 & 1) != 0) {
    lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar8 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          lVar10 = lVar8 + (long)*piVar13 * 0x10 + 0x138;
          goto LAB_02415518;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    lVar10 = FUN_01ecb238(plVar4,lVar10,0);
LAB_02415518:
    lVar10 = *(long *)(lVar10 + 8);
    local_70 = __src;
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar4,&local_70,__src);
    memcpy(__s,__src,uVar14);
    memcpy(__dest,__s,uVar14);
    uVar12 = FUN_01f089f8(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20),__dest);
    if ((uVar12 & 1) == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      lVar8 = *(long *)(param_4 + 0x38);
      lVar10 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
        lVar8 = *(long *)(param_4 + 0x38);
      }
      FUN_01f09244(lVar10,*(undefined8 *)(lVar8 + 0x28),lVar2,__s,0,&local_70);
      pvVar5 = local_70;
    }
    lVar10 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_024155f8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_024155f8:
    uVar12 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar12 & 1) != 0) {
      lVar10 = FUN_0341ad94(0x10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03418748(lVar10,pvVar5,0);
      do {
        lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        lVar2 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar8) {
              lVar8 = lVar2 + (long)*piVar13 * 0x10 + 0x138;
              goto LAB_02415690;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        lVar8 = FUN_01ecb238(plVar4,lVar8,0);
LAB_02415690:
        lVar8 = *(long *)(lVar8 + 8);
        local_70 = __src;
        (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar4,&local_70,__src);
        memcpy(__s,__src,uVar14);
        FUN_034185f8(lVar10,param_1,param_2,0);
        memcpy(__dest,__s,uVar14);
        uVar12 = FUN_01f089f8(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20),__dest);
        if ((uVar12 & 1) != 0) {
          lVar2 = *(long *)(param_4 + 0x38);
          lVar8 = *(long *)(lVar2 + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44();
            lVar2 = *(long *)(param_4 + 0x38);
          }
          FUN_01f09244(lVar8,*(undefined8 *)(lVar2 + 0x28),local_78,__s,0,&local_70);
          FUN_03418748(lVar10,local_70,0);
        }
        lVar8 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02415788;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar4,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_02415788:
        uVar12 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      } while ((uVar12 & 1) != 0);
      pvVar5 = (void *)FUN_0341aef0(lVar10,0);
      goto LAB_024157c4;
    }
    if (pvVar5 != (void *)0x0) goto LAB_024157c4;
  }
  pvVar5 = (void *)**(long **)(*(long *)
                                Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                              0xb8);
LAB_024157c4:
  if (plVar4 != (long *)0x0) {
    lVar10 = *plVar4;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto FUN_02415820;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_02415820:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  if (*(long *)(local_80 + 0x28) == local_68) {
    return pvVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


