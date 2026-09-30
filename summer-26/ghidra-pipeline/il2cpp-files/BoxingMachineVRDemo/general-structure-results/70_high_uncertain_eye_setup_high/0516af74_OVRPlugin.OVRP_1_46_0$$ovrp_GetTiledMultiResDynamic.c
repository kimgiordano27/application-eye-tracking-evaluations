/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$ovrp_GetTiledMultiResDynamic
ENTRY_POINT: 0516af74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_46_0__ovrp_GetTiledMultiResDynamic
                (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulong extraout_x8;
  ulong uVar4;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  int unaff_w24;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_0516afbc;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_0516afbc:
  (*(code *)*puVar3)();
  if (unaff_x22 == 0) {
    if ((unaff_w20 == 0x12) || (uVar4 = extraout_x8, unaff_w20 == 0)) {
      uVar4 = (ulong)(unaff_w24 + 1U);
      *(uint *)(unaff_x19 + 0x18) = unaff_w24 + 1U;
    }
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae0();
}


