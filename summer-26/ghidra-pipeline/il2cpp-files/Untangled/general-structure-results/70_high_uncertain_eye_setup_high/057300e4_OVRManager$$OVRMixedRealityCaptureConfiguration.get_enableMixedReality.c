/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_enableMixedReality
ENTRY_POINT: 057300e4
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_enableMixedReality
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *in_x9;
  ulong uVar4;
  int *piVar5;
  
  plVar1 = (long *)(*in_x9)(param_2,*(undefined8 *)(param_1 + 0x5f0));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06d56470) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto 
        OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c(plVar1,*(long *)PTR_DAT_06d56470,0);
OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  FUN_0572d83c();
  return;
}


