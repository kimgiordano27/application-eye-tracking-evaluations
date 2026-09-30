/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.Modules.ModifierMixShapes$$OnSlotDataRequest
ENTRY_POINT: 02f234a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f23854) */

long * FluffyUnderware_Curvy_Generator_Modules_ModifierMixShapes__OnSlotDataRequest(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long in_x9;
  long lVar9;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  if (in_x9 == 0) {
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    FUN_02733e6c(uVar2,0);
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *unaff_x23;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    *puVar4 = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar2);
    param_1 = *unaff_x23;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(param_1);
    param_1 = *unaff_x23;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0xb8) + 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar6 = (**(code **)(*plVar5 + 0x2e8))();
  if ((uVar6 & 1) != 0) {
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *unaff_x23;
    }
    plVar5 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
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
    lVar3 = (**(code **)(*plVar5 + 0x408))(plVar5,*(undefined8 *)(*plVar5 + 0x410));
    lVar9 = *(long *)PTR_DAT_03cc9d50;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_01a47054(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8();
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = FUN_0278a094(lVar3,**(undefined8 **)(lVar8 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_03cd8520 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_0267bc38(lVar3,0,0);
    if ((uVar6 & 1) == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_03cbec30;
      lVar8 = *(long *)(lVar9 + 0x38);
      if (lVar8 == 0) {
        FUN_01a47054(lVar9);
        lVar8 = *(long *)(lVar9 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar5 = (long *)FUN_0267bbcc(lVar3,**(undefined8 **)(lVar8 + 0xb8),0);
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
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *unaff_x23;
  }
  plVar7 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar7 + 0x318))();
LAB_02f23820:
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return plVar5;
}


