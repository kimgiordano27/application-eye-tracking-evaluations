/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentTitle
ENTRY_POINT: 05bea494
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentTitle(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long *unaff_x22;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x578);
  uVar2 = FUN_03188b1c(*puVar4,*(undefined4 *)(param_1 + 0x18));
  lVar3 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar2;
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar2 = FUN_03188b1c(*puVar4,*(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
    lVar3 = *unaff_x22;
    *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar2 = FUN_03188b1c(*puVar4,*(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
      lVar3 = *unaff_x22;
      *(undefined8 *)(unaff_x19 + 0x150) = uVar2;
      puVar1 = PTR_DAT_07116bb8;
      if (**(long **)(lVar3 + 0xb8) != 0) {
        uVar2 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116c08,
                             *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
        lVar3 = *(long *)puVar1;
        *(undefined8 *)(unaff_x19 + 0x158) = uVar2;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar3);
        }
        OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


