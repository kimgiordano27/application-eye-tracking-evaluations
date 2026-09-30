/*
FUNCTION_NAME: FUN_070c7cf0
ENTRY_POINT: 070c7cf0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070c7cf0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_075da380;
                    /* try { // try from 070c7cf4 to 071c7cff has its CatchHandler @ 070c7d7c */
                    /* try { // try from 070c7d00 to 071c7d93 has its CatchHandler @ 070c7a5c */
  if ((DAT_07a5a956 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075da380);
    FUN_031f20f4(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_104_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_07a5a956 = 1;
  }
  lVar2 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_07001308(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo;
    thunk_FUN_0329bf60();
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 070c7cf4 with catch @ 070c7d7c
                        */
    *(long *)(param_1 + 0x98) = lVar2;
    thunk_FUN_0329bf60((long *)(param_1 + 0x98),lVar2);
    lVar2 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                    /* try { // try from 070c7d94 to 071c7d97 has its CatchHandler @ 070c7dac */
    FUN_07001308(lVar2,0);
    puVar1 = OVRPlugin_OVRP_1_103_0_TypeInfo;
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 070c7d94 with catch @ 070c7dac */
                    /* try { // try from 070c7db8 to 071c7dc3 has its CatchHandler @ 070c7dd8 */
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo;
      thunk_FUN_0329bf60();
                    /* try { // try from 070c7dc4 to 071c7dcf has its CatchHandler @ 070c7a5c */
      *(long *)(param_1 + 0xa0) = lVar2;
      thunk_FUN_0329bf60((long *)(param_1 + 0xa0),lVar2);
                    /* try { // try from 070c7dd0 to 071c7dd7 has its CatchHandler @ 070c7dd8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 070c7db8 with catch @ 070c7dd8
                       catch(type#2 @ 00000000) { ... } // from try @ 070c7dd0 with catch @ 070c7dd8
                        */
      FUN_05262a04(param_1,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


