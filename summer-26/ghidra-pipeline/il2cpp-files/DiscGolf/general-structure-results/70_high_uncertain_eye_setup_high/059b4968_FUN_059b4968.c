/*
FUNCTION_NAME: FUN_059b4968
ENTRY_POINT: 059b4968
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_059b4968(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_18;
  
                    /* try { // try from 059b4968 to 05ab4a6b has its CatchHandler @ 059b4968
                       catch() { ... } // from try @ 059b4968 with catch @ 059b4968
                       catch() { ... } // from try @ 059b4b48 with catch @ 059b4968
                       catch() { ... } // from try @ 059b4bb0 with catch @ 059b4968
                       catch() { ... } // from try @ 059b4bf0 with catch @ 059b4968
                       catch() { ... } // from try @ 059b4c54 with catch @ 059b4968
                       catch() { ... } // from try @ 059b4ca4 with catch @ 059b4968
                       catch() { ... } // from try @ 059b4ce8 with catch @ 059b4968 */
  if ((DAT_06dc1504 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_82_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db88);
    DAT_06dc1504 = 1;
  }
  local_18 = 0;
  uVar3 = FUN_0536c9cc(param_1,0);
  puVar1 = PTR_DAT_06a0db88;
  if ((uVar3 & 1) != 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar5 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a10fd8);
    FUN_05452924(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_83_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar6);
  }
  lVar4 = *(long *)PTR_DAT_06a0db88;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar1;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    uVar3 = FUN_04e95158(**(long **)(lVar4 + 0xb8),param_1,&local_18,
                         *(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if (local_18 == 0) goto LAB_059b4a18;
      uVar2 = *(undefined4 *)(local_18 + 0x14);
    }
    return uVar2;
  }
LAB_059b4a18:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


