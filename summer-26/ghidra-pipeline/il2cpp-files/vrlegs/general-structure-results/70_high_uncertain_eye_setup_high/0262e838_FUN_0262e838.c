/*
FUNCTION_NAME: FUN_0262e838
ENTRY_POINT: 0262e838
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262ec78) */

long * FUN_0262e838(long *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  char local_5c [4];
  long local_58;
  
  if ((DAT_04123fdb & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf2760);
    FUN_01ab69ac(PTR_DAT_03cf2768);
    FUN_01ab69ac(PTR_DAT_03cf2250);
    FUN_01ab69ac(PTR_DAT_03cf21b0);
    FUN_01ab69ac(PTR_DAT_03cf2740);
    FUN_01ab69ac(PTR_DAT_03cf22a8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_04123fdb = 1;
  }
  local_58 = 0;
  local_5c[0] = '\0';
  if (param_1 == (long *)0x0) {
LAB_0262ec74:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar5 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    plVar6 = (long *)(**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if (plVar6 == (long *)0x0) goto LAB_0262ec74;
    lVar5 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cf2250) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0262e958;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cf2250,0);
LAB_0262e958:
    uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  puVar2 = PTR_DAT_03cf22a8;
  uVar9 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  plVar6 = (long *)FUN_0262e3b8(uVar9,uVar8,&local_58);
  if (local_58 == 0) {
    local_58 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar2;
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  local_5c[0] = '\0';
  FUN_027e0bd8(uVar9,local_5c,0);
  *param_3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,0);
  uVar8 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_0262e6cc(uVar8);
  plVar10 = (long *)**(long **)(*(long *)puVar2 + 0xb8);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar10 = (long *)(**(code **)(*plVar10 + 0x308))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x310))
  ;
  puVar3 = PTR_DAT_03cf2760;
  lVar5 = *(long *)PTR_DAT_03cf2760;
  if (plVar10 != (long *)0x0) {
    if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
      lVar5 = FUN_02620e2c(plVar10);
      *param_3 = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3);
      if (*param_3 != 0) goto LAB_0262ebe8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0262ed40(plVar10);
      lVar5 = *(long *)puVar3;
    }
  }
  lVar4 = local_58;
  plVar10 = (long *)thunk_FUN_01a89e68(lVar5);
  FUN_02620cf8(plVar10,lVar4,param_1);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar10[3] = (long)plVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 3,plVar6);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar2;
  }
  plVar11 = (long *)**(long **)(lVar5 + 0xb8);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar11 + 0x318))(plVar11,uVar8,plVar10,*(undefined8 *)(*plVar11 + 800));
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar12 = FUN_02787b20(param_2,0,0);
  if ((uVar12 & 1) == 0) goto LAB_0262ebe8;
  plVar11 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf2740);
  FUN_0262ef40(plVar11,param_2,plVar10);
  if (plVar6 == (long *)0x0) {
LAB_0262eb80:
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cf2768 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cf2768))
    goto LAB_0262eb80;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(int *)(plVar11 + 5) = (int)plVar6[2];
  }
  lVar5 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
  *param_3 = lVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3);
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    lVar5 = *(long *)PTR_DAT_03cf21b0;
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(param_3,lVar5);
    }
  }
  FUN_02620eb4(plVar10);
LAB_0262ebe8:
  if (local_5c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return plVar10;
}


