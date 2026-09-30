/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 051a2908
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__UseExternalCompositionFromCmd(void)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar2;
  float fVar3;
  
  if (*(uint *)(unaff_x20 + 0x18) <= in_w8 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  uVar2 = FUN_05eab7f8(unaff_x20 + (long)(int)(in_w8 - 1U) * 0x1c + 0x20,0);
  *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
  lVar1 = *(long *)(unaff_x21 + 0x48);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
    *(undefined4 *)(unaff_x19 + 0x30) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0xb0) = 0;
      uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
      *(undefined1 *)(lVar1 + 0xa8) = 0;
      *(undefined4 *)(lVar1 + 0xac) = uVar2;
      FUN_051a2408();
      lVar1 = *(long *)(unaff_x21 + 0x20);
      if (*(float *)(unaff_x19 + 0x2c) <= *(float *)(unaff_x19 + 0x34)) {
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0xac) = 0;
          *(undefined4 *)(lVar1 + 0xb0) = 0;
          *(undefined1 *)(lVar1 + 0xa8) = 0;
          FUN_051a2408(lVar1);
          return 0;
        }
      }
      else if ((*(long *)(unaff_x21 + 0x38) != 0) &&
              (uVar2 = FUN_05eaba3c(*(long *)(unaff_x21 + 0x38),0), lVar1 != 0)) {
        *(undefined4 *)(lVar1 + 0xb0) = uVar2;
        if (*(long *)(unaff_x21 + 0x20) != 0) {
          *(bool *)(*(long *)(unaff_x21 + 0x20) + 0xa8) =
               DAT_013ddd70 < *(float *)(unaff_x21 + 0x50);
          lVar1 = *(long *)(unaff_x21 + 0x48);
          if (lVar1 != 0) {
            fVar3 = (float)(**(code **)(lVar1 + 0x18))
                                     (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
            *(float *)(unaff_x19 + 0x34) = fVar3 - *(float *)(unaff_x19 + 0x30);
            if (*(long *)(unaff_x21 + 0x20) != 0) {
              FUN_051a2408();
              *(undefined8 *)(unaff_x19 + 0x18) = 0;
              *(undefined4 *)(unaff_x19 + 0x10) = 1;
              return 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


