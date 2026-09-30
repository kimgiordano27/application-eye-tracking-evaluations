/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_IsCreated
ENTRY_POINT: 01998c44
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_IsCreated(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  long unaff_x23;
  ulong unaff_x24;
  code *pcVar4;
  
  do {
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x6c;
    if (param_1 <= (long)unaff_x24) {
      *(undefined8 *)((long)unaff_x19 + 100) = 0;
      *(undefined8 *)((long)unaff_x19 + 0x5c) = 0;
      unaff_x19[9] = 0;
      unaff_x19[8] = 0;
      unaff_x19[0xb] = 0;
      unaff_x19[10] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_01998cac;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x24) {
LAB_01998cb0:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x23),0x6c);
    if (unaff_x21 == 0) {
LAB_01998cac:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    pcVar4 = *(code **)(unaff_x21 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x40);
    memcpy(&stack0x00000070,&stack0x00000000,0x6c);
    uVar1 = (*pcVar4)(uVar3,&stack0x00000070,*(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 != 0) {
        if ((uint)unaff_x24 < *(uint *)(lVar2 + 0x18)) {
          memcpy(unaff_x19,(void *)(lVar2 + unaff_x23),0x6c);
          return;
        }
        goto LAB_01998cb0;
      }
      goto LAB_01998cac;
    }
    param_1 = (long)*(int *)(unaff_x20 + 0x18);
  } while( true );
}


