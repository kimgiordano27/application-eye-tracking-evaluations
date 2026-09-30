/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 058303a8
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


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose(ulong param_1)

{
  ushort uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x27;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_040b1acc();
  }
  plVar2 = (long *)thunk_FUN_040d6b00();
  if (*plVar2 != 0) {
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar3 = (undefined8 *)thunk_FUN_040d6b00();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar6 = *puVar3;
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    (*pcVar7)(uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48));
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2820c();
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


