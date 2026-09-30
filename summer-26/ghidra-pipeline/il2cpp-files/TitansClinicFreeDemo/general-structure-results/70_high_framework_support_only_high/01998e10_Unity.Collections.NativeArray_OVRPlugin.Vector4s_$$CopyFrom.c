/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 01998e10
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar4;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  code *pcVar5;
  
code_r0x01998e10:
  memcpy(&stack0x000000e0,&stack0x00000070,0x6c);
  FUN_0199837c();
LAB_01998e38:
  do {
    unaff_x24 = unaff_x24 + 1;
    unaff_x25 = unaff_x25 + 0x6c;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      return;
    }
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) goto LAB_01998e70;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_01998e74;
    memcpy(&stack0x00000070,(void *)(lVar3 + unaff_x25),0x6c);
    if (unaff_x20 == 0) goto LAB_01998e70;
    pcVar5 = *(code **)(unaff_x20 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    memcpy(&stack0x000000e0,&stack0x00000070,0x6c);
    uVar2 = (*pcVar5)(uVar4,&stack0x000000e0,*(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar2 & 1) == 0);
  lVar3 = *(long *)(unaff_x21 + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) {
LAB_01998e74:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    memcpy(&stack0x00000000,(void *)(lVar3 + unaff_x25),0x6c);
    if (unaff_x22 != 0) {
      memcpy(&stack0x00000070,&stack0x00000000,0x6c);
      lVar3 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar3 + (int)uVar1 * unaff_x26 + 0x20),&stack0x00000070,0x6c);
          goto LAB_01998e38;
        }
        goto code_r0x01998e10;
      }
    }
  }
LAB_01998e70:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


