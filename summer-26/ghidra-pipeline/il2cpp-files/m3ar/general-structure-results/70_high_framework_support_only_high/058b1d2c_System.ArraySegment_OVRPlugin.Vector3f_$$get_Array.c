/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector3f>$$get_Array
ENTRY_POINT: 058b1d2c
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


void System_ArraySegment<OVRPlugin_Vector3f>__get_Array(ulong param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  undefined1 *unaff_x21;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  code *pcVar6;
  long *plVar7;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0406aaec();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar3 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_0406aaec(lVar5);
    uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((uVar3 & 1) == 0) {
    FUN_0406aaec(lVar4);
  }
  (*pcVar6)();
  if ((unaff_w20 < 0) || (*(int *)((long)unaff_x23 + 0xc) <= unaff_w20)) {
    FUN_07506b9c(0);
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  plVar7 = (long *)*unaff_x23;
  iVar2 = *(int *)(unaff_x23 + 1);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0406aaec();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x28)) {
    unaff_x21 = &stack0x00000008;
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar1 = iVar2 + unaff_w20;
  if (uVar1 < *(uint *)(plVar7 + 3)) {
    memmove((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20),
            unaff_x21,unaff_x22);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    if (uVar1 < *(uint *)(plVar7 + 3)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


