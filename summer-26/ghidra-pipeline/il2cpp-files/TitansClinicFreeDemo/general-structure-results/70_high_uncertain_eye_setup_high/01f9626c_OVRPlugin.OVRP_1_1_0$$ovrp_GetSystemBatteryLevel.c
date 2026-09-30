/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryLevel
ENTRY_POINT: 01f9626c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryLevel(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar9;
  undefined **unaff_x27;
  long *plVar10;
  undefined8 unaff_x29;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  do {
    plVar10 = (long *)unaff_x27[0x5c];
LAB_01f96270:
    do {
      unaff_x25 = unaff_x25 + 1;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x25) {
        if (((uStack0000000000000000 ^ uStack0000000000000004) & 1) != 0) {
          uVar7 = 1;
          if ((uStack0000000000000004 & 1) == 0) {
            uVar7 = 2;
          }
          return (ulong)uVar7;
        }
        if (unaff_x22 == 0 || (uStack0000000000000004 & 1) != 0) {
          return 0;
        }
        if ((unaff_x20 != 0) && (unaff_x19 != 0)) {
                    /* try { // try from 01f962bc to 020962cb has its CatchHandler @ 01f9656c */
          if (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x20 + 0x18)) {
            return 1;
          }
          if (*(int *)(unaff_x19 + 0x18) <= *(int *)(unaff_x20 + 0x18)) {
            return 0;
          }
          return 2;
        }
        goto LAB_01f96304;
      }
      if (unaff_x22 == 0) {
        lVar2 = *plVar10;
        break;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x25) goto LAB_01f96300;
      lVar2 = *plVar10;
      lVar9 = *(long *)(in_stack_00000010 + unaff_x25 * 8);
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar2 = *plVar10;
      }
      plVar10 = (long *)PTR_DAT_027b32e0;
    } while (lVar9 == *(long *)(*(long *)(lVar2 + 0xb8) + 0x18));
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f801dc();
    if ((uVar3 & 1) == 0) {
      if (unaff_x26 == 0) goto LAB_01f96304;
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) {
LAB_01f96300:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x20 == 0) goto LAB_01f96304;
LAB_01f960b4:
      uVar7 = *(uint *)(in_stack_00000020 + unaff_x25 * 4);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_01f96300;
      plVar4 = *(long **)(unaff_x20 + (long)(int)uVar7 * 8 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_01f96304;
      uVar5 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    }
    else {
      if (unaff_x26 == 0) goto LAB_01f96304;
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_01f96300;
      if (unaff_x20 == 0) goto LAB_01f96304;
      uVar5 = unaff_x23;
      if (*(int *)(in_stack_00000020 + unaff_x25 * 4) < *(int *)(unaff_x20 + 0x18) + -1) {
        if (unaff_x25 < *(uint *)(unaff_x26 + 0x18)) goto LAB_01f960b4;
        goto LAB_01f96300;
      }
    }
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f801dc();
    if ((uVar3 & 1) == 0) {
      if (unaff_x24 == 0) goto LAB_01f96304;
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_01f96300;
      if (unaff_x19 == 0) goto LAB_01f96304;
LAB_01f9615c:
      uVar7 = *(uint *)(in_stack_00000018 + unaff_x25 * 4);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_01f96300;
      plVar4 = *(long **)(unaff_x19 + (long)(int)uVar7 * 8 + 0x20);
      if (plVar4 == (long *)0x0) {
LAB_01f96304:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar6 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    }
    else {
      if (unaff_x24 == 0) goto LAB_01f96304;
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_01f96300;
      if (unaff_x19 == 0) goto LAB_01f96304;
      uVar6 = unaff_x29;
      if (*(int *)(in_stack_00000018 + unaff_x25 * 4) < *(int *)(unaff_x19 + 0x18) + -1) {
        if (unaff_x25 < *(uint *)(unaff_x24 + 0x18)) goto LAB_01f9615c;
        goto LAB_01f96300;
      }
    }
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f7f404(uVar5,uVar6,0);
    if ((uVar3 & 1) != 0) goto LAB_01f96270;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x25) goto LAB_01f96300;
    uVar8 = *(undefined8 *)(in_stack_00000008 + unaff_x25 * 8);
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f95b1c(uVar5,uVar6,uVar8);
    iVar1 = (int)uVar3;
    if (iVar1 == 1) {
      uStack0000000000000004 = 1;
      goto LAB_01f96254;
    }
    if (iVar1 != 2) {
      plVar10 = (long *)PTR_DAT_027b32e0;
      if (iVar1 == 0) {
        return uVar3;
      }
      goto LAB_01f96270;
    }
    uStack0000000000000000 = 1;
LAB_01f96254:
    unaff_x27 = &PTR_DAT_027b3000;
  } while( true );
}


