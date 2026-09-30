/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 051c4d70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy(ushort *param_1)

{
  int iVar1;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000018;
  
  if ((*param_1 & 1) == 0) {
    FUN_02dcfd18();
  }
  iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  if (0 < iVar1) {
    if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
      uVar2 = *unaff_x28;
      uVar4 = unaff_x27[1];
      uVar3 = *unaff_x27;
      unaff_x27[1] = unaff_x28[1];
      *unaff_x27 = uVar2;
      LeanTween__value(unaff_x20 + 0x20 + in_stack_00000018 * 0x10 + 8,0);
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        unaff_x28[1] = uVar4;
        *unaff_x28 = uVar3;
        LeanTween__value(unaff_x20 + 0x20 + unaff_x29 * 0x10 + 8,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  return;
}


