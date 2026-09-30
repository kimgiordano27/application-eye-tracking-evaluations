/*
FUNCTION_NAME: FUN_058d64e0
ENTRY_POINT: 058d64e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool FUN_058d64e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  if ((DAT_06b80afc & 1) == 0) {
    FUN_02d6084c(OVRPlugin_MeshType_TypeInfo);
    DAT_06b80afc = 1;
  }
  local_18 = 0;
  local_18 = FUN_058f33f4(0);
  if (param_1 != 0) {
    lVar1 = FUN_0345b700(param_1,&local_18,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
    if (lVar1 != -2) {
      return lVar1 == 1;
    }
    thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
    uVar2 = thunk_FUN_02d9d534();
    uVar3 = thunk_FUN_02dc61f4(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_05007004(uVar2,uVar3,0);
    uVar3 = thunk_FUN_02dc61f4(OVRPlugin_OVRP_0_1_1_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


