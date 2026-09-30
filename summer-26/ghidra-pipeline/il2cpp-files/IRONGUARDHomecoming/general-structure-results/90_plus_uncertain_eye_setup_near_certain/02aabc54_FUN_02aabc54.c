/*
FUNCTION_NAME: FUN_02aabc54
ENTRY_POINT: 02aabc54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 FUN_02aabc54(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long alStack_a0 [2];
  long *plStack_90;
  undefined8 *local_88;
  long local_80;
  undefined8 local_78;
  long *local_70;
  long lStack_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_80 = param_2;
  local_78 = param_1;
  if ((DAT_0483105b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483105b = 1;
  }
  plVar8 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar1 = *(uint *)(plVar8[0xf] + 0xfc);
  plVar14 = (long *)((long)alStack_a0 - ((ulong)*(uint *)(plVar8[0xb] + 0xfc) + 0xf & 0x1fffffff0));
  plVar15 = (long *)((long)plVar14 - ((ulong)*(uint *)(plVar8[0xd] + 0xfc) + 0xf & 0x1fffffff0));
  lVar13 = (long)plVar15 - ((ulong)uVar1 + 0xf & 0x1fffffff0);
  plStack_90 = &local_80;
  local_88 = &local_78;
  alStack_a0[1] = 0;
  piVar4 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar8 + 0x80));
  if (*piVar4 == 0) {
    FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) +
                                                  0x80) + 0x60);
    plVar8 = (long *)*puVar6;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar7 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aabe00;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_02aabe00:
    uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    FUN_01bc5360(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80) + 0x120,
                 uVar5);
    FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) +
                                                  0x80) + 0xa0);
    plVar8 = (long *)*puVar6;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x30);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar7 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aabed8;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_02aabed8:
    uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    FUN_01bc5360(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80) + 0x140,
                 uVar5);
    FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
LAB_02aabf20:
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) +
                                                  0x80) + 0x120);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    plVar8 = (long *)*puVar6;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aabf98;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02aabf98:
    uVar11 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if ((uVar11 & 1) != 0) {
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0)
                                                    + 0x80) + 0x140);
      plVar8 = (long *)*puVar6;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_02aac018;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_02aac018:
      uVar11 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if ((uVar11 & 1) != 0) {
        plVar8 = (long *)thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20
                                                                                    ) + 0xc0) + 0x80
                                                              ) + 0xe0);
        lVar9 = *plVar8;
        puVar6 = (undefined8 *)
                 thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0
                                                                  ) + 0x80) + 0x120);
        plVar8 = (long *)*puVar6;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == lVar7) {
              lVar7 = lVar10 + (long)*piVar4 * 0x10 + 0x138;
              goto LAB_02aac180;
            }
            uVar11 = uVar11 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar11 != 0);
        }
        lVar7 = FUN_01ecb238(plVar8,lVar7,0);
LAB_02aac180:
        lVar7 = *(long *)(lVar7 + 8);
        local_70 = plVar14;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar8,&local_70,plVar14);
        puVar6 = (undefined8 *)
                 thunk_FUN_01ee7388(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0
                                                                  ) + 0x80) + 0x140);
        plVar8 = (long *)*puVar6;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x40);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == lVar7) {
              lVar7 = lVar10 + (long)*piVar4 * 0x10 + 0x138;
              goto FUN_02aac22c;
            }
            uVar11 = uVar11 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar11 != 0);
        }
        lVar7 = FUN_01ecb238(plVar8,lVar7,0);
FUN_02aac22c:
        lVar7 = *(long *)(lVar7 + 8);
        local_70 = plVar15;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar8,&local_70,plVar15);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = *(long *)(*(long *)(local_80 + 0x20) + 0xc0);
        puVar6 = *(undefined8 **)(lVar7 + 0x70);
        if (-1 < *(int *)(*(long *)(lVar7 + 0x58) + 0x28)) {
          plVar14 = (long *)*plVar14;
        }
        if (-1 < *(int *)(*(long *)(lVar7 + 0x68) + 0x28)) {
          plVar15 = (long *)*plVar15;
        }
        local_70 = plVar14;
        lStack_68 = (long)plVar15;
        local_60 = lVar13;
        (*(code *)puVar6[2])(*puVar6,puVar6,lVar9,&local_70,lVar13);
        FUN_01f08810(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80) +
                              0x20,lVar13,(ulong)uVar1);
        uVar12 = 1;
        FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80)
                     ,1);
        goto LAB_02aac144;
      }
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 8))(local_78);
    FUN_01bc5360(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80) + 0x140,0
                );
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_80 + 0x20) + 0xc0) + 0x10))(local_78);
    FUN_01bc5360(local_78,*(long *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80) + 0x120,0
                );
  }
  else if (*piVar4 == 1) {
    FUN_01bc52e4(local_78,*(undefined8 *)(**(long **)(*(long *)(local_80 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    goto LAB_02aabf20;
  }
  uVar12 = 0;
LAB_02aac144:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


