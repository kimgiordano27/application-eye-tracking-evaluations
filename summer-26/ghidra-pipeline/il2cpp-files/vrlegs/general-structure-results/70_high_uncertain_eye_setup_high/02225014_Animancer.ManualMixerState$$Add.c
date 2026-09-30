/*
FUNCTION_NAME: Animancer.ManualMixerState$$Add
ENTRY_POINT: 02225014
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

void Animancer_ManualMixerState__Add
               (long param_1,long *param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong __n;
  void *__src;
  undefined8 *puVar13;
  void *__dest;
  void *__s;
  long unaff_x29;
  undefined8 auStack_30 [6];
  
  *(undefined4 *)(unaff_x29 + -0x18) = param_4;
  lVar8 = tpidr_el0;
  *(long *)(unaff_x29 + -0x20) = lVar8;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar8 + 0x28);
  puVar2 = PTR_DAT_03cbfd60;
  if ((DAT_04122273 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(PTR_DAT_03cbfd60);
    DAT_04122273 = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10) + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)auStack_30 - uVar11);
  puVar13 = (undefined8 *)((long)__src - uVar11);
  __dest = (void *)((long)puVar13 - uVar11);
  __s = (void *)((long)__dest - uVar11);
  memset(__s,0,__n);
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_027b3d9c(uVar4,0);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x10),uVar4);
  FUN_034f1dd8(param_1,0);
  iVar1 = *(int *)(unaff_x29 + -0x18);
  if (iVar1 < 1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar4 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cdbe28);
    FUN_026b274c(uVar4,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,param_5);
  }
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0x20) = iVar1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x18),param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(unaff_x29 + -0x14) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
  FUN_027e0bd8(uVar4,unaff_x29 + -0x14,0);
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
    }
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_022251cc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(param_2,lVar8,0);
LAB_022251cc:
    uVar3 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  puVar2 = PTR_DAT_03cbdee0;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_0276c0cc(uVar3,*(undefined4 *)(unaff_x29 + -0x18),0);
  lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01a46ff8();
  }
  uVar4 = FUN_01ab6a94(lVar8,uVar3);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (param_2 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
    *(undefined4 *)(param_1 + 0x30) = 0;
    lVar8 = *(long *)(lVar8 + 0x50);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
    }
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_022252b0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(param_2,lVar8,0);
LAB_022252b0:
    plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
    puVar2 = PTR_DAT_03cbed20;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar8 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02225318;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar2,0);
LAB_02225318:
      uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar11 & 1) == 0) goto LAB_02225410;
      lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8(lVar8);
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            lVar8 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
            goto Animancer_ManualMixerState__set_UpdatableIndex;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      lVar8 = FUN_01a472ec(plVar6,lVar8,0);
Animancer_ManualMixerState__set_UpdatableIndex:
      *(void **)(unaff_x29 + -0x10) = __src;
      lVar8 = *(long *)(lVar8 + 8);
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar6,unaff_x29 + -0x10,__src);
      memcpy(__s,__src,__n);
      memcpy(puVar13,__s,__n);
      lVar10 = *(long *)(param_5 + 0x20);
      lVar8 = *(long *)(lVar10 + 0xc0);
      if (*(int *)(*(long *)(lVar8 + 0x10) + 0x28) < 0) {
        memcpy(__dest,puVar13,__n);
        lVar8 = *(long *)(lVar10 + 0xc0);
        pvVar9 = __dest;
      }
      else {
        pvVar9 = (void *)*puVar13;
      }
      FUN_02225650(param_1,pvVar9,*(undefined8 *)(lVar8 + 0x70));
    } while( true );
  }
  goto LAB_0222547c;
LAB_02225410:
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar13 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0222546c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_0222546c:
    (*(code *)*puVar13)(plVar6,puVar13[1]);
  }
LAB_0222547c:
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x28),0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


