/*
FUNCTION_NAME: OVRPlugin$$ResetDefaultExternalCamera
ENTRY_POINT: 06944030
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__ResetDefaultExternalCamera(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if ((DAT_0897cfbd & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b6350);
    FUN_03a8a718(PTR_DAT_084b6358);
    DAT_0897cfbd = 1;
  }
  puVar2 = PTR_DAT_084b6358;
  if (*(long *)(param_1 + 0xd8) == 0) {
LAB_069440e4:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0xd8) + 0x18);
  if (iVar1 < 1) {
    uVar4 = 1;
  }
  else {
    iVar6 = 0;
    do {
      if ((*(long *)(param_1 + 0xd8) == 0) ||
         (lVar5 = FUN_04de82e0(*(long *)(param_1 + 0xd8),iVar6,*(undefined8 *)puVar2), lVar5 == 0))
      goto LAB_069440e4;
      uVar4 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    } while (((uVar4 & 1) != 0) && (bVar3 = iVar1 + -1 != iVar6, iVar6 = iVar6 + 1, bVar3));
  }
  return uVar4 & 1;
}


