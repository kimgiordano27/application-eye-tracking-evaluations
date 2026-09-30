/*
FUNCTION_NAME: FUN_02573830
ENTRY_POINT: 02573830
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_02573830(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 02573840 to 0267385b has its CatchHandler @ 02573a28 */
  if ((DAT_03782e47 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_127_0_TypeInfo);
    DAT_03782e47 = 1;
  }
                    /* try { // try from 02573870 to 0267387b has its CatchHandler @ 02573a10 */
  lVar2 = FUN_021271d4(param_3 + 0x1a8,0);
                    /* try { // try from 02573880 to 02673887 has its CatchHandler @ 02573a0c */
  if (((lVar2 != 0) && (lVar2 = FUN_02116698(lVar2,0), lVar2 != 0)) &&
     (plVar3 = *(long **)(lVar2 + 0x78), plVar3 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_127_0_TypeInfo + 300);
    if ((bVar1 <= *(byte *)(*plVar3 + 300)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRPlugin_OVRP_1_127_0_TypeInfo)) {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_021af590(param_1,param_2,plVar3,0);
      return 1;
    }
  }
  return 0;
}


