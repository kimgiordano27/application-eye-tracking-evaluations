/*
FUNCTION_NAME: OVRManager$$StaticShutdownMixedRealityCapture
ENTRY_POINT: 0336eb48
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__StaticShutdownMixedRealityCapture(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo)
        {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0336ebac;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
LAB_0336ebac:
    uVar1 = (*(code *)*puVar2)();
    if (lVar6 != 0) {
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        return *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


