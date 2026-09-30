/*
FUNCTION_NAME: FUN_02aa2a94
ENTRY_POINT: 02aa2a94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 FUN_02aa2a94(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long *plStack_70;
  undefined8 *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = param_2;
  local_58 = param_1;
  if ((DAT_0483103a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483103a = 1;
  }
  plVar6 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar11 = (ulong)*(uint *)(plVar6[6] + 0xfc);
  puVar12 = auStack_80 + -(uVar11 + 0xf & 0x1fffffff0);
  plStack_70 = &local_60;
  local_68 = &local_58;
  local_78 = 0;
  piVar3 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar6 + 0x80));
  if (*piVar3 == 0) {
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) +
                                                  0x80) + 0x60);
    plVar6 = (long *)*puVar5;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto FUN_02aa2c04;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
FUN_02aa2c04:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    FUN_01bc5360(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0xe0,
                 uVar4);
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    while (piVar3 = (int *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 +
                                                                                      0x20) + 0xc0)
                                                                + 0x80) + 0xa0), 0 < *piVar3) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0)
                                                    + 0x80) + 0xe0);
      plVar6 = (long *)*puVar5;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_02aa2cec;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02aa2cec:
      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar9 & 1) == 0) break;
      piVar3 = (int *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) +
                                                                       0xc0) + 0x80) + 0xa0);
      FUN_01bc52e4(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0xa0,
                   *piVar3 + -1);
    }
    piVar3 = (int *)thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) +
                                                                     0xc0) + 0x80) + 0xa0);
    if (*piVar3 < 1) goto LAB_02aa2d6c;
LAB_02aa2e78:
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 8))(local_58);
    FUN_01bc5360(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0xe0,0)
    ;
  }
  else if (*piVar3 == 1) {
    FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02aa2d6c:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) +
                                                  0x80) + 0xe0);
    plVar6 = (long *)*puVar5;
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
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_02aa2de4;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02aa2de4:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) != 0) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0)
                                                    + 0x80) + 0xe0);
      plVar6 = (long *)*puVar5;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(local_60 + 0x20) + 0xc0) + 0x20);
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
            goto LAB_02aa2ec4;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_01ecb238(plVar6,lVar7,0);
LAB_02aa2ec4:
      lVar7 = *(long *)(lVar7 + 8);
      local_50 = puVar12;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar6,&local_50,puVar12);
      FUN_01f08810(local_58,*(long *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80) + 0x20,
                   puVar12,uVar11);
      uVar10 = 1;
      FUN_01bc52e4(local_58,*(undefined8 *)(**(long **)(*(long *)(local_60 + 0x20) + 0xc0) + 0x80),1
                  );
      goto LAB_02aa2f24;
    }
    goto LAB_02aa2e78;
  }
  uVar10 = 0;
LAB_02aa2f24:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


