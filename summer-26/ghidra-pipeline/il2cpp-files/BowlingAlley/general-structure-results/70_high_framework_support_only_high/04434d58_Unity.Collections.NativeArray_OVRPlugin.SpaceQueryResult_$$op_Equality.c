/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Equality
ENTRY_POINT: 04434d58
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


bool Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Equality
               (long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
                    /* try { // try from 04434d84 to 04534dcb has its CatchHandler @ 04434d84
                       catch() { ... } // from try @ 04434d84 with catch @ 04434d84
                       catch() { ... } // from try @ 04434e34 with catch @ 04434d84
                       catch() { ... } // from try @ 04434e64 with catch @ 04434d84
                       catch() { ... } // from try @ 04434ee0 with catch @ 04434d84 */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    if (*param_2 == lVar2) {
      lVar2 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8(lVar2);
      }
      if (*(long *)(*param_2 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(param_2);
      }
      plVar3 = (long *)thunk_FUN_032a57f4();
      lVar2 = *plVar3;
      lVar1 = plVar3[1];
      if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      if (lVar2 == *param_1) {
        return (int)param_1[1] == (int)lVar1;
      }
    }
  }
  return false;
}


