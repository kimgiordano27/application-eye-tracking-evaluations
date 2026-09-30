/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$.cctor
ENTRY_POINT: 0569c984
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0569ca48) */
/* WARNING: Removing unreachable block (ram,0x0569cbb0) */

void OVRPlugin_OVRP_1_9_0___cctor(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
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
    while (uVar3 = FUN_05156804(&stack0x00000040,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_055fc0c0(in_stack_00000050,0);
    }
    FUN_05156800(&stack0x00000040,*(undefined8 *)Oculus_Platform_Request<LeaderboardList>_TypeInfo);
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
    plVar7 = (long *)*in_stack_00000028;
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0569cad0;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c(plVar7,*unaff_x22,0);
LAB_0569cad0:
      (*(code *)*puVar4)(plVar7,puVar4[1]);
    }
    if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858();
    }
  }
  plVar7 = (long *)*in_stack_00000038;
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0569cb3c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar7,*unaff_x22,0);
LAB_0569cb3c:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


