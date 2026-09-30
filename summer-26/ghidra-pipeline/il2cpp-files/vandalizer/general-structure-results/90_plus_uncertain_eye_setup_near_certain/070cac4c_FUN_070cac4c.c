/*
FUNCTION_NAME: FUN_070cac4c
ENTRY_POINT: 070cac4c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_070cac4c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 070cac4c to 071cac57 has its CatchHandler @ 070cb2c8 */
  if ((DAT_07a5a96e & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075da1e8);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(PTR_DAT_075d8960);
    FUN_031f20f4(OVRPlugin_OVRP_1_115_0_TypeInfo);
                    /* try { // try from 070cac94 to 071cac9f has its CatchHandler @ 070cb380 */
    FUN_031f20f4(OVRPlugin_OVRP_1_118_0_TypeInfo);
                    /* try { // try from 070caca4 to 071cacaf has its CatchHandler @ 070cb308 */
    DAT_07a5a96e = 1;
  }
  if (*(long *)(param_1 + 0x4e8) != 0) {
    iVar1 = FUN_06fcd654(*(long *)(param_1 + 0x4e8),0);
    if (iVar1 == 2) {
      lVar3 = *(long *)(param_1 + 0x4a8);
      FUN_070c992c(param_1);
      if ((lVar3 == 0) && (*(char *)(param_1 + 0x4e1) != '\0')) {
        FUN_070c9004(param_1,*(undefined4 *)(param_1 + 0x4e4));
        *(undefined1 *)(param_1 + 0x4e1) = 0;
      }
                    /* try { // try from 070cacec to 071cacf7 has its CatchHandler @ 070cb360 */
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8960);
                    /* try { // try from 070cacfc to 071cad07 has its CatchHandler @ 070cb2d8 */
      FUN_04292d74(uVar2,param_1,*(undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo,0);
      Fusion_Native__MallocAndClearArray<NetPeerGroup>
                (param_1,uVar2,0,*(undefined8 *)PTR_DAT_075da1e8);
      FUN_070cad78(param_1);
      return;
    }
                    /* try { // try from 070cad44 to 071cad4f has its CatchHandler @ 070cb37c */
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
                    /* try { // try from 070cad54 to 071cad5f has its CatchHandler @ 070cb338 */
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06deed24(*(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


