/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 041a16d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      if (lVar6 == 0) goto LAB_041a17cc;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (unaff_x20 == 0) goto LAB_041a17cc;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar6 + lVar7 + 0x20),
                         *(undefined8 *)(lVar6 + lVar7 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x21 + 0x10);
        if (lVar6 == 0) goto LAB_041a17cc;
        if (*(uint *)(lVar6 + 0x18) <= uVar8)
        goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe;
        if (unaff_x22 == 0) {
LAB_041a17cc:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar1 = *(undefined8 *)(lVar6 + lVar7 + 0x20);
        uVar2 = *(undefined8 *)(lVar6 + lVar7 + 0x28);
        lVar6 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_041a17cc;
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
          *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
          puVar5 = (undefined8 *)(lVar6 + 0x20);
          *puVar5 = uVar1;
          *(undefined8 *)(lVar6 + 0x28) = uVar2;
          LeanTween__value(puVar5,0);
        }
        else {
          FUN_041a0f4c();
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((long)uVar8 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


