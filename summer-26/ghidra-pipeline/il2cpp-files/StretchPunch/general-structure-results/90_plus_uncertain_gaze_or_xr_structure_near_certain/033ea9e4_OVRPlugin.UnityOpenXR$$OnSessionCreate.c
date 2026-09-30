/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 033ea9e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 in_w8;
  int *unaff_x19;
  long unaff_x20;
  int iVar4;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xb08) = in_w8;
  puVar1 = StringLiteral_1167;
  if (unaff_x20 != 0) {
    iVar4 = *unaff_x19;
    if (iVar4 < *(int *)(unaff_x20 + 0x10)) {
      do {
        uVar2 = FUN_03271744();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar1);
        }
        uVar3 = FUN_03290b6c(uVar2,0);
      } while (((uVar3 & 1) != 0) && (iVar4 = iVar4 + 1, iVar4 < *(int *)(unaff_x20 + 0x10)));
    }
    *unaff_x19 = iVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


