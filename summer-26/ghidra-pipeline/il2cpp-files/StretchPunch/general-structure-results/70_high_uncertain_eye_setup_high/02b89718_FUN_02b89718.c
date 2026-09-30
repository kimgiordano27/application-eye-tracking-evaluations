/*
FUNCTION_NAME: FUN_02b89718
ENTRY_POINT: 02b89718
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02b89718(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  long *plVar13;
  long lVar14;
  undefined8 *__dest;
  undefined8 *__dest_00;
  long *plVar15;
  void *__s;
  void *local_c0;
  ulong local_b8;
  void *local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_a8 = tpidr_el0;
  local_68 = *(long *)(local_a8 + 0x28);
  uVar11 = (ulong)param_3;
  if ((DAT_044a4ef7 & 1) == 0) {
    FUN_01d7d918(StringLiteral_2806);
    FUN_01d7d918(StringLiteral_887);
    DAT_044a4ef7 = 1;
  }
  lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  local_88 = (ulong)*(uint *)(*(long *)(lVar9 + 0x70) + 0xfc);
  local_90 = (ulong)*(uint *)(*(long *)(lVar9 + 0x78) + 0xfc);
  local_a0 = (ulong)*(uint *)(*(long *)(lVar9 + 0xa8) + 0xfc);
  uVar10 = local_88 + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)&local_c0 - uVar10);
  pvVar12 = (void *)((long)__dest - uVar10);
  uVar10 = local_90 + 0xf & 0x1fffffff0;
  __dest_00 = (undefined8 *)((long)pvVar12 - uVar10);
  local_b0 = (void *)((long)__dest_00 - uVar10);
  __s = (void *)((long)local_b0 - (local_a0 + 0xf & 0x1fffffff0));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc(param_2,0);
  if (uVar2 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc(param_2,0);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x128))(param_1)
  ;
  if ((int)(iVar1 - param_3) < iVar3) {
    FUN_033b2d60(5,0);
  }
  lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01dde7f8(lVar9);
  }
  lVar9 = thunk_FUN_01de26bc(param_2,lVar9);
  if (lVar9 == 0) {
    lVar9 = thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_2806);
    if (lVar9 == 0) {
      local_c0 = pvVar12;
      plVar13 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
      if (plVar13 == (long *)0x0) {
        FUN_033b3618();
      }
      local_98 = (ulong)*(uint *)(param_1 + 0x20);
      if (0 < (int)*(uint *)(param_1 + 0x20)) {
        plVar15 = *(long **)(param_1 + 0x18);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar10 = 0;
        do {
          if (*(uint *)(plVar15 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          piVar4 = (int *)thunk_FUN_01dc553c((long)plVar15 +
                                             uVar10 * *(uint *)(*plVar15 + 0x104) + 0x20,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0)
                                                        + 0x68) + 0x80));
          if (-1 < *piVar4) {
            if (*(uint *)(plVar15 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            pvVar12 = (void *)thunk_FUN_01dc553c((long)plVar15 +
                                                 uVar10 * *(uint *)(*plVar15 + 0x104) + 0x20,
                                                 *(long *)(*(long *)(*(long *)(*(long *)(param_4 +
                                                                                        0x20) + 0xc0
                                                                              ) + 0x68) + 0x80) +
                                                 0x40);
            memcpy(__dest,pvVar12,local_88);
            if (*(uint *)(plVar15 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            pvVar12 = (void *)thunk_FUN_01dc553c((long)plVar15 +
                                                 uVar10 * *(uint *)(*plVar15 + 0x104) + 0x20,
                                                 *(long *)(*(long *)(*(long *)(*(long *)(param_4 +
                                                                                        0x20) + 0xc0
                                                                              ) + 0x68) + 0x80) +
                                                 0x60);
            memcpy(__dest_00,pvVar12,local_90);
            memset(__s,0,local_a0);
            pvVar12 = local_c0;
            lVar14 = *(long *)(param_4 + 0x20);
            lVar9 = *(long *)(lVar14 + 0xc0);
            if (*(int *)(*(long *)(lVar9 + 0x70) + 0x28) < 0) {
              memcpy(local_c0,__dest,local_88);
              lVar9 = *(long *)(lVar14 + 0xc0);
            }
            else {
              pvVar12 = (void *)*__dest;
            }
            pvVar8 = local_b0;
            if (*(int *)(*(long *)(lVar9 + 0x78) + 0x28) < 0) {
              local_b8 = uVar11;
              memcpy(local_b0,__dest_00,local_90);
              lVar9 = *(long *)(lVar14 + 0xc0);
              uVar11 = local_b8;
            }
            else {
              pvVar8 = (void *)*__dest_00;
            }
            FUN_030718bc(__s,pvVar12,pvVar8,*(undefined8 *)(lVar9 + 0x130));
            lVar9 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8),__s);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar9 != 0) &&
               (lVar14 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
              uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar5,0);
            }
            uVar2 = (uint)uVar11;
            if (*(uint *)(plVar13 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar13[(long)(int)uVar2 + 4] = lVar9;
            thunk_FUN_01e10808(plVar13 + (long)(int)uVar2 + 4,lVar9);
            uVar11 = (ulong)(uVar2 + 1);
          }
          uVar10 = uVar10 + 1;
        } while (local_98 != uVar10);
      }
    }
    else if (0 < *(int *)(param_1 + 0x20)) {
      plVar13 = *(long **)(param_1 + 0x18);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      do {
        if (*(uint *)(plVar13 + 3) <= uVar10) goto LAB_02b89cbc;
        piVar4 = (int *)thunk_FUN_01dc553c((long)plVar13 +
                                           uVar10 * *(uint *)(*plVar13 + 0x104) + 0x20,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                      0x68) + 0x80));
        if (-1 < *piVar4) {
          if (*(uint *)(plVar13 + 3) <= uVar10) {
LAB_02b89cbc:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          pvVar12 = (void *)thunk_FUN_01dc553c((long)plVar13 +
                                               uVar10 * *(uint *)(*plVar13 + 0x104) + 0x20,
                                               *(long *)(*(long *)(*(long *)(*(long *)(param_4 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x68) + 0x80) + 0x40);
          memcpy(__dest,pvVar12,local_88);
          uVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),__dest);
          if (*(uint *)(plVar13 + 3) <= uVar10) goto LAB_02b89cbc;
          pvVar12 = (void *)thunk_FUN_01dc553c((long)plVar13 +
                                               uVar10 * *(uint *)(*plVar13 + 0x104) + 0x20,
                                               *(long *)(*(long *)(*(long *)(*(long *)(param_4 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x68) + 0x80) + 0x60);
          memcpy(__dest_00,pvVar12,local_90);
          uVar6 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),__dest_00
                                    );
          local_80 = 0;
          uStack_78 = 0;
          FUN_0336f7b8(&local_80,uVar5,uVar6,0);
          uVar2 = (uint)uVar11;
          if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_02b89cbc;
          lVar14 = lVar9 + (long)(int)uVar2 * 0x10;
          puVar7 = (undefined8 *)(lVar14 + 0x20);
          *(undefined8 *)(lVar14 + 0x28) = uStack_78;
          *puVar7 = local_80;
          thunk_FUN_01e10808(puVar7,0);
          uVar11 = (ulong)(uVar2 + 1);
        }
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)*(int *)(param_1 + 0x20));
    }
  }
  else {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158))
              (param_1,lVar9,uVar11);
  }
  if (*(long *)(local_a8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


