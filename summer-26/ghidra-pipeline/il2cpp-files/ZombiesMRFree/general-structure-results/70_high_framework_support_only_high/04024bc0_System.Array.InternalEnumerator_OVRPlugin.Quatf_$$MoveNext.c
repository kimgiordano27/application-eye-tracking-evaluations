/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 04024bc0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>__MoveNext(void)

{
  int iVar1;
  long lVar2;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  
  plVar3 = (long *)(unaff_x21 + 0x10);
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(lVar2 + 0x20);
    thunk_FUN_03048534(unaff_x19 + 2);
    lVar2 = *(long *)(unaff_x19 + 4);
    if (lVar2 == 0) {
LAB_04024d6c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    iVar1 = *(int *)(lVar2 + 0x18) + -1;
    if (iVar1 == 0) {
      *plVar3 = 0;
      thunk_FUN_03048534(plVar3,0);
    }
    else {
      NodeCanvas_Tasks_Actions_FadeOut___ctor(lVar2,1,lVar2,0,iVar1,0);
      if (*plVar3 == 0) goto LAB_04024d6c;
      lVar2 = *(long *)(unaff_x20 + 0x20);
      iVar1 = *(int *)(*plVar3 + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      FUN_03b11190(plVar3,iVar1 + -1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
    }
  }
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


