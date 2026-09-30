/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05ea5700
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


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong __n;
  code *pcVar6;
  long unaff_x29;
  undefined1 auStack_10 [16];
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar3 = *(long *)(param_2 + 0x20);
  }
  __n = (ulong)*(uint *)(**(long **)(lVar4 + 0xc0) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xe8) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar4 = thunk_FUN_040b4efc();
  lVar5 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
    uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar3 = *(long *)(param_2 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xf0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  (*pcVar6)(lVar4,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xf0));
  memcpy(auStack_10 + -(__n + 0xf & 0x1fffffff0),param_1,__n);
  if (lVar4 == 0) {
    if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    FUN_040775b0(lVar4,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xe8) + 0x80) + 0x40,
                 auStack_10 + -(__n + 0xf & 0x1fffffff0),__n);
    if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


