/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 090c6378
PROGRAM: Hyper-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float unaff_s8;
  float unaff_s9;
  
  pfVar3 = *(float **)(**(long **)(param_1 + 0x740) + 0xb8);
  fVar7 = unaff_s8 - *pfVar3;
  fVar8 = unaff_s9 - pfVar3[1];
  if (fVar7 * fVar7 + fVar8 * fVar8 < DAT_01df45a8) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + 0x50);
  if (lVar4 != 0) {
    *(float *)(lVar4 + 0x17c) = unaff_s8;
    *(float *)(lVar4 + 0x180) = unaff_s9;
    puVar1 = PTR_DAT_0ac0e720;
    if ((unaff_x19 != 0) && (lVar4 = *(long *)(unaff_x20 + 0x50), lVar4 != 0)) {
      uVar9 = *(undefined4 *)(unaff_x19 + 0x148);
      *(undefined4 *)(lVar4 + 0x144) = *(undefined4 *)(unaff_x19 + 0x144);
      lVar2 = *(long *)puVar1;
      *(undefined4 *)(lVar4 + 0x148) = uVar9;
      uVar5 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b330547 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0e720);
        DAT_0b330547 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar4 = *(long *)puVar1;
      }
      FUN_05ba41f4(uVar5,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x58),
                   *(undefined8 *)PTR_DAT_0ac79538);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


