/*
FUNCTION_NAME: OVRPlugin.OVRP_1_10_0$$.cctor
ENTRY_POINT: 0569ca0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0569ca48) */
/* WARNING: Removing unreachable block (ram,0x0569cbb0) */

void OVRPlugin_OVRP_1_10_0___cctor(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 *unaff_x20;
  long *unaff_x22;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000050;
  
  do {
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_055fc0c0(in_stack_00000050,0);
    uVar2 = FUN_05156804(&stack0x00000040,*unaff_x20);
  } while ((uVar2 & 1) != 0);
  FUN_05156800(&stack0x00000040,*(undefined8 *)Oculus_Platform_Request<LeaderboardList>_TypeInfo);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = *(int *)(lVar4 + 0x18);
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_0550afb4(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
  }
  plVar6 = (long *)*in_stack_00000028;
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0569cad0;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar6,*unaff_x22,0);
LAB_0569cad0:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
  }
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  plVar6 = (long *)*in_stack_00000038;
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0569cb3c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar6,*unaff_x22,0);
LAB_0569cb3c:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


