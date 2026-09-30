/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 050a2378
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  
  do {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a231c with catch @ 050a2388
                       try { // try from 050a2388 to 051a239f has its CatchHandler @ 050a22cc */
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 050a23a0 to 051a23b7 has its CatchHandler @ 050a2430 */
      lVar3 = FUN_03ac4090();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
                    /* try { // try from 050a23b8 to 051a241f has its CatchHandler @ 050a22cc */
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_050a24b0();
    iVar2 = unaff_w25 + -1;
    bVar1 = 0 < unaff_w25;
    unaff_w25 = iVar2;
  } while (iVar2 != 0 && bVar1);
  if (1 < unaff_w24) {
    do {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a1ba0();
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a24b0();
      unaff_w21 = unaff_w21 + -1;
    } while (2 < (unaff_w21 - unaff_w22) + 2U);
  }
  return;
}


