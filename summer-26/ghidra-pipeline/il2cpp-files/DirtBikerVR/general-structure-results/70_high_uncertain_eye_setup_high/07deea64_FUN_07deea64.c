/*
FUNCTION_NAME: FUN_07deea64
ENTRY_POINT: 07deea64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_07deea64(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &local_70;
  if ((DAT_0899a1ed & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_0_1_2_TypeInfo);
    DAT_0899a1ed = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07deeb3c with catch @ 07deeb4c
                        */
    FUN_03a8a9c0();
  }
  lVar1 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
  lVar1 = *(long *)(lVar1 + 0x38);
  if (lVar1 == 0) {
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    puVar3 = (undefined8 *)FUN_07ea20f8(0);
  }
  else {
    if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_2_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07e665a0(lVar1,&local_70,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  FUN_07defe24(param_1,param_2,puVar3);
  return 1;
}


