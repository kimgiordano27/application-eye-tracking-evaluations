/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.Basecamps.Permissions.Components.PermissionComponents$$get_UploadCloudButton
ENTRY_POINT: 042aa678
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void OVA_StellarX_Core_Framework_Presentation_Basecamps_Permissions_Components_PermissionComponents__get_UploadCloudButton
               (ulong param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09286a80);
    FUN_04077588(PTR_DAT_0928dc98);
    FUN_04077588(PTR_DAT_0928dca0);
    *(undefined1 *)(unaff_x23 + 0x86) = 1;
  }
  uVar1 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x90) = 0x27;
  uVar1 = thunk_FUN_040b4efc(uVar1);
  FUN_042a829c();
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar1;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xb0),uVar1);
  uVar1 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_042a829c();
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xa8),uVar1);
  return;
}


