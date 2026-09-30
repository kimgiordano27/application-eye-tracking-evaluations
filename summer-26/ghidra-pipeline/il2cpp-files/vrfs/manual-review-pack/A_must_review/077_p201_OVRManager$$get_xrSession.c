/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 02fc6940
PROGRAM: vrfs-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 in_stack_00000008;
  
  iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0xe8) + 8))();
  if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w21) < iVar3) {
    FUN_031db448(5,0);
  }
  uVar2 = *(uint *)(unaff_x22 + 0x20);
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(unaff_x22 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar4 + 0x2c);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_02fc6a00:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (-1 < (int)puVar6[-3]) {
        in_stack_00000008 = 0;
        FUN_0517aac4(&stack0x00000008,puVar6[-1],*puVar6,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8));
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_02fc6a00;
        lVar1 = (long)(int)unaff_w21;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(unaff_x20 + lVar1 * 8 + 0x20) = in_stack_00000008;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 4;
    } while (uVar2 != uVar5);
  }
  return;
}


