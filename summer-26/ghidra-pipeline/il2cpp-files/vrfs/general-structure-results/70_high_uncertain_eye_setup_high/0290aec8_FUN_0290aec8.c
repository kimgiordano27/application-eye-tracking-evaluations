/*
FUNCTION_NAME: FUN_0290aec8
ENTRY_POINT: 0290aec8
PROGRAM: vrfs-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0290aec8(undefined8 *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  plVar6 = *(long **)(param_2 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_015c2790(lVar2);
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80(plVar6,lVar2,0);
OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose:
  (*(code *)*puVar1)(&uStack_48,plVar6,param_3,puVar1[1]);
  *(undefined4 *)(param_1 + 4) = uStack_28;
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  return;
}


