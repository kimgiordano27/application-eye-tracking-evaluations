/*
FUNCTION_NAME: FUN_0226dc14
ENTRY_POINT: 0226dc14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0226dfe0) */

void FUN_0226dc14(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  ulong __n;
  void *__src;
  void *__dest;
  void *__s;
  uint uVar10;
  long local_80;
  uint local_74;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar8 = *(long *)(param_3 + 0x38);
  if (lVar8 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar8 = *(long *)(param_3 + 0x38);
    if (lVar8 == 0) {
      FUN_01ecafa0(param_3);
      lVar8 = *(long *)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 0x48) + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)&local_80 - uVar6);
  __dest = (void *)((long)__src - uVar6);
  __s = (void *)((long)__dest - uVar6);
  memset(__s,0,__n);
  if (*param_1 != 0) {
    uVar10 = *(uint *)(*param_1 + 0x18);
    iVar1 = (*(code *)**(undefined8 **)(lVar8 + 0x20))(param_2);
    local_74 = uVar10;
    (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x28))(param_1,iVar1 + uVar10);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0226dd8c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(param_2,lVar8,0);
LAB_0226dd8c:
    local_80 = lVar5;
    plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
    uVar10 = local_74;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0226ddfc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_0226ddfc:
      uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      lVar5 = local_80;
      if ((uVar6 & 1) == 0) {
        uVar10 = local_74;
        if (plVar3 == (long *)0x0) goto LAB_0226df9c;
        lVar8 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 == 0) goto LAB_0226df6c;
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0226df54;
      }
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar8 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            lVar5 = lVar8 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_0226de70;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_01ecb238(plVar3,lVar5,0);
LAB_0226de70:
      lVar5 = *(long *)(lVar5 + 8);
      local_70 = __src;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar3,&local_70,__src);
      memcpy(__s,__src,__n);
      plVar9 = (long *)*param_1;
      memcpy(__dest,__s,__n);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(plVar9 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar10 + 0x20),
             __dest,__n);
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x48);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar9 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar5,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar10 + 0x20
                   ,__dest);
      uVar10 = uVar10 + 1;
    } while( true );
  }
  lVar8 = (*(code *)**(undefined8 **)(lVar8 + 0x10))(param_2);
  *param_1 = lVar8;
  thunk_FUN_01f51358(param_1,lVar8);
  uVar10 = 0;
  goto LAB_0226df9c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0226df54:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0226df88;
    }
  }
LAB_0226df6c:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0226df88:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  uVar10 = local_74;
LAB_0226df9c:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


