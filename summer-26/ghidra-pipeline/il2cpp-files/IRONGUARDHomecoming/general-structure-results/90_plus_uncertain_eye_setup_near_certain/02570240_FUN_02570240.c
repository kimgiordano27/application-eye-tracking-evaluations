/*
FUNCTION_NAME: FUN_02570240
ENTRY_POINT: 02570240
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_02570240(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  ulong __n;
  undefined1 *__src;
  undefined1 *__s;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long *plStack_70;
  undefined8 *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_60 = param_2;
  local_58 = param_1;
  if ((DAT_0482fe02 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe02 = 1;
  }
  plVar14 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar14[6] + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = auStack_80 + -uVar11;
  __s = __src + -uVar11;
  memset(__s,0,__n);
  plStack_70 = &local_60;
  local_68 = &local_58;
  local_78 = 0;
  piVar6 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar14 + 0x80));
  if (*piVar6 == 0) {
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    FUN_01bc52e4(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x120,0
                );
    puVar8 = (undefined8 *)
             thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) +
                                                  0x80) + 0x60);
    plVar14 = (long *)*puVar8;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar6 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar9) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_025703ec;
        }
        uVar11 = uVar11 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar14,lVar9,0);
LAB_025703ec:
    uVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
    FUN_01bc5360(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x140,
                 uVar7);
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    plVar14 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    goto LAB_02570480;
  }
  if (*piVar6 == 1) {
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_025706f0:
    piVar6 = (int *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) +
                                                                     0xc0) + 0x80) + 0x120);
    FUN_01bc52e4(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x120,
                 *piVar6 + 1);
    plVar14 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
LAB_02570480:
    do {
      puVar8 = (undefined8 *)
               thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0)
                                                    + 0x80) + 0x140);
      plVar13 = (long *)*puVar8;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *plVar14) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_025704f0;
          }
          uVar11 = uVar11 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*plVar14,0);
LAB_025704f0:
      uVar11 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if ((uVar11 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 8))(local_58);
        FUN_01bc5360(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) +
                              0x140,0);
        break;
      }
      puVar8 = (undefined8 *)
               thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0)
                                                    + 0x80) + 0x140);
      plVar13 = (long *)*puVar8;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar6 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar9) {
            lVar9 = lVar10 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_02570590;
          }
          uVar11 = uVar11 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar11 != 0);
      }
      lVar9 = FUN_01ecb238(plVar13,lVar9,0);
LAB_02570590:
      lVar9 = *(long *)(lVar9 + 8);
      local_50 = __src;
      (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar13,&local_50,__src);
      memcpy(__s,__src,__n);
      piVar6 = (int *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) +
                                                                       0xc0) + 0x80) + 0x120);
      iVar1 = *piVar6;
      piVar6 = (int *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) +
                                                                       0xc0) + 0x80) + 0xa0);
      lVar9 = *(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x120;
      if (*piVar6 <= iVar1) goto LAB_02570690;
      piVar6 = (int *)thunk_FUN_01ee7388(local_58,lVar9);
      FUN_01bc52e4(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x120
                   ,*piVar6 + 1);
    } while( true );
  }
  uVar12 = 0;
LAB_0257044c:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
LAB_02570690:
  piVar6 = (int *)thunk_FUN_01ee7388(local_58,lVar9);
  iVar1 = *piVar6;
  piVar6 = (int *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) +
                                                                   0xc0) + 0x80) + 0xa0);
  iVar2 = *piVar6;
  piVar6 = (int *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) +
                                                                   0xc0) + 0x80) + 0xe0);
  iVar3 = *piVar6;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = (iVar1 - iVar2) / iVar3;
  }
  if (iVar1 - iVar2 == iVar4 * iVar3) goto LAB_02570740;
  goto LAB_025706f0;
LAB_02570740:
  memcpy(__src,__s,__n);
  FUN_01f08810(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x20,
               __src,__n);
  uVar12 = 1;
  FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),1);
  goto LAB_0257044c;
}


