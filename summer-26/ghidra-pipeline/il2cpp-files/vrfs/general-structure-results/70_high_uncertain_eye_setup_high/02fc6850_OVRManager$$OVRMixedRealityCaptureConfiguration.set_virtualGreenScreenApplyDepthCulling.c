/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling
ENTRY_POINT: 02fc6850
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling
          (long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  if (0 < in_w8) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
LAB_02fc68fc:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar4 = 0;
    puVar5 = (undefined4 *)(lVar3 + 0x2c);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02fc68f8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (-1 < (int)puVar5[-3]) {
        plVar1 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8)
                                     + 8))();
        if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_02fc68f8;
        if (plVar1 == (long *)0x0) goto LAB_02fc68fc;
        uVar2 = (**(code **)(*plVar1 + 0x1b8))
                          (plVar1,*puVar5,param_2,*(undefined8 *)(*plVar1 + 0x1c0));
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        in_w8 = *(int *)(param_1 + 0x20);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while ((long)uVar4 < (long)in_w8);
  }
  return 0;
}


