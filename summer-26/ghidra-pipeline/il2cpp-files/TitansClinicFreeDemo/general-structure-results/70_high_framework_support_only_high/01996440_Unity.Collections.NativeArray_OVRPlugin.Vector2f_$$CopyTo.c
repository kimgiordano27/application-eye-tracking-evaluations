/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyTo
ENTRY_POINT: 01996440
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyTo(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong uVar4;
  long lVar5;
  
  FUN_01f886e4();
  iVar3 = (int)unaff_x19;
  if ((unaff_w22 < 0) || (*(int *)(unaff_x21 + 0x18) - unaff_w22 < iVar3)) {
    FUN_01f88710(0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f795cc(8,0);
  }
  if (iVar3 < unaff_w22 + iVar3) {
    uVar4 = -(unaff_x19 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x19 & 0xffffffff) << 4;
    lVar5 = (long)(unaff_w22 + iVar3) - (long)iVar3;
    do {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
LAB_019964e4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x20 == 0) goto LAB_019964e4;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + uVar4 + 0x20),
                         *(undefined8 *)(lVar2 + uVar4 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) goto LAB_019964d0;
      unaff_x19 = (ulong)((uint)unaff_x19 + 1);
      lVar5 = lVar5 + -1;
      uVar4 = uVar4 + 0x10;
    } while (lVar5 != 0);
  }
  unaff_x19 = 0xffffffff;
LAB_019964d0:
  return unaff_x19 & 0xffffffff;
}


