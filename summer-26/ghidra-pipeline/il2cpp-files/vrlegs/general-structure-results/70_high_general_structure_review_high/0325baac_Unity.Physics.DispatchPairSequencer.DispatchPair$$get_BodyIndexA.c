/*
FUNCTION_NAME: Unity.Physics.DispatchPairSequencer.DispatchPair$$get_BodyIndexA
ENTRY_POINT: 0325baac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Physics_DispatchPairSequencer_DispatchPair__get_BodyIndexA(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_0412c83d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0538);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(Photon_Voice_IOS_AudioSessionMode_TypeInfo);
    FUN_01ab69ac(Photon_Voice_IOS_AudioSessionParameters_TypeInfo);
    FUN_01ab69ac(Photon_Voice_IOS_AudioSessionParametersPresets_TypeInfo);
    DAT_0412c83d = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    lVar2 = FUN_031eafb4(param_1 + 0x48,0);
    puVar1 = PTR_DAT_03cc0538;
    if (lVar2 != 0) {
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0538);
      FUN_02060754(uVar3,param_1,*(undefined8 *)Photon_Voice_IOS_AudioSessionParameters_TypeInfo,0);
      FUN_031e0b50(lVar2,uVar3,0);
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_02060754(uVar3,param_1,*(undefined8 *)Photon_Voice_IOS_AudioSessionMode_TypeInfo,0);
      FUN_031e0aa0(lVar2,uVar3,0);
      *(undefined1 *)(param_1 + 0x98) = 1;
      uVar3 = FUN_031eb108(param_1 + 0x48,0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar4 = FUN_036d35a8(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = FUN_036cbbbc(param_1,0);
        if (lVar5 != 0) {
          uVar3 = FUN_036d3824(lVar5,0);
          uVar3 = FUN_025b1328(uVar3,*(undefined8 *)
                                      Photon_Voice_IOS_AudioSessionParametersPresets_TypeInfo,0);
          FUN_031ebd8c(lVar2,uVar3,0);
          FUN_031e1350(lVar2,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
  }
  return;
}


