/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 0696a95c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  
  thunk_FUN_03afed3c();
  lVar4 = *(long *)(unaff_x19 + 0x70);
  uVar2 = FUN_0696ac34();
  puVar1 = PTR_DAT_08486738;
  if (lVar4 != 0) {
    uVar2 = FUN_07c9ee6c(lVar4,uVar2,0);
    *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd8),uVar2);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_07c9c218(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0696aa20;
      FUN_07d1c280(*(long *)(unaff_x19 + 0x28),0);
    }
    uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_07c9c218(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_07d1c280(*(long *)(unaff_x19 + 0x30),0);
      return;
    }
  }
LAB_0696aa20:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


