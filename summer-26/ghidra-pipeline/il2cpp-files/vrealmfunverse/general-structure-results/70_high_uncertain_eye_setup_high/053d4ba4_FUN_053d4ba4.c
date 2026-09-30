/*
FUNCTION_NAME: FUN_053d4ba4
ENTRY_POINT: 053d4ba4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053d4ba4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_066d09dd & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631e140);
    DAT_066d09dd = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x68);
                    /* try { // try from 053d4bec to 054d4cc7 has its CatchHandler @ 053d4bec
                       catch() { ... } // from try @ 053d4bec with catch @ 053d4bec
                       catch() { ... } // from try @ 053d4ddc with catch @ 053d4bec
                       catch() { ... } // from try @ 053d4ecc with catch @ 053d4bec
                       catch() { ... } // from try @ 053d4f3c with catch @ 053d4bec */
    if (*(int *)(*(long *)PTR_DAT_0631e140 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_04cb777c(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar3 = FUN_02b3c908(uVar3,1);
      uVar2 = FUN_053d7bb8(param_1,0);
      uVar2 = FUN_053d6158(uVar2,0);
      FUN_0275e13c(uVar3);
      FUN_0275a400(uVar3,uVar2);
      FUN_0275a434(uVar3,0,uVar2);
      uVar2 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_31_0_TypeInfo);
      uVar3 = FUN_0540ce80(uVar2,uVar3,0);
      thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar2 = thunk_FUN_02b79644();
      FUN_053f0c5c(uVar2,uVar3,0);
      uVar3 = FUN_0540c738(uVar2,0);
                    /* try { // try from 053d4cc8 to 054d4cef has its CatchHandler @ 053d4f04 */
      uVar2 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_40_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,uVar2);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x40) + 0xf0) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


