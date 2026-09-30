/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 02e05f5c
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


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02e05f50 with catch @ 02e05f5c
                        */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032e32a8(8);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_02e06000;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_02e06004:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (unaff_x20 == 0) {
LAB_02e06000:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar4 + lVar5 + 0x20),
                         *(undefined8 *)(lVar4 + lVar5 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_02e06000;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) goto LAB_02e06004;
        uVar2 = *(undefined8 *)(lVar4 + lVar5 + 0x20);
        uVar3 = *(undefined8 *)(lVar4 + lVar5 + 0x28);
        goto LAB_02e05ff0;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x18));
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_02e05ff0:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}


