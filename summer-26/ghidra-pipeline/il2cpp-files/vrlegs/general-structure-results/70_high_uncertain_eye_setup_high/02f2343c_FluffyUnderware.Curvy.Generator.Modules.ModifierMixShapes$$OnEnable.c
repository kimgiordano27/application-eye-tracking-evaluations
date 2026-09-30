/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.Modules.ModifierMixShapes$$OnEnable
ENTRY_POINT: 02f2343c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f23854) */

long * FluffyUnderware_Curvy_Generator_Modules_ModifierMixShapes__OnEnable(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x23;
  char cStack000000000000000c;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x690));
  FUN_01ab69ac(PTR_DAT_03cc13d0);
  *(undefined1 *)(unaff_x19 + 0xa0e) = 1;
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x23;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar9,&stack0x0000000c,0);
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar2);
    lVar2 = *unaff_x23;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    FUN_02733e6c(uVar3,0);
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x23;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    *puVar4 = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar3);
    lVar2 = *unaff_x23;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar2);
    lVar2 = *unaff_x23;
  }
  plVar5 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar6 = (**(code **)(*plVar5 + 0x2e8))();
  if ((uVar6 & 1) != 0) {
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x23;
    }
    plVar5 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x308))();
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar5);
      }
    }
    goto LAB_02f23820;
  }
  if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar5 = (long *)FUN_02f4fb00();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar7 = (long *)(**(code **)(*plVar5 + 0x8d8))
                             (plVar5,*(undefined8 *)PTR_DAT_03cc13d0,0x418,
                              *(undefined8 *)(*plVar5 + 0x8e0));
  uVar6 = FUN_0267c3f8(plVar7,0,0);
  if ((uVar6 & 1) == 0) {
LAB_02f23674:
    lVar2 = (**(code **)(*plVar5 + 0x408))(plVar5,*(undefined8 *)(*plVar5 + 0x410));
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
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = FUN_0278a094(lVar2,**(undefined8 **)(lVar8 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_03cd8520 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_0267bc38(lVar2,0,0);
    if ((uVar6 & 1) == 0) {
      plVar5 = (long *)0x0;
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
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar5 = (long *)FUN_0267bbcc(lVar2,**(undefined8 **)(lVar8 + 0xb8),0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar5);
      }
      uVar6 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if ((uVar6 & 1) == 0) {
        plVar5 = (long *)0x0;
      }
    }
  }
  else {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_0267c294(plVar7,0);
    if ((uVar6 & 1) == 0) goto LAB_02f23674;
    plVar5 = (long *)(**(code **)(*plVar7 + 0x438))(plVar7,0,*(undefined8 *)(*plVar7 + 0x440));
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar5);
      }
    }
  }
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x23;
  }
  plVar7 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar7 + 0x318))();
LAB_02f23820:
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return plVar5;
}


