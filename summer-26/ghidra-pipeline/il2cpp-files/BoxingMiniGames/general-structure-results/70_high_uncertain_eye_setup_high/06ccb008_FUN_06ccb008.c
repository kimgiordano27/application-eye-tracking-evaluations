/*
FUNCTION_NAME: FUN_06ccb008
ENTRY_POINT: 06ccb008
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_06ccb008(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_DAT_079f4e28;
  if ((DAT_07eea542 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4e28);
    DAT_07eea542 = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar1 = FUN_071c24dc(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_05c97640(param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_05c97640(param_4,0);
      if ((uVar1 & 1) == 0) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar2 = FUN_06cb8314(param_2,param_3,0,0);
        if (lVar2 == 0) {
          uVar3 = thunk_FUN_036aa1c8(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
          uVar3 = FUN_05c98b2c(uVar3,param_3,param_2,0);
          thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
          uVar4 = thunk_FUN_0367fe20();
          puVar6 = OVRPlugin_Vector3f___TypeInfo;
        }
        else {
          lVar2 = FUN_06cb8020(lVar2,param_4,0,0);
          if (lVar2 != 0) {
            FUN_06ccae84(param_1,param_2,lVar2);
            return;
          }
          uVar3 = thunk_FUN_036aa1c8(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
          uVar3 = FUN_05c98b70(uVar3,param_4,param_3,param_2,0);
          thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
          uVar4 = thunk_FUN_0367fe20();
          puVar6 = OVRPlugin_Vector4f___TypeInfo;
        }
        uVar5 = thunk_FUN_036aa1c8(puVar6);
        FUN_05d7e218(uVar4,uVar3,uVar5,0);
        uVar3 = thunk_FUN_036aa1c8(OVRPlugin_Vector4s___TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar4,uVar3);
      }
      thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
      uVar3 = thunk_FUN_0367fe20();
      puVar6 = OVRPlugin_Vector4f___TypeInfo;
    }
    else {
      thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
      uVar3 = thunk_FUN_0367fe20();
      puVar6 = OVRPlugin_Vector3f___TypeInfo;
    }
  }
  else {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar3 = thunk_FUN_0367fe20();
    puVar6 = PTR_DAT_079fe078;
  }
  uVar4 = thunk_FUN_036aa1c8(puVar6);
  FUN_05d7e1a0(uVar3,uVar4,0);
  uVar4 = thunk_FUN_036aa1c8(OVRPlugin_Vector4s___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,uVar4);
}


