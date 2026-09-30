/*
FUNCTION_NAME: OVRPlugin$$SetDefaultExternalCamera
ENTRY_POINT: 069440f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetDefaultExternalCamera(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_0897cfbc & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b6360);
    FUN_03a8a718(PTR_DAT_084b6368);
    DAT_0897cfbc = 1;
  }
  puVar2 = PTR_DAT_084b6368;
  if (*(long *)(param_1 + 0xd0) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0xd0) + 0x18);
    if (iVar1 == 0) {
      fVar5 = 1.0;
    }
    else {
      fVar6 = 1.0;
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          if ((*(long *)(param_1 + 0xd0) == 0) ||
             (lVar3 = FUN_04de82e0(*(long *)(param_1 + 0xd0),iVar4,*(undefined8 *)puVar2),
             lVar3 == 0)) goto LAB_069441b4;
          fVar5 = (float)(**(code **)(lVar3 + 0x18))
                                   (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          fVar6 = fVar6 * fVar5;
          iVar4 = iVar4 + 1;
        } while (iVar1 != iVar4);
      }
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
    }
    return fVar5;
  }
LAB_069441b4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


