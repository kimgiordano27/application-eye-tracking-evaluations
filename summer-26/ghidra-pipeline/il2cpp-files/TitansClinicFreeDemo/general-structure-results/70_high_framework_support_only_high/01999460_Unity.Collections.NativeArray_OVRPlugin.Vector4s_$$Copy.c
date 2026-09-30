/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 01999460
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  void *unaff_x21;
  long lVar2;
  
  FUN_01998b10();
  iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
  if (iVar1 != 0 && (int)unaff_w20 <= *(int *)(unaff_x19 + 0x18)) {
    FUN_01f89ca0(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20 + 1,iVar1,0);
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  memcpy(&stack0x00000070,unaff_x21,0x6c);
  if (lVar2 != 0) {
    memcpy(&stack0x00000000,&stack0x00000070,0x6c);
    if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
      memcpy((void *)(lVar2 + (long)(int)unaff_w20 * 0x6c + 0x20),&stack0x00000000,0x6c);
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


