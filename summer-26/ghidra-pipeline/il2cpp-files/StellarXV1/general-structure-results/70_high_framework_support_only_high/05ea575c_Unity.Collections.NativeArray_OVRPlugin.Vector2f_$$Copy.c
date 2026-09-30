/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05ea575c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  ulong unaff_x20;
  void *unaff_x21;
  long unaff_x24;
  code *pcVar5;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xe8) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar2 = thunk_FUN_040b4efc();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar5 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xf0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  (*pcVar5)(lVar2,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xf0));
  memcpy((void *)(in_x10 - in_x11),unaff_x21,unaff_x20);
  if (lVar2 == 0) {
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    FUN_040775b0(lVar2,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xe8) + 0x80) + 0x40,
                 (void *)(in_x10 - in_x11),unaff_x20 & 0xffffffff);
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


