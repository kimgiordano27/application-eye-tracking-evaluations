/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 059d1708
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  uint in_w8;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long lVar3;
  long lVar4;
  
  if (in_w8 < param_2) {
    FUN_07507094(0);
  }
  if ((unaff_w22 < 0) || (*(int *)(unaff_x21 + 0x18) - unaff_w22 < (int)unaff_w19)) {
    FUN_075070c0(0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_074f6cdc(8,0);
  }
  if ((int)unaff_w19 < (int)(unaff_w22 + unaff_w19)) {
    lVar3 = (long)(int)(unaff_w22 + unaff_w19) - (long)(int)unaff_w19;
    lVar4 = (long)(int)unaff_w19 * 0x48 + 0x20;
    do {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
LAB_059d17e0:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (unaff_x20 == 0) goto LAB_059d17e0;
      memcpy(&stack0x00000000,(void *)(lVar2 + lVar4),0x48);
      memcpy(&stack0x00000048,&stack0x00000000,0x48);
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000048,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        return unaff_w19;
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0x48;
      unaff_w19 = unaff_w19 + 1;
    } while (lVar3 != 0);
  }
                    /* try { // try from 059d17c4 to 05ad1803 has its CatchHandler @ 059d17c4
                       catch() { ... } // from try @ 059d17c4 with catch @ 059d17c4
                       catch() { ... } // from try @ 059d1818 with catch @ 059d17c4
                       catch() { ... } // from try @ 059d1854 with catch @ 059d17c4
                       catch() { ... } // from try @ 059d1894 with catch @ 059d17c4 */
  return 0xffffffff;
}


