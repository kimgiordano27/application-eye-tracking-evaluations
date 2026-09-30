/*
FUNCTION_NAME: FUN_03640294
ENTRY_POINT: 03640294
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03640aa0) */
/* WARNING: Removing unreachable block (ram,0x03640aa4) */
/* WARNING: Removing unreachable block (ram,0x036406a8) */
/* WARNING: Removing unreachable block (ram,0x03640ac4) */
/* WARNING: Removing unreachable block (ram,0x03640ab8) */

void FUN_03640294(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong __n;
  void *__s;
  undefined8 uStack_150;
  uint local_144;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a0;
  undefined1 *puStack_98;
  long local_90;
  undefined1 *puStack_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined8 *local_78;
  long local_70;
  
  puVar2 = PTR_DAT_065dec50;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_140 = param_1;
  if ((DAT_06a6984d & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec58);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc7d0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec60);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec50);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec68);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dec88);
    DAT_06a6984d = 1;
  }
  puVar3 = PTR_DAT_065dec60;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  puVar9 = (undefined8 *)((long)&uStack_150 - uVar12);
  __s = (void *)((long)puVar9 - uVar12);
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  memset(__s,0,__n);
  FUN_0335dba0(&local_a0,param_3,*(undefined8 *)puVar2);
  local_b0 = local_90;
  uStack_b8 = puStack_98;
  local_c0 = local_a0;
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  puVar2 = PTR_DAT_065dc7d0;
  lVar6 = thunk_FUN_02cea894();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28))();
  iVar5 = FUN_0410c03c(&local_c0,*(undefined8 *)puVar3);
  if (iVar5 == 1) {
    plVar7 = (long *)FUN_0410bfd8(&local_c0,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065dec68) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto 
            System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065dec68,0);
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_065dec70;
      puVar2 = PTR_DAT_065c8d08;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03640520;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_03640520:
        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_0364069c;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_03640674;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0364065c;
        }
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0364057c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_0364057c:
        (*(code *)*puVar8)(&local_a0,plVar7,puVar8[1]);
        uStack_d8 = puStack_98;
        local_e0 = local_a0;
        local_d0 = local_90;
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30))
                  (&local_a0,&local_e0);
        uStack_f8 = puStack_98;
        local_100 = local_a0;
        local_f0 = local_90;
        puVar8 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
        local_78 = puVar9;
        (*(code *)puVar8[2])(*puVar8,puVar8,&local_100,&local_78,puVar9);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
        local_78 = puVar9;
        if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
          local_78 = (undefined8 *)*puVar9;
        }
        puVar8 = *(undefined8 **)(lVar11 + 0x50);
        (*(code *)puVar8[2])(*puVar8,puVar8,lVar6,&local_78);
      } while( true );
    }
    goto LAB_03640ab0;
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    plVar7 = (long *)FUN_0410bfd8(&local_c0,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065dec68) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0364081c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065dec68,0);
LAB_0364081c:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_065dec70;
      puVar2 = PTR_DAT_065c8d08;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      local_144 = 0;
      do {
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03640890;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_03640890:
        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03640a88;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_03640a60;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_03640a48;
        }
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_036408ec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_036408ec:
        (*(code *)*puVar8)(&local_a0,plVar7,puVar8[1]);
        uStack_118 = puStack_98;
        local_120 = local_a0;
        local_110 = local_90;
        iVar5 = FUN_05b065a0(&local_120,0);
        if (iVar5 == 1) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30))
                    (&local_a0,&local_120);
          uStack_f8 = puStack_98;
          local_100 = local_a0;
          local_f0 = local_90;
          puVar8 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
          local_78 = puVar9;
          (*(code *)puVar8[2])(*puVar8,puVar8,&local_100,&local_78,puVar9);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
          local_78 = puVar9;
          if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
            local_78 = (undefined8 *)*puVar9;
          }
          puVar8 = *(undefined8 **)(lVar11 + 0x50);
          (*(code *)puVar8[2])(*puVar8,puVar8,lVar6,&local_78);
          local_144 = 1;
        }
        else {
          memset(__s,0,__n);
          memcpy(puVar9,__s,__n);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
          local_78 = puVar9;
          if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
            local_78 = (undefined8 *)*puVar9;
          }
          puVar8 = *(undefined8 **)(lVar11 + 0x50);
          (*(code *)puVar8[2])(*puVar8,puVar8,lVar6,&local_78);
        }
      } while( true );
    }
    goto LAB_03640ab0;
  }
  bVar4 = false;
  goto LAB_036406c0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0364065c:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03640690;
    }
  }
LAB_03640674:
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_03640690:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
LAB_0364069c:
  local_90 = 0;
  goto LAB_03640780;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03640a48:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03640a7c;
    }
  }
LAB_03640a60:
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_03640a7c:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
LAB_03640a88:
  bVar4 = (local_144 & 0xff) != 0;
LAB_036406c0:
  puVar9 = (undefined8 *)PTR_DAT_065dec88;
  puVar3 = PTR_DAT_065dec80;
  puVar2 = PTR_DAT_065dec78;
  uVar10 = FUN_0410be30(&local_c0,*(undefined8 *)PTR_DAT_065dec58);
  local_90 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  if (!bVar4) {
    puVar9 = (undefined8 *)puVar3;
  }
  if (!bVar4) {
    lVar6 = 0;
  }
  FUN_05af3a9c(local_90,*puVar9,uVar10,0);
LAB_03640780:
  if (*(long *)(param_2 + 0x20) != 0) {
    local_7c[0] = local_90 == 0;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
    local_80[0] = *(undefined1 *)(param_2 + 0x18);
    puStack_98 = local_7c;
    puStack_88 = local_80;
    local_a0 = lVar6;
    (*(code *)puVar9[2])(*puVar9,puVar9,*(long *)(param_2 + 0x20),&local_a0,&local_138);
    local_140[2] = local_128;
    local_140[1] = uStack_130;
    *local_140 = local_138;
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_03640ab0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


