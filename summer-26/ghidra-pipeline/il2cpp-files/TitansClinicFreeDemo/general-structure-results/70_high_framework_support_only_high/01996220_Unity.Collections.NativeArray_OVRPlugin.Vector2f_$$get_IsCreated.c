/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_IsCreated
ENTRY_POINT: 01996220
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


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_IsCreated(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = 0;
  do {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_019962a4;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_019962a8:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (unaff_x20 == 0) {
LAB_019962a4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar4 + unaff_x21 + 0x20),
                       *(undefined8 *)(lVar4 + unaff_x21 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_019962a4;
      if (*(uint *)(lVar4 + 0x18) <= (uint)uVar5) goto LAB_019962a8;
      uVar2 = *(undefined8 *)(lVar4 + unaff_x21 + 0x20);
      uVar3 = *(undefined8 *)(lVar4 + unaff_x21 + 0x28);
      goto LAB_01996294;
    }
    uVar5 = uVar5 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)uVar5) {
      uVar2 = 0;
      uVar3 = 0;
LAB_01996294:
      auVar6._8_8_ = uVar3;
      auVar6._0_8_ = uVar2;
      return auVar6;
    }
  } while( true );
}


