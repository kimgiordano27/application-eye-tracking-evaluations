/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Deserialize
ENTRY_POINT: 05b134c8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SerializationHelpers__Deserialize(long param_1)

{
  long lVar1;
  uint in_w9;
  uint in_w10;
  uint uVar2;
  int in_w11;
  long in_x12;
  uint in_w13;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  
  while( true ) {
    uVar2 = in_w13;
    *(uint *)(unaff_x19 + 8) = uVar2;
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x12 + 0x18) <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (-1 < *(int *)(in_x12 + (long)(int)in_w10 * (long)in_w11 + 0x20)) break;
    if (in_w9 <= uVar2) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_05b13520;
    }
    in_x12 = *(long *)(param_1 + 0x18);
    in_w13 = uVar2 + 1;
    in_w10 = uVar2;
  }
  lVar1 = in_x12 + (long)(int)in_w10 * 0x24;
  uVar4 = *(undefined8 *)(lVar1 + 0x34);
  uVar3 = *(undefined8 *)(lVar1 + 0x2c);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar1 + 0x3c);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  uVar2 = in_w10;
LAB_05b13520:
  return uVar2 < in_w9;
}


