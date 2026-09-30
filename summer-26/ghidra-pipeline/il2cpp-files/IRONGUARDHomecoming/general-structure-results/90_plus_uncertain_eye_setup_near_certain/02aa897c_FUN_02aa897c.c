/*
FUNCTION_NAME: FUN_02aa897c
ENTRY_POINT: 02aa897c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 FUN_02aa897c(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long local_a0;
  long *plStack_98;
  undefined8 *local_90;
  long local_88;
  undefined8 local_80;
  long *local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if ((DAT_0483104b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483104b = 1;
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar1 = *(uint *)(plVar7[0x15] + 0xfc);
  plVar14 = (long *)((long)&local_a0 - ((ulong)*(uint *)(plVar7[0xf] + 0xfc) + 0xf & 0x1fffffff0));
  plVar15 = (long *)((long)plVar14 - ((ulong)*(uint *)(plVar7[0x11] + 0xfc) + 0xf & 0x1fffffff0));
  plVar16 = (long *)((long)plVar15 - ((ulong)*(uint *)(plVar7[0x13] + 0xfc) + 0xf & 0x1fffffff0));
  lVar13 = (long)plVar16 - ((ulong)uVar1 + 0xf & 0x1fffffff0);
  plStack_98 = &local_88;
  local_90 = &local_80;
  local_a0 = 0;
  piVar4 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar7 + 0x80));
  if (*piVar4 == 0) {
    FUN_01bc52e4(local_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) +
                                                  0x80) + 0x60);
    plVar7 = (long *)*puVar6;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aa8b44;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8b44:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    FUN_01bc5360(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x160,
                 uVar5);
    FUN_01bc52e4(local_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) +
                                                  0x80) + 0xa0);
    plVar7 = (long *)*puVar6;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aa8c1c;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8c1c:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    FUN_01bc5360(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x180,
                 uVar5);
    FUN_01bc52e4(local_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) +
                                                  0x80) + 0xe0);
    plVar7 = (long *)*puVar6;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x50);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aa8cf4;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8cf4:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    FUN_01bc5360(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x1a0,
                 uVar5);
    FUN_01bc52e4(local_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xfffffffb);
LAB_02aa8d3c:
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) +
                                                  0x80) + 0x160);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    plVar7 = (long *)*puVar6;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aa8db4;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02aa8db4:
    uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar11 & 1) != 0) {
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0)
                                                    + 0x80) + 0x180);
      plVar7 = (long *)*puVar6;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar7;
      lVar8 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_02aa8e34;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8e34:
      uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar11 & 1) != 0) {
        puVar6 = (undefined8 *)
                 thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0
                                                                  ) + 0x80) + 0x1a0);
        plVar7 = (long *)*puVar6;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *plVar7;
        lVar8 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_02aa8eb4;
            }
            uVar11 = uVar11 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8eb4:
        uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar11 & 1) != 0) {
          plVar7 = (long *)thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 +
                                                                                      0x20) + 0xc0)
                                                                + 0x80) + 0x120);
          lVar8 = *plVar7;
          puVar6 = (undefined8 *)
                   thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) +
                                                                    0xc0) + 0x80) + 0x160);
          plVar7 = (long *)*puVar6;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x30);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == lVar9) {
                lVar9 = lVar10 + (long)*piVar4 * 0x10 + 0x138;
                goto LAB_02aa9054;
              }
              uVar11 = uVar11 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar11 != 0);
          }
          lVar9 = FUN_01ecb238(plVar7,lVar9,0);
LAB_02aa9054:
          lVar9 = *(long *)(lVar9 + 8);
          local_78 = plVar14;
          (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar7,&local_78,plVar14);
          puVar6 = (undefined8 *)
                   thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) +
                                                                    0xc0) + 0x80) + 0x180);
          plVar7 = (long *)*puVar6;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x48);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == lVar9) {
                lVar9 = lVar10 + (long)*piVar4 * 0x10 + 0x138;
                goto LAB_02aa9100;
              }
              uVar11 = uVar11 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar11 != 0);
          }
          lVar9 = FUN_01ecb238(plVar7,lVar9,0);
LAB_02aa9100:
          lVar9 = *(long *)(lVar9 + 8);
          local_78 = plVar15;
          (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar7,&local_78,plVar15);
          puVar6 = (undefined8 *)
                   thunk_FUN_01ee7388(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) +
                                                                    0xc0) + 0x80) + 0x1a0);
          plVar7 = (long *)*puVar6;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x60);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == lVar9) {
                lVar9 = lVar10 + (long)*piVar4 * 0x10 + 0x138;
                goto LAB_02aa91ac;
              }
              uVar11 = uVar11 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar11 != 0);
          }
          lVar9 = FUN_01ecb238(plVar7,lVar9,0);
LAB_02aa91ac:
          lVar9 = *(long *)(lVar9 + 8);
          local_78 = plVar16;
          (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar7,&local_78,plVar16);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(local_88 + 0x20) + 0xc0);
          puVar6 = *(undefined8 **)(lVar9 + 0xa0);
          if (-1 < *(int *)(*(long *)(lVar9 + 0x78) + 0x28)) {
            plVar14 = (long *)*plVar14;
          }
          if (-1 < *(int *)(*(long *)(lVar9 + 0x88) + 0x28)) {
            plVar15 = (long *)*plVar15;
          }
          if (-1 < *(int *)(*(long *)(lVar9 + 0x98) + 0x28)) {
            plVar16 = (long *)*plVar16;
          }
          local_78 = plVar14;
          lStack_70 = (long)plVar15;
          local_68 = (long)plVar16;
          lStack_60 = lVar13;
          (*(code *)puVar6[2])(*puVar6,puVar6,lVar8,&local_78,lVar13);
          FUN_01f08810(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) +
                                0x20,lVar13,(ulong)uVar1);
          uVar12 = 1;
          FUN_01bc52e4(local_80,*(undefined8 *)
                                 (**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),1);
          goto LAB_02aa9018;
        }
      }
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 8))(local_80);
    FUN_01bc5360(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x1a0,0
                );
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x10))(local_80);
    FUN_01bc5360(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x180,0
                );
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_88 + 0x20) + 0xc0) + 0x18))(local_80);
    FUN_01bc5360(local_80,*(long *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80) + 0x160,0
                );
  }
  else if (*piVar4 == 1) {
    FUN_01bc52e4(local_80,*(undefined8 *)(**(long **)(*(long *)(local_88 + 0x20) + 0xc0) + 0x80),
                 0xfffffffb);
    goto LAB_02aa8d3c;
  }
  uVar12 = 0;
LAB_02aa9018:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


