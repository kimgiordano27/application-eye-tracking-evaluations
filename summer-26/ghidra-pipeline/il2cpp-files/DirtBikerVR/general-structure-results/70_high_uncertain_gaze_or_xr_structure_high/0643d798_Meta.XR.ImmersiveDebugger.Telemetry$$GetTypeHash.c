/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 0643d798
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_03ac4090(lVar2);
  }
  lVar2 = thunk_FUN_03ac73c0();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03ac4090(lVar2);
    }
    lVar2 = thunk_FUN_03ac73c0();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
        thunk_FUN_03ac7604();
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090(lVar2);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
          thunk_FUN_03ac7604();
                    /* WARNING: Could not recover jumptable at 0x0643d89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
          return uVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40();
    }
  }
  FUN_0677195c(2,0);
  return 0;
}


