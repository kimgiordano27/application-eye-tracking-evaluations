/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResSupported
ENTRY_POINT: 01f60248
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_tiledMultiResSupported(void)

{
  short sVar1;
  short sVar2;
  undefined1 in_w8;
  int *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  *(undefined1 *)(unaff_x24 + 0xcb2) = in_w8;
  *unaff_x19 = 0;
  if (unaff_w20 < unaff_w22) {
    uVar5 = (ulong)(unaff_w20 + 1);
    if ((int)(unaff_w20 + 1) < (int)unaff_w22) {
      sVar1 = *(short *)(unaff_x23 + (long)(int)unaff_w20 * 2);
      do {
        uVar3 = (uint)uVar5;
        if (unaff_w22 <= uVar3) goto LAB_01f602f0;
        sVar2 = *(short *)(unaff_x23 + (long)(int)uVar3 * 2);
        uVar5 = (long)(int)uVar3 + 1;
        uVar4 = (uint)uVar5;
        if (sVar2 == sVar1) {
          *unaff_x19 = uVar4 - unaff_w20;
          return 1;
        }
        if (sVar2 == 0x5c) {
          if ((int)unaff_w22 <= (int)uVar4) {
            return 0;
          }
          if (unaff_w22 <= uVar4) goto LAB_01f602f0;
          if (unaff_x21 == 0) {
LAB_01f602f4:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          uVar5 = (ulong)(uVar3 + 2);
        }
        else if (unaff_x21 == 0) goto LAB_01f602f4;
        FUN_01fe27d4();
      } while ((int)uVar5 < (int)unaff_w22);
    }
    return 0;
  }
LAB_01f602f0:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


