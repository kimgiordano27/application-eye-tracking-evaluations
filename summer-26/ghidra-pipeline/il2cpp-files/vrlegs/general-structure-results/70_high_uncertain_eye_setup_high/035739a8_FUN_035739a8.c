/*
FUNCTION_NAME: FUN_035739a8
ENTRY_POINT: 035739a8
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


void FUN_035739a8(undefined8 param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  
                    /* try { // try from 035739c4 to 036739cb has its CatchHandler @ 03573b28 */
  if ((DAT_0412e03f & 1) == 0) {
                    /* try { // try from 035739d0 to 036739db has its CatchHandler @ 03573b2c */
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e03f = 1;
  }
  plVar3 = *(long **)(param_2 + 0x148);
  if (plVar3 == (long *)0x0) {
UnityEngine_Camera__get_sceneCullingMask:
    plVar3 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0x130);
    if (*(byte *)(*plVar3 + 0x130) < bVar1) goto UnityEngine_Camera__get_sceneCullingMask;
    if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo) {
      plVar3 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036cee6c(plVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (plVar3 == (long *)0x0) goto LAB_03573a8c;
    FUN_0357df80(param_1,plVar3,0);
  }
  if (*(long *)(param_2 + 0x138) != 0) {
    FUN_0357df80(param_1,*(long *)(param_2 + 0x138),0);
    return;
  }
LAB_03573a8c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


