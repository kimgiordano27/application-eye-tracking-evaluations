/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.Modules.ModifierMixShapes$$Reset
ENTRY_POINT: 02f2346c
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

long * FluffyUnderware_Curvy_Generator_Modules_ModifierMixShapes__Reset(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x23;
  char cStack000000000000000c;
  
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x10);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar9,&stack0x0000000c,0);
  lVar7 = *unaff_x23;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar7);
    lVar7 = *unaff_x23;
  }
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) == 0) {
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    FUN_02733e6c(uVar2,0);
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *unaff_x23;
    }
    puVar3 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    *puVar3 = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,uVar2);
    lVar7 = *unaff_x23;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar7);
    lVar7 = *unaff_x23;
  }
  plVar4 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = (**(code **)(*plVar4 + 0x2e8))();
  if ((uVar5 & 1) != 0) {
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *unaff_x23;
    }
    plVar4 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x308))();
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar4);
      }
    }
    goto LAB_02f23820;
  }
  if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar4 = (long *)FUN_02f4fb00();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar6 = (long *)(**(code **)(*plVar4 + 0x8d8))
                             (plVar4,*(undefined8 *)PTR_DAT_03cc13d0,0x418,
                              *(undefined8 *)(*plVar4 + 0x8e0));
  uVar5 = FUN_0267c3f8(plVar6,0,0);
  if ((uVar5 & 1) == 0) {
LAB_02f23674:
    lVar7 = (**(code **)(*plVar4 + 0x408))(plVar4,*(undefined8 *)(*plVar4 + 0x410));
    lVar10 = *(long *)PTR_DAT_03cc9d50;
    lVar8 = *(long *)(lVar10 + 0x38);
    if (lVar8 == 0) {
      FUN_01a47054(lVar10);
      lVar8 = *(long *)(lVar10 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = FUN_0278a094(lVar7,**(undefined8 **)(lVar8 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_03cd8520 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_0267bc38(lVar7,0,0);
    if ((uVar5 & 1) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      lVar10 = *(long *)PTR_DAT_03cbec30;
      lVar8 = *(long *)(lVar10 + 0x38);
      if (lVar8 == 0) {
        FUN_01a47054(lVar10);
        lVar8 = *(long *)(lVar10 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar4 = (long *)FUN_0267bbcc(lVar7,**(undefined8 **)(lVar8 + 0xb8),0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar4);
      }
      uVar5 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
      if ((uVar5 & 1) == 0) {
        plVar4 = (long *)0x0;
      }
    }
  }
  else {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_0267c294(plVar6,0);
    if ((uVar5 & 1) == 0) goto LAB_02f23674;
    plVar4 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,0,*(undefined8 *)(*plVar6 + 0x440));
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar4);
      }
    }
  }
  lVar7 = *unaff_x23;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *unaff_x23;
  }
  plVar6 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar6 + 0x318))();
LAB_02f23820:
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return plVar4;
}


