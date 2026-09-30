/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 04f6134c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12 [16],
               undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  long unaff_x22;
  long lVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(unaff_x22 + 0x10) = 0;
  uVar3 = FUN_04f613dc();
  *(undefined4 *)(unaff_x22 + 0x3c) = uVar3;
  *(undefined4 *)(unaff_x22 + 0x40) = param_2;
  *(undefined4 *)(unaff_x22 + 0x44) = param_3;
  lVar2 = *param_9;
  FUN_04f0d2c4(param_12 + 4,param_7,&stack0x00000020,0);
  if (lVar2 != 0) {
    *(ulong *)(lVar2 + 0x28) = CONCAT44((undefined4)param_13,param_12._12_4_);
    *(undefined8 *)(lVar2 + 0x20) = param_12._4_8_;
    *(undefined8 *)(lVar2 + 0x34) = param_14;
    *(ulong *)(lVar2 + 0x2c) = CONCAT44(param_13._4_4_,(undefined4)param_13);
    if ((*(char *)(param_4 + 0x38) == '\0') || (lVar2 = *(long *)(param_4 + 0x48), lVar2 == 0)) {
      return;
    }
    lVar1 = *param_9;
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x10) = 1;
      if (*(long *)(lVar1 + 0x18) != 0) {
        FUN_04f5b230(*(long *)(lVar1 + 0x18),lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


