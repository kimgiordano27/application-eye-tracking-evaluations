/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 03201f1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  ulong uVar1;
  int in_w8;
  long lVar2;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  
  if (!in_ZR && in_NG == in_OV) {
    lVar3 = ((-(unaff_x19 >> 0x1f & 1) & 0xfffffffe00000000 | (unaff_x19 & 0xffffffff) << 1) +
            (long)(int)unaff_x19) * 4;
    lVar4 = (long)in_w8 - (long)(int)unaff_x19;
    do {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
LAB_03201f94:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (unaff_x20 == 0) goto LAB_03201f94;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + lVar3 + 0x20),
                         *(undefined4 *)(lVar2 + lVar3 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) goto LAB_03201f80;
      unaff_x19 = (ulong)((uint)unaff_x19 + 1);
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + 0xc;
    } while (lVar4 != 0);
  }
  unaff_x19 = 0xffffffff;
LAB_03201f80:
  return unaff_x19 & 0xffffffff;
}


