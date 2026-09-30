/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InputActionTrace$$ToString
ENTRY_POINT: 059a4af8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_10;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void UnityEngine_InputSystem_Utilities_InputActionTrace__ToString(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x630));
  FUN_02f08768(Method_Oculus_Platform_Message<LinkedAccountList>__ctor__);
  FUN_02f08768(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__);
  FUN_02f08768(Method_Oculus_Platform_Message<LinkedAccountList>_get_Data__);
  FUN_02f08768(Method_Oculus_Platform_Message<LaunchInvitePanelFlowResult>__ctor__);
  FUN_02f08768(Method_Oculus_Platform_Message<LaunchInvitePanelFlowResult>_get_Data__);
  FUN_02f08768(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
  FUN_02f08768(Method_Oculus_Platform_Message<LivestreamingApplicationStatus>__ctor__);
  FUN_02f08768(Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__);
  FUN_02f08768(Method_Oculus_Platform_Message<LivestreamingApplicationStatus>_get_Data__);
  *(undefined1 *)(unaff_x20 + 0xb73) = 1;
  puVar2 = PTR_DAT_067cd870;
  puVar1 = PTR_DAT_067cd868;
  uVar6 = *unaff_x19;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050e4454(uVar6,0);
  lVar4 = FUN_02f0880c(*(undefined8 *)puVar2,6);
  lVar7 = *(long *)puVar1;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_02f41ef8(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = Method_Oculus_Platform_Message<LivestreamingApplicationStatus>__ctor__;
  puVar2 = Method_Oculus_Platform_Message<LaunchInvitePanelFlowResult>__ctor__;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  UnityEngine_UIElements_Panel__GetUpdater
            (&stack0x000000a0,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,
             **(undefined8 **)(lVar5 + 0xb8),0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar4 + 0x20) = in_stack_000000a0;
      *(undefined8 *)(lVar4 + 0x38) = in_stack_000000b8;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_000000b0;
      lVar7 = *(long *)puVar1;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_02f41ef8(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar3 = Method_Oculus_Platform_Message<LinkedAccountList>__ctor__;
      puVar2 = Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__;
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000098 = 0;
      in_stack_00000090 = 0;
      UnityEngine_UIElements_Panel__GetUpdater
                (&stack0x00000080,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,
                 **(undefined8 **)(lVar5 + 0xb8),0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x48) = in_stack_00000088;
        *(undefined8 *)(lVar4 + 0x40) = in_stack_00000080;
        *(undefined8 *)(lVar4 + 0x58) = in_stack_00000098;
        *(undefined8 *)(lVar4 + 0x50) = in_stack_00000090;
        lVar7 = *(long *)puVar1;
        lVar5 = *(long *)(lVar7 + 0x38);
        if (lVar5 == 0) {
          FUN_02f41ef8(lVar7);
          lVar5 = *(long *)(lVar7 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        puVar3 = Method_Oculus_Platform_Message<LinkedAccountList>_get_Data__;
        puVar2 = Method_Oculus_Platform_Message<LaunchInvitePanelFlowResult>_get_Data__;
        lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        UnityEngine_UIElements_Panel__GetUpdater
                  (&stack0x00000060,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,
                   **(undefined8 **)(lVar5 + 0xb8),0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x68) = in_stack_00000068;
          *(undefined8 *)(lVar4 + 0x60) = in_stack_00000060;
          *(undefined8 *)(lVar4 + 0x78) = in_stack_00000078;
          *(undefined8 *)(lVar4 + 0x70) = in_stack_00000070;
          lVar7 = *(long *)puVar1;
          lVar5 = *(long *)(lVar7 + 0x38);
          if (lVar5 == 0) {
            FUN_02f41ef8(lVar7);
            lVar5 = *(long *)(lVar7 + 0x38);
          }
          lVar5 = *(long *)(lVar5 + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c();
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          puVar2 = Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__;
          lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c();
          }
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          UnityEngine_UIElements_Panel__GetUpdater
                    (&stack0x00000040,*(undefined8 *)puVar2,*(undefined8 *)puVar2,0,
                     **(undefined8 **)(lVar5 + 0xb8),0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x88) = in_stack_00000048;
            *(undefined8 *)(lVar4 + 0x80) = in_stack_00000040;
            *(undefined8 *)(lVar4 + 0x98) = in_stack_00000058;
            *(undefined8 *)(lVar4 + 0x90) = in_stack_00000050;
            lVar7 = *(long *)puVar1;
            lVar5 = *(long *)(lVar7 + 0x38);
            if (lVar5 == 0) {
              FUN_02f41ef8(lVar7);
              lVar5 = *(long *)(lVar7 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02f41e9c();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            puVar2 = Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__;
            lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02f41e9c();
            }
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            UnityEngine_UIElements_Panel__GetUpdater
                      (&stack0x00000020,*(undefined8 *)puVar2,*(undefined8 *)puVar2,0,
                       **(undefined8 **)(lVar5 + 0xb8),0);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0xa8) = in_stack_00000028;
              *(undefined8 *)(lVar4 + 0xa0) = in_stack_00000020;
              *(undefined8 *)(lVar4 + 0xb8) = in_stack_00000038;
              *(undefined8 *)(lVar4 + 0xb0) = in_stack_00000030;
              lVar7 = *(long *)puVar1;
              lVar5 = *(long *)(lVar7 + 0x38);
              if (lVar5 == 0) {
                FUN_02f41ef8(lVar7);
                lVar5 = *(long *)(lVar7 + 0x38);
              }
              lVar5 = *(long *)(lVar5 + 0x10);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02f41e9c();
              }
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                FUN_02f41e9c();
              }
              UnityEngine_UIElements_Panel__GetUpdater();
              puVar1 = PTR_DAT_067cd878;
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 200) = 0;
                *(undefined8 *)(lVar4 + 0xc0) = 0;
                *(undefined8 *)(lVar4 + 0xd8) = 0;
                *(undefined8 *)(lVar4 + 0xd0) = 0;
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_0628cda4(uVar6,lVar4,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


