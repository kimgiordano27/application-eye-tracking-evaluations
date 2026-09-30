/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 05630e7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
          (void)

{
  int iVar1;
  uint in_w8;
  long unaff_x21;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined4 *unaff_x28;
  
  if (unaff_w24 < in_w8) {
    *unaff_x28 = 0xffffffff;
    *(undefined8 *)(unaff_x26 + 0x30) = 0;
    *(undefined8 *)(unaff_x26 + 0x28) = 0;
    *(undefined8 *)(unaff_x26 + 0x40) = 0;
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
    *(undefined4 *)(unaff_x25 + unaff_x27 * 0x28 + 0x24) = *(undefined4 *)(unaff_x21 + 0x28);
    iVar1 = *(int *)(unaff_x21 + 0x20) + -1;
    *(int *)(unaff_x21 + 0x20) = iVar1;
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x21 + 0x38) + 1;
    if (iVar1 == 0) {
      unaff_w24 = 0xffffffff;
      *(undefined4 *)(unaff_x21 + 0x24) = 0;
    }
    *(uint *)(unaff_x21 + 0x28) = unaff_w24;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


