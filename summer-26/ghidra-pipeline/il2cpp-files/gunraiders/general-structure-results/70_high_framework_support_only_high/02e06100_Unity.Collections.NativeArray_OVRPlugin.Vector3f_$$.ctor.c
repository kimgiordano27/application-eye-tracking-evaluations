/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 02e06100
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int in_w9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
  do {
    *(int *)(unaff_x22 + 0x18) = in_w9;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(undefined8 *)(param_1 + 0x28) = param_4;
LAB_02e06120:
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_02e0614c;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_02e06150;
      if (unaff_x20 == 0) goto LAB_02e0614c;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + unaff_x23 + 0x20)
                         ,*(undefined8 *)(lVar3 + unaff_x23 + 0x28),
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar2 & 1) == 0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
LAB_02e0614c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) {
LAB_02e06150:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (unaff_x22 == 0) goto LAB_02e0614c;
    param_3 = *(undefined8 *)(lVar3 + unaff_x23 + 0x20);
    param_4 = *(undefined8 *)(lVar3 + unaff_x23 + 0x28);
    param_1 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_02e0614c;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar1) {
      FUN_02e058d4();
      goto LAB_02e06120;
    }
    in_w9 = uVar1 + 1;
    param_1 = param_1 + (long)(int)uVar1 * 0x10;
  } while( true );
}


