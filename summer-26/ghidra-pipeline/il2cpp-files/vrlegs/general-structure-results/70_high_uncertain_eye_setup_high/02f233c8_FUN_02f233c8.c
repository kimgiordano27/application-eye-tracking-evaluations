/*
FUNCTION_NAME: FUN_02f233c8
ENTRY_POINT: 02f233c8
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


/* WARNING: Removing unreachable block (ram,0x02f23854) */

long * FUN_02f233c8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  char local_34 [4];
  
  puVar2 = PTR_DAT_03d00008;
  if ((DAT_0412aa0e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbec30);
    FUN_01ab69ac(PTR_DAT_03cc9d50);
    FUN_01ab69ac(PTR_DAT_03d00008);
    FUN_01ab69ac(PTR_DAT_03d22a90);
    FUN_01ab69ac(PTR_DAT_03cd8520);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cfe690);
    FUN_01ab69ac(PTR_DAT_03cc13d0);
    DAT_0412aa0e = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar10,local_34,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar3);
    lVar3 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    FUN_02733e6c(uVar4,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    *puVar5 = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar4);
    lVar3 = *(long *)puVar2;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar3);
    lVar3 = *(long *)puVar2;
  }
  plVar6 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x2e8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x2f0));
  if ((uVar7 & 1) != 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    plVar6 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x310))
    ;
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar6);
      }
    }
    goto LAB_02f23820;
  }
  if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar6 = (long *)FUN_02f4fb00(param_2,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar8 = (long *)(**(code **)(*plVar6 + 0x8d8))
                             (plVar6,*(undefined8 *)PTR_DAT_03cc13d0,0x418,
                              *(undefined8 *)(*plVar6 + 0x8e0));
  uVar7 = FUN_0267c3f8(plVar8,0,0);
  if ((uVar7 & 1) == 0) {
LAB_02f23674:
    lVar3 = (**(code **)(*plVar6 + 0x408))(plVar6,*(undefined8 *)(*plVar6 + 0x410));
    lVar11 = *(long *)PTR_DAT_03cc9d50;
    lVar9 = *(long *)(lVar11 + 0x38);
    if (lVar9 == 0) {
      FUN_01a47054(lVar11);
      lVar9 = *(long *)(lVar11 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8();
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = FUN_0278a094(lVar3,**(undefined8 **)(lVar9 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_03cd8520 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_0267bc38(lVar3,0,0);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      lVar11 = *(long *)PTR_DAT_03cbec30;
      lVar9 = *(long *)(lVar11 + 0x38);
      if (lVar9 == 0) {
        FUN_01a47054(lVar11);
        lVar9 = *(long *)(lVar11 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar6 = (long *)FUN_0267bbcc(lVar3,**(undefined8 **)(lVar9 + 0xb8),0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar6);
      }
      uVar7 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      if ((uVar7 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
    }
  }
  else {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar7 = FUN_0267c294(plVar8,0);
    if ((uVar7 & 1) == 0) goto LAB_02f23674;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x438))(plVar8,0,*(undefined8 *)(*plVar8 + 0x440));
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar6);
      }
    }
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  plVar8 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar8 + 0x318))(plVar8,param_2,plVar6,*(undefined8 *)(*plVar8 + 800));
LAB_02f23820:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
  }
  return plVar6;
}


