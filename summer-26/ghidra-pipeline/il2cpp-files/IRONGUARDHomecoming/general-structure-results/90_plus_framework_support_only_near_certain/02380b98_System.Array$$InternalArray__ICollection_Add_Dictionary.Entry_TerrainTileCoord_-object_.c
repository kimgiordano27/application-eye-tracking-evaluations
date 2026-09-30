/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Dictionary.Entry<TerrainTileCoord,-object>>
ENTRY_POINT: 02380b98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02380ea0) */

void System_Array__InternalArray__ICollection_Add<Dictionary_Entry<TerrainTileCoord,_object>>
               (long param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong __n;
  undefined1 *__src;
  undefined8 *puVar11;
  void *__s;
  int iVar12;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(param_1 + 0x28);
  plVar10 = *(long **)(param_4 + 0x38);
  if (plVar10 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar10 = *(long **)(param_4 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar10 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar10[4] + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar8;
  puVar11 = (undefined8 *)(__src + -uVar8);
  __s = (void *)((long)puVar11 - uVar8);
  memset(__s,0,__n);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar7 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02380c88;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar5,0);
LAB_02380c88:
  pcVar1 = (code *)*puVar3;
  uVar4 = puVar3[1];
  *(long **)(unaff_x29 + -0x30) = param_2;
  plVar10 = (long *)(*pcVar1)(param_2,uVar4);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar12 = 0;
  do {
    lVar5 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02380cfc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_02380cfc:
    uVar8 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_02380e5c;
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_02380e34;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02380d70;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar5 = FUN_01ecb238(plVar10,lVar5,0);
LAB_02380d70:
    *(undefined1 **)(unaff_x29 + -0x20) = __src;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,unaff_x29 + -0x20,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar11,__s,__n);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar3 = puVar11;
    if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x20) + 0x28)) {
      puVar3 = (undefined8 *)*puVar11;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x30);
    uVar4 = *puVar6;
    *(int *)(unaff_x29 + -0xc) = iVar12;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    (*(code *)puVar6[2])(uVar4,puVar6,param_3,unaff_x29 + -0x20,unaff_x29 + -0xc);
    iVar12 = iVar12 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02380e50;
    }
  }
LAB_02380e34:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02380e50:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_02380e5c:
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x30));
  }
  return;
}


