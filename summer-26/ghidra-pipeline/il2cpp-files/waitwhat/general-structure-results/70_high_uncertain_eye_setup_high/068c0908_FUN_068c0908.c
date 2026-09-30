/*
FUNCTION_NAME: FUN_068c0908
ENTRY_POINT: 068c0908
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_068c0908(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  undefined8 local_18;
  
  if ((DAT_075591c9 & 1) == 0) {
    FUN_03188a78(Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo);
    DAT_075591c9 = 1;
  }
  local_18 = 0;
  uVar1 = FUN_068b3bf4(param_1,&local_18);
  plVar5 = *(long **)(param_1 + 0x178);
  if ((uVar1 & 1) != 0) {
    FUN_068f28d0(plVar5,local_18,0);
    return;
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar3 = *plVar5;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_068c09c0;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_031c0d08(plVar5,*(long *)
                                Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo
                        ,1);
LAB_068c09c0:
                    /* WARNING: Could not recover jumptable at 0x068c09d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  return;
}


