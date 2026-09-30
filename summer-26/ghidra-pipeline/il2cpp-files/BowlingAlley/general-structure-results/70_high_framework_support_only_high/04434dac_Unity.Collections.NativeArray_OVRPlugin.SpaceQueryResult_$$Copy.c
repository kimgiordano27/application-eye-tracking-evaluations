/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 04434dac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
                    /* try { // try from 04434dcc to 04534e33 has its CatchHandler @ 04434e34 */
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar4 + 0x40)) {
    plVar3 = (long *)thunk_FUN_032a57f4();
    lVar4 = *plVar3;
    lVar1 = plVar3[1];
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    if (lVar4 == *unaff_x19) {
      bVar2 = (int)unaff_x19[1] == (int)lVar1;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d618c();
}


