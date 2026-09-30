/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnly
ENTRY_POINT: 059d185c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly(undefined1 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  
  while( true ) {
    memcpy(param_1,&stack0x00000000,0x48);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000048,
                       *(undefined8 *)(unaff_x21 + 0x28));
                    /* try { // try from 059d187c to 05ad188b has its CatchHandler @ 059d188c */
    unaff_x23 = unaff_x23 - 1;
    if ((uVar1 & 1) != 0) break;
    unaff_w22 = unaff_w22 - 1;
    if ((int)unaff_w22 < 0) {
      unaff_x19[8] = 0;
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_059d18dc;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) goto LAB_059d18e0;
    if (unaff_x21 == 0) goto LAB_059d18dc;
    unaff_x25 = unaff_x23 & 0xffffffff;
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x25 * (unaff_x24 & 0xffffffff) + 0x20),0x48);
    param_1 = &stack0x00000048;
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 059d183c with catch @ 059d188c
                       catch() { ... } // from try @ 059d187c with catch @ 059d188c */
                    /* try { // try from 059d1890 to 05ad1893 has its CatchHandler @ 059d189c */
                    /* try { // try from 059d1894 to 05ad189f has its CatchHandler @ 059d17c4 */
    if (unaff_w22 < *(uint *)(lVar2 + 0x18)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059d1890 with catch @ 059d189c
                        */
      memcpy(unaff_x19,(void *)(lVar2 + (unaff_x25 & 0xffffffff) * 0x48 + 0x20),0x48);
      return;
    }
LAB_059d18e0:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
LAB_059d18dc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


