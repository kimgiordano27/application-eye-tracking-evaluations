/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 0316e284
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  (**(code **)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138))();
  lVar1 = FUN_0391c27c();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar6 = *(long **)(unaff_x19 + 0x50);
    uVar7 = FUN_039274a0(*(long *)(unaff_x19 + 0x20),0);
    uVar8 = FUN_03925cf4(0);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_0316e33c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x22,2);
LAB_0316e33c:
      (*(code *)*puVar2)(uVar7,param_3,param_4,param_5,uVar8,plVar6,puVar2[1]);
      if (lVar1 != 0) {
        FUN_03928f54(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


