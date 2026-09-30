/*
FUNCTION_NAME: FUN_0257c1ec
ENTRY_POINT: 0257c1ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_0257c1ec(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  int *piVar3;
  void *__s;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong __n;
  code *pcVar10;
  undefined1 *puVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  long *plStack_60;
  undefined8 *local_58;
  long local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = param_2;
  uStack_48 = param_1;
  if ((DAT_0482fe29 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0482fe29 = 1;
  }
  plVar6 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar6[6] + 0xfc);
  puVar11 = auStack_70 + -(__n + 0xf & 0x1fffffff0);
  plStack_60 = &local_50;
  local_58 = &uStack_48;
  local_68 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar6 + 0x80));
  if (*piVar3 == 0) {
    FUN_01bc52e4(uStack_48,*(undefined8 *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    plVar6 = (long *)thunk_FUN_01ee7388(uStack_48,
                                        *(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) +
                                                 0x80) + 0x60);
    if (*plVar6 != 0) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_48,
                                  *(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80) +
                                  0x60);
      plVar6 = (long *)*puVar4;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_50 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0257c3a4;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
LAB_0257c3a4:
      uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      FUN_01bc5360(uStack_48,*(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80) + 0xa0
                   ,uVar5);
      FUN_01bc52e4(uStack_48,*(undefined8 *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      goto LAB_0257c3ec;
    }
  }
  else if (*piVar3 == 1) {
    FUN_01bc52e4(uStack_48,*(undefined8 *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    __s = (void *)thunk_FUN_01ee7388(uStack_48,
                                     *(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80
                                              ) + 0xc0);
    memset(__s,0,__n);
LAB_0257c3ec:
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(uStack_48,
                                *(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80) +
                                0xa0);
    plVar6 = (long *)*puVar4;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0257c464;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_0257c464:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) != 0) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uStack_48,
                                  *(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80) +
                                  0xa0);
      plVar6 = (long *)*puVar4;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_50 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar3 * 0x10 + 0x138;
            goto LAB_0257c544;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_01ecb238(plVar6,lVar7,0);
LAB_0257c544:
      lVar7 = *(long *)(lVar7 + 8);
      local_40 = puVar11;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar6,&local_40,puVar11);
      FUN_01f08810(uStack_48,*(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80) + 0xc0
                   ,puVar11,__n);
      plVar6 = *(long **)(*(long *)(local_50 + 0x20) + 0xc0);
      pcVar10 = *(code **)plVar6[7];
      uVar5 = thunk_FUN_01ee7388(uStack_48,*(long *)(*plVar6 + 0x80) + 0xc0);
      uVar2 = (*pcVar10)(uVar5,*(undefined8 *)(*(long *)(*(long *)(local_50 + 0x20) + 0xc0) + 0x38))
      ;
      FUN_01bc52e4(uStack_48,*(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80) + 0x20
                   ,uVar2);
      uVar2 = 1;
      FUN_01bc52e4(uStack_48,*(undefined8 *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80),
                   1);
      goto FUN_0257c5fc;
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_50 + 0x20) + 0xc0) + 8))(uStack_48);
    FUN_01bc5360(uStack_48,*(long *)(**(long **)(*(long *)(local_50 + 0x20) + 0xc0) + 0x80) + 0xa0,0
                );
  }
  uVar2 = 0;
FUN_0257c5fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


