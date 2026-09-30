/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange
ENTRY_POINT: 03368a5c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long in_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  
  do {
    if (in_x10 == 0) {
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(in_x10 + 0x18) <= (uint)param_1) goto LAB_03368a2c;
    *(uint *)(unaff_x19 + 0x18) = (uint)param_1 + 1;
    *(undefined8 *)(in_x10 + param_1 * 8 + 0x20) = unaff_x20;
    while( true ) {
      do {
        unaff_x23 = unaff_x23 + 1;
        if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
          if (unaff_x19 != 0) {
            FUN_02d51a80();
            return;
          }
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (unaff_x19 == 0)
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        param_1 = (long)(int)uVar1;
        iVar2 = (int)*(undefined8 *)(unaff_x25 + unaff_x23 * 8);
      } while (iVar2 < (int)uVar1);
      if ((5 < iVar2 - 7U) && (1 < iVar2 - 0x10U)) break;
      lVar3 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar3 == 0)
      goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + param_1 * 8 + 0x20) = unaff_x21;
      }
      else {
LAB_03368a2c:
        FUN_02d5004c();
      }
    }
    in_x10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  } while( true );
}


