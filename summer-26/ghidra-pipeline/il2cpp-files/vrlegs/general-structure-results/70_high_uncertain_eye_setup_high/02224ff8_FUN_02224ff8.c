/*
FUNCTION_NAME: FUN_02224ff8
ENTRY_POINT: 02224ff8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02225508) */
/* WARNING: Removing unreachable block (ram,0x02225518) */

void FUN_02224ff8(long param_1,long *param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong __n;
  void *__src;
  undefined8 *puVar12;
  void *__dest;
  void *__s;
  long alStack_90 [3];
  int local_78;
  char local_74 [4];
  void *local_70;
  long local_68;
  
  puVar1 = PTR_DAT_03cbfd60;
  alStack_90[2] = tpidr_el0;
  local_68 = *(long *)(alStack_90[2] + 0x28);
  local_78 = param_4;
  if ((DAT_04122273 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(PTR_DAT_03cbfd60);
    DAT_04122273 = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)alStack_90 - uVar10);
  puVar12 = (undefined8 *)((long)__src - uVar10);
  __dest = (void *)((long)puVar12 - uVar10);
  __s = (void *)((long)__dest - uVar10);
  memset(__s,0,__n);
  uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(uVar3,0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x10),uVar3);
  FUN_034f1dd8(param_1,0);
  if (local_78 < 1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar3 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cdbe28);
    FUN_026b274c(uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,param_5);
  }
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0x20) = local_78;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x18),param_3);
  alStack_90[1] = *(undefined8 *)(param_1 + 0x10);
  local_74[0] = '\0';
  FUN_027e0bd8(alStack_90[1],local_74,0);
  if (param_2 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8(lVar7);
    }
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_022251cc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(param_2,lVar7,0);
LAB_022251cc:
    uVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  puVar1 = PTR_DAT_03cbdee0;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_0276c0cc(uVar2,local_78,0);
  lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01a46ff8();
  }
  uVar3 = FUN_01ab6a94(lVar7,uVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (param_2 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
    *(undefined4 *)(param_1 + 0x30) = 0;
    lVar7 = *(long *)(lVar7 + 0x50);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8(lVar7);
    }
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_022252b0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(param_2,lVar7,0);
LAB_022252b0:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    puVar1 = PTR_DAT_03cbed20;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar7 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02225318;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar1,0);
LAB_02225318:
      uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar10 & 1) == 0) goto LAB_02225410;
      lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8(lVar7);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            lVar7 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto Animancer_ManualMixerState__set_UpdatableIndex;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01a472ec(plVar5,lVar7,0);
Animancer_ManualMixerState__set_UpdatableIndex:
      lVar7 = *(long *)(lVar7 + 8);
      local_70 = __src;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar5,&local_70,__src);
      memcpy(__s,__src,__n);
      memcpy(puVar12,__s,__n);
      lVar9 = *(long *)(param_5 + 0x20);
      lVar7 = *(long *)(lVar9 + 0xc0);
      if (*(int *)(*(long *)(lVar7 + 0x10) + 0x28) < 0) {
        memcpy(__dest,puVar12,__n);
        lVar7 = *(long *)(lVar9 + 0xc0);
        pvVar8 = __dest;
      }
      else {
        pvVar8 = (void *)*puVar12;
      }
      FUN_02225650(param_1,pvVar8,*(undefined8 *)(lVar7 + 0x70));
    } while( true );
  }
  goto LAB_0222547c;
LAB_02225410:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar12 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0222546c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03cbed08,0);
LAB_0222546c:
    (*(code *)*puVar12)(plVar5,puVar12[1]);
  }
LAB_0222547c:
  if (local_74[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(alStack_90[1],0);
  }
  if (*(long *)(alStack_90[2] + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


