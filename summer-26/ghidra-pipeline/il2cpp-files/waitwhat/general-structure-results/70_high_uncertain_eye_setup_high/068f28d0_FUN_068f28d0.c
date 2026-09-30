/*
FUNCTION_NAME: FUN_068f28d0
ENTRY_POINT: 068f28d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_068f28d0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((DAT_0755937c & 1) == 0) {
    FUN_03188a78(Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo);
    DAT_0755937c = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_068f295c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_031c0d08(param_1,*(long *)
                                   Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo
                          ,1);
LAB_068f295c:
    (*(code *)*puVar1)(param_1,puVar1[1]);
    if (param_2 != 0) {
      FUN_069e80b8(param_2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


