/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrp_SetSystemVSyncCount
ENTRY_POINT: 01f96b34
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_2_0__ovrp_SetSystemVSyncCount(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0x2e0));
  *(undefined1 *)(unaff_x20 + 0xeff) = 1;
  puVar1 = PTR_DAT_027b32e0;
  if (unaff_x21 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar4 = thunk_FUN_0124bba8();
    uVar8 = thunk_FUN_01279b34(PTR_DAT_027b3fe8);
    FUN_01e75914(uVar4,uVar8,0);
    uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1c70);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar4,uVar8);
  }
  if (unaff_x19 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(unaff_x19 + 0x18);
  }
  uVar6 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar6 < 1) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    uVar10 = 0;
    do {
      if (uVar6 <= uVar10) goto LAB_01f96cf8;
      plVar11 = (long *)(unaff_x21 + (long)(int)uVar10 * 8 + 0x20);
      plVar2 = (long *)*plVar11;
      if (plVar2 == (long *)0x0) {
LAB_01f96cf4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (0 < (int)uVar9) {
        if (lVar3 == 0) goto LAB_01f96cf4;
        uVar6 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_01f96cf8;
          plVar2 = *(long **)(lVar3 + (long)(int)uVar6 * 8 + 0x20);
          if ((plVar2 == (long *)0x0) ||
             (uVar4 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0)),
             unaff_x19 == 0)) goto LAB_01f96cf4;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_01f96cf8;
          uVar8 = *(undefined8 *)(unaff_x19 + (long)(int)uVar6 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar5 = FUN_01f801dc(uVar4,uVar8,0);
          if ((uVar5 & 1) != 0) goto LAB_01f96cb8;
          uVar6 = uVar6 + 1;
        } while (uVar9 != uVar6);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01f801dc(in_stack_00000008,0,0);
      if ((uVar5 & 1) == 0) {
LAB_01f96c94:
        uVar5 = FUN_01ee5550(lVar7,0,0);
        if ((uVar5 & 1) != 0) {
          uVar4 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar8 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar8,uVar4,0);
          uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1c70);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar8,uVar4);
        }
        if (*(uint *)(unaff_x21 + 0x18) <= uVar10) {
LAB_01f96cf8:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        lVar7 = *plVar11;
      }
      else {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_01f96cf8;
        plVar2 = (long *)*plVar11;
        if (plVar2 == (long *)0x0) goto LAB_01f96cf4;
        uVar4 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)puVar1);
        }
        uVar5 = FUN_01f801dc(in_stack_00000008,uVar4,0);
        if ((uVar5 & 1) == 0) goto LAB_01f96c94;
      }
LAB_01f96cb8:
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar6);
  }
  return lVar7;
}


