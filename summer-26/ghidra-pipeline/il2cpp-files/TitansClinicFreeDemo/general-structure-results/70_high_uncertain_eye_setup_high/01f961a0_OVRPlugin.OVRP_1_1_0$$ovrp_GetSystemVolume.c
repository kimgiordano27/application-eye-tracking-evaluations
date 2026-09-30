/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVolume
ENTRY_POINT: 01f961a0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar7;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar4 = FUN_01f7f404(param_1,unaff_x28,0);
    if ((uVar4 & 1) == 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x25) goto LAB_01f96300;
      uVar6 = *(undefined8 *)(in_stack_00000008 + unaff_x25 * 8);
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f95b1c(in_stack_00000028,unaff_x28,uVar6);
      iVar1 = (int)uVar4;
      unaff_x27 = (long *)PTR_DAT_027b32e0;
      if (iVar1 == 1) {
        uStack0000000000000004 = 1;
      }
      else if (iVar1 == 2) {
        uStack0000000000000000 = 1;
      }
      else if (iVar1 == 0) {
        return uVar4;
      }
    }
    do {
      unaff_x25 = unaff_x25 + 1;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x25) {
        if (((uStack0000000000000000 ^ uStack0000000000000004) & 1) != 0) {
          uVar5 = 1;
          if ((uStack0000000000000004 & 1) == 0) {
            uVar5 = 2;
          }
          return (ulong)uVar5;
        }
        if (unaff_x22 != 0 && (uStack0000000000000004 & 1) == 0) {
          if ((unaff_x20 == 0) || (unaff_x19 == 0)) goto LAB_01f96304;
          if (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x20 + 0x18)) {
            return 1;
          }
          if (*(int *)(unaff_x20 + 0x18) < *(int *)(unaff_x19 + 0x18)) {
            return 2;
          }
        }
        return 0;
      }
      if (unaff_x22 == 0) {
        lVar2 = *unaff_x27;
        break;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x25) goto LAB_01f96300;
      lVar2 = *unaff_x27;
      lVar7 = *(long *)(in_stack_00000010 + unaff_x25 * 8);
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar2 = *unaff_x27;
      }
      unaff_x27 = (long *)PTR_DAT_027b32e0;
    } while (lVar7 == *(long *)(*(long *)(lVar2 + 0xb8) + 0x18));
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f801dc();
    if ((uVar4 & 1) == 0) {
      if (unaff_x26 == 0) {
LAB_01f96304:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_01f96300;
      if (unaff_x20 == 0) goto LAB_01f96304;
LAB_01f960b4:
      uVar5 = *(uint *)(in_stack_00000020 + unaff_x25 * 4);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_01f96300;
      plVar3 = *(long **)(unaff_x20 + (long)(int)uVar5 * 8 + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_01f96304;
      in_stack_00000028 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    }
    else {
      if (unaff_x26 == 0) goto LAB_01f96304;
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_01f96300;
      if (unaff_x20 == 0) goto LAB_01f96304;
      in_stack_00000028 = unaff_x23;
      if (*(int *)(in_stack_00000020 + unaff_x25 * 4) < *(int *)(unaff_x20 + 0x18) + -1) {
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto LAB_01f96300;
        goto LAB_01f960b4;
      }
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f801dc();
    if ((uVar4 & 1) == 0) {
      if (unaff_x24 == 0) goto LAB_01f96304;
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_01f96300;
      if (unaff_x19 == 0) goto LAB_01f96304;
LAB_01f9615c:
      uVar5 = *(uint *)(in_stack_00000018 + unaff_x25 * 4);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar5) {
LAB_01f96300:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar3 = *(long **)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_01f96304;
      unaff_x28 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    }
    else {
      if (unaff_x24 == 0) goto LAB_01f96304;
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_01f96300;
      if (unaff_x19 == 0) goto LAB_01f96304;
      unaff_x28 = unaff_x29;
      if (*(int *)(in_stack_00000018 + unaff_x25 * 4) < *(int *)(unaff_x19 + 0x18) + -1) {
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto LAB_01f96300;
        goto LAB_01f9615c;
      }
    }
    param_1 = in_stack_00000028;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
  } while( true );
}


