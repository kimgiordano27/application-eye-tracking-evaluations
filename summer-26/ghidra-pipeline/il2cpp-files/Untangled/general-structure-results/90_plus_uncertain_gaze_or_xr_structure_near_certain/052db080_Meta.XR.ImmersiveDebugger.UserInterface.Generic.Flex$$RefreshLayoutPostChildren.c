/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 052db080
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  float unaff_s8;
  
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    uVar1 = FUN_067418c4(*(long *)(unaff_x20 + 0xa8),0);
    if (((uVar1 & 1) != 0) || ((unaff_s8 <= 0.0 && (*(char *)(unaff_x20 + 0xb1) == '\0')))) {
      FUN_052cb430();
    }
    else {
      FUN_052db560();
      FUN_066cad54();
      if (unaff_x19[0x4c] == 0) goto LAB_052db1a0;
      FUN_04c74618(unaff_x19[0x4c]);
    }
    lVar3 = *(long *)(unaff_x20 + 0x240);
    uVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (lVar3 != 0) {
      FUN_05241f40(lVar3,uVar2,*(undefined8 *)PTR_DAT_06d3d7a0);
      *(undefined1 *)((long)unaff_x19 + 0x2f2) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x1e9) = 0;
      (**(code **)(*unaff_x19 + 0x248))();
      if (unaff_x19[6] != 0) {
        FUN_0475e7dc();
        (**(code **)(*unaff_x19 + 0x688))();
        return;
      }
    }
  }
LAB_052db1a0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


