/*
FUNCTION_NAME: FUN_03566230
ENTRY_POINT: 03566230
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03566230(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_0412df95 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_82_0_TypeInfo);
    DAT_0412df95 = 1;
  }
  XRIF__Core_Grabber_FVRHandPhysics__DisableHandCollision(param_1,0);
  uVar2 = FUN_037b4188(param_1,0);
  plVar1 = (long *)(param_1 + 0x728);
  *(undefined8 *)(param_1 + 0x728) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,uVar2);
  if ((*(char *)(param_1 + 0x3fd) == '\0') || (uVar3 = FUN_036cb0a4(param_1,0), (uVar3 & 1) == 0)) {
    return;
  }
  lVar4 = *plVar1;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036d35a8(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = FUN_036cb024(*plVar1,0);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(param_1 + 800) != '\0') {
        return;
      }
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_82_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_035a1db8(param_1,0);
      return;
    }
  }
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_82_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_035a25a0(param_1,0);
  return;
}


