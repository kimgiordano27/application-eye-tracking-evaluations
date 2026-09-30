/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddInstallationRoutineInfo
ENTRY_POINT: 01b0b3b0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddInstallationRoutineInfo(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined2 *puVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_01d68ae8();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x20);
    if (0 < (int)uVar1) {
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) goto LAB_01b0b440;
      uVar2 = *(uint *)(lVar3 + 0x18);
      uVar4 = 0;
      puVar5 = (undefined2 *)(lVar3 + 0x2c);
      do {
        if (uVar2 <= uVar4) {
LAB_01b0b428:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (-1 < *(int *)(puVar5 + -6)) {
          if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_01b0b428;
          lVar3 = (long)(int)unaff_w19;
          unaff_w19 = unaff_w19 + 1;
          *(undefined2 *)(unaff_x20 + lVar3 * 2 + 0x20) = *puVar5;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 8;
      } while (uVar1 != uVar4);
    }
    return;
  }
LAB_01b0b440:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


