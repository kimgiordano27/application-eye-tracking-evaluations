/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 04179c58
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(unaff_x19 + 0x18);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (iVar1 == *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18)) {
      FUN_0417944c();
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
    if (iVar1 - unaff_w20 != 0 && (int)unaff_w20 <= iVar1) {
      FUN_0562505c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20,*(undefined8 *)(unaff_x19 + 0x10),
                   unaff_w20 + 1,iVar1 - unaff_w20,0);
    }
    uVar3 = *unaff_x21;
    uVar5 = unaff_x21[3];
    uVar4 = unaff_x21[2];
                    /* try { // try from 04179cb0 to 04279cd7 has its CatchHandler @ 04179e44 */
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 != 0) {
      if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)unaff_w20 * 0x20;
        *(undefined8 *)(lVar2 + 0x28) = unaff_x21[1];
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        *(undefined8 *)(lVar2 + 0x38) = uVar5;
        *(undefined8 *)(lVar2 + 0x30) = uVar4;
        thunk_FUN_02f411dc(lVar2 + 0x20,0);
                    /* try { // try from 04179cf0 to 04279d4f has its CatchHandler @ 04179e48 */
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


