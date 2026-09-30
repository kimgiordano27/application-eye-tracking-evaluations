/*
FUNCTION_NAME: FUN_03573b18
ENTRY_POINT: 03573b18
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03573b18(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  
                    /* try { // try from 03573b18 to 03673b1b has its CatchHandler @ 03573b24 */
                    /* try { // try from 03573b1c to 03673b4b has its CatchHandler @ 035737b4 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03573b18 with catch @ 03573b24
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 035739c4 with catch @ 03573b28
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 035739d0 with catch @ 03573b2c
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03573988 with catch @ 03573b30
                        */
  if ((DAT_0412e040 & 1) == 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03573928 with catch @ 03573b34
                        */
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
                    /* try { // try from 03573b4c to 03673b4f has its CatchHandler @ 03573b68 */
    DAT_0412e040 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x148);
  if (plVar3 == (long *)0x0) {
LAB_03573b84:
    plVar3 = (long *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 03573b4c with catch @ 03573b68 */
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0x130);
    if (*(byte *)(*plVar3 + 0x130) < bVar1) goto LAB_03573b84;
    if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo) {
      plVar3 = (long *)0x0;
    }
  }
                    /* try { // try from 03573ba8 to 03673bcf has its CatchHandler @ 03573be4 */
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036cee6c(plVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (plVar3 == (long *)0x0) goto UnityEngine_Camera__set_useOcclusionCulling;
    FUN_0357d414(plVar3,param_2,0);
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    FUN_0357d414(*(long *)(param_1 + 0x138),param_2,0);
    return;
  }
UnityEngine_Camera__set_useOcclusionCulling:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


