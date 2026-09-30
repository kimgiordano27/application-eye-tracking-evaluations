/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 019962c4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f795cc(8);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  lVar4 = thunk_FUN_0124bba8();
  FUN_01995330(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_019963f0;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_019963f4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x20 == 0) goto LAB_019963f0;
      uVar5 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar6 + lVar8 + 0x20),
                         *(undefined8 *)(lVar6 + lVar8 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_019963f0;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_019963f4;
        if (lVar4 == 0) {
LAB_019963f0:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar1 = *(undefined8 *)(lVar6 + lVar8 + 0x20);
        uVar2 = *(undefined8 *)(lVar6 + lVar8 + 0x28);
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_019963f0;
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar6 + 0x20) = uVar1;
          *(undefined8 *)(lVar6 + 0x28) = uVar2;
        }
        else {
          FUN_01995b90(lVar4,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar4;
}


