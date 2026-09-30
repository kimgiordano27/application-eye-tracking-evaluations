/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 0569e530
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x21;
  long *plVar5;
  long *unaff_x22;
  long *unaff_x23;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  
  lVar2 = *unaff_x22;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0569e57c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c();
LAB_0569e57c:
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  plVar5 = (long *)*in_stack_00000028;
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar5,*unaff_x23,0);
OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


