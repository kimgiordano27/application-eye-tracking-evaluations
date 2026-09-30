/*
FUNCTION_NAME: FUN_02305418
ENTRY_POINT: 02305418
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x023059f4) */
/* WARNING: Removing unreachable block (ram,0x02305a00) */

void FUN_02305418(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_80;
  long lStack_78;
  char local_6c [4];
  long local_68;
  undefined *puVar6;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_4 + 0x38);
  if (lVar8 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar8 = *(long *)(param_4 + 0x38);
    if (lVar8 == 0) {
      FUN_01ecafa0(param_4);
      lVar8 = *(long *)(param_4 + 0x38);
    }
  }
  uVar11 = (ulong)*(uint *)(*(long *)(lVar8 + 0x40) + 0xfc) + 0xf & 0x1fffffff0;
  plVar13 = (long *)((long)&local_80 - uVar11);
  plVar14 = (long *)((long)plVar13 - uVar11);
  if (param_3 == (long *)0x0) {
    param_3 = (long *)(*(code *)**(undefined8 **)(lVar8 + 8))();
  }
  puVar6 = Method_Unity_Collections_CollectionHelper_CheckCapacityInRange__;
  if ((param_1 == (long *)0x0) ||
     (puVar6 = Method_Unity_Collections_CollectionHelper_CheckIndexInRange__, param_2 == (long *)0x0
     )) {
    uVar5 = thunk_FUN_01efb3a4(puVar6);
    uVar5 = FUN_03971094(uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,param_4);
  }
  lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar8) {
        puVar2 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02305530;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar8,0);
LAB_02305530:
  plVar3 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
  lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar8) {
        puVar2 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_023055a4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_2,lVar8,0);
LAB_023055a4:
  plVar4 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0230560c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar6,0);
LAB_0230560c:
    uVar11 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 == 0) goto LAB_0230586c;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_02305854;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0230566c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,0);
LAB_0230566c:
    uVar11 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if ((uVar11 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
          goto 
          UnityEngine_Splines_SplineMesh__Extrude<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar8 = FUN_01ecb238(plVar3,lVar8,0);

    UnityEngine_Splines_SplineMesh__Extrude<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>
    :
    lVar8 = *(long *)(lVar8 + 8);
    local_80 = plVar13;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar3,&local_80,plVar13);
    lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
          goto LAB_02305760;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar8 = FUN_01ecb238(plVar4,lVar8,0);
LAB_02305760:
    lVar8 = *(long *)(lVar8 + 8);
    local_80 = plVar14;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar4,&local_80,plVar14);
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar10 = *(long **)(param_4 + 0x38);
    lVar8 = *plVar10;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
      plVar10 = *(long **)(param_4 + 0x38);
    }
    plVar15 = plVar13;
    plVar16 = plVar14;
    if (-1 < *(int *)(plVar10[8] + 0x28)) {
      plVar15 = (long *)*plVar13;
      plVar16 = (long *)*plVar14;
    }
    lVar9 = *param_3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
          goto LAB_02305804;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar8 = FUN_01ecb238(param_3,lVar8,0);
LAB_02305804:
    lVar8 = *(long *)(lVar8 + 8);
    local_80 = plVar15;
    lStack_78 = (long)plVar16;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,param_3,&local_80,local_6c);
  } while (local_6c[0] != '\0');
  iVar7 = 0xc;
  goto joined_r0x023058a8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02305854:
    if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02305888;
    }
  }
LAB_0230586c:
  puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,0);
LAB_02305888:
  uVar11 = (*(code *)*puVar2)(plVar4,puVar2[1]);
  iVar7 = 0xc;
  if ((uVar11 & 1) == 0) {
    iVar7 = 0xe;
  }
joined_r0x023058a8:
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02305900;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02305900:
    (*(code *)*puVar2)(plVar4,puVar2[1]);
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0230597c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0230597c:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7 != 0xc);
}


