/*
FUNCTION_NAME: FUN_021803c8
ENTRY_POINT: 021803c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02180b38) */

uint FUN_021803c8(long param_1,undefined8 ****param_2,void *param_3,uint param_4,
                 undefined8 ****param_5,long param_6)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 ***pppuVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  undefined8 *__dest;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *__dest_00;
  ulong uVar21;
  undefined8 ***apppuStack_120 [3];
  long local_108;
  uint local_100;
  uint local_fc;
  undefined8 *local_f8;
  void *local_f0;
  ulong local_e8;
  ulong local_e0;
  uint local_d8;
  uint local_d4;
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 ***local_b8;
  long local_b0;
  uint local_a8;
  char local_a4 [4];
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  uint local_8c;
  undefined8 *local_88;
  undefined8 *puStack_80;
  char local_74 [4];
  long local_70;
  
  local_108 = tpidr_el0;
  local_70 = *(long *)(local_108 + 0x28);
  lVar17 = *(long *)(param_6 + 0x20);
  lVar8 = *(long *)(lVar17 + 0xc0);
  lVar10 = *(long *)(lVar8 + 0x60);
  local_c0 = (ulong)*(uint *)(lVar10 + 0xfc);
  uVar21 = (ulong)*(uint *)(*(long *)(lVar8 + 0x88) + 0xfc);
  uVar13 = local_c0 + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)apppuStack_120 - uVar13);
  __dest_00 = (undefined8 *)((long)__dest - uVar13);
  uVar13 = uVar21 + 0xf & 0x1fffffff0;
  puVar20 = (undefined8 *)((long)__dest_00 - uVar13);
  apppuStack_120[1] = (undefined8 ***)((long)puVar20 - uVar13);
  local_a4[0] = '\0';
  plVar16 = *(long **)(param_1 + 0x18);
  ppppuVar1 = param_2;
  if (-1 < *(int *)(lVar10 + 0x28)) {
    ppppuVar1 = &pppuStack_98;
  }
  apppuStack_120[2] = param_5;
  local_100 = param_4;
  local_f0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a0 = param_5;
  pppuStack_98 = param_2;
  memcpy(__dest,ppppuVar1,local_c0);
  if (plVar16 != (long *)0x0) {
    lVar10 = *(long *)(lVar17 + 0xc0);
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
      lVar10 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    puVar18 = __dest;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x60) + 0x28)) {
      puVar18 = (undefined8 *)*__dest;
    }
    lVar10 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          lVar8 = lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138;
          goto LAB_02180518;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    lVar8 = FUN_01a472ec(plVar16,lVar8,1);
LAB_02180518:
    lVar8 = *(long *)(lVar8 + 8);
    local_88 = puVar18;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar16,&local_88,&local_8c);
    local_fc = 0;
    local_a8 = local_8c;
    local_d8 = local_8c & 0x7fffffff;
    local_f8 = puVar20;
    local_d0 = uVar21;
    while( true ) {
      lVar8 = *(long *)(local_b0 + 0x10);
      thunk_FUN_01a4b338();
      if (((lVar8 == 0) || (lVar10 = *(long *)(lVar8 + 0x10), lVar10 == 0)) ||
         (lVar17 = *(long *)(lVar8 + 0x18), lVar17 == 0)) break;
      lVar5 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = *(long *)(lVar8 + 0x18);
      if (lVar5 == 0) break;
      iVar15 = *(int *)(lVar10 + 0x18);
      iVar2 = *(int *)(lVar17 + 0x18);
      iVar4 = 0;
      if (iVar15 != 0) {
        iVar4 = (int)local_d8 / iVar15;
      }
      uVar12 = local_d8 - iVar4 * iVar15;
      iVar15 = 0;
      if (iVar2 != 0) {
        iVar15 = (int)uVar12 / iVar2;
      }
      uVar3 = uVar12 - iVar15 * iVar2;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar13 = (ulong)uVar3;
      local_c8 = *(undefined8 *)(lVar5 + uVar13 * 8 + 0x20);
      local_a4[0] = '\0';
      local_d4 = uVar3;
      FUN_027e0bd8(local_c8,local_a4,0);
      lVar10 = *(long *)(local_b0 + 0x10);
      thunk_FUN_01a4b338();
      if (lVar8 == lVar10) {
        lVar10 = *(long *)(lVar8 + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        local_e0 = uVar13;
        if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        local_e8 = (ulong)uVar12;
        lVar10 = *(long *)(lVar10 + local_e8 * 8 + 0x20);
        lVar17 = 0;
        while (lVar5 = lVar10, lVar5 != 0) {
          puVar6 = (uint *)thunk_FUN_01a59484(lVar5,*(long *)(*(long *)(*(long *)(*(long *)(param_6 
                                                  + 0x20) + 0xc0) + 0xf8) + 0x80) + 0x60);
          if (local_a8 == *puVar6) {
            plVar16 = *(long **)(local_b0 + 0x18);
            pvVar7 = (void *)thunk_FUN_01a59484(lVar5,*(undefined8 *)
                                                       (*(long *)(*(long *)(*(long *)(param_6 + 0x20
                                                                                     ) + 0xc0) +
                                                                 0xf8) + 0x80));
            uVar13 = local_c0;
            memcpy(__dest,pvVar7,local_c0);
            lVar10 = *(long *)(param_6 + 0x20);
            ppppuVar1 = (undefined8 ****)local_b8;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x60) + 0x28)) {
              ppppuVar1 = &pppuStack_98;
            }
            memcpy(__dest_00,ppppuVar1,uVar13);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar9 = *(long *)(lVar10 + 0xc0);
            lVar10 = *(long *)(lVar9 + 0x20);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01a46ff8(lVar10);
              lVar9 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
            }
            puVar20 = __dest;
            puVar18 = __dest_00;
            if (-1 < *(int *)(*(long *)(lVar9 + 0x60) + 0x28)) {
              puVar20 = (undefined8 *)*__dest;
              puVar18 = (undefined8 *)*__dest_00;
            }
            lVar9 = *plVar16;
            uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  lVar10 = lVar9 + (long)*piVar14 * 0x10 + 0x138;
                  goto LAB_0218075c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            lVar10 = FUN_01a472ec(plVar16,lVar10,0);
LAB_0218075c:
            lVar10 = *(long *)(lVar10 + 8);
            local_88 = puVar20;
            puStack_80 = puVar18;
            (**(code **)(lVar10 + 0x10))
                      (*(undefined8 *)(lVar10 + 8),lVar10,plVar16,&local_88,&local_8c);
            if ((char)local_8c != '\0') {
              if ((local_100 & 1) != 0) {
                plVar16 = (long *)FUN_01f2d824(*(undefined8 *)
                                                (*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x108
                                                ));
                uVar13 = local_d0;
                lVar10 = *(long *)(param_6 + 0x20);
                ppppuVar1 = (undefined8 ****)apppuStack_120[2];
                if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x88) + 0x28)) {
                  ppppuVar1 = &local_a0;
                }
                memcpy(local_f8,ppppuVar1,local_d0);
                pvVar7 = (void *)thunk_FUN_01a59484(lVar5,*(long *)(*(long *)(*(long *)(lVar10 + 
                                                  0xc0) + 0xf8) + 0x80) + 0x20);
                pppuVar11 = apppuStack_120[1];
                memcpy(apppuStack_120[1],pvVar7,uVar13);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                local_88 = local_f8;
                if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x88) +
                                 0x28)) {
                  local_88 = (undefined8 *)*local_f8;
                  pppuVar11 = (undefined8 ***)*pppuVar11;
                }
                lVar10 = *(long *)(*plVar16 + 0x1c0);
                puStack_80 = pppuVar11;
                (**(code **)(lVar10 + 0x10))
                          (*(undefined8 *)(lVar10 + 8),lVar10,plVar16,&local_88,local_74);
                uVar13 = local_d0;
                if (local_74[0] == '\0') {
                  memset(local_f0,0,local_d0);
                  local_fc = 0;
                  iVar15 = 8;
                  goto LAB_021809d4;
                }
              }
              if (lVar17 == 0) {
                lVar10 = *(long *)(lVar8 + 0x10);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                puVar20 = (undefined8 *)
                          thunk_FUN_01a59484(lVar5,*(long *)(*(long *)(*(long *)(*(long *)(param_6 +
                                                                                          0x20) +
                                                                                0xc0) + 0xf8) + 0x80
                                                            ) + 0x40);
                uVar19 = *puVar20;
                thunk_FUN_01a4b338();
                if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                FUN_02006a80(lVar10 + local_e8 * 8 + 0x20,uVar19,
                             *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x130));
              }
              else {
                puVar20 = (undefined8 *)
                          thunk_FUN_01a59484(lVar5,*(long *)(*(long *)(*(long *)(*(long *)(param_6 +
                                                                                          0x20) +
                                                                                0xc0) + 0xf8) + 0x80
                                                            ) + 0x40);
                uVar19 = *puVar20;
                thunk_FUN_01a4b338();
                thunk_FUN_01a4b338();
                FUN_018820a8(lVar17,*(long *)(*(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0)
                                                       + 0xf8) + 0x80) + 0x40,uVar19);
              }
              uVar13 = local_d0;
              puVar20 = local_f8;
              pvVar7 = (void *)thunk_FUN_01a59484(lVar5,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  param_6 + 0x20) + 0xc0) + 0xf8) + 0x80) + 0x20);
              memcpy(puVar20,pvVar7,uVar13);
              memcpy(local_f0,puVar20,uVar13);
              lVar10 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x88);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01a46ff8();
              }
              FUN_01ab6954(lVar10,local_f0,puVar20);
              lVar8 = *(long *)(lVar8 + 0x20);
              thunk_FUN_01a4b338();
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar8 + 0x18) <= local_d4) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              local_fc = 1;
              lVar8 = lVar8 + local_e0 * 4;
              iVar15 = 8;
              *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + -1;
              goto LAB_021809d4;
            }
          }
          plVar16 = (long *)thunk_FUN_01a59484(lVar5,*(long *)(*(long *)(*(long *)(*(long *)(param_6
                                                                                            + 0x20)
                                                                                  + 0xc0) + 0xf8) +
                                                              0x80) + 0x40);
          lVar10 = *plVar16;
          thunk_FUN_01a4b338();
          lVar17 = lVar5;
        }
        iVar15 = 0xb;
        uVar13 = local_d0;
      }
      else {
        iVar15 = 2;
        uVar13 = local_d0;
      }
LAB_021809d4:
      if (local_a4[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(local_c8,0);
      }
      if (iVar15 != 2) {
        if ((iVar15 == 0xb) || (uVar12 = local_fc, iVar15 == 0)) {
          memset(local_f0,0,uVar13);
          uVar12 = 0;
        }
        if (*(long *)(local_108 + 0x28) == local_70) {
          return uVar12 & 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


