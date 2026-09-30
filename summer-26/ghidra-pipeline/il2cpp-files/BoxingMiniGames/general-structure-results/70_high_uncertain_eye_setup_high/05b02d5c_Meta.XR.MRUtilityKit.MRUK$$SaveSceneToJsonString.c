/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 05b02d5c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString
          (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_0367c9fc(param_3);
  }
  lVar1 = thunk_FUN_0367fd24();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar1);
    }
    lVar1 = thunk_FUN_0367fd24();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc(lVar1);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
        thunk_FUN_0367ff68();
        lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc(lVar1);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
          thunk_FUN_0367ff68();
                    /* WARNING: Could not recover jumptable at 0x05b02e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
          return uVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
  }
  FUN_05e390e4(2,0);
  return 0;
}


