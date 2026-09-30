/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$op_Implicit
ENTRY_POINT: 0399e1ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__op_Implicit(void)

{
  ulong uVar1;
  long lVar2;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  
  while( true ) {
    memcpy(&stack0x000000d0,&stack0x00000000,0xd0);
                    /* try { // try from 0399e200 to 03a9e217 has its CatchHandler @ 0399e284 */
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000d0,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar1 & 1) != 0) break;
                    /* try { // try from 0399e218 to 03a9e273 has its CatchHandler @ 0399e0b0 */
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0xd0;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      memset(unaff_x19,0,0xd0);
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_0399e278;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_0399e27c;
    if (unaff_x21 == 0) goto LAB_0399e278;
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x22),0xd0);
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    if ((uint)unaff_x23 < *(uint *)(lVar2 + 0x18)) {
      memcpy(unaff_x19,(void *)(lVar2 + unaff_x22),0xd0);
      return;
    }
LAB_0399e27c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_0399e278:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


