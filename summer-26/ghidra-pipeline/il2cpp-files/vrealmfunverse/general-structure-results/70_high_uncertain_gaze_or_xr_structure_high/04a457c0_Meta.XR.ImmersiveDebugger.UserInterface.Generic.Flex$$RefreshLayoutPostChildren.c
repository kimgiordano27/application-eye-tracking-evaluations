/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 04a457c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


ulong Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren
                (long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long in_x9;
  long unaff_x20;
  long unaff_x21;
  
  if ((((uint)*(byte *)(param_1 + 0x130) < (uint)in_x9) ||
      (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_2)) ||
     (uVar1 = FUN_04a47d00(), (uVar1 & 1) == 0)) {
    lVar2 = FUN_04a475d4();
    uVar1 = (ulong)(-1 < lVar2 && *(int *)(unaff_x20 + 0x20) == (int)lVar2);
  }
  else {
    if (*(int *)(unaff_x20 + 0x20) <= *(int *)(unaff_x21 + 0x20)) {
      uVar1 = FUN_04a472d8();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


