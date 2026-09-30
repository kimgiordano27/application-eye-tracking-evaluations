/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 03201dd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_x24) {
LAB_03201e78:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (unaff_x22 == 0) {
LAB_03201e74:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = *(undefined8 *)(param_1 + unaff_x23 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + unaff_x23 + 0x28);
    lVar5 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_03201e74;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (int)uVar2 * unaff_x25;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      *(undefined4 *)(lVar5 + 0x28) = uVar1;
    }
    else {
      FUN_032015dc();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = unaff_x23 + 0xc;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_03201e74;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_03201e78;
      if (unaff_x20 == 0) goto LAB_03201e74;
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + unaff_x23 + 0x20)
                         ,*(undefined4 *)(lVar5 + unaff_x23 + 0x28),
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar3 & 1) == 0);
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) goto LAB_03201e74;
  } while( true );
}


