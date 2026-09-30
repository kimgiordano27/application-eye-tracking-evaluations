/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetSubArray
ENTRY_POINT: 059d17f0
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetSubArray
               (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
                    /* try { // try from 059d1804 to 05ad1817 has its CatchHandler @ 059d1824 */
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_074f6cdc(8);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar4 = uVar3;
                    /* try { // try from 059d1818 to 05ad183b has its CatchHandler @ 059d17c4 */
  do {
    uVar4 = uVar4 - 1;
    uVar3 = uVar3 - 1;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 059d1804 with catch @ 059d1824
                        */
    if ((int)uVar3 < 0) {
      param_1[8] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) goto LAB_059d18dc;
    if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_059d18e0;
                    /* try { // try from 059d183c to 05ad1853 has its CatchHandler @ 059d188c */
    if (param_3 == 0) goto LAB_059d18dc;
                    /* try { // try from 059d1854 to 05ad187b has its CatchHandler @ 059d17c4 */
    memcpy(&stack0x00000000,(void *)(lVar2 + (ulong)uVar4 * 0x48 + 0x20),0x48);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    uVar1 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&stack0x00000048,
                       *(undefined8 *)(param_3 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      memcpy(param_1,(void *)(lVar2 + (ulong)uVar4 * 0x48 + 0x20),0x48);
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


