/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetEnumerator
ENTRY_POINT: 01996510
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetEnumerator(void)

{
  int iVar1;
  int in_w8;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  
  if (0 < in_w8) {
    iVar1 = *(int *)(unaff_x20 + 0x1c);
    lVar4 = 0;
    uVar5 = 0;
    iVar2 = iVar1;
    do {
      if (iVar1 != iVar2) break;
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) {
LAB_019965a4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x19 == 0) goto LAB_019965a4;
      (**(code **)(unaff_x19 + 0x18))
                (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar3 + lVar4 + 0x20),
                 *(undefined8 *)(lVar3 + lVar4 + 0x28),*(undefined8 *)(unaff_x19 + 0x28));
      iVar2 = *(int *)(unaff_x20 + 0x1c);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((long)uVar5 < (long)*(int *)(unaff_x20 + 0x18));
    if (iVar1 != iVar2) {
      FUN_01f88158(0);
      return;
    }
  }
  return;
}


