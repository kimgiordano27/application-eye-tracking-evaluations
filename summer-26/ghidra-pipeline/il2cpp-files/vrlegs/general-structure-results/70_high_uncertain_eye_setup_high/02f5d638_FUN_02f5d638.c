/*
FUNCTION_NAME: FUN_02f5d638
ENTRY_POINT: 02f5d638
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f5dafc) */
/* WARNING: Removing unreachable block (ram,0x02f5daf4) */

void FUN_02f5d638(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  char local_34 [4];
  
  if ((DAT_0412abf4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03d245d8);
    FUN_01ab69ac(PTR_DAT_03d245e0);
    FUN_01ab69ac(PTR_DAT_03d245d0);
    FUN_01ab69ac(PTR_DAT_03d245e8);
    FUN_01ab69ac(PTR_DAT_03d245f0);
                    /* try { // try from 02f5d6a4 to 0305d6cb has its CatchHandler @ 02f5dad8 */
    FUN_01ab69ac(PTR_DAT_03d0c430);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cc1608);
    FUN_01ab69ac(PTR_DAT_03cc1c00);
    FUN_01ab69ac(PTR_DAT_03cc1c08);
    DAT_0412abf4 = 1;
  }
  puVar2 = PTR_DAT_03d245d0;
  if (param_2 != (long *)0x0) {
                    /* try { // try from 02f5d700 to 0305d72b has its CatchHandler @ 02f5dad4 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d0c430 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_03d0c430) {
      param_2 = (long *)0x0;
    }
  }
  local_34[0] = '\0';
  FUN_027e0bd8(param_1,local_34,0);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar8);
    lVar8 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x10) == 0) {
                    /* try { // try from 02f5d770 to 0305d7a3 has its CatchHandler @ 02f5dad0 */
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    FUN_02733e6c(uVar3,0);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar2;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
    *puVar4 = uVar3;
                    /* try { // try from 02f5d7a4 to 0305d8c3 has its CatchHandler @ 02f5d2ac */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar3);
    lVar8 = *(long *)puVar2;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar8);
    lVar8 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar8 + 0xb8) + 8) == 0) {
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
    FUN_027d737c(uVar3,param_1,*(undefined8 *)PTR_DAT_03d245e0,0);
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
    FUN_027e22f4(uVar7,uVar3,0);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar2;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
    *puVar4 = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar7);
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e3114(lVar8,1,0);
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e2600(lVar8,0);
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar2;
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar3,local_34,0);
                    /* try { // try from 02f5d8c4 to 0305d8eb has its CatchHandler @ 02f5dac8 */
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar2;
  }
  plVar5 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x308))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x310));
  lVar8 = *(long *)PTR_DAT_03d245d8;
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)thunk_FUN_01a89e68(lVar8);
    FUN_02f5d4f4();
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d245f0);
    FUN_0219a4f0(lVar8,*(undefined8 *)PTR_DAT_03d245e8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar5[8] = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 8,lVar8);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar2;
    }
    plVar6 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar6 + 0x318))(plVar6,param_2,plVar5,*(undefined8 *)(*plVar6 + 800));
  }
  else if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
          (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
  {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(plVar5);
  }
  plVar5[2] = (long)param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 2,param_2);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar8 = FUN_02f5fe68(param_2,0);
  plVar6 = plVar5 + 3;
  *plVar6 = lVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6);
  lVar8 = FUN_02f5fdd0(param_2,0);
  if (lVar8 != 0) {
    bVar1 = *(byte *)(lVar8 + 0x19);
    *(byte *)((long)plVar5 + 0x2a) = bVar1 ^ 1;
    if (bVar1 == 0) {
      lVar8 = *plVar6;
      uVar7 = FUN_02f5fd68(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar8 = FUN_026e58e8(lVar8,uVar7,0);
      plVar5[4] = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      lVar8 = FUN_02f5fd68(param_2,0);
      plVar5[4] = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    puVar2 = PTR_DAT_03cbeeb0;
    *(char *)(plVar5 + 5) = (char)param_2[7];
    *(undefined1 *)((long)plVar5 + 0x29) = 1;
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar2;
    }
    plVar5[6] = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
    FUN_02f5dc14(param_1,plVar5,0);
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


