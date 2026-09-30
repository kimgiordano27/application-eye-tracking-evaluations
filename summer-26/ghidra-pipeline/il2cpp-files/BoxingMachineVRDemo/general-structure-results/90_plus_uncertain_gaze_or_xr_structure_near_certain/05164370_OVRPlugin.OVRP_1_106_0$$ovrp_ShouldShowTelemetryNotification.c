/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryNotification
ENTRY_POINT: 05164370
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryNotification(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int iVar6;
  long *unaff_x26;
  
  puVar1 = PTR_DAT_06782408;
  iVar6 = 0;
  do {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_051643cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) {
LAB_05164658:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(int *)(lVar3 + 0x18) <= iVar6) {
      FUN_051652f4();
      (**(code **)(*unaff_x19 + 0x588))();
      (**(code **)(*unaff_x20 + 0x1e8))();
      return;
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_05164438;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) goto LAB_05164658;
    FUN_03aac1c4(lVar3,iVar6,*(undefined8 *)puVar1);
    FUN_05163090();
    iVar6 = iVar6 + 1;
  } while( true );
}


