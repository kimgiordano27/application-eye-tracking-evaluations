/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 0142b4d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  
  lVar2 = FUN_00da4fb8();
  lVar3 = *(long *)(unaff_x19 + 0x130);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
LAB_0142b544:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar5 = (long)(int)uVar4;
        lVar6 = *(long *)(lVar3 + lVar5 * 8 + 0x20);
        if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) || (lVar2 == 0))
        goto LAB_0142b540;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_0142b544;
        uVar4 = uVar4 + 1;
        *(int *)(lVar2 + lVar5 * 4 + 0x20) = (int)*(undefined8 *)(lVar6 + 0x18);
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_0142b540:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


