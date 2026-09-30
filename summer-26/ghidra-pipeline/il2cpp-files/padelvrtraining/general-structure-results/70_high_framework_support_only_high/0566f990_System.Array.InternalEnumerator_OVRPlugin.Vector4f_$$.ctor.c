/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 0566f990
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>___ctor(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  long *plVar4;
  long unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar4 = (long *)(unaff_x21 + 0x30);
  if (*plVar4 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(*plVar4 + 0x18) + 1;
  }
  iVar2 = *unaff_x19;
  if ((iVar3 < iVar2) && (iVar2 + -1 != 0 && 0 < iVar2)) {
    lVar1 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    lVar1 = FUN_03d2d394(lVar1,iVar2 + -1);
    *plVar4 = lVar1;
    thunk_FUN_03d1023c(plVar4,lVar1);
    iVar2 = *unaff_x19;
  }
  *unaff_x20 = iVar2;
  if (0 < iVar2) {
    uVar7 = *(undefined8 *)(unaff_x19 + 2);
    uVar6 = *(undefined8 *)(unaff_x19 + 6);
    uVar5 = *(undefined8 *)(unaff_x19 + 4);
    uVar8 = *(undefined8 *)(unaff_x19 + 8);
    *(undefined8 *)(unaff_x20 + 10) = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x20 + 8) = uVar8;
    *(undefined8 *)(unaff_x20 + 6) = uVar6;
    *(undefined8 *)(unaff_x20 + 4) = uVar5;
    *(undefined8 *)(unaff_x20 + 2) = uVar7;
    thunk_FUN_03d1023c(unaff_x20 + 8,0);
    if (1 < *unaff_x20) {
      FUN_0719c8e0(*(undefined8 *)(unaff_x19 + 0xc),*plVar4,*unaff_x20 + -1,0);
      return;
    }
  }
  return;
}


