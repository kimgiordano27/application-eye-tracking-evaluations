/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$.cctor
ENTRY_POINT: 0569cd78
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0569ca48) */
/* WARNING: Removing unreachable block (ram,0x0569c8d8) */
/* WARNING: Removing unreachable block (ram,0x0569cbb0) */
/* WARNING: Removing unreachable block (ram,0x0569cb9c) */
/* WARNING: Removing unreachable block (ram,0x0569c980) */

void OVRPlugin_OVRP_1_12_0___cctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  
  FUN_02d03d84();
  if (unaff_w20 == 1) {
    plVar4 = (long *)__cxa_begin_catch();
    in_stack_00000020 = *plVar4;
    __cxa_end_catch();
    plVar4 = (long *)*in_stack_00000028;
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0569c7f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02dd004c(plVar4,*unaff_x22,0);
LAB_0569c7f0:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858();
    }
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0 < *(int *)(*(long *)(unaff_x19 + 0x18) + 0x18)) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_00000078 = FUN_0564de84(0x14,0);
      in_stack_00000028 = &stack0x00000078;
      in_stack_00000020 = 0;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04010c90(&stack0x00000008,*(long *)(unaff_x19 + 0x18),
                   *(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo);
      puVar2 = Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo;
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000008;
      in_stack_00000070 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000060;
      while (uVar6 = FUN_05156804(&stack0x00000060,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        if (in_stack_00000070 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        (**(code **)(*in_stack_00000070 + 0x1b8))
                  (in_stack_00000070,*(undefined8 *)(*in_stack_00000070 + 0x1c0));
      }
      FUN_05156800(&stack0x00000060,
                   *(undefined8 *)Oculus_Platform_Request<LinkedAccountList>_TypeInfo);
      lVar5 = *(long *)(unaff_x19 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0550afb4(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      plVar4 = (long *)*in_stack_00000028;
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x22) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0569c964;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02dd004c(plVar4,*unaff_x22,0);
LAB_0569c964:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
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
      in_stack_00000058 = FUN_0564de84(0x15,0);
      in_stack_00000028 = &stack0x00000058;
      in_stack_00000020 = 0;
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04010c90(&stack0x00000008,*(long *)(unaff_x19 + 0x20),
                   *(undefined8 *)Oculus_Platform_Request<ShareMediaResult>_TypeInfo);
      puVar2 = Oculus_Platform_Request<OrgScopedID>_TypeInfo;
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000040;
      while (uVar6 = FUN_05156804(&stack0x00000040,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_055fc0c0(in_stack_00000050,0);
      }
      FUN_05156800(&stack0x00000040,*(undefined8 *)Oculus_Platform_Request<LeaderboardList>_TypeInfo
                  );
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0550afb4(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      plVar4 = (long *)*in_stack_00000028;
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x22) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0569cad0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02dd004c(plVar4,*unaff_x22,0);
LAB_0569cad0:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
      }
      if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
    }
  }
  else {
    FUN_029794b4(&stack0x00000020);
    if (unaff_w20 != 1) {
      FUN_029794b4(&stack0x00000030);
                    /* try { // try from 0569cddc to 0579cddf has its CatchHandler @ 0569cef4 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0569cde0 to 0579cdef has its CatchHandler @ 0569cf04 */
      FUN_02e86b8c();
    }
    plVar4 = (long *)__cxa_begin_catch();
    in_stack_00000030 = *plVar4;
    __cxa_end_catch();
  }
  plVar4 = (long *)*in_stack_00000038;
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0569cb3c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar4,*unaff_x22,0);
LAB_0569cb3c:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


