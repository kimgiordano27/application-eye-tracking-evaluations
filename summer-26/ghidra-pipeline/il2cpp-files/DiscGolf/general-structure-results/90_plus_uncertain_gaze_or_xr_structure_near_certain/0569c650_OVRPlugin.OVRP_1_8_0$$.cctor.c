/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$.cctor
ENTRY_POINT: 0569c650
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_9;functionality_data_collection_or_telemetry_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x0569ca48) */
/* WARNING: Removing unreachable block (ram,0x0569c8d8) */
/* WARNING: Removing unreachable block (ram,0x0569c764) */
/* WARNING: Removing unreachable block (ram,0x0569cbb0) */
/* WARNING: Removing unreachable block (ram,0x0569cb9c) */
/* WARNING: Removing unreachable block (ram,0x0569cb8c) */
/* WARNING: Removing unreachable block (ram,0x0569c980) */

void OVRPlugin_OVRP_1_8_0___cctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 in_w8;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined1 *puStack0000000000000048;
  long *plStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined1 *puStack0000000000000068;
  long *plStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined1 *puStack0000000000000088;
  long *plStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a8;
  
  *(undefined1 *)(unaff_x20 + 0x881) = in_w8;
  uStack00000000000000a8 = 0;
  plStack0000000000000090 = (long *)0x0;
  uStack0000000000000098 = 0;
  uStack0000000000000080 = 0;
  puStack0000000000000088 = (undefined1 *)0x0;
  plStack0000000000000070 = (long *)0x0;
  uStack0000000000000078 = 0;
  uStack0000000000000060 = 0;
  puStack0000000000000068 = (undefined1 *)0x0;
  plStack0000000000000050 = (long *)0x0;
  uStack0000000000000058 = 0;
  uStack0000000000000040 = 0;
  puStack0000000000000048 = (undefined1 *)0x0;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar2 = PTR_DAT_069fbff0;
  uStack00000000000000a8 = FUN_0564de84(0x12,0);
  in_stack_00000038 = &stack0x000000a8;
  in_stack_00000030 = 0;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (0 < *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18)) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uStack0000000000000098 = FUN_0564de84(0x13,0);
    in_stack_00000028 = &stack0x00000098;
    in_stack_00000020 = 0;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04010c90(&stack0x00000008,*(long *)(unaff_x19 + 0x10),
                 *(undefined8 *)Oculus_Platform_Request<SendInvitesResult>_TypeInfo);
    puVar4 = Oculus_Platform_Request<Party>_TypeInfo;
    puVar3 = Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo;
    puStack0000000000000088 = in_stack_00000010;
    uStack0000000000000080 = in_stack_00000008;
    plStack0000000000000090 = in_stack_00000018;
    in_stack_00000010 = (undefined1 *)&stack0x00000080;
    in_stack_00000008 = 0;
    while (uVar5 = FUN_05156804(&stack0x00000080,*(undefined8 *)puVar4), (uVar5 & 1) != 0) {
      if (plStack0000000000000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_055ffbf0(plStack0000000000000090,0);
    }
    FUN_05156800(&stack0x00000080,*(undefined8 *)puVar3);
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0550afb4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    plVar9 = (long *)*in_stack_00000028;
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0569c7f0;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_0569c7f0:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858();
    }
  }
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (0 < *(int *)(*(long *)(unaff_x19 + 0x18) + 0x18)) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uStack0000000000000078 = FUN_0564de84(0x14,0);
    in_stack_00000028 = &stack0x00000078;
    in_stack_00000020 = 0;
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04010c90(&stack0x00000008,*(long *)(unaff_x19 + 0x18),
                 *(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo);
    puVar3 = Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo;
    puStack0000000000000068 = in_stack_00000010;
    uStack0000000000000060 = in_stack_00000008;
    plStack0000000000000070 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = (undefined1 *)&stack0x00000060;
    while (uVar5 = FUN_05156804(&stack0x00000060,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      if (plStack0000000000000070 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*plStack0000000000000070 + 0x1b8))
                (plStack0000000000000070,*(undefined8 *)(*plStack0000000000000070 + 0x1c0));
    }
    FUN_05156800(&stack0x00000060,*(undefined8 *)Oculus_Platform_Request<LinkedAccountList>_TypeInfo
                );
    lVar7 = *(long *)(unaff_x19 + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0550afb4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    plVar9 = (long *)*in_stack_00000028;
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0569c964;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_0569c964:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858();
    }
  }
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (0 < *(int *)(*(long *)(unaff_x19 + 0x20) + 0x18)) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uStack0000000000000058 = FUN_0564de84(0x15,0);
    in_stack_00000028 = &stack0x00000058;
    in_stack_00000020 = 0;
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04010c90(&stack0x00000008,*(long *)(unaff_x19 + 0x20),
                 *(undefined8 *)Oculus_Platform_Request<ShareMediaResult>_TypeInfo);
    puVar3 = Oculus_Platform_Request<OrgScopedID>_TypeInfo;
    puStack0000000000000048 = in_stack_00000010;
    uStack0000000000000040 = in_stack_00000008;
    plStack0000000000000050 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = (undefined1 *)&stack0x00000040;
    while (uVar5 = FUN_05156804(&stack0x00000040,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      if (plStack0000000000000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_055fc0c0(plStack0000000000000050,0);
    }
    FUN_05156800(&stack0x00000040,*(undefined8 *)Oculus_Platform_Request<LeaderboardList>_TypeInfo);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0550afb4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    plVar9 = (long *)*in_stack_00000028;
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0569cad0;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_0569cad0:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858();
    }
  }
  plVar9 = (long *)*in_stack_00000038;
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0569cb3c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_0569cb3c:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


