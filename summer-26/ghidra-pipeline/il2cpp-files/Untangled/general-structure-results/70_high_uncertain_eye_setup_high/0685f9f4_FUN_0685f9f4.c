/*
FUNCTION_NAME: FUN_0685f9f4
ENTRY_POINT: 0685f9f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0685f9f4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_071d6b7a & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3a2c8);
                    /* try { // try from 0685fa20 to 0695fa2b has its CatchHandler @ 0685fa80 */
    FUN_02f07e70(PTR_DAT_06d02708);
                    /* try { // try from 0685fa2c to 0695fa3f has its CatchHandler @ 0685fa84 */
    FUN_02f07e70(PTR_DAT_06d39e50);
    FUN_02f07e70(OVRPlugin_OVRP_1_92_0_TypeInfo);
                    /* try { // try from 0685fa40 to 0695fa9b has its CatchHandler @ 0685f9a8 */
    FUN_02f07e70(OVRPlugin_OVRP_1_95_0_TypeInfo);
    DAT_071d6b7a = 1;
  }
  if (*(long *)(param_1 + 0x408) != 0) {
    iVar1 = FUN_068d0c94(*(long *)(param_1 + 0x408),0);
    if (iVar1 == 2) {
      FUN_0685e640(param_1);
      if (*(char *)(param_1 + 0x401) != '\0') {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0685fa20 with catch @ 0685fa80
                        */
        FUN_0685dd2c(param_1,*(undefined4 *)(param_1 + 0x404));
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0685fa2c with catch @ 0685fa84
                        */
        *(undefined1 *)(param_1 + 0x401) = 0;
      }
      uVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d39e50);
                    /* try { // try from 0685fa9c to 0695fa9f has its CatchHandler @ 0685faac */
                    /* catch() { ... } // from try @ 0685fa9c with catch @ 0685faac */
                    /* try { // try from 0685fab0 to 0695facf has its CatchHandler @ 0685fae4 */
      FUN_05025f00(uVar2,param_1,*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo,0);
      FUN_037e9794(param_1,uVar2,0,*(undefined8 *)PTR_DAT_06d3a2c8);
                    /* try { // try from 0685fad0 to 0695fadb has its CatchHandler @ 0685f9a8 */
                    /* try { // try from 0685fadc to 0695fae3 has its CatchHandler @ 0685fae4 */
      FUN_0685fb18(param_1);
      return;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0685fab0 with catch @ 0685fae4
                       catch(type#2 @ 00000000) { ... } // from try @ 0685fadc with catch @ 0685fae4
                        */
    if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06693dbc(*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


