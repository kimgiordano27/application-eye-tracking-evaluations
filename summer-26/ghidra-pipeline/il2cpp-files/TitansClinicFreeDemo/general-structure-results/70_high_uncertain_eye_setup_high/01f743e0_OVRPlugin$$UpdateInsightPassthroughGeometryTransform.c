/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 01f743e0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__UpdateInsightPassthroughGeometryTransform(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  ushort *puVar4;
  uint unaff_w23;
  int unaff_w24;
  uint uVar5;
  int unaff_w25;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  long *unaff_x29;
  
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  if ((unaff_w25 - 9U < 5) || (unaff_w25 == 0x20)) {
    if ((unaff_w22 >> 1 & 1) == 0) goto OVRPassthroughLayer__HasControlsBasedColorMap;
    uVar5 = unaff_w24 + 1;
    if ((int)unaff_w23 <= (int)uVar5) {
LAB_01f74494:
      if (uVar5 < unaff_w23) goto LAB_01f744a8;
      goto LAB_01f744d8;
    }
    puVar4 = (ushort *)(unaff_x21 + (long)(int)uVar5 * 2);
    do {
      if (unaff_w23 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      uVar1 = *puVar4;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_01f74494;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (unaff_w23 != uVar5);
  }
  else {
LAB_01f744a8:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar2 = FUN_01f74de0();
    if ((uVar2 & 1) == 0) {
OVRPassthroughLayer__HasControlsBasedColorMap:
      unaff_x26 = 0;
      uVar3 = 0;
      goto LAB_01f744e8;
    }
LAB_01f744d8:
    unaff_w28 = unaff_w28 & 1;
  }
  if (((unaff_w28 & 1) == 0) && ((unaff_w20 & 1) != 0 || unaff_x26 == 0)) {
    uVar3 = 1;
  }
  else {
    unaff_x26 = 0;
    uVar3 = 0;
    *unaff_x27 = 1;
  }
LAB_01f744e8:
  *unaff_x19 = unaff_x26;
  return uVar3;
}


