/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_Length
ENTRY_POINT: 05ccf678
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_Length(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int in_w10;
  long unaff_x19;
  long unaff_x27;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x27 + 0xe88);
  if (in_w10 == 0) {
    thunk_FUN_03db619c(param_1);
  }
  uVar1 = FUN_07186ef4();
  uVar2 = FUN_07186ef4(*puVar6,0);
  uVar3 = FUN_07190474(uVar1,uVar2,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091fcbe0);
    FUN_076c7030();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if (plVar4 != (long *)0x0) {
      if (*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar4 + 0x130)) {
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)
        {
          return plVar4;
        }
        return (long *)0x0;
      }
    }
    return (long *)0x0;
  }
  lVar5 = FUN_038016b4(*(undefined8 *)(unaff_x19 + 0x20));
  uVar1 = **(undefined8 **)(lVar5 + 0xc0);
  thunk_FUN_03d1e194(PTR_DAT_091a1be8);
  FUN_037e7a9c();
  uVar1 = FUN_07186ef4(uVar1,0);
  thunk_FUN_03d1e194(PTR_DAT_091fcbe8);
  uVar2 = thunk_FUN_03d2ef40();
  FUN_076ce3d4(uVar2,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar2);
}


