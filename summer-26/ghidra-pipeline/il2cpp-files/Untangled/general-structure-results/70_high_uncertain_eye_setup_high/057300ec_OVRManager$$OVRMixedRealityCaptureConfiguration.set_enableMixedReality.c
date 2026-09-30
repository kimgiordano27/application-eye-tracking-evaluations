/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_enableMixedReality
ENTRY_POINT: 057300ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_enableMixedReality(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *param_1;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06d56470) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto 
        OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c(param_1,*(long *)PTR_DAT_06d56470,0);
OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift:
  (*(code *)*puVar1)(param_1,puVar1[1]);
  FUN_0572d83c();
  return;
}


