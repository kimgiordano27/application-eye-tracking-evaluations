/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopFaceTracking
ENTRY_POINT: 0290e8f4
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopFaceTracking(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_015c2790(lVar2);
  }
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80();
OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking:
  (*(code *)*puVar1)();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000010;
  return;
}


